// from server: 100% by auto
// roc 2010-06 005659e0  unit: seg_00560000  size: 200 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005659e0
//
// 005659e0  53                   push ebx
// 005659e1  57                   push edi
// 005659e2  bfcc000000           mov edi, 0xcc
// 005659e7  397e14               cmp dword ptr [esi + 0x14], edi
// 005659ea  7418                 je 0x565a04
// 005659ec  8b8680010000         mov eax, dword ptr [esi + 0x180]
// 005659f2  8b08                 mov ecx, dword ptr [eax]
// 005659f4  56                   push esi
// 005659f5  ffd1                 call ecx
// 005659f7  83c404               add esp, 4
// 005659fa  c7467800000000       mov dword ptr [esi + 0x78], 0
// 00565a01  897e14               mov dword ptr [esi + 0x14], edi
// 00565a04  8b9680010000         mov edx, dword ptr [esi + 0x180]
// 00565a0a  807a0800             cmp byte ptr [edx + 8], 0
// 00565a0e  747d                 je 0x565a8d
// 00565a10  8d7e78               lea edi, [esi + 0x78]
// 00565a13  8b07                 mov eax, dword ptr [edi]
// 00565a15  3b4660               cmp eax, dword ptr [esi + 0x60]
// 00565a18  7347                 jae 0x565a61
// 00565a1a  8d9b00000000         lea ebx, [ebx]
// 00565a20  8b4e08               mov ecx, dword ptr [esi + 8]
// 00565a23  85c9                 test ecx, ecx
// 00565a25  7417                 je 0x565a3e
// 00565a27  894104               mov dword ptr [ecx + 4], eax
// 00565a2a  8b4608               mov eax, dword ptr [esi + 8]
// 00565a2d  8b4e60               mov ecx, dword ptr [esi + 0x60]
// 00565a30  894808               mov dword ptr [eax + 8], ecx
// 00565a33  8b5608               mov edx, dword ptr [esi + 8]
// 00565a36  8b02                 mov eax, dword ptr [edx]
// 00565a38  56                   push esi
// 00565a39  ffd0                 call eax
// 00565a3b  83c404               add esp, 4
// 00565a3e  8b8e84010000         mov ecx, dword ptr [esi + 0x184]
// 00565a44  8b5104               mov edx, dword ptr [ecx + 4]
// 00565a47  8b1f                 mov ebx, dword ptr [edi]
// 00565a49  6a00                 push 0
// 00565a4b  57                   push edi
// 00565a4c  6a00                 push 0
// 00565a4e  56                   push esi
// 00565a4f  ffd2                 call edx
// 00565a51  8b07                 mov eax, dword ptr [edi]
// 00565a53  83c410               add esp, 0x10
// 00565a56  3bc3                 cmp eax, ebx
// 00565a58  7449                 je 0x565aa3
// 00565a5a  8bc8                 mov ecx, eax
// 00565a5c  3b4e60               cmp ecx, dword ptr [esi + 0x60]
// 00565a5f  72bf                 jb 0x565a20
// 00565a61  8b9680010000         mov edx, dword ptr [esi + 0x180]
// 00565a67  8b4204               mov eax, dword ptr [edx + 4]
// 00565a6a  56                   push esi
// 00565a6b  ffd0                 call eax
// 00565a6d  8b8e80010000         mov ecx, dword ptr [esi + 0x180]
// 00565a73  8b11                 mov edx, dword ptr [ecx]
// 00565a75  56                   push esi
// 00565a76  ffd2                 call edx
// 00565a78  c70700000000         mov dword ptr [edi], 0
// 00565a7e  8b8680010000         mov eax, dword ptr [esi + 0x180]
// 00565a84  83c408               add esp, 8
// 00565a87  80780800             cmp byte ptr [eax + 8], 0
// 00565a8b  7586                 jne 0x565a13
// 00565a8d  33c9                 xor ecx, ecx
// 00565a8f  384e41               cmp byte ptr [esi + 0x41], cl
// 00565a92  5f                   pop edi
// 00565a93  0f95c1               setne cl
// 00565a96  b001                 mov al, 1
// 00565a98  5b                   pop ebx
// 00565a99  81c1cd000000         add ecx, 0xcd
// 00565a9f  894e14               mov dword ptr [esi + 0x14], ecx
// 00565aa2  c3                   ret 
// 00565aa3  5f                   pop edi
// 00565aa4  32c0                 xor al, al
// 00565aa6  5b                   pop ebx
// 00565aa7  c3                   ret 
// library jpeg-6b/jdapistd.c (function _output_pass_setup)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdapistd.c
