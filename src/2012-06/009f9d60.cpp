// roc 2012-06 009f9d60  unit: CXTPControlGallery  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009f9d60
//
// 009f9d60  81c17cfeffff         add ecx, 0xfffffe7c
// 009f9d66  e885acf8ff           call 0x9849f0
// 009f9d6b  8b80d8000000         mov eax, dword ptr [eax + 0xd8]
// 009f9d71  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPControlGallery.cpp (function ?GetGalleryPaintManager@CXTPControlGallery@@UBEPAVCXTPControlGalleryPaintManager@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlGallery.cpp
