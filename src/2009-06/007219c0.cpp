// roc 2009-06 007219c0  unit: CRobloxControlColorSelector  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007219c0
//
// 007219c0  56                   push esi
// 007219c1  8bf1                 mov esi, ecx
// 007219c3  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 007219c9  85c9                 test ecx, ecx
// 007219cb  7410                 je 0x7219dd
// 007219cd  56                   push esi
// 007219ce  e89dfaffff           call 0x721470
// 007219d3  c7865c01000000000000 mov dword ptr [esi + 0x15c], 0
// 007219dd  8b4c2408             mov ecx, dword ptr [esp + 8]
// 007219e1  85c9                 test ecx, ecx
// 007219e3  740c                 je 0x7219f1
// 007219e5  56                   push esi
// 007219e6  898e5c010000         mov dword ptr [esi + 0x15c], ecx
// 007219ec  e8cff9ffff           call 0x7213c0
// 007219f1  5e                   pop esi
// 007219f2  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControl.cpp (function ?SetAction@CXTPControl@@UAEXPAVCXTPControlAction@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControl.cpp
