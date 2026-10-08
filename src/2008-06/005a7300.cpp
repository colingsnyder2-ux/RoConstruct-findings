// from server: 100% by auto
// roc 2008-06 005a7300  unit: RBX::Log  size: 240 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a7300
//
// 005a7300  6aff                 push -1
// 005a7302  68d62f7d00           push 0x7d2fd6
// 005a7307  64a100000000         mov eax, dword ptr fs:[0]
// 005a730d  50                   push eax
// 005a730e  64892500000000       mov dword ptr fs:[0], esp
// 005a7315  83ec18               sub esp, 0x18
// 005a7318  56                   push esi
// 005a7319  57                   push edi
// 005a731a  6a18                 push 0x18
// 005a731c  e8ff950f00           call 0x6a0920
// 005a7321  83c404               add esp, 4
// 005a7324  89442408             mov dword ptr [esp + 8], eax
// 005a7328  c744242800000000     mov dword ptr [esp + 0x28], 0
// 005a7330  85c0                 test eax, eax
// 005a7332  740b                 je 0x5a733f
// 005a7334  8bc8                 mov ecx, eax
// 005a7336  e89520e8ff           call 0x4293d0
// 005a733b  8bf8                 mov edi, eax
// 005a733d  eb02                 jmp 0x5a7341
// 005a733f  33ff                 xor edi, edi
// 005a7341  897c2408             mov dword ptr [esp + 8], edi
// 005a7345  6a08                 push 8
// 005a7347  c744242c01000000     mov dword ptr [esp + 0x2c], 1
// 005a734f  e8cc950f00           call 0x6a0920
// 005a7354  83c404               add esp, 4
// 005a7357  8944240c             mov dword ptr [esp + 0xc], eax
// 005a735b  c644242802           mov byte ptr [esp + 0x28], 2
// 005a7360  85c0                 test eax, eax
// 005a7362  740b                 je 0x5a736f
// 005a7364  8bc8                 mov ecx, eax
// 005a7366  e825d9feff           call 0x594c90
// 005a736b  8bf0                 mov esi, eax
// 005a736d  eb02                 jmp 0x5a7371
// 005a736f  33f6                 xor esi, esi
// 005a7371  8974240c             mov dword ptr [esp + 0xc], esi
// 005a7375  c644242803           mov byte ptr [esp + 0x28], 3
// 005a737a  85f6                 test esi, esi
// 005a737c  7518                 jne 0x5a7396
// 005a737e  8d4c2410             lea ecx, [esp + 0x10]
// 005a7382  e8a910fcff           call 0x568430
// 005a7387  68304f8d00           push 0x8d4f30
// 005a738c  8d442414             lea eax, [esp + 0x14]
// 005a7390  50                   push eax
// 005a7391  e8f6a10f00           call 0x6a158c
// 005a7396  e87560edff           call 0x47d410
// 005a739b  ff15a8228000         call dword ptr [0x8022a8]
// 005a73a1  a330c49400           mov dword ptr [0x94c430], eax
// 005a73a6  83f8ff               cmp eax, -1
// 005a73a9  7517                 jne 0x5a73c2
// 005a73ab  8bce                 mov ecx, esi
// 005a73ad  c644242801           mov byte ptr [esp + 0x28], 1
// 005a73b2  e8f9d8feff           call 0x594cb0
// 005a73b7  56                   push esi
// 005a73b8  e8bd920f00           call 0x6a067a
// 005a73bd  83c404               add esp, 4
// 005a73c0  eb14                 jmp 0x5a73d6
// 005a73c2  c744240800000000     mov dword ptr [esp + 8], 0
// 005a73ca  893d5c6b9700         mov dword ptr [0x976b5c], edi
// 005a73d0  8935586b9700         mov dword ptr [0x976b58], esi
// 005a73d6  8d4c2408             lea ecx, [esp + 8]
// 005a73da  e8a1fcffff           call 0x5a7080
// 005a73df  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005a73e3  5f                   pop edi
// 005a73e4  5e                   pop esi
// 005a73e5  64890d00000000       mov dword ptr fs:[0], ecx
// 005a73ec  83c424               add esp, 0x24
// 005a73ef  c3                   ret 
// library boost-1.34.1/libs\thread\src\tss.cpp (function ?init_tss_data@?A0x568608d8@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/thread/src/tss.cpp
