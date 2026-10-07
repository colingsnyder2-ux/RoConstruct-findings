// roc 2008-06 0072dea0  unit: CXTPControlGallery  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0072dea0
//
// 0072dea0  81c17cfeffff         add ecx, 0xfffffe7c
// 0072dea6  e895d3f7ff           call 0x6ab240
// 0072deab  8b80d8000000         mov eax, dword ptr [eax + 0xd8]
// 0072deb1  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPControlGallery.cpp (function ?GetGalleryPaintManager@CXTPControlGallery@@UBEPAVCXTPControlGalleryPaintManager@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlGallery.cpp
