// roc 2012-06 00a4b630  unit: CXTPTabManager::CNavigateButtonArrowRight  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a4b630
//
// 00a4b630  837c240400           cmp dword ptr [esp + 4], 0
// 00a4b635  7412                 je 0xa4b649
// 00a4b637  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 00a4b63a  8b01                 mov eax, dword ptr [ecx]
// 00a4b63c  8b504c               mov edx, dword ptr [eax + 0x4c]
// 00a4b63f  c744240401000000     mov dword ptr [esp + 4], 1
// 00a4b647  ffe2                 jmp edx
// 00a4b649  c20400               ret 4
// library xtp-11.2.2/Source\TabManager\XTPTabManager.cpp (function ?OnExecute@CNavigateButtonArrowRight@CXTPTabManager@@MAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabManager.cpp
