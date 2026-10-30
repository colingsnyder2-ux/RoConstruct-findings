// roc 2011-06 008d5200  unit: CXTPTabManager::CNavigateButtonArrowLeft  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008d5200
//
// 008d5200  8b410c               mov eax, dword ptr [ecx + 0xc]
// 008d5203  33d2                 xor edx, edx
// 008d5205  395014               cmp dword ptr [eax + 0x14], edx
// 008d5208  0f9cc2               setl dl
// 008d520b  895120               mov dword ptr [ecx + 0x20], edx
// 008d520e  e96dfeffff           jmp 0x8d5080
// library xtp-11.2.2/Source\TabManager\XTPTabManager.cpp (function ?Reposition@CNavigateButtonArrowLeft@CXTPTabManager@@MAEXAAVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabManager.cpp
