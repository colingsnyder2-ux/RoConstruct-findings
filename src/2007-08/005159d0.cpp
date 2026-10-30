// from server: 100% by auto
// roc 2007-08 005159d0  unit: seg_00510000  size: 200 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005159d0
//
// 005159d0  53                   push ebx
// 005159d1  57                   push edi
// 005159d2  bfcc000000           mov edi, 0xcc
// 005159d7  397e14               cmp dword ptr [esi + 0x14], edi
// 005159da  7418                 je 0x5159f4
// 005159dc  8b8680010000         mov eax, dword ptr [esi + 0x180]
// 005159e2  8b08                 mov ecx, dword ptr [eax]
// 005159e4  56                   push esi
// 005159e5  ffd1                 call ecx
// 005159e7  83c404               add esp, 4
// 005159ea  c7467800000000       mov dword ptr [esi + 0x78], 0
// 005159f1  897e14               mov dword ptr [esi + 0x14], edi
// 005159f4  8b9680010000         mov edx, dword ptr [esi + 0x180]
// 005159fa  807a0800             cmp byte ptr [edx + 8], 0
// 005159fe  747d                 je 0x515a7d
// 00515a00  8d7e78               lea edi, [esi + 0x78]
// 00515a03  8b07                 mov eax, dword ptr [edi]
// 00515a05  3b4660               cmp eax, dword ptr [esi + 0x60]
// 00515a08  7347                 jae 0x515a51
// 00515a0a  8d9b00000000         lea ebx, [ebx]
// 00515a10  8b4e08               mov ecx, dword ptr [esi + 8]
// 00515a13  85c9                 test ecx, ecx
// 00515a15  7417                 je 0x515a2e
// 00515a17  894104               mov dword ptr [ecx + 4], eax
// 00515a1a  8b4608               mov eax, dword ptr [esi + 8]
// 00515a1d  8b4e60               mov ecx, dword ptr [esi + 0x60]
// 00515a20  894808               mov dword ptr [eax + 8], ecx
// 00515a23  8b5608               mov edx, dword ptr [esi + 8]
// 00515a26  8b02                 mov eax, dword ptr [edx]
// 00515a28  56                   push esi
// 00515a29  ffd0                 call eax
// 00515a2b  83c404               add esp, 4
// 00515a2e  8b8e84010000         mov ecx, dword ptr [esi + 0x184]
// 00515a34  8b5104               mov edx, dword ptr [ecx + 4]
// 00515a37  8b1f                 mov ebx, dword ptr [edi]
// 00515a39  6a00                 push 0
// 00515a3b  57                   push edi
// 00515a3c  6a00                 push 0
// 00515a3e  56                   push esi
// 00515a3f  ffd2                 call edx
// 00515a41  8b07                 mov eax, dword ptr [edi]
// 00515a43  83c410               add esp, 0x10
// 00515a46  3bc3                 cmp eax, ebx
// 00515a48  7449                 je 0x515a93
// 00515a4a  8bc8                 mov ecx, eax
// 00515a4c  3b4e60               cmp ecx, dword ptr [esi + 0x60]
// 00515a4f  72bf                 jb 0x515a10
// 00515a51  8b9680010000         mov edx, dword ptr [esi + 0x180]
// 00515a57  8b4204               mov eax, dword ptr [edx + 4]
// 00515a5a  56                   push esi
// 00515a5b  ffd0                 call eax
// 00515a5d  8b8e80010000         mov ecx, dword ptr [esi + 0x180]
// 00515a63  8b11                 mov edx, dword ptr [ecx]
// 00515a65  56                   push esi
// 00515a66  ffd2                 call edx
// 00515a68  c70700000000         mov dword ptr [edi], 0
// 00515a6e  8b8680010000         mov eax, dword ptr [esi + 0x180]
// 00515a74  83c408               add esp, 8
// 00515a77  80780800             cmp byte ptr [eax + 8], 0
// 00515a7b  7586                 jne 0x515a03
// 00515a7d  33c9                 xor ecx, ecx
// 00515a7f  384e41               cmp byte ptr [esi + 0x41], cl
// 00515a82  5f                   pop edi
// 00515a83  0f95c1               setne cl
// 00515a86  b001                 mov al, 1
// 00515a88  5b                   pop ebx
// 00515a89  81c1cd000000         add ecx, 0xcd
// 00515a8f  894e14               mov dword ptr [esi + 0x14], ecx
// 00515a92  c3                   ret 
// 00515a93  5f                   pop edi
// 00515a94  32c0                 xor al, al
// 00515a96  5b                   pop ebx
// 00515a97  c3                   ret 
// library jpeg-6b/jdapistd.c (function _output_pass_setup)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdapistd.c
