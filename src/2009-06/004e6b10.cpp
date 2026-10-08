// from server: 100% by auto
// roc 2009-06 004e6b10  unit: RBX::Network::DirectPhysicsReceiver  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004e6b10
//
// 004e6b10  56                   push esi
// 004e6b11  8bf1                 mov esi, ecx
// 004e6b13  8d4e10               lea ecx, [esi + 0x10]
// 004e6b16  e8355a0200           call 0x50c550
// 004e6b1b  f644240801           test byte ptr [esp + 8], 1
// 004e6b20  7409                 je 0x4e6b2b
// 004e6b22  56                   push esi
// 004e6b23  e80a1f2300           call 0x718a32
// 004e6b28  83c404               add esp, 4
// 004e6b2b  8bc6                 mov eax, esi
// 004e6b2d  5e                   pop esi
// 004e6b2e  c20400               ret 4
// library boost-1.34.1/libs\signals\src\connection.cpp (function ??_Gbasic_connection@detail@signals@boost@@QAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/signals/src/connection.cpp
