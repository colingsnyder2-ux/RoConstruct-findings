// roc 2009-06 007f3680  unit: CXTPTabManager::CNavigateButtonArrowLeft  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007f3680
//
// 007f3680  837c240400           cmp dword ptr [esp + 4], 0
// 007f3685  7412                 je 0x7f3699
// 007f3687  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 007f368a  8b01                 mov eax, dword ptr [ecx]
// 007f368c  8b504c               mov edx, dword ptr [eax + 0x4c]
// 007f368f  c744240400000000     mov dword ptr [esp + 4], 0
// 007f3697  ffe2                 jmp edx
// 007f3699  c20400               ret 4
// library xtp-11.2.2/Source\TabManager\XTPTabManager.cpp (function ?OnExecute@CNavigateButtonArrowLeft@CXTPTabManager@@MAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabManager.cpp
