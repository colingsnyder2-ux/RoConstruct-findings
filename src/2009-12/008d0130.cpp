// roc 2009-12 008d0130  unit: CXTPTabManager::CNavigateButtonArrowLeft  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008d0130
//
// 008d0130  8b410c               mov eax, dword ptr [ecx + 0xc]
// 008d0133  33d2                 xor edx, edx
// 008d0135  395014               cmp dword ptr [eax + 0x14], edx
// 008d0138  0f9cc2               setl dl
// 008d013b  895120               mov dword ptr [ecx + 0x20], edx
// 008d013e  e96dfeffff           jmp 0x8cffb0
// library xtp-11.2.2/Source\TabManager\XTPTabManager.cpp (function ?Reposition@CNavigateButtonArrowLeft@CXTPTabManager@@MAEXAAVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabManager.cpp
