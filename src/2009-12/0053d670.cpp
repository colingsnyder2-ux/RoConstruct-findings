// roc 2009-12 0053d670  unit: RBX::Network::DirectPhysicsReceiver  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0053d670
//
// 0053d670  56                   push esi
// 0053d671  8bf1                 mov esi, ecx
// 0053d673  8d4e10               lea ecx, [esi + 0x10]
// 0053d676  e835b70100           call 0x558db0
// 0053d67b  f644240801           test byte ptr [esp + 8], 1
// 0053d680  7409                 je 0x53d68b
// 0053d682  56                   push esi
// 0053d683  e8d2612b00           call 0x7f385a
// 0053d688  83c404               add esp, 4
// 0053d68b  8bc6                 mov eax, esi
// 0053d68d  5e                   pop esi
// 0053d68e  c20400               ret 4
// library boost-1.34.1/libs\signals\src\connection.cpp (function ??_Gbasic_connection@detail@signals@boost@@QAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/signals/src/connection.cpp
