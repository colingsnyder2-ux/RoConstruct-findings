// roc 2011-06 00881750  unit: CXTPControlGallery  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00881750
//
// 00881750  81c17cfeffff         add ecx, 0xfffffe7c
// 00881756  e805b0f8ff           call 0x80c760
// 0088175b  8b80d8000000         mov eax, dword ptr [eax + 0xd8]
// 00881761  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPControlGallery.cpp (function ?GetGalleryPaintManager@CXTPControlGallery@@UBEPAVCXTPControlGalleryPaintManager@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlGallery.cpp
