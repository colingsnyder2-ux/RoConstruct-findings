// roc 2011-06 008d3320  unit: CXTPTabManager::CNavigateButtonArrowLeft  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008d3320
//
// 008d3320  837c240400           cmp dword ptr [esp + 4], 0
// 008d3325  7412                 je 0x8d3339
// 008d3327  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 008d332a  8b01                 mov eax, dword ptr [ecx]
// 008d332c  8b504c               mov edx, dword ptr [eax + 0x4c]
// 008d332f  c744240400000000     mov dword ptr [esp + 4], 0
// 008d3337  ffe2                 jmp edx
// 008d3339  c20400               ret 4
// library xtp-11.2.2/Source\TabManager\XTPTabManager.cpp (function ?OnExecute@CNavigateButtonArrowLeft@CXTPTabManager@@MAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabManager.cpp
