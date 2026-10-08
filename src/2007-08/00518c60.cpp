// from server: 100% by auto
// roc 2007-08 00518c60  unit: seg_00510000  size: 230 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00518c60
//
// 00518c60  8b442404             mov eax, dword ptr [esp + 4]
// 00518c64  8a5008               mov dl, byte ptr [eax + 8]
// 00518c67  f6c202               test dl, 2
// 00518c6a  0f84d5000000         je 0x518d45
// 00518c70  8b08                 mov ecx, dword ptr [eax]
// 00518c72  8a4009               mov al, byte ptr [eax + 9]
// 00518c75  3c08                 cmp al, 8
// 00518c77  56                   push esi
// 00518c78  755a                 jne 0x518cd4
// 00518c7a  80fa02               cmp dl, 2
// 00518c7d  7525                 jne 0x518ca4
// 00518c7f  85c9                 test ecx, ecx
// 00518c81  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00518c85  0f86b9000000         jbe 0x518d44
// 00518c8b  8bf1                 mov esi, ecx
// 00518c8d  8d4900               lea ecx, [ecx]
// 00518c90  8a08                 mov cl, byte ptr [eax]
// 00518c92  8a5002               mov dl, byte ptr [eax + 2]
// 00518c95  8810                 mov byte ptr [eax], dl
// 00518c97  884802               mov byte ptr [eax + 2], cl
// 00518c9a  83c003               add eax, 3
// 00518c9d  83ee01               sub esi, 1
// 00518ca0  75ee                 jne 0x518c90
// 00518ca2  5e                   pop esi
// 00518ca3  c3                   ret 
// 00518ca4  80fa06               cmp dl, 6
// 00518ca7  0f8597000000         jne 0x518d44
// 00518cad  85c9                 test ecx, ecx
// 00518caf  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00518cb3  0f868b000000         jbe 0x518d44
// 00518cb9  8bf1                 mov esi, ecx
// 00518cbb  eb03                 jmp 0x518cc0
// 00518cbd  8d4900               lea ecx, [ecx]
// 00518cc0  8a08                 mov cl, byte ptr [eax]
// 00518cc2  8a5002               mov dl, byte ptr [eax + 2]
// 00518cc5  8810                 mov byte ptr [eax], dl
// 00518cc7  884802               mov byte ptr [eax + 2], cl
// 00518cca  83c004               add eax, 4
// 00518ccd  83ee01               sub esi, 1
// 00518cd0  75ee                 jne 0x518cc0
// 00518cd2  5e                   pop esi
// 00518cd3  c3                   ret 
// 00518cd4  3c10                 cmp al, 0x10
// 00518cd6  756c                 jne 0x518d44
// 00518cd8  80fa02               cmp dl, 2
// 00518cdb  7535                 jne 0x518d12
// 00518cdd  85c9                 test ecx, ecx
// 00518cdf  7663                 jbe 0x518d44
// 00518ce1  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00518ce5  83c001               add eax, 1
// 00518ce8  8bf1                 mov esi, ecx
// 00518cea  8d9b00000000         lea ebx, [ebx]
// 00518cf0  0fb65003             movzx edx, byte ptr [eax + 3]
// 00518cf4  8a48ff               mov cl, byte ptr [eax - 1]
// 00518cf7  8850ff               mov byte ptr [eax - 1], dl
// 00518cfa  0fb65004             movzx edx, byte ptr [eax + 4]
// 00518cfe  884803               mov byte ptr [eax + 3], cl
// 00518d01  8a08                 mov cl, byte ptr [eax]
// 00518d03  8810                 mov byte ptr [eax], dl
// 00518d05  884804               mov byte ptr [eax + 4], cl
// 00518d08  83c006               add eax, 6
// 00518d0b  83ee01               sub esi, 1
// 00518d0e  75e0                 jne 0x518cf0
// 00518d10  5e                   pop esi
// 00518d11  c3                   ret 
// 00518d12  80fa06               cmp dl, 6
// 00518d15  752d                 jne 0x518d44
// 00518d17  85c9                 test ecx, ecx
// 00518d19  7629                 jbe 0x518d44
// 00518d1b  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00518d1f  83c001               add eax, 1
// 00518d22  8bf1                 mov esi, ecx
// 00518d24  0fb65003             movzx edx, byte ptr [eax + 3]
// 00518d28  8a48ff               mov cl, byte ptr [eax - 1]
// 00518d2b  8850ff               mov byte ptr [eax - 1], dl
// 00518d2e  0fb65004             movzx edx, byte ptr [eax + 4]
// 00518d32  884803               mov byte ptr [eax + 3], cl
// 00518d35  8a08                 mov cl, byte ptr [eax]
// 00518d37  8810                 mov byte ptr [eax], dl
// 00518d39  884804               mov byte ptr [eax + 4], cl
// 00518d3c  83c008               add eax, 8
// 00518d3f  83ee01               sub esi, 1
// 00518d42  75e0                 jne 0x518d24
// 00518d44  5e                   pop esi
// 00518d45  c3                   ret 
// library libpng-1.2.5/pngtrans.c (function _png_do_bgr)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngtrans.c
