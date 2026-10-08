// roc 2012-06 00986ad0  unit: CRobloxControlColorSelector  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00986ad0
//
// 00986ad0  56                   push esi
// 00986ad1  8bf1                 mov esi, ecx
// 00986ad3  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 00986ad9  85c9                 test ecx, ecx
// 00986adb  7410                 je 0x986aed
// 00986add  56                   push esi
// 00986ade  e8adfaffff           call 0x986590
// 00986ae3  c7865c01000000000000 mov dword ptr [esi + 0x15c], 0
// 00986aed  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00986af1  85c9                 test ecx, ecx
// 00986af3  740c                 je 0x986b01
// 00986af5  56                   push esi
// 00986af6  898e5c010000         mov dword ptr [esi + 0x15c], ecx
// 00986afc  e8dff9ffff           call 0x9864e0
// 00986b01  5e                   pop esi
// 00986b02  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControl.cpp (function ?SetAction@CXTPControl@@UAEXPAVCXTPControlAction@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControl.cpp
