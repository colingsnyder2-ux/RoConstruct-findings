// from server: 100% by EspClaude
// roc 2008-06 00455c30  unit: CRobloxDoc  size: 237 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00455c30
//
// 00455c30  6aff                 push -1
// 00455c32  6823237c00           push 0x7c2323
// 00455c37  64a100000000         mov eax, dword ptr fs:[0]
// 00455c3d  50                   push eax
// 00455c3e  64892500000000       mov dword ptr fs:[0], esp
// 00455c45  81ecec010000         sub esp, 0x1ec
// 00455c4b  56                   push esi
// 00455c4c  8bf1                 mov esi, ecx
// 00455c4e  8d4c2404             lea ecx, [esp + 4]
// 00455c52  ff15043f8000         call dword ptr [0x803f04]
// 00455c58  68d0000000           push 0xd0
// 00455c5d  8d4c2408             lea ecx, [esp + 8]
// 00455c61  c78424fc01000000000000 mov dword ptr [esp + 0x1fc], 0
// 00455c6c  ff15c0328000         call dword ptr [0x8032c0]
// 00455c72  6a01                 push 1
// 00455c74  6a00                 push 0
// 00455c76  6a00                 push 0
// 00455c78  8d4c2410             lea ecx, [esp + 0x10]
// 00455c7c  ff15e03e8000         call dword ptr [0x803ee0]
// 00455c82  50                   push eax
// 00455c83  6a06                 push 6
// 00455c85  6a00                 push 0
// 00455c87  68087f8100           push 0x817f08
// 00455c8c  6a01                 push 1
// 00455c8e  8d4c2430             lea ecx, [esp + 0x30]
// 00455c92  e8dbb12400           call 0x6a0e72
// 00455c97  8d4c2410             lea ecx, [esp + 0x10]
// 00455c9b  c68424f801000001     mov byte ptr [esp + 0x1f8], 1
// 00455ca3  e8c4b12400           call 0x6a0e6c
// 00455ca8  83f801               cmp eax, 1
// 00455cab  753f                 jne 0x455cec
// 00455cad  8d442408             lea eax, [esp + 8]
// 00455cb1  50                   push eax
// 00455cb2  8d4c2414             lea ecx, [esp + 0x14]
// 00455cb6  e8abb12400           call 0x6a0e66
// 00455cbb  8bc8                 mov ecx, eax
// 00455cbd  c68424f801000002     mov byte ptr [esp + 0x1f8], 2
// 00455cc5  ff15e03e8000         call dword ptr [0x803ee0]
// 00455ccb  83ec1c               sub esp, 0x1c
// 00455cce  8bcc                 mov ecx, esp
// 00455cd0  89642428             mov dword ptr [esp + 0x28], esp
// 00455cd4  50                   push eax
// 00455cd5  ff1558248000         call dword ptr [0x802458]
// 00455cdb  8bce                 mov ecx, esi
// 00455cdd  e83efdffff           call 0x455a20
// 00455ce2  8d4c2408             lea ecx, [esp + 8]
// 00455ce6  ff15143f8000         call dword ptr [0x803f14]
// 00455cec  8d4c2410             lea ecx, [esp + 0x10]
// 00455cf0  c68424f801000000     mov byte ptr [esp + 0x1f8], 0
// 00455cf8  e85db12400           call 0x6a0e5a
// 00455cfd  8d4c2404             lea ecx, [esp + 4]
// 00455d01  ff15143f8000         call dword ptr [0x803f14]
// 00455d07  8b8c24f0010000       mov ecx, dword ptr [esp + 0x1f0]
// 00455d0e  64890d00000000       mov dword ptr fs:[0], ecx
// 00455d15  5e                   pop esi
// 00455d16  81c4f8010000         add esp, 0x1f8
// 00455d1c  c3                   ret 

// from server: 59% by colin
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob0 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espclaude_8da179552268be3c.cpp
