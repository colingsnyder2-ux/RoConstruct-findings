// roc 2008-06 0077af30  unit: CXTPTabManager::CNavigateButtonArrowLeft  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0077af30
//
// 0077af30  837c240400           cmp dword ptr [esp + 4], 0
// 0077af35  7412                 je 0x77af49
// 0077af37  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 0077af3a  8b01                 mov eax, dword ptr [ecx]
// 0077af3c  8b504c               mov edx, dword ptr [eax + 0x4c]
// 0077af3f  c744240400000000     mov dword ptr [esp + 4], 0
// 0077af47  ffe2                 jmp edx
// 0077af49  c20400               ret 4
// library xtp-11.2.2/Source\TabManager\XTPTabManager.cpp (function ?OnExecute@CNavigateButtonArrowLeft@CXTPTabManager@@MAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabManager.cpp
