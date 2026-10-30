// roc 2010-06 006a6880  unit: boost::iostreams::Uinput::?$filtering_stream  size: 515 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006a6880
//
// 006a6880  6aff                 push -1
// 006a6882  68222d9a00           push 0x9a2d22
// 006a6887  64a100000000         mov eax, dword ptr fs:[0]
// 006a688d  50                   push eax
// 006a688e  64892500000000       mov dword ptr fs:[0], esp
// 006a6895  83ec54               sub esp, 0x54
// 006a6898  53                   push ebx
// 006a6899  55                   push ebp
// 006a689a  56                   push esi
// 006a689b  8bf1                 mov esi, ecx
// 006a689d  57                   push edi
// 006a689e  8d4e08               lea ecx, [esi + 8]
// 006a68a1  ff15d4a69e00         call dword ptr [0x9ea6d4]
// 006a68a7  8d6e24               lea ebp, [esi + 0x24]
// 006a68aa  8bcd                 mov ecx, ebp
// 006a68ac  896c2414             mov dword ptr [esp + 0x14], ebp
// 006a68b0  ff15d4a69e00         call dword ptr [0x9ea6d4]
// 006a68b6  8b7c2474             mov edi, dword ptr [esp + 0x74]
// 006a68ba  33c0                 xor eax, eax
// 006a68bc  894648               mov dword ptr [esi + 0x48], eax
// 006a68bf  89464c               mov dword ptr [esi + 0x4c], eax
// 006a68c2  6a01                 push 1
// 006a68c4  8d442478             lea eax, [esp + 0x78]
// 006a68c8  50                   push eax
// 006a68c9  8bcf                 mov ecx, edi
// 006a68cb  c74640ff000000       mov dword ptr [esi + 0x40], 0xff
// 006a68d2  e869e1ffff           call 0x6a4a40
// 006a68d7  83f801               cmp eax, 1
// 006a68da  0f8589010000         jne 0x6a6a69
// 006a68e0  0fb6442474           movzx eax, byte ptr [esp + 0x74]
// 006a68e5  83f81f               cmp eax, 0x1f
// 006a68e8  0f857b010000         jne 0x6a6a69
// 006a68ee  6a01                 push 1
// 006a68f0  8d4c2478             lea ecx, [esp + 0x78]
// 006a68f4  51                   push ecx
// 006a68f5  8bcf                 mov ecx, edi
// 006a68f7  e844e1ffff           call 0x6a4a40
// 006a68fc  83f801               cmp eax, 1
// 006a68ff  0f8564010000         jne 0x6a6a69
// 006a6905  0fb6442474           movzx eax, byte ptr [esp + 0x74]
// 006a690a  3d8b000000           cmp eax, 0x8b
// 006a690f  0f8554010000         jne 0x6a6a69
// 006a6915  6a01                 push 1
// 006a6917  8d542478             lea edx, [esp + 0x78]
// 006a691b  52                   push edx
// 006a691c  8bcf                 mov ecx, edi
// 006a691e  e81de1ffff           call 0x6a4a40
// 006a6923  83f801               cmp eax, 1
// 006a6926  7505                 jne 0x6a692d
// 006a6928  0fb6442474           movzx eax, byte ptr [esp + 0x74]
// 006a692d  83f8ff               cmp eax, -1
// 006a6930  0f8433010000         je 0x6a6a69
// 006a6936  57                   push edi
// 006a6937  e8b4e9ffff           call 0x6a52f0
// 006a693c  8bd8                 mov ebx, eax
// 006a693e  83c404               add esp, 4
// 006a6941  895c2410             mov dword ptr [esp + 0x10], ebx
// 006a6945  83fbff               cmp ebx, -1
// 006a6948  0f841b010000         je 0x6a6a69
// 006a694e  6a04                 push 4
// 006a6950  57                   push edi
// 006a6951  e81af7ffff           call 0x6a6070
// 006a6956  6a04                 push 4
// 006a6958  57                   push edi
// 006a6959  894648               mov dword ptr [esi + 0x48], eax
// 006a695c  c7464c00000000       mov dword ptr [esi + 0x4c], 0
// 006a6963  e8b8e9ffff           call 0x6a5320
// 006a6968  6a04                 push 4
// 006a696a  57                   push edi
// 006a696b  e8b0e9ffff           call 0x6a5320
// 006a6970  0fb6c0               movzx eax, al
// 006a6973  83c418               add esp, 0x18
// 006a6976  894640               mov dword ptr [esi + 0x40], eax
// 006a6979  f6c301               test bl, 1
// 006a697c  7404                 je 0x6a6982
// 006a697e  834e5004             or dword ptr [esi + 0x50], 4
// 006a6982  f6c304               test bl, 4
// 006a6985  744a                 je 0x6a69d1
// 006a6987  6a04                 push 4
// 006a6989  57                   push edi
// 006a698a  e891e9ffff           call 0x6a5320
// 006a698f  0fb6e8               movzx ebp, al
// 006a6992  6a04                 push 4
// 006a6994  57                   push edi
// 006a6995  c1e508               shl ebp, 8
// 006a6998  e883e9ffff           call 0x6a5320
// 006a699d  0fb6d8               movzx ebx, al
// 006a69a0  83c410               add esp, 0x10
// 006a69a3  03dd                 add ebx, ebp
// 006a69a5  8bcb                 mov ecx, ebx
// 006a69a7  4b                   dec ebx
// 006a69a8  85c9                 test ecx, ecx
// 006a69aa  741d                 je 0x6a69c9
// 006a69ac  6a01                 push 1
// 006a69ae  8d542478             lea edx, [esp + 0x78]
// 006a69b2  52                   push edx
// 006a69b3  8bcf                 mov ecx, edi
// 006a69b5  e886e0ffff           call 0x6a4a40
// 006a69ba  83f801               cmp eax, 1
// 006a69bd  7505                 jne 0x6a69c4
// 006a69bf  0fb6442474           movzx eax, byte ptr [esp + 0x74]
// 006a69c4  83f8ff               cmp eax, -1
// 006a69c7  75dc                 jne 0x6a69a5
// 006a69c9  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 006a69cd  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 006a69d1  f6c308               test bl, 8
// 006a69d4  7431                 je 0x6a6a07
// 006a69d6  57                   push edi
// 006a69d7  8d44241c             lea eax, [esp + 0x1c]
// 006a69db  50                   push eax
// 006a69dc  8bce                 mov ecx, esi
// 006a69de  e88de9ffff           call 0x6a5370
// 006a69e3  50                   push eax
// 006a69e4  8d4e08               lea ecx, [esi + 8]
// 006a69e7  c744247000000000     mov dword ptr [esp + 0x70], 0
// 006a69ef  ff1568a49e00         call dword ptr [0x9ea468]
// 006a69f5  8d4c2418             lea ecx, [esp + 0x18]
// 006a69f9  c744246cffffffff     mov dword ptr [esp + 0x6c], 0xffffffff
// 006a6a01  ff1500a49e00         call dword ptr [0x9ea400]
// 006a6a07  f6c310               test bl, 0x10
// 006a6a0a  7430                 je 0x6a6a3c
// 006a6a0c  57                   push edi
// 006a6a0d  8d4c244c             lea ecx, [esp + 0x4c]
// 006a6a11  51                   push ecx
// 006a6a12  8bce                 mov ecx, esi
// 006a6a14  e857e9ffff           call 0x6a5370
// 006a6a19  50                   push eax
// 006a6a1a  8bcd                 mov ecx, ebp
// 006a6a1c  c744247001000000     mov dword ptr [esp + 0x70], 1
// 006a6a24  ff1568a49e00         call dword ptr [0x9ea468]
// 006a6a2a  8d4c2448             lea ecx, [esp + 0x48]
// 006a6a2e  c744246cffffffff     mov dword ptr [esp + 0x6c], 0xffffffff
// 006a6a36  ff1500a49e00         call dword ptr [0x9ea400]
// 006a6a3c  f6c302               test bl, 2
// 006a6a3f  7413                 je 0x6a6a54
// 006a6a41  6a04                 push 4
// 006a6a43  57                   push edi
// 006a6a44  e8d7e8ffff           call 0x6a5320
// 006a6a49  6a04                 push 4
// 006a6a4b  57                   push edi
// 006a6a4c  e8cfe8ffff           call 0x6a5320
// 006a6a51  83c410               add esp, 0x10
// 006a6a54  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 006a6a58  5f                   pop edi
// 006a6a59  5e                   pop esi
// 006a6a5a  5d                   pop ebp
// 006a6a5b  5b                   pop ebx
// 006a6a5c  64890d00000000       mov dword ptr fs:[0], ecx
// 006a6a63  83c460               add esp, 0x60
// 006a6a66  c20400               ret 4
// 006a6a69  6a04                 push 4
// 006a6a6b  8d4c241c             lea ecx, [esp + 0x1c]
// 006a6a6f  e8ecdaffff           call 0x6a4560
// 006a6a74  685872b300           push 0xb37258
// 006a6a79  8d54241c             lea edx, [esp + 0x1c]
// 006a6a7d  52                   push edx
// 006a6a7e  e82f1f1000           call 0x7a89b2
// copied from an identical function in another client (function ??$read_header@V?$non_blocking_adapter@V?$linked_streambuf@DU?$char_traits@D@std@@@detail@iostreams@boost@@@iostreams@boost@@@?$basic_gzip_decompressor@V?$allocator@D@std@@@iostreams@boost@@AAEXAAV?$non_blocking_adapter@V?$linked_streambuf@DU?$char_traits@D@std@@@detail@iostreams@boost@@@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_01f403e5b5979552.cpp