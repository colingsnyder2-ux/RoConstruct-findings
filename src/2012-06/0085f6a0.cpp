// roc 2012-06 0085f6a0  unit: std::D::V?$allocator::V?$basic_gzip_decompressor::?$stream_buffer  size: 515 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0085f6a0
//
// 0085f6a0  6aff                 push -1
// 0085f6a2  6862e7ac00           push 0xace762
// 0085f6a7  64a100000000         mov eax, dword ptr fs:[0]
// 0085f6ad  50                   push eax
// 0085f6ae  64892500000000       mov dword ptr fs:[0], esp
// 0085f6b5  83ec54               sub esp, 0x54
// 0085f6b8  53                   push ebx
// 0085f6b9  55                   push ebp
// 0085f6ba  56                   push esi
// 0085f6bb  8bf1                 mov esi, ecx
// 0085f6bd  57                   push edi
// 0085f6be  8d4e08               lea ecx, [esi + 8]
// 0085f6c1  ff15a425b200         call dword ptr [0xb225a4]
// 0085f6c7  8d6e24               lea ebp, [esi + 0x24]
// 0085f6ca  8bcd                 mov ecx, ebp
// 0085f6cc  896c2414             mov dword ptr [esp + 0x14], ebp
// 0085f6d0  ff15a425b200         call dword ptr [0xb225a4]
// 0085f6d6  8b7c2474             mov edi, dword ptr [esp + 0x74]
// 0085f6da  33c0                 xor eax, eax
// 0085f6dc  894648               mov dword ptr [esi + 0x48], eax
// 0085f6df  89464c               mov dword ptr [esi + 0x4c], eax
// 0085f6e2  6a01                 push 1
// 0085f6e4  8d442478             lea eax, [esp + 0x78]
// 0085f6e8  50                   push eax
// 0085f6e9  8bcf                 mov ecx, edi
// 0085f6eb  c74640ff000000       mov dword ptr [esi + 0x40], 0xff
// 0085f6f2  e829e3ffff           call 0x85da20
// 0085f6f7  83f801               cmp eax, 1
// 0085f6fa  0f8589010000         jne 0x85f889
// 0085f700  0fb6442474           movzx eax, byte ptr [esp + 0x74]
// 0085f705  83f81f               cmp eax, 0x1f
// 0085f708  0f857b010000         jne 0x85f889
// 0085f70e  6a01                 push 1
// 0085f710  8d4c2478             lea ecx, [esp + 0x78]
// 0085f714  51                   push ecx
// 0085f715  8bcf                 mov ecx, edi
// 0085f717  e804e3ffff           call 0x85da20
// 0085f71c  83f801               cmp eax, 1
// 0085f71f  0f8564010000         jne 0x85f889
// 0085f725  0fb6442474           movzx eax, byte ptr [esp + 0x74]
// 0085f72a  3d8b000000           cmp eax, 0x8b
// 0085f72f  0f8554010000         jne 0x85f889
// 0085f735  6a01                 push 1
// 0085f737  8d542478             lea edx, [esp + 0x78]
// 0085f73b  52                   push edx
// 0085f73c  8bcf                 mov ecx, edi
// 0085f73e  e8dde2ffff           call 0x85da20
// 0085f743  83f801               cmp eax, 1
// 0085f746  7505                 jne 0x85f74d
// 0085f748  0fb6442474           movzx eax, byte ptr [esp + 0x74]
// 0085f74d  83f8ff               cmp eax, -1
// 0085f750  0f8433010000         je 0x85f889
// 0085f756  57                   push edi
// 0085f757  e874ebffff           call 0x85e2d0
// 0085f75c  8bd8                 mov ebx, eax
// 0085f75e  83c404               add esp, 4
// 0085f761  895c2410             mov dword ptr [esp + 0x10], ebx
// 0085f765  83fbff               cmp ebx, -1
// 0085f768  0f841b010000         je 0x85f889
// 0085f76e  6a04                 push 4
// 0085f770  57                   push edi
// 0085f771  e83af7ffff           call 0x85eeb0
// 0085f776  6a04                 push 4
// 0085f778  57                   push edi
// 0085f779  894648               mov dword ptr [esi + 0x48], eax
// 0085f77c  c7464c00000000       mov dword ptr [esi + 0x4c], 0
// 0085f783  e878ebffff           call 0x85e300
// 0085f788  6a04                 push 4
// 0085f78a  57                   push edi
// 0085f78b  e870ebffff           call 0x85e300
// 0085f790  0fb6c0               movzx eax, al
// 0085f793  83c418               add esp, 0x18
// 0085f796  894640               mov dword ptr [esi + 0x40], eax
// 0085f799  f6c301               test bl, 1
// 0085f79c  7404                 je 0x85f7a2
// 0085f79e  834e5004             or dword ptr [esi + 0x50], 4
// 0085f7a2  f6c304               test bl, 4
// 0085f7a5  744a                 je 0x85f7f1
// 0085f7a7  6a04                 push 4
// 0085f7a9  57                   push edi
// 0085f7aa  e851ebffff           call 0x85e300
// 0085f7af  0fb6e8               movzx ebp, al
// 0085f7b2  6a04                 push 4
// 0085f7b4  57                   push edi
// 0085f7b5  c1e508               shl ebp, 8
// 0085f7b8  e843ebffff           call 0x85e300
// 0085f7bd  0fb6d8               movzx ebx, al
// 0085f7c0  83c410               add esp, 0x10
// 0085f7c3  03dd                 add ebx, ebp
// 0085f7c5  8bcb                 mov ecx, ebx
// 0085f7c7  4b                   dec ebx
// 0085f7c8  85c9                 test ecx, ecx
// 0085f7ca  741d                 je 0x85f7e9
// 0085f7cc  6a01                 push 1
// 0085f7ce  8d542478             lea edx, [esp + 0x78]
// 0085f7d2  52                   push edx
// 0085f7d3  8bcf                 mov ecx, edi
// 0085f7d5  e846e2ffff           call 0x85da20
// 0085f7da  83f801               cmp eax, 1
// 0085f7dd  7505                 jne 0x85f7e4
// 0085f7df  0fb6442474           movzx eax, byte ptr [esp + 0x74]
// 0085f7e4  83f8ff               cmp eax, -1
// 0085f7e7  75dc                 jne 0x85f7c5
// 0085f7e9  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0085f7ed  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0085f7f1  f6c308               test bl, 8
// 0085f7f4  7431                 je 0x85f827
// 0085f7f6  57                   push edi
// 0085f7f7  8d44241c             lea eax, [esp + 0x1c]
// 0085f7fb  50                   push eax
// 0085f7fc  8bce                 mov ecx, esi
// 0085f7fe  e84debffff           call 0x85e350
// 0085f803  50                   push eax
// 0085f804  8d4e08               lea ecx, [esi + 8]
// 0085f807  c744247000000000     mov dword ptr [esp + 0x70], 0
// 0085f80f  ff155826b200         call dword ptr [0xb22658]
// 0085f815  8d4c2418             lea ecx, [esp + 0x18]
// 0085f819  c744246cffffffff     mov dword ptr [esp + 0x6c], 0xffffffff
// 0085f821  ff153c26b200         call dword ptr [0xb2263c]
// 0085f827  f6c310               test bl, 0x10
// 0085f82a  7430                 je 0x85f85c
// 0085f82c  57                   push edi
// 0085f82d  8d4c244c             lea ecx, [esp + 0x4c]
// 0085f831  51                   push ecx
// 0085f832  8bce                 mov ecx, esi
// 0085f834  e817ebffff           call 0x85e350
// 0085f839  50                   push eax
// 0085f83a  8bcd                 mov ecx, ebp
// 0085f83c  c744247001000000     mov dword ptr [esp + 0x70], 1
// 0085f844  ff155826b200         call dword ptr [0xb22658]
// 0085f84a  8d4c2448             lea ecx, [esp + 0x48]
// 0085f84e  c744246cffffffff     mov dword ptr [esp + 0x6c], 0xffffffff
// 0085f856  ff153c26b200         call dword ptr [0xb2263c]
// 0085f85c  f6c302               test bl, 2
// 0085f85f  7413                 je 0x85f874
// 0085f861  6a04                 push 4
// 0085f863  57                   push edi
// 0085f864  e897eaffff           call 0x85e300
// 0085f869  6a04                 push 4
// 0085f86b  57                   push edi
// 0085f86c  e88feaffff           call 0x85e300
// 0085f871  83c410               add esp, 0x10
// 0085f874  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 0085f878  5f                   pop edi
// 0085f879  5e                   pop esi
// 0085f87a  5d                   pop ebp
// 0085f87b  5b                   pop ebx
// 0085f87c  64890d00000000       mov dword ptr fs:[0], ecx
// 0085f883  83c460               add esp, 0x60
// 0085f886  c20400               ret 4
// 0085f889  6a04                 push 4
// 0085f88b  8d4c241c             lea ecx, [esp + 0x1c]
// 0085f88f  e82cdcffff           call 0x85d4c0
// 0085f894  68182cd200           push 0xd22c18
// 0085f899  8d54241c             lea edx, [esp + 0x1c]
// 0085f89d  52                   push edx
// 0085f89e  e8a1381200           call 0x983144
// copied from an identical function in another client (function ??$read_header@V?$non_blocking_adapter@V?$linked_streambuf@DU?$char_traits@D@std@@@detail@iostreams@boost@@@iostreams@boost@@@?$basic_gzip_decompressor@V?$allocator@D@std@@@iostreams@boost@@AAEXAAV?$non_blocking_adapter@V?$linked_streambuf@DU?$char_traits@D@std@@@detail@iostreams@boost@@@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_01f403e5b5979552.cpp