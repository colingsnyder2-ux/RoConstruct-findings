// roc 2009-12 008ce230  unit: CXTPTabManager::CNavigateButtonArrowLeft  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008ce230
//
// 008ce230  837c240400           cmp dword ptr [esp + 4], 0
// 008ce235  7412                 je 0x8ce249
// 008ce237  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 008ce23a  8b01                 mov eax, dword ptr [ecx]
// 008ce23c  8b504c               mov edx, dword ptr [eax + 0x4c]
// 008ce23f  c744240400000000     mov dword ptr [esp + 4], 0
// 008ce247  ffe2                 jmp edx
// 008ce249  c20400               ret 4
// library xtp-11.2.2/Source\TabManager\XTPTabManager.cpp (function ?OnExecute@CNavigateButtonArrowLeft@CXTPTabManager@@MAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabManager.cpp
