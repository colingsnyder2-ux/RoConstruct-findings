// roc 2011-06 006e7470  unit: std::D::V?$allocator::V?$basic_gzip_decompressor::?$stream_buffer  size: 515 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006e7470
//
// 006e7470  6aff                 push -1
// 006e7472  68a2439f00           push 0x9f43a2
// 006e7477  64a100000000         mov eax, dword ptr fs:[0]
// 006e747d  50                   push eax
// 006e747e  64892500000000       mov dword ptr fs:[0], esp
// 006e7485  83ec54               sub esp, 0x54
// 006e7488  53                   push ebx
// 006e7489  55                   push ebp
// 006e748a  56                   push esi
// 006e748b  8bf1                 mov esi, ecx
// 006e748d  57                   push edi
// 006e748e  8d4e08               lea ecx, [esi + 8]
// 006e7491  ff156405a400         call dword ptr [0xa40564]
// 006e7497  8d6e24               lea ebp, [esi + 0x24]
// 006e749a  8bcd                 mov ecx, ebp
// 006e749c  896c2414             mov dword ptr [esp + 0x14], ebp
// 006e74a0  ff156405a400         call dword ptr [0xa40564]
// 006e74a6  8b7c2474             mov edi, dword ptr [esp + 0x74]
// 006e74aa  33c0                 xor eax, eax
// 006e74ac  894648               mov dword ptr [esi + 0x48], eax
// 006e74af  89464c               mov dword ptr [esi + 0x4c], eax
// 006e74b2  6a01                 push 1
// 006e74b4  8d442478             lea eax, [esp + 0x78]
// 006e74b8  50                   push eax
// 006e74b9  8bcf                 mov ecx, edi
// 006e74bb  c74640ff000000       mov dword ptr [esi + 0x40], 0xff
// 006e74c2  e829e3ffff           call 0x6e57f0
// 006e74c7  83f801               cmp eax, 1
// 006e74ca  0f8589010000         jne 0x6e7659
// 006e74d0  0fb6442474           movzx eax, byte ptr [esp + 0x74]
// 006e74d5  83f81f               cmp eax, 0x1f
// 006e74d8  0f857b010000         jne 0x6e7659
// 006e74de  6a01                 push 1
// 006e74e0  8d4c2478             lea ecx, [esp + 0x78]
// 006e74e4  51                   push ecx
// 006e74e5  8bcf                 mov ecx, edi
// 006e74e7  e804e3ffff           call 0x6e57f0
// 006e74ec  83f801               cmp eax, 1
// 006e74ef  0f8564010000         jne 0x6e7659
// 006e74f5  0fb6442474           movzx eax, byte ptr [esp + 0x74]
// 006e74fa  3d8b000000           cmp eax, 0x8b
// 006e74ff  0f8554010000         jne 0x6e7659
// 006e7505  6a01                 push 1
// 006e7507  8d542478             lea edx, [esp + 0x78]
// 006e750b  52                   push edx
// 006e750c  8bcf                 mov ecx, edi
// 006e750e  e8dde2ffff           call 0x6e57f0
// 006e7513  83f801               cmp eax, 1
// 006e7516  7505                 jne 0x6e751d
// 006e7518  0fb6442474           movzx eax, byte ptr [esp + 0x74]
// 006e751d  83f8ff               cmp eax, -1
// 006e7520  0f8433010000         je 0x6e7659
// 006e7526  57                   push edi
// 006e7527  e874ebffff           call 0x6e60a0
// 006e752c  8bd8                 mov ebx, eax
// 006e752e  83c404               add esp, 4
// 006e7531  895c2410             mov dword ptr [esp + 0x10], ebx
// 006e7535  83fbff               cmp ebx, -1
// 006e7538  0f841b010000         je 0x6e7659
// 006e753e  6a04                 push 4
// 006e7540  57                   push edi
// 006e7541  e83af7ffff           call 0x6e6c80
// 006e7546  6a04                 push 4
// 006e7548  57                   push edi
// 006e7549  894648               mov dword ptr [esi + 0x48], eax
// 006e754c  c7464c00000000       mov dword ptr [esi + 0x4c], 0
// 006e7553  e878ebffff           call 0x6e60d0
// 006e7558  6a04                 push 4
// 006e755a  57                   push edi
// 006e755b  e870ebffff           call 0x6e60d0
// 006e7560  0fb6c0               movzx eax, al
// 006e7563  83c418               add esp, 0x18
// 006e7566  894640               mov dword ptr [esi + 0x40], eax
// 006e7569  f6c301               test bl, 1
// 006e756c  7404                 je 0x6e7572
// 006e756e  834e5004             or dword ptr [esi + 0x50], 4
// 006e7572  f6c304               test bl, 4
// 006e7575  744a                 je 0x6e75c1
// 006e7577  6a04                 push 4
// 006e7579  57                   push edi
// 006e757a  e851ebffff           call 0x6e60d0
// 006e757f  0fb6e8               movzx ebp, al
// 006e7582  6a04                 push 4
// 006e7584  57                   push edi
// 006e7585  c1e508               shl ebp, 8
// 006e7588  e843ebffff           call 0x6e60d0
// 006e758d  0fb6d8               movzx ebx, al
// 006e7590  83c410               add esp, 0x10
// 006e7593  03dd                 add ebx, ebp
// 006e7595  8bcb                 mov ecx, ebx
// 006e7597  4b                   dec ebx
// 006e7598  85c9                 test ecx, ecx
// 006e759a  741d                 je 0x6e75b9
// 006e759c  6a01                 push 1
// 006e759e  8d542478             lea edx, [esp + 0x78]
// 006e75a2  52                   push edx
// 006e75a3  8bcf                 mov ecx, edi
// 006e75a5  e846e2ffff           call 0x6e57f0
// 006e75aa  83f801               cmp eax, 1
// 006e75ad  7505                 jne 0x6e75b4
// 006e75af  0fb6442474           movzx eax, byte ptr [esp + 0x74]
// 006e75b4  83f8ff               cmp eax, -1
// 006e75b7  75dc                 jne 0x6e7595
// 006e75b9  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 006e75bd  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 006e75c1  f6c308               test bl, 8
// 006e75c4  7431                 je 0x6e75f7
// 006e75c6  57                   push edi
// 006e75c7  8d44241c             lea eax, [esp + 0x1c]
// 006e75cb  50                   push eax
// 006e75cc  8bce                 mov ecx, esi
// 006e75ce  e84debffff           call 0x6e6120
// 006e75d3  50                   push eax
// 006e75d4  8d4e08               lea ecx, [esi + 8]
// 006e75d7  c744247000000000     mov dword ptr [esp + 0x70], 0
// 006e75df  ff15a804a400         call dword ptr [0xa404a8]
// 006e75e5  8d4c2418             lea ecx, [esp + 0x18]
// 006e75e9  c744246cffffffff     mov dword ptr [esp + 0x6c], 0xffffffff
// 006e75f1  ff15d004a400         call dword ptr [0xa404d0]
// 006e75f7  f6c310               test bl, 0x10
// 006e75fa  7430                 je 0x6e762c
// 006e75fc  57                   push edi
// 006e75fd  8d4c244c             lea ecx, [esp + 0x4c]
// 006e7601  51                   push ecx
// 006e7602  8bce                 mov ecx, esi
// 006e7604  e817ebffff           call 0x6e6120
// 006e7609  50                   push eax
// 006e760a  8bcd                 mov ecx, ebp
// 006e760c  c744247001000000     mov dword ptr [esp + 0x70], 1
// 006e7614  ff15a804a400         call dword ptr [0xa404a8]
// 006e761a  8d4c2448             lea ecx, [esp + 0x48]
// 006e761e  c744246cffffffff     mov dword ptr [esp + 0x6c], 0xffffffff
// 006e7626  ff15d004a400         call dword ptr [0xa404d0]
// 006e762c  f6c302               test bl, 2
// 006e762f  7413                 je 0x6e7644
// 006e7631  6a04                 push 4
// 006e7633  57                   push edi
// 006e7634  e897eaffff           call 0x6e60d0
// 006e7639  6a04                 push 4
// 006e763b  57                   push edi
// 006e763c  e88feaffff           call 0x6e60d0
// 006e7641  83c410               add esp, 0x10
// 006e7644  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 006e7648  5f                   pop edi
// 006e7649  5e                   pop esi
// 006e764a  5d                   pop ebp
// 006e764b  5b                   pop ebx
// 006e764c  64890d00000000       mov dword ptr fs:[0], ecx
// 006e7653  83c460               add esp, 0x60
// 006e7656  c20400               ret 4
// 006e7659  6a04                 push 4
// 006e765b  8d4c241c             lea ecx, [esp + 0x1c]
// 006e765f  e89cdcffff           call 0x6e5300
// 006e7664  68300abc00           push 0xbc0a30
// 006e7669  8d54241c             lea edx, [esp + 0x1c]
// 006e766d  52                   push edx
// 006e766e  e8393a1200           call 0x80b0ac
// copied from an identical function in another client (function ??$read_header@V?$non_blocking_adapter@V?$linked_streambuf@DU?$char_traits@D@std@@@detail@iostreams@boost@@@iostreams@boost@@@?$basic_gzip_decompressor@V?$allocator@D@std@@@iostreams@boost@@AAEXAAV?$non_blocking_adapter@V?$linked_streambuf@DU?$char_traits@D@std@@@detail@iostreams@boost@@@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_01f403e5b5979552.cpp