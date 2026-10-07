// roc 2008-06 0077cec0  unit: CXTPTabManager::CNavigateButtonArrowLeft  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0077cec0
//
// 0077cec0  8b410c               mov eax, dword ptr [ecx + 0xc]
// 0077cec3  33d2                 xor edx, edx
// 0077cec5  395014               cmp dword ptr [eax + 0x14], edx
// 0077cec8  0f9cc2               setl dl
// 0077cecb  895120               mov dword ptr [ecx + 0x20], edx
// 0077cece  e96dfeffff           jmp 0x77cd40
// library xtp-11.2.2/Source\TabManager\XTPTabManager.cpp (function ?Reposition@CNavigateButtonArrowLeft@CXTPTabManager@@MAEXAAVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabManager.cpp
