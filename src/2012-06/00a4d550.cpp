// roc 2012-06 00a4d550  unit: CXTPTabManager::CNavigateButtonArrowLeft  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a4d550
//
// 00a4d550  8b410c               mov eax, dword ptr [ecx + 0xc]
// 00a4d553  33d2                 xor edx, edx
// 00a4d555  395014               cmp dword ptr [eax + 0x14], edx
// 00a4d558  0f9cc2               setl dl
// 00a4d55b  895120               mov dword ptr [ecx + 0x20], edx
// 00a4d55e  e96dfeffff           jmp 0xa4d3d0
// library xtp-11.2.2/Source\TabManager\XTPTabManager.cpp (function ?Reposition@CNavigateButtonArrowLeft@CXTPTabManager@@MAEXAAVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabManager.cpp
