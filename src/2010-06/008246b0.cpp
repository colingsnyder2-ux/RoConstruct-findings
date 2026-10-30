// roc 2010-06 008246b0  unit: CXTPControlGallery  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008246b0
//
// 008246b0  81c17cfeffff         add ecx, 0xfffffe7c
// 008246b6  e8c559f8ff           call 0x7aa080
// 008246bb  8b80d8000000         mov eax, dword ptr [eax + 0xd8]
// 008246c1  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPControlGallery.cpp (function ?GetGalleryPaintManager@CXTPControlGallery@@UBEPAVCXTPControlGalleryPaintManager@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlGallery.cpp
