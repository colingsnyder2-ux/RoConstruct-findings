// roc 2011-06 008d3110  unit: CXTPTabManagerItem  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008d3110
//
// 008d3110  8b442404             mov eax, dword ptr [esp + 4]
// 008d3114  394134               cmp dword ptr [ecx + 0x34], eax
// 008d3117  7408                 je 0x8d3121
// 008d3119  894134               mov dword ptr [ecx + 0x34], eax
// 008d311c  e87fffffff           call 0x8d30a0
// 008d3121  c20400               ret 4
// library xtp-15.2.1/Source\TabManager\XTPTabManager.cpp (function ?SetVisible@CXTPTabManagerItem@@UAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/TabManager/XTPTabManager.cpp
