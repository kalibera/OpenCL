#ifdef __APPLE__
#include <OpenCL/opencl.h>
#else
#include <CL/opencl.h>
#endif

typedef struct SEXPREC* SEXP;

/* Print error */
void ocl_err(const char *str, cl_int error_code);

/* Encapsulation of a cl_platform_id as SEXP */
SEXP mkPlatformID(cl_platform_id id);
cl_platform_id getPlatformID(SEXP platform);

/* Encapsulation of a cl_device_id as SEXP */
SEXP mkDeviceID(cl_device_id id);
cl_device_id getDeviceID(SEXP device);

/* Encapsulation of a cl_context as SEXP */
void clFreeContext(SEXP ctx);
SEXP mkContext(cl_context ctx);
cl_context getContext(SEXP ctx);

/* Encapsulation of a cl_command_queue as SEXP */
void clFreeCommandQueue(SEXP k);
SEXP mkCommandQueue(cl_command_queue queue);
cl_command_queue getCommandQueue(SEXP queue_exp);

/* Encapsulation of a cl_kernel as SEXP */
void clFreeKernel(SEXP k);
SEXP mkKernel(cl_kernel k);
cl_kernel getKernel(SEXP k);
