// roc 2007-08 006fd180  unit: CXTPTabManagerItem  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006fd180
//
// 006fd180  8b442404             mov eax, dword ptr [esp + 4]
// 006fd184  394134               cmp dword ptr [ecx + 0x34], eax
// 006fd187  7408                 je 0x6fd191
// 006fd189  894134               mov dword ptr [ecx + 0x34], eax
// 006fd18c  e86fffffff           call 0x6fd100
// 006fd191  c20400               ret 4
// library xtp-11.2.2-vc8/Source\TabManager\XTPTabManager.cpp (function ?SetVisible@CXTPTabManagerItem@@UAEXH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/TabManager/XTPTabManager.cpp
