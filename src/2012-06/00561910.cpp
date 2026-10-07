// roc 2012-06 00561910  unit: RBX::VHint::?$FactoryProduct::Creator  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00561910
//
// 00561910  56                   push esi
// 00561911  8b742408             mov esi, dword ptr [esp + 8]
// 00561915  6a02                 push 2
// 00561917  8d4602               lea eax, [esi + 2]
// 0056191a  6a02                 push 2
// 0056191c  50                   push eax
// 0056191d  e89e090400           call 0x5a22c0
// 00561922  50                   push eax
// 00561923  6a04                 push 4
// 00561925  83c604               add esi, 4
// 00561928  56                   push esi
// 00561929  e892090400           call 0x5a22c0
// 0056192e  83c418               add esp, 0x18
// 00561931  5e                   pop esi
// 00561932  c3                   ret 
// library rbx2016-raknet/RakNetTypes.cpp (function ?ToInteger@SystemAddress@RakNet@@SAKABU12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet RakNetTypes.cpp
