// roc 2010-06 007ac2e0  unit: CRobloxControlColorSelector  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007ac2e0
//
// 007ac2e0  56                   push esi
// 007ac2e1  8bf1                 mov esi, ecx
// 007ac2e3  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 007ac2e9  85c9                 test ecx, ecx
// 007ac2eb  7410                 je 0x7ac2fd
// 007ac2ed  56                   push esi
// 007ac2ee  e89dfaffff           call 0x7abd90
// 007ac2f3  c7865c01000000000000 mov dword ptr [esi + 0x15c], 0
// 007ac2fd  8b4c2408             mov ecx, dword ptr [esp + 8]
// 007ac301  85c9                 test ecx, ecx
// 007ac303  740c                 je 0x7ac311
// 007ac305  56                   push esi
// 007ac306  898e5c010000         mov dword ptr [esi + 0x15c], ecx
// 007ac30c  e8cff9ffff           call 0x7abce0
// 007ac311  5e                   pop esi
// 007ac312  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControl.cpp (function ?SetAction@CXTPControl@@UAEXPAVCXTPControlAction@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControl.cpp
