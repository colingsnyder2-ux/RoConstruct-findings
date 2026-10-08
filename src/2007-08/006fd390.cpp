// from server: 100% by auto
// roc 2007-08 006fd390  unit: CXTPTabManager::CNavigateButtonArrowLeft  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006fd390
//
// 006fd390  837c240400           cmp dword ptr [esp + 4], 0
// 006fd395  7412                 je 0x6fd3a9
// 006fd397  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 006fd39a  8b01                 mov eax, dword ptr [ecx]
// 006fd39c  8b504c               mov edx, dword ptr [eax + 0x4c]
// 006fd39f  c744240400000000     mov dword ptr [esp + 4], 0
// 006fd3a7  ffe2                 jmp edx
// 006fd3a9  c20400               ret 4
// library xtp-11.2.2-vc8/Source\TabManager\XTPTabManager.cpp (function ?OnExecute@CNavigateButtonArrowLeft@CXTPTabManager@@MAEXH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/TabManager/XTPTabManager.cpp
