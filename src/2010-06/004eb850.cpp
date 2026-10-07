// roc 2010-06 004eb850  unit: RBX::Network::DirectPhysicsReceiver  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004eb850
//
// 004eb850  56                   push esi
// 004eb851  8bf1                 mov esi, ecx
// 004eb853  8d4e10               lea ecx, [esi + 0x10]
// 004eb856  e8b5bf0100           call 0x507810
// 004eb85b  f644240801           test byte ptr [esp + 8], 1
// 004eb860  7409                 je 0x4eb86b
// 004eb862  56                   push esi
// 004eb863  e832c12b00           call 0x7a799a
// 004eb868  83c404               add esp, 4
// 004eb86b  8bc6                 mov eax, esi
// 004eb86d  5e                   pop esi
// 004eb86e  c20400               ret 4
// library boost-1.34.1/libs\signals\src\connection.cpp (function ??_Gbasic_connection@detail@signals@boost@@QAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/signals/src/connection.cpp
