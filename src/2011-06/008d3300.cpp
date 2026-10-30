// roc 2011-06 008d3300  unit: CXTPTabManager::CNavigateButtonArrowRight  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008d3300
//
// 008d3300  837c240400           cmp dword ptr [esp + 4], 0
// 008d3305  7412                 je 0x8d3319
// 008d3307  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 008d330a  8b01                 mov eax, dword ptr [ecx]
// 008d330c  8b504c               mov edx, dword ptr [eax + 0x4c]
// 008d330f  c744240401000000     mov dword ptr [esp + 4], 1
// 008d3317  ffe2                 jmp edx
// 008d3319  c20400               ret 4
// library xtp-11.2.2/Source\TabManager\XTPTabManager.cpp (function ?OnExecute@CNavigateButtonArrowRight@CXTPTabManager@@MAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabManager.cpp
