// from server: 100% by auto
// roc 2007-03 004b45c0  unit: seg_004b0000  size: 188 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004b45c0
//
// 004b45c0  6aff                 push -1
// 004b45c2  68ebc97400           push 0x74c9eb
// 004b45c7  64a100000000         mov eax, dword ptr fs:[0]
// 004b45cd  50                   push eax
// 004b45ce  64892500000000       mov dword ptr fs:[0], esp
// 004b45d5  81ec1c010000         sub esp, 0x11c
// 004b45db  8b84242c010000       mov eax, dword ptr [esp + 0x12c]
// 004b45e2  56                   push esi
// 004b45e3  6a00                 push 0
// 004b45e5  6a04                 push 4
// 004b45e7  8bf1                 mov esi, ecx
// 004b45e9  50                   push eax
// 004b45ea  8d4c2418             lea ecx, [esp + 0x18]
// 004b45ee  e84d32feff           call 0x497840
// 004b45f3  6a01                 push 1
// 004b45f5  6a20                 push 0x20
// 004b45f7  8d4c240c             lea ecx, [esp + 0xc]
// 004b45fb  51                   push ecx
// 004b45fc  8d4c2418             lea ecx, [esp + 0x18]
// 004b4600  c784243401000000000000 mov dword ptr [esp + 0x134], 0
// 004b460b  e86033feff           call 0x497970
// 004b4610  8b942438010000       mov edx, dword ptr [esp + 0x138]
// 004b4617  8b842434010000       mov eax, dword ptr [esp + 0x134]
// 004b461e  52                   push edx
// 004b461f  50                   push eax
// 004b4620  8bce                 mov ecx, esi
// 004b4622  e8c9d6ffff           call 0x4b1cf0
// 004b4627  29442404             sub dword ptr [esp + 4], eax
// 004b462b  6a00                 push 0
// 004b462d  8d4c2410             lea ecx, [esp + 0x10]
// 004b4631  e8ca35feff           call 0x497c00
// 004b4636  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004b463a  6a01                 push 1
// 004b463c  6a20                 push 0x20
// 004b463e  8d542410             lea edx, [esp + 0x10]
// 004b4642  894c2410             mov dword ptr [esp + 0x10], ecx
// 004b4646  52                   push edx
// 004b4647  8d4c2418             lea ecx, [esp + 0x18]
// 004b464b  e86037feff           call 0x497db0
// 004b4650  8d4c240c             lea ecx, [esp + 0xc]
// 004b4654  c7842428010000ffffffff mov dword ptr [esp + 0x128], 0xffffffff
// 004b465f  e85c32feff           call 0x4978c0
// 004b4664  8b8c2420010000       mov ecx, dword ptr [esp + 0x120]
// 004b466b  5e                   pop esi
// 004b466c  64890d00000000       mov dword ptr fs:[0], ecx
// 004b4673  81c428010000         add esp, 0x128
// 004b4679  c20c00               ret 0xc

// from server: 55% by colin
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet RakPeer.cpp