// roc 2007-08 0051c460  unit: seg_00510000  size: 201 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0051c460
//
// 0051c460  8b442404             mov eax, dword ptr [esp + 4]
// 0051c464  8a4808               mov cl, byte ptr [eax + 8]
// 0051c467  f6c102               test cl, 2
// 0051c46a  0f84b8000000         je 0x51c528
// 0051c470  8b10                 mov edx, dword ptr [eax]
// 0051c472  8a4009               mov al, byte ptr [eax + 9]
// 0051c475  3c08                 cmp al, 8
// 0051c477  57                   push edi
// 0051c478  753a                 jne 0x51c4b4
// 0051c47a  80f902               cmp cl, 2
// 0051c47d  7507                 jne 0x51c486
// 0051c47f  bf03000000           mov edi, 3
// 0051c484  eb0e                 jmp 0x51c494
// 0051c486  80f906               cmp cl, 6
// 0051c489  0f8598000000         jne 0x51c527
// 0051c48f  bf04000000           mov edi, 4
// 0051c494  85d2                 test edx, edx
// 0051c496  0f868b000000         jbe 0x51c527
// 0051c49c  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0051c4a0  83c002               add eax, 2
// 0051c4a3  8a48ff               mov cl, byte ptr [eax - 1]
// 0051c4a6  0048fe               add byte ptr [eax - 2], cl
// 0051c4a9  0008                 add byte ptr [eax], cl
// 0051c4ab  03c7                 add eax, edi
// 0051c4ad  83ea01               sub edx, 1
// 0051c4b0  75f1                 jne 0x51c4a3
// 0051c4b2  5f                   pop edi
// 0051c4b3  c3                   ret 
// 0051c4b4  3c10                 cmp al, 0x10
// 0051c4b6  756f                 jne 0x51c527
// 0051c4b8  80f902               cmp cl, 2
// 0051c4bb  7507                 jne 0x51c4c4
// 0051c4bd  bf06000000           mov edi, 6
// 0051c4c2  eb0a                 jmp 0x51c4ce
// 0051c4c4  80f906               cmp cl, 6
// 0051c4c7  755e                 jne 0x51c527
// 0051c4c9  bf08000000           mov edi, 8
// 0051c4ce  85d2                 test edx, edx
// 0051c4d0  7655                 jbe 0x51c527
// 0051c4d2  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0051c4d6  53                   push ebx
// 0051c4d7  56                   push esi
// 0051c4d8  83c001               add eax, 1
// 0051c4db  8bf2                 mov esi, edx
// 0051c4dd  8d4900               lea ecx, [ecx]
// 0051c4e0  33db                 xor ebx, ebx
// 0051c4e2  8a7803               mov bh, byte ptr [eax + 3]
// 0051c4e5  33c9                 xor ecx, ecx
// 0051c4e7  8a6801               mov ch, byte ptr [eax + 1]
// 0051c4ea  33d2                 xor edx, edx
// 0051c4ec  8a70ff               mov dh, byte ptr [eax - 1]
// 0051c4ef  8a5804               mov bl, byte ptr [eax + 4]
// 0051c4f2  8a4802               mov cl, byte ptr [eax + 2]
// 0051c4f5  8a10                 mov dl, byte ptr [eax]
// 0051c4f7  03d9                 add ebx, ecx
// 0051c4f9  81e3ffff0000         and ebx, 0xffff
// 0051c4ff  03d1                 add edx, ecx
// 0051c501  81e2ffff0000         and edx, 0xffff
// 0051c507  8bcb                 mov ecx, ebx
// 0051c509  8bda                 mov ebx, edx
// 0051c50b  8810                 mov byte ptr [eax], dl
// 0051c50d  8bd1                 mov edx, ecx
// 0051c50f  c1eb08               shr ebx, 8
// 0051c512  c1ea08               shr edx, 8
// 0051c515  8858ff               mov byte ptr [eax - 1], bl
// 0051c518  885003               mov byte ptr [eax + 3], dl
// 0051c51b  884804               mov byte ptr [eax + 4], cl
// 0051c51e  03c7                 add eax, edi
// 0051c520  83ee01               sub esi, 1
// 0051c523  75bb                 jne 0x51c4e0
// 0051c525  5e                   pop esi
// 0051c526  5b                   pop ebx
// 0051c527  5f                   pop edi
// 0051c528  c3                   ret 
// library libpng-1.2.5/pngrtran.c (function _png_do_read_intrapixel)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngrtran.c
