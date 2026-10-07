// roc 2012-06 005beac0  unit: RakNet::RakPeer  size: 244 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005beac0
//
// 005beac0  6aff                 push -1
// 005beac2  685b0aab00           push 0xab0a5b
// 005beac7  64a100000000         mov eax, dword ptr fs:[0]
// 005beacd  50                   push eax
// 005beace  64892500000000       mov dword ptr fs:[0], esp
// 005bead5  81ec24010000         sub esp, 0x124
// 005beadb  8b842434010000       mov eax, dword ptr [esp + 0x134]
// 005beae2  56                   push esi
// 005beae3  6a00                 push 0
// 005beae5  6a08                 push 8
// 005beae7  8bf1                 mov esi, ecx
// 005beae9  50                   push eax
// 005beaea  8d4c2420             lea ecx, [esp + 0x20]
// 005beaee  e83d8bfaff           call 0x567630
// 005beaf3  8d4c2404             lea ecx, [esp + 4]
// 005beaf7  51                   push ecx
// 005beaf8  8d4c2418             lea ecx, [esp + 0x18]
// 005beafc  c784243401000000000000 mov dword ptr [esp + 0x134], 0
// 005beb07  e874d5faff           call 0x56c080
// 005beb0c  8b8c243c010000       mov ecx, dword ptr [esp + 0x13c]
// 005beb13  8b11                 mov edx, dword ptr [ecx]
// 005beb15  83ec14               sub esp, 0x14
// 005beb18  8bc4                 mov eax, esp
// 005beb1a  8910                 mov dword ptr [eax], edx
// 005beb1c  8b5104               mov edx, dword ptr [ecx + 4]
// 005beb1f  895004               mov dword ptr [eax + 4], edx
// 005beb22  8b5108               mov edx, dword ptr [ecx + 8]
// 005beb25  895008               mov dword ptr [eax + 8], edx
// 005beb28  8b510c               mov edx, dword ptr [ecx + 0xc]
// 005beb2b  8b4910               mov ecx, dword ptr [ecx + 0x10]
// 005beb2e  89500c               mov dword ptr [eax + 0xc], edx
// 005beb31  894810               mov dword ptr [eax + 0x10], ecx
// 005beb34  8bce                 mov ecx, esi
// 005beb36  e8c5d4ffff           call 0x5bc000
// 005beb3b  29442404             sub dword ptr [esp + 4], eax
// 005beb3f  6a00                 push 0
// 005beb41  8d4c2418             lea ecx, [esp + 0x18]
// 005beb45  1954240c             sbb dword ptr [esp + 0xc], edx
// 005beb49  e8a28ffaff           call 0x567af0
// 005beb4e  e87d90faff           call 0x567bd0
// 005beb53  84c0                 test al, al
// 005beb55  751f                 jne 0x5beb76
// 005beb57  6a08                 push 8
// 005beb59  8d542410             lea edx, [esp + 0x10]
// 005beb5d  52                   push edx
// 005beb5e  8d44240c             lea eax, [esp + 0xc]
// 005beb62  50                   push eax
// 005beb63  e8d88ffaff           call 0x567b40
// 005beb68  83c40c               add esp, 0xc
// 005beb6b  6a01                 push 1
// 005beb6d  6a40                 push 0x40
// 005beb6f  8d4c2414             lea ecx, [esp + 0x14]
// 005beb73  51                   push ecx
// 005beb74  eb09                 jmp 0x5beb7f
// 005beb76  6a01                 push 1
// 005beb78  6a40                 push 0x40
// 005beb7a  8d54240c             lea edx, [esp + 0xc]
// 005beb7e  52                   push edx
// 005beb7f  8d4c2420             lea ecx, [esp + 0x20]
// 005beb83  e80892faff           call 0x567d90
// 005beb88  8d4c2414             lea ecx, [esp + 0x14]
// 005beb8c  c7842430010000ffffffff mov dword ptr [esp + 0x130], 0xffffffff
// 005beb97  e8148bfaff           call 0x5676b0
// 005beb9c  8b8c2428010000       mov ecx, dword ptr [esp + 0x128]
// 005beba3  64890d00000000       mov dword ptr fs:[0], ecx
// 005bebaa  5e                   pop esi
// 005bebab  81c430010000         add esp, 0x130
// 005bebb1  c20800               ret 8
// library rbx2016-raknet/RakPeer.cpp (function ?ShiftIncomingTimestamp@RakPeer@RakNet@@IBEXPAEABUSystemAddress@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet RakPeer.cpp
