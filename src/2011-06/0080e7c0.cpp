// roc 2011-06 0080e7c0  unit: CRobloxControlColorSelector  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0080e7c0
//
// 0080e7c0  56                   push esi
// 0080e7c1  8bf1                 mov esi, ecx
// 0080e7c3  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 0080e7c9  85c9                 test ecx, ecx
// 0080e7cb  7410                 je 0x80e7dd
// 0080e7cd  56                   push esi
// 0080e7ce  e89dfaffff           call 0x80e270
// 0080e7d3  c7865c01000000000000 mov dword ptr [esi + 0x15c], 0
// 0080e7dd  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0080e7e1  85c9                 test ecx, ecx
// 0080e7e3  740c                 je 0x80e7f1
// 0080e7e5  56                   push esi
// 0080e7e6  898e5c010000         mov dword ptr [esi + 0x15c], ecx
// 0080e7ec  e8cff9ffff           call 0x80e1c0
// 0080e7f1  5e                   pop esi
// 0080e7f2  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControl.cpp (function ?SetAction@CXTPControl@@UAEXPAVCXTPControlAction@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControl.cpp
