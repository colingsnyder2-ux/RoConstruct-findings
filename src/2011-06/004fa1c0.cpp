// roc 2011-06 004fa1c0  unit: RBX::Network::DirectPhysicsReceiver  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004fa1c0
//
// 004fa1c0  56                   push esi
// 004fa1c1  8bf1                 mov esi, ecx
// 004fa1c3  8d4e10               lea ecx, [esi + 0x10]
// 004fa1c6  e845740100           call 0x511610
// 004fa1cb  f644240801           test byte ptr [esp + 8], 1
// 004fa1d0  7409                 je 0x4fa1db
// 004fa1d2  56                   push esi
// 004fa1d3  e880fe3000           call 0x80a058
// 004fa1d8  83c404               add esp, 4
// 004fa1db  8bc6                 mov eax, esi
// 004fa1dd  5e                   pop esi
// 004fa1de  c20400               ret 4
// library boost-1.34.1/libs\signals\src\connection.cpp (function ??_Gbasic_connection@detail@signals@boost@@QAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/signals/src/connection.cpp
