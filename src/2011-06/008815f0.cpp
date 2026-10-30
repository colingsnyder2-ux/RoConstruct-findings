// roc 2011-06 008815f0  unit: CXTPControlGallery  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008815f0
//
// 008815f0  8b815c010000         mov eax, dword ptr [ecx + 0x15c]
// 008815f6  85c0                 test eax, eax
// 008815f8  7501                 jne 0x8815fb
// 008815fa  c3                   ret 
// 008815fb  8b4020               mov eax, dword ptr [eax + 0x20]
// 008815fe  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPControlGallery.cpp (function ?GetItems@CXTPControlGallery@@QBEPAVCXTPControlGalleryItems@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlGallery.cpp
