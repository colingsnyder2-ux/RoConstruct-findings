// from server: 100% by auto
// roc 2008-06 0072dd40  unit: CXTPControlGallery  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0072dd40
//
// 0072dd40  8b815c010000         mov eax, dword ptr [ecx + 0x15c]
// 0072dd46  85c0                 test eax, eax
// 0072dd48  7501                 jne 0x72dd4b
// 0072dd4a  c3                   ret 
// 0072dd4b  8b4020               mov eax, dword ptr [eax + 0x20]
// 0072dd4e  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPControlGallery.cpp (function ?GetItems@CXTPControlGallery@@QBEPAVCXTPControlGalleryItems@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlGallery.cpp
