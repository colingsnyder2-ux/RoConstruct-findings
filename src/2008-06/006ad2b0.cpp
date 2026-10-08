// from server: 100% by auto
// roc 2008-06 006ad2b0  unit: CRobloxControlColorSelector  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006ad2b0
//
// 006ad2b0  56                   push esi
// 006ad2b1  8bf1                 mov esi, ecx
// 006ad2b3  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 006ad2b9  85c9                 test ecx, ecx
// 006ad2bb  7410                 je 0x6ad2cd
// 006ad2bd  56                   push esi
// 006ad2be  e88dfaffff           call 0x6acd50
// 006ad2c3  c7865c01000000000000 mov dword ptr [esi + 0x15c], 0
// 006ad2cd  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006ad2d1  85c9                 test ecx, ecx
// 006ad2d3  740c                 je 0x6ad2e1
// 006ad2d5  56                   push esi
// 006ad2d6  898e5c010000         mov dword ptr [esi + 0x15c], ecx
// 006ad2dc  e8bff9ffff           call 0x6acca0
// 006ad2e1  5e                   pop esi
// 006ad2e2  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControl.cpp (function ?SetAction@CXTPControl@@UAEXPAVCXTPControlAction@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControl.cpp
