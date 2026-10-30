// roc 2012-06 00a4b650  unit: CXTPTabManager::CNavigateButtonArrowLeft  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a4b650
//
// 00a4b650  837c240400           cmp dword ptr [esp + 4], 0
// 00a4b655  7412                 je 0xa4b669
// 00a4b657  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 00a4b65a  8b01                 mov eax, dword ptr [ecx]
// 00a4b65c  8b504c               mov edx, dword ptr [eax + 0x4c]
// 00a4b65f  c744240400000000     mov dword ptr [esp + 4], 0
// 00a4b667  ffe2                 jmp edx
// 00a4b669  c20400               ret 4
// library xtp-11.2.2/Source\TabManager\XTPTabManager.cpp (function ?OnExecute@CNavigateButtonArrowLeft@CXTPTabManager@@MAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabManager.cpp
