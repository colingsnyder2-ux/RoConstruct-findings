// roc 2008-06 0071f830  unit: CXTPResourceManager  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0071f830
//
// 0071f830  8b410c               mov eax, dword ptr [ecx + 0xc]
// 0071f833  668b00               mov ax, word ptr [eax]
// 0071f836  c3                   ret 
// library xtp-11.2.2/Source\Common\XTPResourceManager.cpp (function ?GetResourcesLangID@CXTPResourceManager@@UAEGXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPResourceManager.cpp
