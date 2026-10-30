// roc 2009-12 00728400  unit: boost::iostreams::Uinput::?$filtering_stream  size: 515 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00728400
//
// 00728400  6aff                 push -1
// 00728402  6872f19400           push 0x94f172
// 00728407  64a100000000         mov eax, dword ptr fs:[0]
// 0072840d  50                   push eax
// 0072840e  64892500000000       mov dword ptr fs:[0], esp
// 00728415  83ec54               sub esp, 0x54
// 00728418  53                   push ebx
// 00728419  55                   push ebp
// 0072841a  56                   push esi
// 0072841b  8bf1                 mov esi, ecx
// 0072841d  57                   push edi
// 0072841e  8d4e08               lea ecx, [esi + 8]
// 00728421  ff1528b59800         call dword ptr [0x98b528]
// 00728427  8d6e24               lea ebp, [esi + 0x24]
// 0072842a  8bcd                 mov ecx, ebp
// 0072842c  896c2414             mov dword ptr [esp + 0x14], ebp
// 00728430  ff1528b59800         call dword ptr [0x98b528]
// 00728436  8b7c2474             mov edi, dword ptr [esp + 0x74]
// 0072843a  33c0                 xor eax, eax
// 0072843c  894648               mov dword ptr [esi + 0x48], eax
// 0072843f  89464c               mov dword ptr [esi + 0x4c], eax
// 00728442  6a01                 push 1
// 00728444  8d442478             lea eax, [esp + 0x78]
// 00728448  50                   push eax
// 00728449  8bcf                 mov ecx, edi
// 0072844b  c74640ff000000       mov dword ptr [esi + 0x40], 0xff
// 00728452  e869e1ffff           call 0x7265c0
// 00728457  83f801               cmp eax, 1
// 0072845a  0f8589010000         jne 0x7285e9
// 00728460  0fb6442474           movzx eax, byte ptr [esp + 0x74]
// 00728465  83f81f               cmp eax, 0x1f
// 00728468  0f857b010000         jne 0x7285e9
// 0072846e  6a01                 push 1
// 00728470  8d4c2478             lea ecx, [esp + 0x78]
// 00728474  51                   push ecx
// 00728475  8bcf                 mov ecx, edi
// 00728477  e844e1ffff           call 0x7265c0
// 0072847c  83f801               cmp eax, 1
// 0072847f  0f8564010000         jne 0x7285e9
// 00728485  0fb6442474           movzx eax, byte ptr [esp + 0x74]
// 0072848a  3d8b000000           cmp eax, 0x8b
// 0072848f  0f8554010000         jne 0x7285e9
// 00728495  6a01                 push 1
// 00728497  8d542478             lea edx, [esp + 0x78]
// 0072849b  52                   push edx
// 0072849c  8bcf                 mov ecx, edi
// 0072849e  e81de1ffff           call 0x7265c0
// 007284a3  83f801               cmp eax, 1
// 007284a6  7505                 jne 0x7284ad
// 007284a8  0fb6442474           movzx eax, byte ptr [esp + 0x74]
// 007284ad  83f8ff               cmp eax, -1
// 007284b0  0f8433010000         je 0x7285e9
// 007284b6  57                   push edi
// 007284b7  e8b4e9ffff           call 0x726e70
// 007284bc  8bd8                 mov ebx, eax
// 007284be  83c404               add esp, 4
// 007284c1  895c2410             mov dword ptr [esp + 0x10], ebx
// 007284c5  83fbff               cmp ebx, -1
// 007284c8  0f841b010000         je 0x7285e9
// 007284ce  6a04                 push 4
// 007284d0  57                   push edi
// 007284d1  e81af7ffff           call 0x727bf0
// 007284d6  6a04                 push 4
// 007284d8  57                   push edi
// 007284d9  894648               mov dword ptr [esi + 0x48], eax
// 007284dc  c7464c00000000       mov dword ptr [esi + 0x4c], 0
// 007284e3  e8b8e9ffff           call 0x726ea0
// 007284e8  6a04                 push 4
// 007284ea  57                   push edi
// 007284eb  e8b0e9ffff           call 0x726ea0
// 007284f0  0fb6c0               movzx eax, al
// 007284f3  83c418               add esp, 0x18
// 007284f6  894640               mov dword ptr [esi + 0x40], eax
// 007284f9  f6c301               test bl, 1
// 007284fc  7404                 je 0x728502
// 007284fe  834e5004             or dword ptr [esi + 0x50], 4
// 00728502  f6c304               test bl, 4
// 00728505  744a                 je 0x728551
// 00728507  6a04                 push 4
// 00728509  57                   push edi
// 0072850a  e891e9ffff           call 0x726ea0
// 0072850f  0fb6e8               movzx ebp, al
// 00728512  6a04                 push 4
// 00728514  57                   push edi
// 00728515  c1e508               shl ebp, 8
// 00728518  e883e9ffff           call 0x726ea0
// 0072851d  0fb6d8               movzx ebx, al
// 00728520  83c410               add esp, 0x10
// 00728523  03dd                 add ebx, ebp
// 00728525  8bcb                 mov ecx, ebx
// 00728527  4b                   dec ebx
// 00728528  85c9                 test ecx, ecx
// 0072852a  741d                 je 0x728549
// 0072852c  6a01                 push 1
// 0072852e  8d542478             lea edx, [esp + 0x78]
// 00728532  52                   push edx
// 00728533  8bcf                 mov ecx, edi
// 00728535  e886e0ffff           call 0x7265c0
// 0072853a  83f801               cmp eax, 1
// 0072853d  7505                 jne 0x728544
// 0072853f  0fb6442474           movzx eax, byte ptr [esp + 0x74]
// 00728544  83f8ff               cmp eax, -1
// 00728547  75dc                 jne 0x728525
// 00728549  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0072854d  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00728551  f6c308               test bl, 8
// 00728554  7431                 je 0x728587
// 00728556  57                   push edi
// 00728557  8d44241c             lea eax, [esp + 0x1c]
// 0072855b  50                   push eax
// 0072855c  8bce                 mov ecx, esi
// 0072855e  e88de9ffff           call 0x726ef0
// 00728563  50                   push eax
// 00728564  8d4e08               lea ecx, [esi + 8]
// 00728567  c744247000000000     mov dword ptr [esp + 0x70], 0
// 0072856f  ff159cb69800         call dword ptr [0x98b69c]
// 00728575  8d4c2418             lea ecx, [esp + 0x18]
// 00728579  c744246cffffffff     mov dword ptr [esp + 0x6c], 0xffffffff
// 00728581  ff15e4b69800         call dword ptr [0x98b6e4]
// 00728587  f6c310               test bl, 0x10
// 0072858a  7430                 je 0x7285bc
// 0072858c  57                   push edi
// 0072858d  8d4c244c             lea ecx, [esp + 0x4c]
// 00728591  51                   push ecx
// 00728592  8bce                 mov ecx, esi
// 00728594  e857e9ffff           call 0x726ef0
// 00728599  50                   push eax
// 0072859a  8bcd                 mov ecx, ebp
// 0072859c  c744247001000000     mov dword ptr [esp + 0x70], 1
// 007285a4  ff159cb69800         call dword ptr [0x98b69c]
// 007285aa  8d4c2448             lea ecx, [esp + 0x48]
// 007285ae  c744246cffffffff     mov dword ptr [esp + 0x6c], 0xffffffff
// 007285b6  ff15e4b69800         call dword ptr [0x98b6e4]
// 007285bc  f6c302               test bl, 2
// 007285bf  7413                 je 0x7285d4
// 007285c1  6a04                 push 4
// 007285c3  57                   push edi
// 007285c4  e8d7e8ffff           call 0x726ea0
// 007285c9  6a04                 push 4
// 007285cb  57                   push edi
// 007285cc  e8cfe8ffff           call 0x726ea0
// 007285d1  83c410               add esp, 0x10
// 007285d4  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 007285d8  5f                   pop edi
// 007285d9  5e                   pop esi
// 007285da  5d                   pop ebp
// 007285db  5b                   pop ebx
// 007285dc  64890d00000000       mov dword ptr fs:[0], ecx
// 007285e3  83c460               add esp, 0x60
// 007285e6  c20400               ret 4
// 007285e9  6a04                 push 4
// 007285eb  8d4c241c             lea ecx, [esp + 0x1c]
// 007285ef  e85cdaffff           call 0x726050
// 007285f4  68188aac00           push 0xac8a18
// 007285f9  8d54241c             lea edx, [esp + 0x1c]
// 007285fd  52                   push edx
// 007285fe  e875c20c00           call 0x7f4878
// copied from an identical function in another client (function ??$read_header@V?$non_blocking_adapter@V?$linked_streambuf@DU?$char_traits@D@std@@@detail@iostreams@boost@@@iostreams@boost@@@?$basic_gzip_decompressor@V?$allocator@D@std@@@iostreams@boost@@AAEXAAV?$non_blocking_adapter@V?$linked_streambuf@DU?$char_traits@D@std@@@detail@iostreams@boost@@@12@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_01f403e5b5979552.cpp