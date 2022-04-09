/* Automatically generated header (sfdc 1.11d)! Do not edit! */

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#if defined (__libnix__)

#include <stabs.h>
#ifdef __baserel__
void* RequesterBase = 0;
void ** __getRequesterBase() { return &RequesterBase; }
static void * __init[2] = { __getRequesterBase, "requester.library"};
ADD2LIB(__init);
#else
void* RequesterBase[2] = { 0, "requester.library" };
ADD2LIB(RequesterBase);
#endif

#elif defined (__AMIGAOS4__)

#undef __USE_INLINE__
#define _NO_INLINE
#include <intuition/intuition.h>
#include <intuition/classes.h>

#include <interfaces/requester.h>
#include <proto/exec.h>
#include <assert.h>

__attribute__((weak)) struct Library * RequesterBase = NULL;
__attribute__((weak)) struct RequesterIFace* IRequester = NULL;

void __init_Requester(void) __attribute__((constructor));
void __exit_Requester(void) __attribute__((destructor));

void __init_Requester(void) {
  if (RequesterBase == NULL) {
    RequesterBase = (struct Library *) IExec->OpenLibrary("requester.library", 0);
    assert(RequesterBase != NULL);
  }
  if (IRequester == NULL) {
    IRequester = (struct RequesterIFace*) IExec->GetInterface((struct Library*) RequesterBase, "main", 1, NULL);
    assert(IRequester != NULL);
  }
}

void __exit_Requester(void) {
  IExec->DropInterface((struct Interface*) IRequester);
  IExec->CloseLibrary((struct Library*) RequesterBase);
}


#endif

#ifdef __cplusplus
}
#endif /* __cplusplus */
