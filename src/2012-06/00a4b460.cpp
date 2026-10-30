// from server: 100% by auto
// roc 2012-06 00a4b460  unit: CXTPTabManagerItem  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a4b460
//
// 00a4b460  8b442404             mov eax, dword ptr [esp + 4]
// 00a4b464  394130               cmp dword ptr [ecx + 0x30], eax
// 00a4b467  7408                 je 0xa4b471
// 00a4b469  894130               mov dword ptr [ecx + 0x30], eax
// 00a4b46c  e85fffffff           call 0xa4b3d0
// 00a4b471  c20400               ret 4
// library xtp-15.2.1/Source\TabManager\XTPTabManager.cpp (function ?SetEnabled@CXTPTabManagerItem@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/TabManager/XTPTabManager.cpp
