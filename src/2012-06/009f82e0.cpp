// roc 2012-06 009f82e0  unit: CXTPResourceManager  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009f82e0
//
// 009f82e0  8b410c               mov eax, dword ptr [ecx + 0xc]
// 009f82e3  668b00               mov ax, word ptr [eax]
// 009f82e6  c3                   ret 
// library xtp-15.2.1/Source\Common\XTPResourceManager.cpp (function ?GetResourcesLangID@CXTPResourceManager@@UAEGXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPResourceManager.cpp
