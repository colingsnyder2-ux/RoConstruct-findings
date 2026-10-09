// roc 2009-12 00877350  unit: CXTPControlGallery  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00877350
//
// 00877350  8b815c010000         mov eax, dword ptr [ecx + 0x15c]
// 00877356  85c0                 test eax, eax
// 00877358  7501                 jne 0x87735b
// 0087735a  c3                   ret 
// 0087735b  8b4020               mov eax, dword ptr [eax + 0x20]
// 0087735e  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPControlGallery.cpp (function ?GetItems@CXTPControlGallery@@QBEPAVCXTPControlGalleryItems@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlGallery.cpp
