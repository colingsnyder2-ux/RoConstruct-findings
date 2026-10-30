// roc 2010-06 00884310  unit: CXTPTabManager::CNavigateButtonArrowLeft  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00884310
//
// 00884310  8b410c               mov eax, dword ptr [ecx + 0xc]
// 00884313  33d2                 xor edx, edx
// 00884315  395014               cmp dword ptr [eax + 0x14], edx
// 00884318  0f9cc2               setl dl
// 0088431b  895120               mov dword ptr [ecx + 0x20], edx
// 0088431e  e96dfeffff           jmp 0x884190
// library xtp-11.2.2/Source\TabManager\XTPTabManager.cpp (function ?Reposition@CNavigateButtonArrowLeft@CXTPTabManager@@MAEXAAVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabManager.cpp
