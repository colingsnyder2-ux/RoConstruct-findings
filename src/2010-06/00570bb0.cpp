// roc 2010-06 00570bb0  unit: G3D::LineSegment  size: 211 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00570bb0
//
// 00570bb0  8b442408             mov eax, dword ptr [esp + 8]
// 00570bb4  56                   push esi
// 00570bb5  8b742408             mov esi, dword ptr [esp + 8]
// 00570bb9  8b8e04010000         mov ecx, dword ptr [esi + 0x104]
// 00570bbf  57                   push edi
// 00570bc0  8d7e74               lea edi, [esi + 0x74]
// 00570bc3  41                   inc ecx
// 00570bc4  8907                 mov dword ptr [edi], eax
// 00570bc6  894e78               mov dword ptr [esi + 0x78], ecx
// 00570bc9  8da42400000000       lea esp, [esp]
// 00570bd0  6a00                 push 0
// 00570bd2  57                   push edi
// 00570bd3  e8081b0000           call 0x5726e0
// 00570bd8  83c408               add esp, 8
// 00570bdb  85c0                 test eax, eax
// 00570bdd  741b                 je 0x570bfa
// 00570bdf  8b868c000000         mov eax, dword ptr [esi + 0x8c]
// 00570be5  85c0                 test eax, eax
// 00570be7  7403                 je 0x570bec
// 00570be9  50                   push eax
// 00570bea  eb05                 jmp 0x570bf1
// 00570bec  68140fa200           push 0xa20f14
// 00570bf1  56                   push esi
// 00570bf2  e8b90e0000           call 0x571ab0
// 00570bf7  83c408               add esp, 8
// 00570bfa  83be8400000000       cmp dword ptr [esi + 0x84], 0
// 00570c01  752f                 jne 0x570c32
// 00570c03  8b96b0000000         mov edx, dword ptr [esi + 0xb0]
// 00570c09  8b86ac000000         mov eax, dword ptr [esi + 0xac]
// 00570c0f  52                   push edx
// 00570c10  50                   push eax
// 00570c11  56                   push esi
// 00570c12  e849ecffff           call 0x56f860
// 00570c17  8b8eac000000         mov ecx, dword ptr [esi + 0xac]
// 00570c1d  8b96b0000000         mov edx, dword ptr [esi + 0xb0]
// 00570c23  83c40c               add esp, 0xc
// 00570c26  898e80000000         mov dword ptr [esi + 0x80], ecx
// 00570c2c  899684000000         mov dword ptr [esi + 0x84], edx
// 00570c32  837e7800             cmp dword ptr [esi + 0x78], 0
// 00570c36  7598                 jne 0x570bd0
// 00570c38  8b86e8000000         mov eax, dword ptr [esi + 0xe8]
// 00570c3e  85c0                 test eax, eax
// 00570c40  7412                 je 0x570c54
// 00570c42  8b8eec000000         mov ecx, dword ptr [esi + 0xec]
// 00570c48  898ee8000000         mov dword ptr [esi + 0xe8], ecx
// 00570c4e  8986ec000000         mov dword ptr [esi + 0xec], eax
// 00570c54  56                   push esi
// 00570c55  e8e6fcffff           call 0x570940
// 00570c5a  ff8654010000         inc dword ptr [esi + 0x154]
// 00570c60  8b8650010000         mov eax, dword ptr [esi + 0x150]
// 00570c66  8b8e54010000         mov ecx, dword ptr [esi + 0x154]
// 00570c6c  83c404               add esp, 4
// 00570c6f  85c0                 test eax, eax
// 00570c71  760d                 jbe 0x570c80
// 00570c73  3bc8                 cmp ecx, eax
// 00570c75  7209                 jb 0x570c80
// 00570c77  56                   push esi
// 00570c78  e82324ffff           call 0x5630a0
// 00570c7d  83c404               add esp, 4
// 00570c80  5f                   pop edi
// 00570c81  5e                   pop esi
// 00570c82  c3                   ret 
// library libpng-1.2.6/pngwutil.c (function _png_write_filtered_row)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.6 pngwutil.c
