// roc 2009-06 0079c3d0  unit: CXTPControlGallery  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0079c3d0
//
// 0079c3d0  8b815c010000         mov eax, dword ptr [ecx + 0x15c]
// 0079c3d6  85c0                 test eax, eax
// 0079c3d8  7501                 jne 0x79c3db
// 0079c3da  c3                   ret 
// 0079c3db  8b4020               mov eax, dword ptr [eax + 0x20]
// 0079c3de  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPControlGallery.cpp (function ?GetItems@CXTPControlGallery@@QBEPAVCXTPControlGalleryItems@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlGallery.cpp
