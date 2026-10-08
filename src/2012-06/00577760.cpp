// from server: 100% by auto
// roc 2012-06 00577760  unit: RBX::Network::DirectPhysicsReceiver  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00577760
//
// 00577760  56                   push esi
// 00577761  8bf1                 mov esi, ecx
// 00577763  8d4e10               lea ecx, [esi + 0x10]
// 00577766  e805e00300           call 0x5b5770
// 0057776b  f644240801           test byte ptr [esp + 8], 1
// 00577770  7409                 je 0x57777b
// 00577772  56                   push esi
// 00577773  e89ca94000           call 0x982114
// 00577778  83c404               add esp, 4
// 0057777b  8bc6                 mov eax, esi
// 0057777d  5e                   pop esi
// 0057777e  c20400               ret 4
// library boost-1.34.1/libs\signals\src\connection.cpp (function ??_Gbasic_connection@detail@signals@boost@@QAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/signals/src/connection.cpp
