// from server: 100% by auto
// roc 2012-06 006442b0  unit: seg_00640000  size: 200 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006442b0
//
// 006442b0  53                   push ebx
// 006442b1  57                   push edi
// 006442b2  bfcc000000           mov edi, 0xcc
// 006442b7  397e14               cmp dword ptr [esi + 0x14], edi
// 006442ba  7418                 je 0x6442d4
// 006442bc  8b8680010000         mov eax, dword ptr [esi + 0x180]
// 006442c2  8b08                 mov ecx, dword ptr [eax]
// 006442c4  56                   push esi
// 006442c5  ffd1                 call ecx
// 006442c7  83c404               add esp, 4
// 006442ca  c7467800000000       mov dword ptr [esi + 0x78], 0
// 006442d1  897e14               mov dword ptr [esi + 0x14], edi
// 006442d4  8b9680010000         mov edx, dword ptr [esi + 0x180]
// 006442da  807a0800             cmp byte ptr [edx + 8], 0
// 006442de  747d                 je 0x64435d
// 006442e0  8d7e78               lea edi, [esi + 0x78]
// 006442e3  8b07                 mov eax, dword ptr [edi]
// 006442e5  3b4660               cmp eax, dword ptr [esi + 0x60]
// 006442e8  7347                 jae 0x644331
// 006442ea  8d9b00000000         lea ebx, [ebx]
// 006442f0  8b4e08               mov ecx, dword ptr [esi + 8]
// 006442f3  85c9                 test ecx, ecx
// 006442f5  7417                 je 0x64430e
// 006442f7  894104               mov dword ptr [ecx + 4], eax
// 006442fa  8b4608               mov eax, dword ptr [esi + 8]
// 006442fd  8b4e60               mov ecx, dword ptr [esi + 0x60]
// 00644300  894808               mov dword ptr [eax + 8], ecx
// 00644303  8b5608               mov edx, dword ptr [esi + 8]
// 00644306  8b02                 mov eax, dword ptr [edx]
// 00644308  56                   push esi
// 00644309  ffd0                 call eax
// 0064430b  83c404               add esp, 4
// 0064430e  8b8e84010000         mov ecx, dword ptr [esi + 0x184]
// 00644314  8b5104               mov edx, dword ptr [ecx + 4]
// 00644317  8b1f                 mov ebx, dword ptr [edi]
// 00644319  6a00                 push 0
// 0064431b  57                   push edi
// 0064431c  6a00                 push 0
// 0064431e  56                   push esi
// 0064431f  ffd2                 call edx
// 00644321  8b07                 mov eax, dword ptr [edi]
// 00644323  83c410               add esp, 0x10
// 00644326  3bc3                 cmp eax, ebx
// 00644328  7449                 je 0x644373
// 0064432a  8bc8                 mov ecx, eax
// 0064432c  3b4e60               cmp ecx, dword ptr [esi + 0x60]
// 0064432f  72bf                 jb 0x6442f0
// 00644331  8b9680010000         mov edx, dword ptr [esi + 0x180]
// 00644337  8b4204               mov eax, dword ptr [edx + 4]
// 0064433a  56                   push esi
// 0064433b  ffd0                 call eax
// 0064433d  8b8e80010000         mov ecx, dword ptr [esi + 0x180]
// 00644343  8b11                 mov edx, dword ptr [ecx]
// 00644345  56                   push esi
// 00644346  ffd2                 call edx
// 00644348  c70700000000         mov dword ptr [edi], 0
// 0064434e  8b8680010000         mov eax, dword ptr [esi + 0x180]
// 00644354  83c408               add esp, 8
// 00644357  80780800             cmp byte ptr [eax + 8], 0
// 0064435b  7586                 jne 0x6442e3
// 0064435d  33c9                 xor ecx, ecx
// 0064435f  384e41               cmp byte ptr [esi + 0x41], cl
// 00644362  5f                   pop edi
// 00644363  0f95c1               setne cl
// 00644366  b001                 mov al, 1
// 00644368  5b                   pop ebx
// 00644369  81c1cd000000         add ecx, 0xcd
// 0064436f  894e14               mov dword ptr [esi + 0x14], ecx
// 00644372  c3                   ret 
// 00644373  5f                   pop edi
// 00644374  32c0                 xor al, al
// 00644376  5b                   pop ebx
// 00644377  c3                   ret 
// library jpeg-6b/jdapistd.c (function _output_pass_setup)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdapistd.c
