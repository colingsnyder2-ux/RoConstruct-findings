// roc 2009-06 0079c530  unit: CXTPControlGallery  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0079c530
//
// 0079c530  81c17cfeffff         add ecx, 0xfffffe7c
// 0079c536  e8e533f8ff           call 0x71f920
// 0079c53b  8b80d8000000         mov eax, dword ptr [eax + 0xd8]
// 0079c541  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPControlGallery.cpp (function ?GetGalleryPaintManager@CXTPControlGallery@@UBEPAVCXTPControlGalleryPaintManager@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlGallery.cpp
