// roc 2012-06 00a4b440  unit: CXTPTabManagerItem  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a4b440
//
// 00a4b440  8b442404             mov eax, dword ptr [esp + 4]
// 00a4b444  394134               cmp dword ptr [ecx + 0x34], eax
// 00a4b447  7408                 je 0xa4b451
// 00a4b449  894134               mov dword ptr [ecx + 0x34], eax
// 00a4b44c  e87fffffff           call 0xa4b3d0
// 00a4b451  c20400               ret 4
// library xtp-15.2.1/Source\TabManager\XTPTabManager.cpp (function ?SetVisible@CXTPTabManagerItem@@UAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/TabManager/XTPTabManager.cpp
