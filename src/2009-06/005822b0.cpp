// from server: 100% by auto
// roc 2009-06 005822b0  unit: seg_00580000  size: 200 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005822b0
//
// 005822b0  53                   push ebx
// 005822b1  57                   push edi
// 005822b2  bfcc000000           mov edi, 0xcc
// 005822b7  397e14               cmp dword ptr [esi + 0x14], edi
// 005822ba  7418                 je 0x5822d4
// 005822bc  8b8680010000         mov eax, dword ptr [esi + 0x180]
// 005822c2  8b08                 mov ecx, dword ptr [eax]
// 005822c4  56                   push esi
// 005822c5  ffd1                 call ecx
// 005822c7  83c404               add esp, 4
// 005822ca  c7467800000000       mov dword ptr [esi + 0x78], 0
// 005822d1  897e14               mov dword ptr [esi + 0x14], edi
// 005822d4  8b9680010000         mov edx, dword ptr [esi + 0x180]
// 005822da  807a0800             cmp byte ptr [edx + 8], 0
// 005822de  747d                 je 0x58235d
// 005822e0  8d7e78               lea edi, [esi + 0x78]
// 005822e3  8b07                 mov eax, dword ptr [edi]
// 005822e5  3b4660               cmp eax, dword ptr [esi + 0x60]
// 005822e8  7347                 jae 0x582331
// 005822ea  8d9b00000000         lea ebx, [ebx]
// 005822f0  8b4e08               mov ecx, dword ptr [esi + 8]
// 005822f3  85c9                 test ecx, ecx
// 005822f5  7417                 je 0x58230e
// 005822f7  894104               mov dword ptr [ecx + 4], eax
// 005822fa  8b4608               mov eax, dword ptr [esi + 8]
// 005822fd  8b4e60               mov ecx, dword ptr [esi + 0x60]
// 00582300  894808               mov dword ptr [eax + 8], ecx
// 00582303  8b5608               mov edx, dword ptr [esi + 8]
// 00582306  8b02                 mov eax, dword ptr [edx]
// 00582308  56                   push esi
// 00582309  ffd0                 call eax
// 0058230b  83c404               add esp, 4
// 0058230e  8b8e84010000         mov ecx, dword ptr [esi + 0x184]
// 00582314  8b5104               mov edx, dword ptr [ecx + 4]
// 00582317  8b1f                 mov ebx, dword ptr [edi]
// 00582319  6a00                 push 0
// 0058231b  57                   push edi
// 0058231c  6a00                 push 0
// 0058231e  56                   push esi
// 0058231f  ffd2                 call edx
// 00582321  8b07                 mov eax, dword ptr [edi]
// 00582323  83c410               add esp, 0x10
// 00582326  3bc3                 cmp eax, ebx
// 00582328  7449                 je 0x582373
// 0058232a  8bc8                 mov ecx, eax
// 0058232c  3b4e60               cmp ecx, dword ptr [esi + 0x60]
// 0058232f  72bf                 jb 0x5822f0
// 00582331  8b9680010000         mov edx, dword ptr [esi + 0x180]
// 00582337  8b4204               mov eax, dword ptr [edx + 4]
// 0058233a  56                   push esi
// 0058233b  ffd0                 call eax
// 0058233d  8b8e80010000         mov ecx, dword ptr [esi + 0x180]
// 00582343  8b11                 mov edx, dword ptr [ecx]
// 00582345  56                   push esi
// 00582346  ffd2                 call edx
// 00582348  c70700000000         mov dword ptr [edi], 0
// 0058234e  8b8680010000         mov eax, dword ptr [esi + 0x180]
// 00582354  83c408               add esp, 8
// 00582357  80780800             cmp byte ptr [eax + 8], 0
// 0058235b  7586                 jne 0x5822e3
// 0058235d  33c9                 xor ecx, ecx
// 0058235f  384e41               cmp byte ptr [esi + 0x41], cl
// 00582362  5f                   pop edi
// 00582363  0f95c1               setne cl
// 00582366  b001                 mov al, 1
// 00582368  5b                   pop ebx
// 00582369  81c1cd000000         add ecx, 0xcd
// 0058236f  894e14               mov dword ptr [esi + 0x14], ecx
// 00582372  c3                   ret 
// 00582373  5f                   pop edi
// 00582374  32c0                 xor al, al
// 00582376  5b                   pop ebx
// 00582377  c3                   ret 
// library jpeg-6b/jdapistd.c (function _output_pass_setup)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdapistd.c
