// roc 2010-06 008823f0  unit: CXTPTabManager::CNavigateButtonArrowRight  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008823f0
//
// 008823f0  837c240400           cmp dword ptr [esp + 4], 0
// 008823f5  7412                 je 0x882409
// 008823f7  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 008823fa  8b01                 mov eax, dword ptr [ecx]
// 008823fc  8b504c               mov edx, dword ptr [eax + 0x4c]
// 008823ff  c744240401000000     mov dword ptr [esp + 4], 1
// 00882407  ffe2                 jmp edx
// 00882409  c20400               ret 4
// library xtp-11.2.2/Source\TabManager\XTPTabManager.cpp (function ?OnExecute@CNavigateButtonArrowRight@CXTPTabManager@@MAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabManager.cpp
