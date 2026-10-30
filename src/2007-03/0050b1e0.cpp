// roc 2007-03 0050b1e0  unit: seg_00500000  size: 200 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0050b1e0
//
// 0050b1e0  53                   push ebx
// 0050b1e1  57                   push edi
// 0050b1e2  bfcc000000           mov edi, 0xcc
// 0050b1e7  397e14               cmp dword ptr [esi + 0x14], edi
// 0050b1ea  7418                 je 0x50b204
// 0050b1ec  8b8680010000         mov eax, dword ptr [esi + 0x180]
// 0050b1f2  8b08                 mov ecx, dword ptr [eax]
// 0050b1f4  56                   push esi
// 0050b1f5  ffd1                 call ecx
// 0050b1f7  83c404               add esp, 4
// 0050b1fa  c7467800000000       mov dword ptr [esi + 0x78], 0
// 0050b201  897e14               mov dword ptr [esi + 0x14], edi
// 0050b204  8b9680010000         mov edx, dword ptr [esi + 0x180]
// 0050b20a  807a0800             cmp byte ptr [edx + 8], 0
// 0050b20e  747d                 je 0x50b28d
// 0050b210  8d7e78               lea edi, [esi + 0x78]
// 0050b213  8b07                 mov eax, dword ptr [edi]
// 0050b215  3b4660               cmp eax, dword ptr [esi + 0x60]
// 0050b218  7347                 jae 0x50b261
// 0050b21a  8d9b00000000         lea ebx, [ebx]
// 0050b220  8b4e08               mov ecx, dword ptr [esi + 8]
// 0050b223  85c9                 test ecx, ecx
// 0050b225  7417                 je 0x50b23e
// 0050b227  894104               mov dword ptr [ecx + 4], eax
// 0050b22a  8b4608               mov eax, dword ptr [esi + 8]
// 0050b22d  8b4e60               mov ecx, dword ptr [esi + 0x60]
// 0050b230  894808               mov dword ptr [eax + 8], ecx
// 0050b233  8b5608               mov edx, dword ptr [esi + 8]
// 0050b236  8b02                 mov eax, dword ptr [edx]
// 0050b238  56                   push esi
// 0050b239  ffd0                 call eax
// 0050b23b  83c404               add esp, 4
// 0050b23e  8b8e84010000         mov ecx, dword ptr [esi + 0x184]
// 0050b244  8b5104               mov edx, dword ptr [ecx + 4]
// 0050b247  8b1f                 mov ebx, dword ptr [edi]
// 0050b249  6a00                 push 0
// 0050b24b  57                   push edi
// 0050b24c  6a00                 push 0
// 0050b24e  56                   push esi
// 0050b24f  ffd2                 call edx
// 0050b251  8b07                 mov eax, dword ptr [edi]
// 0050b253  83c410               add esp, 0x10
// 0050b256  3bc3                 cmp eax, ebx
// 0050b258  7449                 je 0x50b2a3
// 0050b25a  8bc8                 mov ecx, eax
// 0050b25c  3b4e60               cmp ecx, dword ptr [esi + 0x60]
// 0050b25f  72bf                 jb 0x50b220
// 0050b261  8b9680010000         mov edx, dword ptr [esi + 0x180]
// 0050b267  8b4204               mov eax, dword ptr [edx + 4]
// 0050b26a  56                   push esi
// 0050b26b  ffd0                 call eax
// 0050b26d  8b8e80010000         mov ecx, dword ptr [esi + 0x180]
// 0050b273  8b11                 mov edx, dword ptr [ecx]
// 0050b275  56                   push esi
// 0050b276  ffd2                 call edx
// 0050b278  c70700000000         mov dword ptr [edi], 0
// 0050b27e  8b8680010000         mov eax, dword ptr [esi + 0x180]
// 0050b284  83c408               add esp, 8
// 0050b287  80780800             cmp byte ptr [eax + 8], 0
// 0050b28b  7586                 jne 0x50b213
// 0050b28d  33c9                 xor ecx, ecx
// 0050b28f  384e41               cmp byte ptr [esi + 0x41], cl
// 0050b292  5f                   pop edi
// 0050b293  0f95c1               setne cl
// 0050b296  b001                 mov al, 1
// 0050b298  5b                   pop ebx
// 0050b299  81c1cd000000         add ecx, 0xcd
// 0050b29f  894e14               mov dword ptr [esi + 0x14], ecx
// 0050b2a2  c3                   ret 
// 0050b2a3  5f                   pop edi
// 0050b2a4  32c0                 xor al, al
// 0050b2a6  5b                   pop ebx
// 0050b2a7  c3                   ret 
// library jpeg-6b/jdapistd.c (function _output_pass_setup)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdapistd.c
