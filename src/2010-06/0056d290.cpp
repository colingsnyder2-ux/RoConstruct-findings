// roc 2010-06 0056d290  unit: seg_00560000  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0056d290
//
// 0056d290  83ec38               sub esp, 0x38
// 0056d293  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0056d297  8b442444             mov eax, dword ptr [esp + 0x44]
// 0056d29b  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 0056d29f  57                   push edi
// 0056d2a0  8b7c2444             mov edi, dword ptr [esp + 0x44]
// 0056d2a4  6a38                 push 0x38
// 0056d2a6  894c240c             mov dword ptr [esp + 0xc], ecx
// 0056d2aa  89442408             mov dword ptr [esp + 8], eax
// 0056d2ae  8b07                 mov eax, dword ptr [edi]
// 0056d2b0  8d4c2408             lea ecx, [esp + 8]
// 0056d2b4  68e82aa200           push 0xa22ae8
// 0056d2b9  51                   push ecx
// 0056d2ba  8954241c             mov dword ptr [esp + 0x1c], edx
// 0056d2be  89442420             mov dword ptr [esp + 0x20], eax
// 0056d2c2  c744243000000000     mov dword ptr [esp + 0x30], 0
// 0056d2ca  c744243400000000     mov dword ptr [esp + 0x34], 0
// 0056d2d2  e839710000           call 0x574410
// 0056d2d7  83c40c               add esp, 0xc
// 0056d2da  85c0                 test eax, eax
// 0056d2dc  755c                 jne 0x56d33a
// 0056d2de  56                   push esi
// 0056d2df  8d542408             lea edx, [esp + 8]
// 0056d2e3  6a04                 push 4
// 0056d2e5  52                   push edx
// 0056d2e6  e825720000           call 0x574510
// 0056d2eb  8bf0                 mov esi, eax
// 0056d2ed  83c408               add esp, 8
// 0056d2f0  83fe01               cmp esi, 1
// 0056d2f3  7431                 je 0x56d326
// 0056d2f5  8d442408             lea eax, [esp + 8]
// 0056d2f9  50                   push eax
// 0056d2fa  e821870000           call 0x575a20
// 0056d2ff  83c404               add esp, 4
// 0056d302  83fe02               cmp esi, 2
// 0056d305  7414                 je 0x56d31b
// 0056d307  83fefb               cmp esi, -5
// 0056d30a  7507                 jne 0x56d313
// 0056d30c  837c240c00           cmp dword ptr [esp + 0xc], 0
// 0056d311  7408                 je 0x56d31b
// 0056d313  8bc6                 mov eax, esi
// 0056d315  5e                   pop esi
// 0056d316  5f                   pop edi
// 0056d317  83c438               add esp, 0x38
// 0056d31a  c3                   ret 
// 0056d31b  5e                   pop esi
// 0056d31c  b8fdffffff           mov eax, 0xfffffffd
// 0056d321  5f                   pop edi
// 0056d322  83c438               add esp, 0x38
// 0056d325  c3                   ret 
// 0056d326  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0056d32a  8d542408             lea edx, [esp + 8]
// 0056d32e  52                   push edx
// 0056d32f  890f                 mov dword ptr [edi], ecx
// 0056d331  e8ea860000           call 0x575a20
// 0056d336  83c404               add esp, 4
// 0056d339  5e                   pop esi
// 0056d33a  5f                   pop edi
// 0056d33b  83c438               add esp, 0x38
// 0056d33e  c3                   ret 
// library zlib-1.2.3/uncompr.c (function _uncompress)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 uncompr.c
