// roc 2010-06 00824550  unit: CXTPControlGallery  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00824550
//
// 00824550  8b815c010000         mov eax, dword ptr [ecx + 0x15c]
// 00824556  85c0                 test eax, eax
// 00824558  7501                 jne 0x82455b
// 0082455a  c3                   ret 
// 0082455b  8b4020               mov eax, dword ptr [eax + 0x20]
// 0082455e  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPControlGallery.cpp (function ?GetItems@CXTPControlGallery@@QBEPAVCXTPControlGalleryItems@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlGallery.cpp
