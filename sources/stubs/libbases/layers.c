/* Automatically generated header (sfdc 1.11d)! Do not edit! */

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#if defined (__libnix__)

#include <stabs.h>
#ifdef __baserel__
void* LayersBase = 0;
void ** __getLayersBase() { return &LayersBase; }
static void * __init[2] = { __getLayersBase, "layers.library"};
ADD2LIB(__init);
#else
void* LayersBase[2] = { 0, "layers.library" };
ADD2LIB(LayersBase);
#endif

#elif defined (__AMIGAOS4__)

#undef __USE_INLINE__
#define _NO_INLINE
#include <exec/types.h>
#include <graphics/layers.h>
#include <graphics/clip.h>
#include <graphics/rastport.h>
#include <graphics/regions.h>

#include <interfaces/layers.h>
#include <proto/exec.h>
#include <assert.h>

__attribute__((weak)) struct Library * LayersBase = NULL;
__attribute__((weak)) struct LayersIFace* ILayers = NULL;

void __init_Layers(void) __attribute__((constructor));
void __exit_Layers(void) __attribute__((destructor));

void __init_Layers(void) {
  if (LayersBase == NULL) {
    LayersBase = (struct Library *) IExec->OpenLibrary("layers.library", 0);
    assert(LayersBase != NULL);
  }
  if (ILayers == NULL) {
    ILayers = (struct LayersIFace*) IExec->GetInterface((struct Library*) LayersBase, "main", 1, NULL);
    assert(ILayers != NULL);
  }
}

void __exit_Layers(void) {
  IExec->DropInterface((struct Interface*) ILayers);
  IExec->CloseLibrary((struct Library*) LayersBase);
}


#endif

#ifdef __cplusplus
}
#endif /* __cplusplus */
