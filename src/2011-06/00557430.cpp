// roc 2011-06 00557430  unit: seg_00550000  size: 200 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00557430
//
// 00557430  53                   push ebx
// 00557431  57                   push edi
// 00557432  bfcc000000           mov edi, 0xcc
// 00557437  397e14               cmp dword ptr [esi + 0x14], edi
// 0055743a  7418                 je 0x557454
// 0055743c  8b8680010000         mov eax, dword ptr [esi + 0x180]
// 00557442  8b08                 mov ecx, dword ptr [eax]
// 00557444  56                   push esi
// 00557445  ffd1                 call ecx
// 00557447  83c404               add esp, 4
// 0055744a  c7467800000000       mov dword ptr [esi + 0x78], 0
// 00557451  897e14               mov dword ptr [esi + 0x14], edi
// 00557454  8b9680010000         mov edx, dword ptr [esi + 0x180]
// 0055745a  807a0800             cmp byte ptr [edx + 8], 0
// 0055745e  747d                 je 0x5574dd
// 00557460  8d7e78               lea edi, [esi + 0x78]
// 00557463  8b07                 mov eax, dword ptr [edi]
// 00557465  3b4660               cmp eax, dword ptr [esi + 0x60]
// 00557468  7347                 jae 0x5574b1
// 0055746a  8d9b00000000         lea ebx, [ebx]
// 00557470  8b4e08               mov ecx, dword ptr [esi + 8]
// 00557473  85c9                 test ecx, ecx
// 00557475  7417                 je 0x55748e
// 00557477  894104               mov dword ptr [ecx + 4], eax
// 0055747a  8b4608               mov eax, dword ptr [esi + 8]
// 0055747d  8b4e60               mov ecx, dword ptr [esi + 0x60]
// 00557480  894808               mov dword ptr [eax + 8], ecx
// 00557483  8b5608               mov edx, dword ptr [esi + 8]
// 00557486  8b02                 mov eax, dword ptr [edx]
// 00557488  56                   push esi
// 00557489  ffd0                 call eax
// 0055748b  83c404               add esp, 4
// 0055748e  8b8e84010000         mov ecx, dword ptr [esi + 0x184]
// 00557494  8b5104               mov edx, dword ptr [ecx + 4]
// 00557497  8b1f                 mov ebx, dword ptr [edi]
// 00557499  6a00                 push 0
// 0055749b  57                   push edi
// 0055749c  6a00                 push 0
// 0055749e  56                   push esi
// 0055749f  ffd2                 call edx
// 005574a1  8b07                 mov eax, dword ptr [edi]
// 005574a3  83c410               add esp, 0x10
// 005574a6  3bc3                 cmp eax, ebx
// 005574a8  7449                 je 0x5574f3
// 005574aa  8bc8                 mov ecx, eax
// 005574ac  3b4e60               cmp ecx, dword ptr [esi + 0x60]
// 005574af  72bf                 jb 0x557470
// 005574b1  8b9680010000         mov edx, dword ptr [esi + 0x180]
// 005574b7  8b4204               mov eax, dword ptr [edx + 4]
// 005574ba  56                   push esi
// 005574bb  ffd0                 call eax
// 005574bd  8b8e80010000         mov ecx, dword ptr [esi + 0x180]
// 005574c3  8b11                 mov edx, dword ptr [ecx]
// 005574c5  56                   push esi
// 005574c6  ffd2                 call edx
// 005574c8  c70700000000         mov dword ptr [edi], 0
// 005574ce  8b8680010000         mov eax, dword ptr [esi + 0x180]
// 005574d4  83c408               add esp, 8
// 005574d7  80780800             cmp byte ptr [eax + 8], 0
// 005574db  7586                 jne 0x557463
// 005574dd  33c9                 xor ecx, ecx
// 005574df  384e41               cmp byte ptr [esi + 0x41], cl
// 005574e2  5f                   pop edi
// 005574e3  0f95c1               setne cl
// 005574e6  b001                 mov al, 1
// 005574e8  5b                   pop ebx
// 005574e9  81c1cd000000         add ecx, 0xcd
// 005574ef  894e14               mov dword ptr [esi + 0x14], ecx
// 005574f2  c3                   ret 
// 005574f3  5f                   pop edi
// 005574f4  32c0                 xor al, al
// 005574f6  5b                   pop ebx
// 005574f7  c3                   ret 
// library jpeg-6b/jdapistd.c (function _output_pass_setup)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdapistd.c
