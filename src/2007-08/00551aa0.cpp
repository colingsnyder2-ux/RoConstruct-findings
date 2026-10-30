// roc 2007-08 00551aa0  unit: std::D::V?$allocator::V?$basic_gzip_compressor::?$stream_buffer  size: 517 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00551aa0
//
// 00551aa0  6aff                 push -1
// 00551aa2  68322b7500           push 0x752b32
// 00551aa7  64a100000000         mov eax, dword ptr fs:[0]
// 00551aad  50                   push eax
// 00551aae  64892500000000       mov dword ptr fs:[0], esp
// 00551ab5  83ec54               sub esp, 0x54
// 00551ab8  53                   push ebx
// 00551ab9  55                   push ebp
// 00551aba  56                   push esi
// 00551abb  8bf1                 mov esi, ecx
// 00551abd  57                   push edi
// 00551abe  8d4e08               lea ecx, [esi + 8]
// 00551ac1  ff1534e67700         call dword ptr [0x77e634]
// 00551ac7  8d6e24               lea ebp, [esi + 0x24]
// 00551aca  8bcd                 mov ecx, ebp
// 00551acc  896c2414             mov dword ptr [esp + 0x14], ebp
// 00551ad0  ff1534e67700         call dword ptr [0x77e634]
// 00551ad6  8b7c2474             mov edi, dword ptr [esp + 0x74]
// 00551ada  33c0                 xor eax, eax
// 00551adc  894648               mov dword ptr [esi + 0x48], eax
// 00551adf  89464c               mov dword ptr [esi + 0x4c], eax
// 00551ae2  6a01                 push 1
// 00551ae4  8d442478             lea eax, [esp + 0x78]
// 00551ae8  50                   push eax
// 00551ae9  8bcf                 mov ecx, edi
// 00551aeb  c74640ff000000       mov dword ptr [esi + 0x40], 0xff
// 00551af2  e8b9caffff           call 0x54e5b0
// 00551af7  83f801               cmp eax, 1
// 00551afa  0f858b010000         jne 0x551c8b
// 00551b00  0fb6442474           movzx eax, byte ptr [esp + 0x74]
// 00551b05  83f81f               cmp eax, 0x1f
// 00551b08  0f857d010000         jne 0x551c8b
// 00551b0e  6a01                 push 1
// 00551b10  8d4c2478             lea ecx, [esp + 0x78]
// 00551b14  51                   push ecx
// 00551b15  8bcf                 mov ecx, edi
// 00551b17  e894caffff           call 0x54e5b0
// 00551b1c  83f801               cmp eax, 1
// 00551b1f  0f8566010000         jne 0x551c8b
// 00551b25  0fb6442474           movzx eax, byte ptr [esp + 0x74]
// 00551b2a  3d8b000000           cmp eax, 0x8b
// 00551b2f  0f8556010000         jne 0x551c8b
// 00551b35  6a01                 push 1
// 00551b37  8d542478             lea edx, [esp + 0x78]
// 00551b3b  52                   push edx
// 00551b3c  8bcf                 mov ecx, edi
// 00551b3e  e86dcaffff           call 0x54e5b0
// 00551b43  83f801               cmp eax, 1
// 00551b46  7505                 jne 0x551b4d
// 00551b48  0fb6442474           movzx eax, byte ptr [esp + 0x74]
// 00551b4d  83f8ff               cmp eax, -1
// 00551b50  0f8435010000         je 0x551c8b
// 00551b56  57                   push edi
// 00551b57  e864e4ffff           call 0x54ffc0
// 00551b5c  8bd8                 mov ebx, eax
// 00551b5e  83c404               add esp, 4
// 00551b61  83fbff               cmp ebx, -1
// 00551b64  895c2410             mov dword ptr [esp + 0x10], ebx
// 00551b68  0f841d010000         je 0x551c8b
// 00551b6e  6a04                 push 4
// 00551b70  57                   push edi
// 00551b71  e8aaedffff           call 0x550920
// 00551b76  6a04                 push 4
// 00551b78  57                   push edi
// 00551b79  894648               mov dword ptr [esi + 0x48], eax
// 00551b7c  c7464c00000000       mov dword ptr [esi + 0x4c], 0
// 00551b83  e868e4ffff           call 0x54fff0
// 00551b88  6a04                 push 4
// 00551b8a  57                   push edi
// 00551b8b  e860e4ffff           call 0x54fff0
// 00551b90  0fb6c0               movzx eax, al
// 00551b93  83c418               add esp, 0x18
// 00551b96  f6c301               test bl, 1
// 00551b99  894640               mov dword ptr [esi + 0x40], eax
// 00551b9c  7404                 je 0x551ba2
// 00551b9e  834e5004             or dword ptr [esi + 0x50], 4
// 00551ba2  f6c304               test bl, 4
// 00551ba5  744c                 je 0x551bf3
// 00551ba7  6a04                 push 4
// 00551ba9  57                   push edi
// 00551baa  e841e4ffff           call 0x54fff0
// 00551baf  0fb6e8               movzx ebp, al
// 00551bb2  6a04                 push 4
// 00551bb4  57                   push edi
// 00551bb5  c1e508               shl ebp, 8
// 00551bb8  e833e4ffff           call 0x54fff0
// 00551bbd  0fb6d8               movzx ebx, al
// 00551bc0  83c410               add esp, 0x10
// 00551bc3  03dd                 add ebx, ebp
// 00551bc5  8bcb                 mov ecx, ebx
// 00551bc7  83eb01               sub ebx, 1
// 00551bca  85c9                 test ecx, ecx
// 00551bcc  741d                 je 0x551beb
// 00551bce  6a01                 push 1
// 00551bd0  8d542478             lea edx, [esp + 0x78]
// 00551bd4  52                   push edx
// 00551bd5  8bcf                 mov ecx, edi
// 00551bd7  e8d4c9ffff           call 0x54e5b0
// 00551bdc  83f801               cmp eax, 1
// 00551bdf  7505                 jne 0x551be6
// 00551be1  0fb6442474           movzx eax, byte ptr [esp + 0x74]
// 00551be6  83f8ff               cmp eax, -1
// 00551be9  75da                 jne 0x551bc5
// 00551beb  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00551bef  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00551bf3  f6c308               test bl, 8
// 00551bf6  7431                 je 0x551c29
// 00551bf8  57                   push edi
// 00551bf9  8d44241c             lea eax, [esp + 0x1c]
// 00551bfd  50                   push eax
// 00551bfe  8bce                 mov ecx, esi
// 00551c00  e83be4ffff           call 0x550040
// 00551c05  50                   push eax
// 00551c06  8d4e08               lea ecx, [esi + 8]
// 00551c09  c744247000000000     mov dword ptr [esp + 0x70], 0
// 00551c11  ff1590e67700         call dword ptr [0x77e690]
// 00551c17  8d4c2418             lea ecx, [esp + 0x18]
// 00551c1b  c744246cffffffff     mov dword ptr [esp + 0x6c], 0xffffffff
// 00551c23  ff15ace67700         call dword ptr [0x77e6ac]
// 00551c29  f6c310               test bl, 0x10
// 00551c2c  7430                 je 0x551c5e
// 00551c2e  57                   push edi
// 00551c2f  8d4c244c             lea ecx, [esp + 0x4c]
// 00551c33  51                   push ecx
// 00551c34  8bce                 mov ecx, esi
// 00551c36  e805e4ffff           call 0x550040
// 00551c3b  50                   push eax
// 00551c3c  8bcd                 mov ecx, ebp
// 00551c3e  c744247001000000     mov dword ptr [esp + 0x70], 1
// 00551c46  ff1590e67700         call dword ptr [0x77e690]
// 00551c4c  8d4c2448             lea ecx, [esp + 0x48]
// 00551c50  c744246cffffffff     mov dword ptr [esp + 0x6c], 0xffffffff
// 00551c58  ff15ace67700         call dword ptr [0x77e6ac]
// 00551c5e  f6c302               test bl, 2
// 00551c61  7413                 je 0x551c76
// 00551c63  6a04                 push 4
// 00551c65  57                   push edi
// 00551c66  e885e3ffff           call 0x54fff0
// 00551c6b  6a04                 push 4
// 00551c6d  57                   push edi
// 00551c6e  e87de3ffff           call 0x54fff0
// 00551c73  83c410               add esp, 0x10
// 00551c76  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 00551c7a  5f                   pop edi
// 00551c7b  5e                   pop esi
// 00551c7c  5d                   pop ebp
// 00551c7d  5b                   pop ebx
// 00551c7e  64890d00000000       mov dword ptr fs:[0], ecx
// 00551c85  83c460               add esp, 0x60
// 00551c88  c20400               ret 4
// 00551c8b  6a04                 push 4
// 00551c8d  8d4c241c             lea ecx, [esp + 0x1c]
// 00551c91  e8fac3ffff           call 0x54e090
// 00551c96  6814a48500           push 0x85a414
// 00551c9b  8d54241c             lea edx, [esp + 0x1c]
// 00551c9f  52                   push edx
// 00551ca0  e8f9ee0d00           call 0x630b9e
// copied from an identical function in another client (function ??$read_header@V?$non_blocking_adapter@V?$linked_streambuf@DU?$char_traits@D@std@@@detail@iostreams@boost@@@iostreams@boost@@@?$basic_gzip_decompressor@V?$allocator@D@std@@@iostreams@boost@@AAEXAAV?$non_blocking_adapter@V?$linked_streambuf@DU?$char_traits@D@std@@@detail@iostreams@boost@@@12@@Z)

// roc-cl: 50727
// roc-lang: cpp
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_01f403e5b5979552.cpp