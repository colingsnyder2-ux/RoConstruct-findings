// roc 2009-06 007f3660  unit: CXTPTabManager::CNavigateButtonArrowRight  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007f3660
//
// 007f3660  837c240400           cmp dword ptr [esp + 4], 0
// 007f3665  7412                 je 0x7f3679
// 007f3667  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 007f366a  8b01                 mov eax, dword ptr [ecx]
// 007f366c  8b504c               mov edx, dword ptr [eax + 0x4c]
// 007f366f  c744240401000000     mov dword ptr [esp + 4], 1
// 007f3677  ffe2                 jmp edx
// 007f3679  c20400               ret 4
// library xtp-11.2.2/Source\TabManager\XTPTabManager.cpp (function ?OnExecute@CNavigateButtonArrowRight@CXTPTabManager@@MAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabManager.cpp
