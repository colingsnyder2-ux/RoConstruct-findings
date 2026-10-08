// from server: 100% by auto
// roc 2009-06 0058d260  unit: seg_00580000  size: 211 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0058d260
//
// 0058d260  8b442408             mov eax, dword ptr [esp + 8]
// 0058d264  56                   push esi
// 0058d265  8b742408             mov esi, dword ptr [esp + 8]
// 0058d269  8b8e04010000         mov ecx, dword ptr [esi + 0x104]
// 0058d26f  57                   push edi
// 0058d270  8d7e74               lea edi, [esi + 0x74]
// 0058d273  41                   inc ecx
// 0058d274  8907                 mov dword ptr [edi], eax
// 0058d276  894e78               mov dword ptr [esi + 0x78], ecx
// 0058d279  8da42400000000       lea esp, [esp]
// 0058d280  6a00                 push 0
// 0058d282  57                   push edi
// 0058d283  e8081b0000           call 0x58ed90
// 0058d288  83c408               add esp, 8
// 0058d28b  85c0                 test eax, eax
// 0058d28d  741b                 je 0x58d2aa
// 0058d28f  8b868c000000         mov eax, dword ptr [esi + 0x8c]
// 0058d295  85c0                 test eax, eax
// 0058d297  7403                 je 0x58d29c
// 0058d299  50                   push eax
// 0058d29a  eb05                 jmp 0x58d2a1
// 0058d29c  6814c38c00           push 0x8cc314
// 0058d2a1  56                   push esi
// 0058d2a2  e8b90e0000           call 0x58e160
// 0058d2a7  83c408               add esp, 8
// 0058d2aa  83be8400000000       cmp dword ptr [esi + 0x84], 0
// 0058d2b1  752f                 jne 0x58d2e2
// 0058d2b3  8b96b0000000         mov edx, dword ptr [esi + 0xb0]
// 0058d2b9  8b86ac000000         mov eax, dword ptr [esi + 0xac]
// 0058d2bf  52                   push edx
// 0058d2c0  50                   push eax
// 0058d2c1  56                   push esi
// 0058d2c2  e829ecffff           call 0x58bef0
// 0058d2c7  8b8eac000000         mov ecx, dword ptr [esi + 0xac]
// 0058d2cd  8b96b0000000         mov edx, dword ptr [esi + 0xb0]
// 0058d2d3  83c40c               add esp, 0xc
// 0058d2d6  898e80000000         mov dword ptr [esi + 0x80], ecx
// 0058d2dc  899684000000         mov dword ptr [esi + 0x84], edx
// 0058d2e2  837e7800             cmp dword ptr [esi + 0x78], 0
// 0058d2e6  7598                 jne 0x58d280
// 0058d2e8  8b86e8000000         mov eax, dword ptr [esi + 0xe8]
// 0058d2ee  85c0                 test eax, eax
// 0058d2f0  7412                 je 0x58d304
// 0058d2f2  8b8eec000000         mov ecx, dword ptr [esi + 0xec]
// 0058d2f8  898ee8000000         mov dword ptr [esi + 0xe8], ecx
// 0058d2fe  8986ec000000         mov dword ptr [esi + 0xec], eax
// 0058d304  56                   push esi
// 0058d305  e8e6fcffff           call 0x58cff0
// 0058d30a  ff8654010000         inc dword ptr [esi + 0x154]
// 0058d310  8b8650010000         mov eax, dword ptr [esi + 0x150]
// 0058d316  8b8e54010000         mov ecx, dword ptr [esi + 0x154]
// 0058d31c  83c404               add esp, 4
// 0058d31f  85c0                 test eax, eax
// 0058d321  760d                 jbe 0x58d330
// 0058d323  3bc8                 cmp ecx, eax
// 0058d325  7209                 jb 0x58d330
// 0058d327  56                   push esi
// 0058d328  e82326ffff           call 0x57f950
// 0058d32d  83c404               add esp, 4
// 0058d330  5f                   pop edi
// 0058d331  5e                   pop esi
// 0058d332  c3                   ret 
// library libpng-1.2.6/pngwutil.c (function _png_write_filtered_row)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.6 pngwutil.c
