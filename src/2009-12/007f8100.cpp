// roc 2009-12 007f8100  unit: CRobloxControlColorSelector  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007f8100
//
// 007f8100  56                   push esi
// 007f8101  8bf1                 mov esi, ecx
// 007f8103  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 007f8109  85c9                 test ecx, ecx
// 007f810b  7410                 je 0x7f811d
// 007f810d  56                   push esi
// 007f810e  e8adfaffff           call 0x7f7bc0
// 007f8113  c7865c01000000000000 mov dword ptr [esi + 0x15c], 0
// 007f811d  8b4c2408             mov ecx, dword ptr [esp + 8]
// 007f8121  85c9                 test ecx, ecx
// 007f8123  740c                 je 0x7f8131
// 007f8125  56                   push esi
// 007f8126  898e5c010000         mov dword ptr [esi + 0x15c], ecx
// 007f812c  e8dff9ffff           call 0x7f7b10
// 007f8131  5e                   pop esi
// 007f8132  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControl.cpp (function ?SetAction@CXTPControl@@UAEXPAVCXTPControlAction@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControl.cpp
