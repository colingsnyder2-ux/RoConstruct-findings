// from server: 100% by auto
// roc 2008-06 0051d7b0  unit: seg_00510000  size: 143 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0051d7b0
//
// 0051d7b0  57                   push edi
// 0051d7b1  8b7c2408             mov edi, dword ptr [esp + 8]
// 0051d7b5  85ff                 test edi, edi
// 0051d7b7  0f8480000000         je 0x51d83d
// 0051d7bd  56                   push esi
// 0051d7be  8b742410             mov esi, dword ptr [esp + 0x10]
// 0051d7c2  85f6                 test esi, esi
// 0051d7c4  7476                 je 0x51d83c
// 0051d7c6  53                   push ebx
// 0051d7c7  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0051d7cb  55                   push ebp
// 0051d7cc  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 0051d7d0  85ed                 test ebp, ebp
// 0051d7d2  743a                 je 0x51d80e
// 0051d7d4  6a00                 push 0
// 0051d7d6  6800200000           push 0x2000
// 0051d7db  56                   push esi
// 0051d7dc  57                   push edi
// 0051d7dd  e8ee050000           call 0x51ddd0
// 0051d7e2  6800010000           push 0x100
// 0051d7e7  57                   push edi
// 0051d7e8  e8b3cc0000           call 0x52a4a0
// 0051d7ed  89464c               mov dword ptr [esi + 0x4c], eax
// 0051d7f0  53                   push ebx
// 0051d7f1  898788010000         mov dword ptr [edi + 0x188], eax
// 0051d7f7  8b464c               mov eax, dword ptr [esi + 0x4c]
// 0051d7fa  55                   push ebp
// 0051d7fb  50                   push eax
// 0051d7fc  e8df3f1800           call 0x6a17e0
// 0051d801  83c424               add esp, 0x24
// 0051d804  818eb800000000200000 or dword ptr [esi + 0xb8], 0x2000
// 0051d80e  8b442424             mov eax, dword ptr [esp + 0x24]
// 0051d812  85c0                 test eax, eax
// 0051d814  741c                 je 0x51d832
// 0051d816  8b08                 mov ecx, dword ptr [eax]
// 0051d818  894e50               mov dword ptr [esi + 0x50], ecx
// 0051d81b  8b5004               mov edx, dword ptr [eax + 4]
// 0051d81e  895654               mov dword ptr [esi + 0x54], edx
// 0051d821  668b4008             mov ax, word ptr [eax + 8]
// 0051d825  66894658             mov word ptr [esi + 0x58], ax
// 0051d829  85db                 test ebx, ebx
// 0051d82b  7505                 jne 0x51d832
// 0051d82d  bb01000000           mov ebx, 1
// 0051d832  834e0810             or dword ptr [esi + 8], 0x10
// 0051d836  5d                   pop ebp
// 0051d837  66895e16             mov word ptr [esi + 0x16], bx
// 0051d83b  5b                   pop ebx
// 0051d83c  5e                   pop esi
// 0051d83d  5f                   pop edi
// 0051d83e  c3                   ret 
// library libpng-1.2.5/pngset.c (function _png_set_tRNS)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngset.c
