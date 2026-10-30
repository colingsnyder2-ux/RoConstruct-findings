// roc 2009-12 008774b0  unit: CXTPControlGallery  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008774b0
//
// 008774b0  81c17cfeffff         add ecx, 0xfffffe7c
// 008774b6  e885eaf7ff           call 0x7f5f40
// 008774bb  8b80d8000000         mov eax, dword ptr [eax + 0xd8]
// 008774c1  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPControlGallery.cpp (function ?GetGalleryPaintManager@CXTPControlGallery@@UBEPAVCXTPControlGalleryPaintManager@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlGallery.cpp
