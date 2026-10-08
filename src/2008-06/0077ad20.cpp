// from server: 100% by auto
// roc 2008-06 0077ad20  unit: CXTPTabManagerItem  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0077ad20
//
// 0077ad20  8b442404             mov eax, dword ptr [esp + 4]
// 0077ad24  394134               cmp dword ptr [ecx + 0x34], eax
// 0077ad27  7408                 je 0x77ad31
// 0077ad29  894134               mov dword ptr [ecx + 0x34], eax
// 0077ad2c  e87fffffff           call 0x77acb0
// 0077ad31  c20400               ret 4
// library xtp-11.2.2/Source\TabManager\XTPTabManager.cpp (function ?SetVisible@CXTPTabManagerItem@@UAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabManager.cpp
