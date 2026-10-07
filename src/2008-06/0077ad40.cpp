// roc 2008-06 0077ad40  unit: CXTPTabManagerItem  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0077ad40
//
// 0077ad40  8b442404             mov eax, dword ptr [esp + 4]
// 0077ad44  394130               cmp dword ptr [ecx + 0x30], eax
// 0077ad47  7408                 je 0x77ad51
// 0077ad49  894130               mov dword ptr [ecx + 0x30], eax
// 0077ad4c  e85fffffff           call 0x77acb0
// 0077ad51  c20400               ret 4
// library xtp-11.2.2/Source\TabManager\XTPTabManager.cpp (function ?SetEnabled@CXTPTabManagerItem@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabManager.cpp
