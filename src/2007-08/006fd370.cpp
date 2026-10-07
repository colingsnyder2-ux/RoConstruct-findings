// roc 2007-08 006fd370  unit: CXTPTabManager::CNavigateButtonArrowRight  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006fd370
//
// 006fd370  837c240400           cmp dword ptr [esp + 4], 0
// 006fd375  7412                 je 0x6fd389
// 006fd377  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 006fd37a  8b01                 mov eax, dword ptr [ecx]
// 006fd37c  8b504c               mov edx, dword ptr [eax + 0x4c]
// 006fd37f  c744240401000000     mov dword ptr [esp + 4], 1
// 006fd387  ffe2                 jmp edx
// 006fd389  c20400               ret 4
// library xtp-11.2.2-vc8/Source\TabManager\XTPTabManager.cpp (function ?OnExecute@CNavigateButtonArrowRight@CXTPTabManager@@MAEXH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/TabManager/XTPTabManager.cpp
