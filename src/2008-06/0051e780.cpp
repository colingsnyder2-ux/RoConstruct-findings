// from server: 100% by auto
// roc 2008-06 0051e780  unit: seg_00510000  size: 200 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0051e780
//
// 0051e780  53                   push ebx
// 0051e781  57                   push edi
// 0051e782  bfcc000000           mov edi, 0xcc
// 0051e787  397e14               cmp dword ptr [esi + 0x14], edi
// 0051e78a  7418                 je 0x51e7a4
// 0051e78c  8b8680010000         mov eax, dword ptr [esi + 0x180]
// 0051e792  8b08                 mov ecx, dword ptr [eax]
// 0051e794  56                   push esi
// 0051e795  ffd1                 call ecx
// 0051e797  83c404               add esp, 4
// 0051e79a  c7467800000000       mov dword ptr [esi + 0x78], 0
// 0051e7a1  897e14               mov dword ptr [esi + 0x14], edi
// 0051e7a4  8b9680010000         mov edx, dword ptr [esi + 0x180]
// 0051e7aa  807a0800             cmp byte ptr [edx + 8], 0
// 0051e7ae  747d                 je 0x51e82d
// 0051e7b0  8d7e78               lea edi, [esi + 0x78]
// 0051e7b3  8b07                 mov eax, dword ptr [edi]
// 0051e7b5  3b4660               cmp eax, dword ptr [esi + 0x60]
// 0051e7b8  7347                 jae 0x51e801
// 0051e7ba  8d9b00000000         lea ebx, [ebx]
// 0051e7c0  8b4e08               mov ecx, dword ptr [esi + 8]
// 0051e7c3  85c9                 test ecx, ecx
// 0051e7c5  7417                 je 0x51e7de
// 0051e7c7  894104               mov dword ptr [ecx + 4], eax
// 0051e7ca  8b4608               mov eax, dword ptr [esi + 8]
// 0051e7cd  8b4e60               mov ecx, dword ptr [esi + 0x60]
// 0051e7d0  894808               mov dword ptr [eax + 8], ecx
// 0051e7d3  8b5608               mov edx, dword ptr [esi + 8]
// 0051e7d6  8b02                 mov eax, dword ptr [edx]
// 0051e7d8  56                   push esi
// 0051e7d9  ffd0                 call eax
// 0051e7db  83c404               add esp, 4
// 0051e7de  8b8e84010000         mov ecx, dword ptr [esi + 0x184]
// 0051e7e4  8b5104               mov edx, dword ptr [ecx + 4]
// 0051e7e7  8b1f                 mov ebx, dword ptr [edi]
// 0051e7e9  6a00                 push 0
// 0051e7eb  57                   push edi
// 0051e7ec  6a00                 push 0
// 0051e7ee  56                   push esi
// 0051e7ef  ffd2                 call edx
// 0051e7f1  8b07                 mov eax, dword ptr [edi]
// 0051e7f3  83c410               add esp, 0x10
// 0051e7f6  3bc3                 cmp eax, ebx
// 0051e7f8  7449                 je 0x51e843
// 0051e7fa  8bc8                 mov ecx, eax
// 0051e7fc  3b4e60               cmp ecx, dword ptr [esi + 0x60]
// 0051e7ff  72bf                 jb 0x51e7c0
// 0051e801  8b9680010000         mov edx, dword ptr [esi + 0x180]
// 0051e807  8b4204               mov eax, dword ptr [edx + 4]
// 0051e80a  56                   push esi
// 0051e80b  ffd0                 call eax
// 0051e80d  8b8e80010000         mov ecx, dword ptr [esi + 0x180]
// 0051e813  8b11                 mov edx, dword ptr [ecx]
// 0051e815  56                   push esi
// 0051e816  ffd2                 call edx
// 0051e818  c70700000000         mov dword ptr [edi], 0
// 0051e81e  8b8680010000         mov eax, dword ptr [esi + 0x180]
// 0051e824  83c408               add esp, 8
// 0051e827  80780800             cmp byte ptr [eax + 8], 0
// 0051e82b  7586                 jne 0x51e7b3
// 0051e82d  33c9                 xor ecx, ecx
// 0051e82f  384e41               cmp byte ptr [esi + 0x41], cl
// 0051e832  5f                   pop edi
// 0051e833  0f95c1               setne cl
// 0051e836  b001                 mov al, 1
// 0051e838  5b                   pop ebx
// 0051e839  81c1cd000000         add ecx, 0xcd
// 0051e83f  894e14               mov dword ptr [esi + 0x14], ecx
// 0051e842  c3                   ret 
// 0051e843  5f                   pop edi
// 0051e844  32c0                 xor al, al
// 0051e846  5b                   pop ebx
// 0051e847  c3                   ret 
// library jpeg-6b/jdapistd.c (function _output_pass_setup)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdapistd.c
