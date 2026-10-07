// roc 2009-06 0056bed0  unit: G3D::Shader  size: 2731 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0056bed0
//
// 0056bed0  6aff                 push -1
// 0056bed2  6878ff8500           push 0x85ff78
// 0056bed7  64a100000000         mov eax, dword ptr fs:[0]
// 0056bedd  50                   push eax
// 0056bede  64892500000000       mov dword ptr fs:[0], esp
// 0056bee5  81ec50010000         sub esp, 0x150
// 0056beeb  53                   push ebx
// 0056beec  56                   push esi
// 0056beed  57                   push edi
// 0056beee  6816d28a00           push 0x8ad216
// 0056bef3  8d4c2410             lea ecx, [esp + 0x10]
// 0056bef7  ff15b4e48900         call dword ptr [0x89e4b4]
// 0056befd  6816d28a00           push 0x8ad216
// 0056bf02  8d4c2464             lea ecx, [esp + 0x64]
// 0056bf06  c784246801000000000000 mov dword ptr [esp + 0x168], 0
// 0056bf11  ff15b4e48900         call dword ptr [0x89e4b4]
// 0056bf17  6816d28a00           push 0x8ad216
// 0056bf1c  8d4c242c             lea ecx, [esp + 0x2c]
// 0056bf20  c684246801000001     mov byte ptr [esp + 0x168], 1
// 0056bf28  ff15b4e48900         call dword ptr [0x89e4b4]
// 0056bf2e  6816d28a00           push 0x8ad216
// 0056bf33  8d8c2480000000       lea ecx, [esp + 0x80]
// 0056bf3a  c684246801000002     mov byte ptr [esp + 0x168], 2
// 0056bf42  ff15b4e48900         call dword ptr [0x89e4b4]
// 0056bf48  68e0ff8b00           push 0x8bffe0
// 0056bf4d  8d4c2448             lea ecx, [esp + 0x48]
// 0056bf51  c684246801000003     mov byte ptr [esp + 0x168], 3
// 0056bf59  ff15b4e48900         call dword ptr [0x89e4b4]
// 0056bf5f  b304                 mov bl, 4
// 0056bf61  68a0af8c00           push 0x8cafa0
// 0056bf66  8d8c249c000000       lea ecx, [esp + 0x9c]
// 0056bf6d  889c2468010000       mov byte ptr [esp + 0x168], bl
// 0056bf74  ff15b4e48900         call dword ptr [0x89e4b4]
// 0056bf7a  8bb4246c010000       mov esi, dword ptr [esp + 0x16c]
// 0056bf81  8d44240c             lea eax, [esp + 0xc]
// 0056bf85  50                   push eax
// 0056bf86  8d4c2464             lea ecx, [esp + 0x64]
// 0056bf8a  51                   push ecx
// 0056bf8b  8d542430             lea edx, [esp + 0x30]
// 0056bf8f  52                   push edx
// 0056bf90  8d842488000000       lea eax, [esp + 0x88]
// 0056bf97  50                   push eax
// 0056bf98  8d4c2454             lea ecx, [esp + 0x54]
// 0056bf9c  51                   push ecx
// 0056bf9d  8d9424ac000000       lea edx, [esp + 0xac]
// 0056bfa4  52                   push edx
// 0056bfa5  8bce                 mov ecx, esi
// 0056bfa7  c684247c01000005     mov byte ptr [esp + 0x17c], 5
// 0056bfaf  e85ce20000           call 0x57a210
// 0056bfb4  8d8c2498000000       lea ecx, [esp + 0x98]
// 0056bfbb  889c2464010000       mov byte ptr [esp + 0x164], bl
// 0056bfc2  ff15c4e48900         call dword ptr [0x89e4c4]
// 0056bfc8  8d4c2444             lea ecx, [esp + 0x44]
// 0056bfcc  c684246401000003     mov byte ptr [esp + 0x164], 3
// 0056bfd4  ff15c4e48900         call dword ptr [0x89e4c4]
// 0056bfda  8d4c247c             lea ecx, [esp + 0x7c]
// 0056bfde  c684246401000002     mov byte ptr [esp + 0x164], 2
// 0056bfe6  ff15c4e48900         call dword ptr [0x89e4c4]
// 0056bfec  8d4c2428             lea ecx, [esp + 0x28]
// 0056bff0  c684246401000001     mov byte ptr [esp + 0x164], 1
// 0056bff8  ff15c4e48900         call dword ptr [0x89e4c4]
// 0056bffe  8d4c2460             lea ecx, [esp + 0x60]
// 0056c002  c684246401000000     mov byte ptr [esp + 0x164], 0
// 0056c00a  ff15c4e48900         call dword ptr [0x89e4c4]
// 0056c010  83cfff               or edi, 0xffffffff
// 0056c013  8d4c240c             lea ecx, [esp + 0xc]
// 0056c017  89bc2464010000       mov dword ptr [esp + 0x164], edi
// 0056c01e  ff15c4e48900         call dword ptr [0x89e4c4]
// 0056c024  8bce                 mov ecx, esi
// 0056c026  e8f5dc0000           call 0x579d20
// 0056c02b  8bce                 mov ecx, esi
// 0056c02d  e8ded50000           call 0x579610
// 0056c032  68f8ff8a00           push 0x8afff8
// 0056c037  8d4c2410             lea ecx, [esp + 0x10]
// 0056c03b  ff15b4e48900         call dword ptr [0x89e4b4]
// 0056c041  c784246401000006000000 mov dword ptr [esp + 0x164], 6
// 0056c04c  e89ffcffff           call 0x56bcf0
// 0056c051  50                   push eax
// 0056c052  8d442410             lea eax, [esp + 0x10]
// 0056c056  50                   push eax
// 0056c057  e854f2ffff           call 0x56b2b0
// 0056c05c  83c408               add esp, 8
// 0056c05f  8d4c240c             lea ecx, [esp + 0xc]
// 0056c063  89bc2464010000       mov dword ptr [esp + 0x164], edi
// 0056c06a  ff15c4e48900         call dword ptr [0x89e4c4]
// 0056c070  8bce                 mov ecx, esi
// 0056c072  e8c9d50000           call 0x579640
// 0056c077  6816d28a00           push 0x8ad216
// 0056c07c  8d8c249c000000       lea ecx, [esp + 0x9c]
// 0056c083  ff15b4e48900         call dword ptr [0x89e4b4]
// 0056c089  6816d28a00           push 0x8ad216
// 0056c08e  8d4c2448             lea ecx, [esp + 0x48]
// 0056c092  c784246801000007000000 mov dword ptr [esp + 0x168], 7
// 0056c09d  ff15b4e48900         call dword ptr [0x89e4b4]
// 0056c0a3  6816d28a00           push 0x8ad216
// 0056c0a8  8d8c2480000000       lea ecx, [esp + 0x80]
// 0056c0af  c684246801000008     mov byte ptr [esp + 0x168], 8
// 0056c0b7  ff15b4e48900         call dword ptr [0x89e4b4]
// 0056c0bd  6816d28a00           push 0x8ad216
// 0056c0c2  8d4c242c             lea ecx, [esp + 0x2c]
// 0056c0c6  c684246801000009     mov byte ptr [esp + 0x168], 9
// 0056c0ce  ff15b4e48900         call dword ptr [0x89e4b4]
// 0056c0d4  6816d28a00           push 0x8ad216
// 0056c0d9  8d4c2464             lea ecx, [esp + 0x64]
// 0056c0dd  c68424680100000a     mov byte ptr [esp + 0x168], 0xa
// 0056c0e5  ff15b4e48900         call dword ptr [0x89e4b4]
// 0056c0eb  b30b                 mov bl, 0xb
// 0056c0ed  68d4ff8b00           push 0x8bffd4
// 0056c0f2  8d4c2410             lea ecx, [esp + 0x10]
// 0056c0f6  889c2468010000       mov byte ptr [esp + 0x168], bl
// 0056c0fd  ff15b4e48900         call dword ptr [0x89e4b4]
// 0056c103  8d8c2498000000       lea ecx, [esp + 0x98]
// 0056c10a  51                   push ecx
// 0056c10b  8d542448             lea edx, [esp + 0x48]
// 0056c10f  52                   push edx
// 0056c110  8d842484000000       lea eax, [esp + 0x84]
// 0056c117  50                   push eax
// 0056c118  8d4c2434             lea ecx, [esp + 0x34]
// 0056c11c  51                   push ecx
// 0056c11d  8d542470             lea edx, [esp + 0x70]
// 0056c121  52                   push edx
// 0056c122  8d442420             lea eax, [esp + 0x20]
// 0056c126  50                   push eax
// 0056c127  8bce                 mov ecx, esi
// 0056c129  c684247c0100000c     mov byte ptr [esp + 0x17c], 0xc
// 0056c131  e8dae00000           call 0x57a210
// 0056c136  8d4c240c             lea ecx, [esp + 0xc]
// 0056c13a  889c2464010000       mov byte ptr [esp + 0x164], bl
// 0056c141  ff15c4e48900         call dword ptr [0x89e4c4]
// 0056c147  8d4c2460             lea ecx, [esp + 0x60]
// 0056c14b  c68424640100000a     mov byte ptr [esp + 0x164], 0xa
// 0056c153  ff15c4e48900         call dword ptr [0x89e4c4]
// 0056c159  8d4c2428             lea ecx, [esp + 0x28]
// 0056c15d  c684246401000009     mov byte ptr [esp + 0x164], 9
// 0056c165  ff15c4e48900         call dword ptr [0x89e4c4]
// 0056c16b  8d4c247c             lea ecx, [esp + 0x7c]
// 0056c16f  c684246401000008     mov byte ptr [esp + 0x164], 8
// 0056c177  ff15c4e48900         call dword ptr [0x89e4c4]
// 0056c17d  8d4c2444             lea ecx, [esp + 0x44]
// 0056c181  c684246401000007     mov byte ptr [esp + 0x164], 7
// 0056c189  ff15c4e48900         call dword ptr [0x89e4c4]
// 0056c18f  8d8c2498000000       lea ecx, [esp + 0x98]
// 0056c196  89bc2464010000       mov dword ptr [esp + 0x164], edi
// 0056c19d  ff15c4e48900         call dword ptr [0x89e4c4]
// 0056c1a3  8bce                 mov ecx, esi
// 0056c1a5  e876db0000           call 0x579d20
// 0056c1aa  8bce                 mov ecx, esi
// 0056c1ac  e86fdb0000           call 0x579d20
// 0056c1b1  6816d28a00           push 0x8ad216
// 0056c1b6  8d8c249c000000       lea ecx, [esp + 0x9c]
// 0056c1bd  ff15b4e48900         call dword ptr [0x89e4b4]
// 0056c1c3  c78424640100000d000000 mov dword ptr [esp + 0x164], 0xd
// 0056c1ce  6816d28a00           push 0x8ad216
// 0056c1d3  8d4c2448             lea ecx, [esp + 0x48]
// 0056c1d7  ff15b4e48900         call dword ptr [0x89e4b4]
// 0056c1dd  6816d28a00           push 0x8ad216
// 0056c1e2  8d8c2480000000       lea ecx, [esp + 0x80]
// 0056c1e9  c68424680100000e     mov byte ptr [esp + 0x168], 0xe
// 0056c1f1  ff15b4e48900         call dword ptr [0x89e4b4]
// 0056c1f7  6816d28a00           push 0x8ad216
// 0056c1fc  8d4c242c             lea ecx, [esp + 0x2c]
// 0056c200  c68424680100000f     mov byte ptr [esp + 0x168], 0xf
// 0056c208  ff15b4e48900         call dword ptr [0x89e4b4]
// 0056c20e  68e0ff8b00           push 0x8bffe0
// 0056c213  8d4c2464             lea ecx, [esp + 0x64]
// 0056c217  c684246801000010     mov byte ptr [esp + 0x168], 0x10
// 0056c21f  ff15b4e48900         call dword ptr [0x89e4b4]
// 0056c225  b311                 mov bl, 0x11
// 0056c227  689caf8c00           push 0x8caf9c
// 0056c22c  8d4c2410             lea ecx, [esp + 0x10]
// 0056c230  889c2468010000       mov byte ptr [esp + 0x168], bl
// 0056c237  ff15b4e48900         call dword ptr [0x89e4b4]
// 0056c23d  8d8c2498000000       lea ecx, [esp + 0x98]
// 0056c244  51                   push ecx
// 0056c245  8d542448             lea edx, [esp + 0x48]
// 0056c249  52                   push edx
// 0056c24a  8d842484000000       lea eax, [esp + 0x84]
// 0056c251  50                   push eax
// 0056c252  8d4c2434             lea ecx, [esp + 0x34]
// 0056c256  51                   push ecx
// 0056c257  8d542470             lea edx, [esp + 0x70]
// 0056c25b  52                   push edx
// 0056c25c  8d442420             lea eax, [esp + 0x20]
// 0056c260  50                   push eax
// 0056c261  8bce                 mov ecx, esi
// 0056c263  c684247c01000012     mov byte ptr [esp + 0x17c], 0x12
// 0056c26b  e8a0df0000           call 0x57a210
// 0056c270  8d4c240c             lea ecx, [esp + 0xc]
// 0056c274  889c2464010000       mov byte ptr [esp + 0x164], bl
// 0056c27b  ff15c4e48900         call dword ptr [0x89e4c4]
// 0056c281  8d4c2460             lea ecx, [esp + 0x60]
// 0056c285  c684246401000010     mov byte ptr [esp + 0x164], 0x10
// 0056c28d  ff15c4e48900         call dword ptr [0x89e4c4]
// 0056c293  8d4c2428             lea ecx, [esp + 0x28]
// 0056c297  c68424640100000f     mov byte ptr [esp + 0x164], 0xf
// 0056c29f  ff15c4e48900         call dword ptr [0x89e4c4]
// 0056c2a5  8d4c247c             lea ecx, [esp + 0x7c]
// 0056c2a9  c68424640100000e     mov byte ptr [esp + 0x164], 0xe
// 0056c2b1  ff15c4e48900         call dword ptr [0x89e4c4]
// 0056c2b7  8d4c2444             lea ecx, [esp + 0x44]
// 0056c2bb  c68424640100000d     mov byte ptr [esp + 0x164], 0xd
// 0056c2c3  ff15c4e48900         call dword ptr [0x89e4c4]
// 0056c2c9  8d8c2498000000       lea ecx, [esp + 0x98]
// 0056c2d0  89bc2464010000       mov dword ptr [esp + 0x164], edi
// 0056c2d7  ff15c4e48900         call dword ptr [0x89e4c4]
// 0056c2dd  8bce                 mov ecx, esi
// 0056c2df  e83cda0000           call 0x579d20
// 0056c2e4  8bce                 mov ecx, esi
// 0056c2e6  e825d30000           call 0x579610
// 0056c2eb  68d8ff8b00           push 0x8bffd8
// 0056c2f0  8d4c2410             lea ecx, [esp + 0x10]
// 0056c2f4  ff15b4e48900         call dword ptr [0x89e4b4]
// 0056c2fa  c784246401000013000000 mov dword ptr [esp + 0x164], 0x13
// 0056c305  e866f9ffff           call 0x56bc70
// 0056c30a  50                   push eax
// 0056c30b  8d4c2410             lea ecx, [esp + 0x10]
// 0056c30f  51                   push ecx
// 0056c310  e89befffff           call 0x56b2b0
// 0056c315  83c408               add esp, 8
// 0056c318  8d4c240c             lea ecx, [esp + 0xc]
// 0056c31c  89bc2464010000       mov dword ptr [esp + 0x164], edi
// 0056c323  ff15c4e48900         call dword ptr [0x89e4c4]
// 0056c329  688caf8c00           push 0x8caf8c
// 0056c32e  8d4c2410             lea ecx, [esp + 0x10]
// 0056c332  ff15b4e48900         call dword ptr [0x89e4b4]
// 0056c338  c784246401000014000000 mov dword ptr [esp + 0x164], 0x14
// 0056c343  e818faffff           call 0x56bd60
// 0056c348  50                   push eax
// 0056c349  8d542410             lea edx, [esp + 0x10]
// 0056c34d  52                   push edx
// 0056c34e  e85defffff           call 0x56b2b0
// 0056c353  83c408               add esp, 8
// 0056c356  8d4c240c             lea ecx, [esp + 0xc]
// 0056c35a  89bc2464010000       mov dword ptr [esp + 0x164], edi
// 0056c361  ff15c4e48900         call dword ptr [0x89e4c4]
// 0056c367  6880af8c00           push 0x8caf80
// 0056c36c  8d4c2410             lea ecx, [esp + 0x10]
// 0056c370  ff15b4e48900         call dword ptr [0x89e4b4]
// 0056c376  c784246401000015000000 mov dword ptr [esp + 0x164], 0x15
// 0056c381  e80af4ffff           call 0x56b790
// 0056c386  0fb6051529a400       movzx eax, byte ptr [0xa42915]
// 0056c38d  50                   push eax
// 0056c38e  8d4c2410             lea ecx, [esp + 0x10]
// 0056c392  51                   push ecx
// 0056c393  e858f0ffff           call 0x56b3f0
// 0056c398  83c408               add esp, 8
// 0056c39b  8d4c240c             lea ecx, [esp + 0xc]
// 0056c39f  89bc2464010000       mov dword ptr [esp + 0x164], edi
// 0056c3a6  ff15c4e48900         call dword ptr [0x89e4c4]
// 0056c3ac  6878af8c00           push 0x8caf78
// 0056c3b1  8d4c2410             lea ecx, [esp + 0x10]
// 0056c3b5  ff15b4e48900         call dword ptr [0x89e4b4]
// 0056c3bb  c784246401000016000000 mov dword ptr [esp + 0x164], 0x16
// 0056c3c6  e8c5f3ffff           call 0x56b790
// 0056c3cb  0fb6151129a400       movzx edx, byte ptr [0xa42911]
// 0056c3d2  52                   push edx
// 0056c3d3  8d442410             lea eax, [esp + 0x10]
// 0056c3d7  50                   push eax
// 0056c3d8  e813f0ffff           call 0x56b3f0
// 0056c3dd  83c408               add esp, 8
// 0056c3e0  8d4c240c             lea ecx, [esp + 0xc]
// 0056c3e4  89bc2464010000       mov dword ptr [esp + 0x164], edi
// 0056c3eb  ff15c4e48900         call dword ptr [0x89e4c4]
// 0056c3f1  6870af8c00           push 0x8caf70
// 0056c3f6  8d4c2410             lea ecx, [esp + 0x10]
// 0056c3fa  ff15b4e48900         call dword ptr [0x89e4b4]
// 0056c400  c784246401000017000000 mov dword ptr [esp + 0x164], 0x17
// 0056c40b  e880f3ffff           call 0x56b790
// 0056c410  0fb60d1229a400       movzx ecx, byte ptr [0xa42912]
// 0056c417  51                   push ecx
// 0056c418  8d542410             lea edx, [esp + 0x10]
// 0056c41c  52                   push edx
// 0056c41d  e8ceefffff           call 0x56b3f0
// 0056c422  83c408               add esp, 8
// 0056c425  8d4c240c             lea ecx, [esp + 0xc]
// 0056c429  89bc2464010000       mov dword ptr [esp + 0x164], edi
// 0056c430  ff15c4e48900         call dword ptr [0x89e4c4]
// 0056c436  6868af8c00           push 0x8caf68
// 0056c43b  8d4c2410             lea ecx, [esp + 0x10]
// 0056c43f  ff15b4e48900         call dword ptr [0x89e4b4]
// 0056c445  c784246401000018000000 mov dword ptr [esp + 0x164], 0x18
// 0056c450  e83bf3ffff           call 0x56b790
// 0056c455  0fb6051329a400       movzx eax, byte ptr [0xa42913]
// 0056c45c  50                   push eax
// 0056c45d  8d4c2410             lea ecx, [esp + 0x10]
// 0056c461  51                   push ecx
// 0056c462  e889efffff           call 0x56b3f0
// 0056c467  83c408               add esp, 8
// 0056c46a  8d4c240c             lea ecx, [esp + 0xc]
// 0056c46e  89bc2464010000       mov dword ptr [esp + 0x164], edi
// 0056c475  ff15c4e48900         call dword ptr [0x89e4c4]
// 0056c47b  685caf8c00           push 0x8caf5c
// 0056c480  8d4c2410             lea ecx, [esp + 0x10]
// 0056c484  ff15b4e48900         call dword ptr [0x89e4b4]
// 0056c48a  c784246401000019000000 mov dword ptr [esp + 0x164], 0x19
// 0056c495  e8f6f2ffff           call 0x56b790
// 0056c49a  0fb6151429a400       movzx edx, byte ptr [0xa42914]
// 0056c4a1  52                   push edx
// 0056c4a2  8d442410             lea eax, [esp + 0x10]
// 0056c4a6  50                   push eax
// 0056c4a7  e844efffff           call 0x56b3f0
// 0056c4ac  83c408               add esp, 8
// 0056c4af  89bc2464010000       mov dword ptr [esp + 0x164], edi
// 0056c4b6  8d4c240c             lea ecx, [esp + 0xc]
// 0056c4ba  ff15c4e48900         call dword ptr [0x89e4c4]
// 0056c4c0  6850af8c00           push 0x8caf50
// 0056c4c5  8d4c2410             lea ecx, [esp + 0x10]
// 0056c4c9  ff15b4e48900         call dword ptr [0x89e4b4]
// 0056c4cf  c78424640100001a000000 mov dword ptr [esp + 0x164], 0x1a
// 0056c4da  e8b1f2ffff           call 0x56b790
// 0056c4df  0fb60d1029a400       movzx ecx, byte ptr [0xa42910]
// 0056c4e6  51                   push ecx
// 0056c4e7  8d542410             lea edx, [esp + 0x10]
// 0056c4eb  52                   push edx
// 0056c4ec  e8ffeeffff           call 0x56b3f0
// 0056c4f1  83c408               add esp, 8
// 0056c4f4  8d4c240c             lea ecx, [esp + 0xc]
// 0056c4f8  89bc2464010000       mov dword ptr [esp + 0x164], edi
// 0056c4ff  ff15c4e48900         call dword ptr [0x89e4c4]
// 0056c505  8bce                 mov ecx, esi
// 0056c507  e834d10000           call 0x579640
// 0056c50c  6816d28a00           push 0x8ad216
// 0056c511  8d8c249c000000       lea ecx, [esp + 0x9c]
// 0056c518  ff15b4e48900         call dword ptr [0x89e4b4]
// 0056c51e  6816d28a00           push 0x8ad216
// 0056c523  8d4c2448             lea ecx, [esp + 0x48]
// 0056c527  c78424680100001b000000 mov dword ptr [esp + 0x168], 0x1b
// 0056c532  ff15b4e48900         call dword ptr [0x89e4b4]
// 0056c538  6816d28a00           push 0x8ad216
// 0056c53d  8d8c2480000000       lea ecx, [esp + 0x80]
// 0056c544  c68424680100001c     mov byte ptr [esp + 0x168], 0x1c
// 0056c54c  ff15b4e48900         call dword ptr [0x89e4b4]
// 0056c552  6816d28a00           push 0x8ad216
// 0056c557  8d4c242c             lea ecx, [esp + 0x2c]
// 0056c55b  c68424680100001d     mov byte ptr [esp + 0x168], 0x1d
// 0056c563  ff15b4e48900         call dword ptr [0x89e4b4]
// 0056c569  6816d28a00           push 0x8ad216
// 0056c56e  8d4c2464             lea ecx, [esp + 0x64]
// 0056c572  c68424680100001e     mov byte ptr [esp + 0x168], 0x1e
// 0056c57a  ff15b4e48900         call dword ptr [0x89e4b4]
// 0056c580  b31f                 mov bl, 0x1f
// 0056c582  68d4ff8b00           push 0x8bffd4
// 0056c587  8d4c2410             lea ecx, [esp + 0x10]
// 0056c58b  889c2468010000       mov byte ptr [esp + 0x168], bl
// 0056c592  ff15b4e48900         call dword ptr [0x89e4b4]
// 0056c598  8d842498000000       lea eax, [esp + 0x98]
// 0056c59f  50                   push eax
// 0056c5a0  8d4c2448             lea ecx, [esp + 0x48]
// 0056c5a4  51                   push ecx
// 0056c5a5  8d942484000000       lea edx, [esp + 0x84]
// 0056c5ac  52                   push edx
// 0056c5ad  8d442434             lea eax, [esp + 0x34]
// 0056c5b1  50                   push eax
// 0056c5b2  8d4c2470             lea ecx, [esp + 0x70]
// 0056c5b6  51                   push ecx
// 0056c5b7  8d542420             lea edx, [esp + 0x20]
// 0056c5bb  52                   push edx
// 0056c5bc  8bce                 mov ecx, esi
// 0056c5be  c684247c01000020     mov byte ptr [esp + 0x17c], 0x20
// 0056c5c6  e845dc0000           call 0x57a210
// 0056c5cb  8d4c240c             lea ecx, [esp + 0xc]
// 0056c5cf  889c2464010000       mov byte ptr [esp + 0x164], bl
// 0056c5d6  ff15c4e48900         call dword ptr [0x89e4c4]
// 0056c5dc  8d4c2460             lea ecx, [esp + 0x60]
// 0056c5e0  c68424640100001e     mov byte ptr [esp + 0x164], 0x1e
// 0056c5e8  ff15c4e48900         call dword ptr [0x89e4c4]
// 0056c5ee  8d4c2428             lea ecx, [esp + 0x28]
// 0056c5f2  c68424640100001d     mov byte ptr [esp + 0x164], 0x1d
// 0056c5fa  ff15c4e48900         call dword ptr [0x89e4c4]
// 0056c600  8d4c247c             lea ecx, [esp + 0x7c]
// 0056c604  c68424640100001c     mov byte ptr [esp + 0x164], 0x1c
// 0056c60c  ff15c4e48900         call dword ptr [0x89e4c4]
// 0056c612  8d4c2444             lea ecx, [esp + 0x44]
// 0056c616  c68424640100001b     mov byte ptr [esp + 0x164], 0x1b
// 0056c61e  ff15c4e48900         call dword ptr [0x89e4c4]
// 0056c624  8d8c2498000000       lea ecx, [esp + 0x98]
// 0056c62b  89bc2464010000       mov dword ptr [esp + 0x164], edi
// 0056c632  ff15c4e48900         call dword ptr [0x89e4c4]
// 0056c638  8bce                 mov ecx, esi
// 0056c63a  e8e1d60000           call 0x579d20
// 0056c63f  8bce                 mov ecx, esi
// 0056c641  e8dad60000           call 0x579d20
// 0056c646  6816d28a00           push 0x8ad216
// 0056c64b  8d8c249c000000       lea ecx, [esp + 0x9c]
// 0056c652  ff15b4e48900         call dword ptr [0x89e4b4]
// 0056c658  6816d28a00           push 0x8ad216
// 0056c65d  8d4c2448             lea ecx, [esp + 0x48]
// 0056c661  c784246801000021000000 mov dword ptr [esp + 0x168], 0x21
// 0056c66c  ff15b4e48900         call dword ptr [0x89e4b4]
// 0056c672  6816d28a00           push 0x8ad216
// 0056c677  8d8c2480000000       lea ecx, [esp + 0x80]
// 0056c67e  c684246801000022     mov byte ptr [esp + 0x168], 0x22
// 0056c686  ff15b4e48900         call dword ptr [0x89e4b4]
// 0056c68c  6816d28a00           push 0x8ad216
// 0056c691  8d4c242c             lea ecx, [esp + 0x2c]
// 0056c695  c684246801000023     mov byte ptr [esp + 0x168], 0x23
// 0056c69d  ff15b4e48900         call dword ptr [0x89e4b4]
// 0056c6a3  68e0ff8b00           push 0x8bffe0
// 0056c6a8  8d4c2464             lea ecx, [esp + 0x64]
// 0056c6ac  c684246801000024     mov byte ptr [esp + 0x168], 0x24
// 0056c6b4  ff15b4e48900         call dword ptr [0x89e4b4]
// 0056c6ba  b325                 mov bl, 0x25
// 0056c6bc  6868248c00           push 0x8c2468
// 0056c6c1  8d4c2410             lea ecx, [esp + 0x10]
// 0056c6c5  889c2468010000       mov byte ptr [esp + 0x168], bl
// 0056c6cc  ff15b4e48900         call dword ptr [0x89e4b4]
// 0056c6d2  8d842498000000       lea eax, [esp + 0x98]
// 0056c6d9  50                   push eax
// 0056c6da  8d4c2448             lea ecx, [esp + 0x48]
// 0056c6de  51                   push ecx
// 0056c6df  8d942484000000       lea edx, [esp + 0x84]
// 0056c6e6  52                   push edx
// 0056c6e7  8d442434             lea eax, [esp + 0x34]
// 0056c6eb  50                   push eax
// 0056c6ec  8d4c2470             lea ecx, [esp + 0x70]
// 0056c6f0  51                   push ecx
// 0056c6f1  8d542420             lea edx, [esp + 0x20]
// 0056c6f5  52                   push edx
// 0056c6f6  8bce                 mov ecx, esi
// 0056c6f8  c684247c01000026     mov byte ptr [esp + 0x17c], 0x26
// 0056c700  e80bdb0000           call 0x57a210
// 0056c705  8d4c240c             lea ecx, [esp + 0xc]
// 0056c709  889c2464010000       mov byte ptr [esp + 0x164], bl
// 0056c710  ff15c4e48900         call dword ptr [0x89e4c4]
// 0056c716  8d4c2460             lea ecx, [esp + 0x60]
// 0056c71a  c684246401000024     mov byte ptr [esp + 0x164], 0x24
// 0056c722  ff15c4e48900         call dword ptr [0x89e4c4]
// 0056c728  8d4c2428             lea ecx, [esp + 0x28]
// 0056c72c  c684246401000023     mov byte ptr [esp + 0x164], 0x23
// 0056c734  ff15c4e48900         call dword ptr [0x89e4c4]
// 0056c73a  8d4c247c             lea ecx, [esp + 0x7c]
// 0056c73e  c684246401000022     mov byte ptr [esp + 0x164], 0x22
// 0056c746  ff15c4e48900         call dword ptr [0x89e4c4]
// 0056c74c  8d4c2444             lea ecx, [esp + 0x44]
// 0056c750  c684246401000021     mov byte ptr [esp + 0x164], 0x21
// 0056c758  ff15c4e48900         call dword ptr [0x89e4c4]
// 0056c75e  8d8c2498000000       lea ecx, [esp + 0x98]
// 0056c765  89bc2464010000       mov dword ptr [esp + 0x164], edi
// 0056c76c  ff15c4e48900         call dword ptr [0x89e4c4]
// 0056c772  8bce                 mov ecx, esi
// 0056c774  e8a7d50000           call 0x579d20
// 0056c779  8bce                 mov ecx, esi
// 0056c77b  e890ce0000           call 0x579610
// 0056c780  6840af8c00           push 0x8caf40
// 0056c785  8d4c2410             lea ecx, [esp + 0x10]
// 0056c789  ff15b4e48900         call dword ptr [0x89e4b4]
// 0056c78f  8d44240c             lea eax, [esp + 0xc]
// 0056c793  68e4ed0000           push 0xede4
// 0056c798  50                   push eax
// 0056c799  c784246c01000027000000 mov dword ptr [esp + 0x16c], 0x27
// 0056c7a4  e897edffff           call 0x56b540
// 0056c7a9  83c408               add esp, 8
// 0056c7ac  8d4c240c             lea ecx, [esp + 0xc]
// 0056c7b0  89bc2464010000       mov dword ptr [esp + 0x164], edi
// 0056c7b7  ff15c4e48900         call dword ptr [0x89e4c4]
// 0056c7bd  6830af8c00           push 0x8caf30
// 0056c7c2  8d4c2410             lea ecx, [esp + 0x10]
// 0056c7c6  ff15b4e48900         call dword ptr [0x89e4b4]
// 0056c7cc  c784246401000028000000 mov dword ptr [esp + 0x164], 0x28
// 0056c7d7  e8f4f5ffff           call 0x56bdd0
// 0056c7dc  50                   push eax
// 0056c7dd  8d4c2410             lea ecx, [esp + 0x10]
// 0056c7e1  51                   push ecx
// 0056c7e2  e8c9eaffff           call 0x56b2b0
// 0056c7e7  83c408               add esp, 8
// 0056c7ea  8d4c240c             lea ecx, [esp + 0xc]
// 0056c7ee  89bc2464010000       mov dword ptr [esp + 0x164], edi
// 0056c7f5  ff15c4e48900         call dword ptr [0x89e4c4]
// 0056c7fb  8bce                 mov ecx, esi
// 0056c7fd  e83ece0000           call 0x579640
// 0056c802  6816d28a00           push 0x8ad216
// 0056c807  8d8c2444010000       lea ecx, [esp + 0x144]
// 0056c80e  ff15b4e48900         call dword ptr [0x89e4b4]
// 0056c814  6816d28a00           push 0x8ad216
// 0056c819  8d8c240c010000       lea ecx, [esp + 0x10c]
// 0056c820  c784246801000029000000 mov dword ptr [esp + 0x168], 0x29
// 0056c82b  ff15b4e48900         call dword ptr [0x89e4b4]
// 0056c831  6816d28a00           push 0x8ad216
// 0056c836  8d8c24d4000000       lea ecx, [esp + 0xd4]
// 0056c83d  c68424680100002a     mov byte ptr [esp + 0x168], 0x2a
// 0056c845  ff15b4e48900         call dword ptr [0x89e4b4]
// 0056c84b  6816d28a00           push 0x8ad216
// 0056c850  8d8c2428010000       lea ecx, [esp + 0x128]
// 0056c857  c68424680100002b     mov byte ptr [esp + 0x168], 0x2b
// 0056c85f  ff15b4e48900         call dword ptr [0x89e4b4]
// 0056c865  6816d28a00           push 0x8ad216
// 0056c86a  8d8c24f0000000       lea ecx, [esp + 0xf0]
// 0056c871  c68424680100002c     mov byte ptr [esp + 0x168], 0x2c
// 0056c879  ff15b4e48900         call dword ptr [0x89e4b4]
// 0056c87f  b32d                 mov bl, 0x2d
// 0056c881  68d4ff8b00           push 0x8bffd4
// 0056c886  8d8c24b8000000       lea ecx, [esp + 0xb8]
// 0056c88d  889c2468010000       mov byte ptr [esp + 0x168], bl
// 0056c894  ff15b4e48900         call dword ptr [0x89e4b4]
// 0056c89a  8d942440010000       lea edx, [esp + 0x140]
// 0056c8a1  52                   push edx
// 0056c8a2  8d84240c010000       lea eax, [esp + 0x10c]
// 0056c8a9  50                   push eax
// 0056c8aa  8d8c24d8000000       lea ecx, [esp + 0xd8]
// 0056c8b1  51                   push ecx
// 0056c8b2  8d942430010000       lea edx, [esp + 0x130]
// 0056c8b9  52                   push edx
// 0056c8ba  8d8424fc000000       lea eax, [esp + 0xfc]
// 0056c8c1  50                   push eax
// 0056c8c2  8d8c24c8000000       lea ecx, [esp + 0xc8]
// 0056c8c9  51                   push ecx
// 0056c8ca  8bce                 mov ecx, esi
// 0056c8cc  c684247c0100002e     mov byte ptr [esp + 0x17c], 0x2e
// 0056c8d4  e837d90000           call 0x57a210
// 0056c8d9  8d8c24b4000000       lea ecx, [esp + 0xb4]
// 0056c8e0  889c2464010000       mov byte ptr [esp + 0x164], bl
// 0056c8e7  ff15c4e48900         call dword ptr [0x89e4c4]
// 0056c8ed  8d8c24ec000000       lea ecx, [esp + 0xec]
// 0056c8f4  c68424640100002c     mov byte ptr [esp + 0x164], 0x2c
// 0056c8fc  ff15c4e48900         call dword ptr [0x89e4c4]
// 0056c902  8d8c2424010000       lea ecx, [esp + 0x124]
// 0056c909  c68424640100002b     mov byte ptr [esp + 0x164], 0x2b
// 0056c911  ff15c4e48900         call dword ptr [0x89e4c4]
// 0056c917  8d8c24d0000000       lea ecx, [esp + 0xd0]
// 0056c91e  c68424640100002a     mov byte ptr [esp + 0x164], 0x2a
// 0056c926  ff15c4e48900         call dword ptr [0x89e4c4]
// 0056c92c  8d8c2408010000       lea ecx, [esp + 0x108]
// 0056c933  c684246401000029     mov byte ptr [esp + 0x164], 0x29
// 0056c93b  ff15c4e48900         call dword ptr [0x89e4c4]
// 0056c941  89bc2464010000       mov dword ptr [esp + 0x164], edi
// 0056c948  8d8c2440010000       lea ecx, [esp + 0x140]
// 0056c94f  ff15c4e48900         call dword ptr [0x89e4c4]
// 0056c955  8bce                 mov ecx, esi
// 0056c957  e8c4d30000           call 0x579d20
// 0056c95c  8bce                 mov ecx, esi
// 0056c95e  e8bdd30000           call 0x579d20
// 0056c963  8b8c245c010000       mov ecx, dword ptr [esp + 0x15c]
// 0056c96a  5f                   pop edi
// 0056c96b  5e                   pop esi
// 0056c96c  5b                   pop ebx
// 0056c96d  64890d00000000       mov dword ptr fs:[0], ecx
// 0056c974  81c45c010000         add esp, 0x15c
// 0056c97a  c3                   ret 
// library g3d-6.09/G3Dcpp\System.cpp (function ?describeSystem@System@G3D@@SAXAAVTextOutput@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
