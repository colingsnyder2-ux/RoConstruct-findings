// roc 2007-08 006ff2c0  unit: CXTPTabManager::CNavigateButtonArrowLeft  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006ff2c0
//
// 006ff2c0  8b410c               mov eax, dword ptr [ecx + 0xc]
// 006ff2c3  33d2                 xor edx, edx
// 006ff2c5  395014               cmp dword ptr [eax + 0x14], edx
// 006ff2c8  0f9cc2               setl dl
// 006ff2cb  895120               mov dword ptr [ecx + 0x20], edx
// 006ff2ce  e96dfeffff           jmp 0x6ff140
// library xtp-11.2.2-vc8/Source\TabManager\XTPTabManager.cpp (function ?Reposition@CNavigateButtonArrowLeft@CXTPTabManager@@MAEXAAVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/TabManager/XTPTabManager.cpp
