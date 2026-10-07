// roc 2011-06 008d3130  unit: CXTPTabManagerItem  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008d3130
//
// 008d3130  8b442404             mov eax, dword ptr [esp + 4]
// 008d3134  394130               cmp dword ptr [ecx + 0x30], eax
// 008d3137  7408                 je 0x8d3141
// 008d3139  894130               mov dword ptr [ecx + 0x30], eax
// 008d313c  e85fffffff           call 0x8d30a0
// 008d3141  c20400               ret 4
// library xtp-15.2.1/Source\TabManager\XTPTabManager.cpp (function ?SetEnabled@CXTPTabManagerItem@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/TabManager/XTPTabManager.cpp
