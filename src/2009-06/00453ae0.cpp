// roc 2009-06 00453ae0  unit: CRobloxDoc  size: 237 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00453ae0
//
// 00453ae0  6aff                 push -1
// 00453ae2  68c31a8500           push 0x851ac3
// 00453ae7  64a100000000         mov eax, dword ptr fs:[0]
// 00453aed  50                   push eax
// 00453aee  64892500000000       mov dword ptr fs:[0], esp
// 00453af5  81ecec010000         sub esp, 0x1ec
// 00453afb  56                   push esi
// 00453afc  8bf1                 mov esi, ecx
// 00453afe  8d4c2404             lea ecx, [esp + 4]
// 00453b02  ff15bcfc8900         call dword ptr [0x89fcbc]
// 00453b08  68d0000000           push 0xd0
// 00453b0d  8d4c2408             lea ecx, [esp + 8]
// 00453b11  c78424fc01000000000000 mov dword ptr [esp + 0x1fc], 0
// 00453b1c  ff15fcf38900         call dword ptr [0x89f3fc]
// 00453b22  6a01                 push 1
// 00453b24  6a00                 push 0
// 00453b26  6a00                 push 0
// 00453b28  8d4c2410             lea ecx, [esp + 0x10]
// 00453b2c  ff15d0fc8900         call dword ptr [0x89fcd0]
// 00453b32  50                   push eax
// 00453b33  6a06                 push 6
// 00453b35  6a00                 push 0
// 00453b37  68248b8b00           push 0x8b8b24
// 00453b3c  6a01                 push 1
// 00453b3e  8d4c2430             lea ecx, [esp + 0x30]
// 00453b42  e8d15c2c00           call 0x719818
// 00453b47  8d4c2410             lea ecx, [esp + 0x10]
// 00453b4b  c68424f801000001     mov byte ptr [esp + 0x1f8], 1
// 00453b53  e8ba5c2c00           call 0x719812
// 00453b58  83f801               cmp eax, 1
// 00453b5b  753f                 jne 0x453b9c
// 00453b5d  8d442408             lea eax, [esp + 8]
// 00453b61  50                   push eax
// 00453b62  8d4c2414             lea ecx, [esp + 0x14]
// 00453b66  e8a15c2c00           call 0x71980c
// 00453b6b  8bc8                 mov ecx, eax
// 00453b6d  c68424f801000002     mov byte ptr [esp + 0x1f8], 2
// 00453b75  ff15d0fc8900         call dword ptr [0x89fcd0]
// 00453b7b  83ec1c               sub esp, 0x1c
// 00453b7e  8bcc                 mov ecx, esp
// 00453b80  89642428             mov dword ptr [esp + 0x28], esp
// 00453b84  50                   push eax
// 00453b85  ff15b4e48900         call dword ptr [0x89e4b4]
// 00453b8b  8bce                 mov ecx, esi
// 00453b8d  e83efdffff           call 0x4538d0
// 00453b92  8d4c2408             lea ecx, [esp + 8]
// 00453b96  ff1510fd8900         call dword ptr [0x89fd10]
// 00453b9c  8d4c2410             lea ecx, [esp + 0x10]
// 00453ba0  c68424f801000000     mov byte ptr [esp + 0x1f8], 0
// 00453ba8  e8595c2c00           call 0x719806
// 00453bad  8d4c2404             lea ecx, [esp + 4]
// 00453bb1  ff1510fd8900         call dword ptr [0x89fd10]
// 00453bb7  8b8c24f0010000       mov ecx, dword ptr [esp + 0x1f0]
// 00453bbe  64890d00000000       mov dword ptr fs:[0], ecx
// 00453bc5  5e                   pop esi
// 00453bc6  81c4f8010000         add esp, 0x1f8
// 00453bcc  c3                   ret 
// copied from an identical function in another client (function ?OnInsertModel@CRobloxView@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob0 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espclaude_8da179552268be3c.cpp