// from server: 100% by auto
// roc 2008-06 0053b520  unit: seg_00530000  size: 552 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0053b520
//
// 0053b520  53                   push ebx
// 0053b521  56                   push esi
// 0053b522  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0053b526  8b4604               mov eax, dword ptr [esi + 4]
// 0053b529  8b08                 mov ecx, dword ptr [eax]
// 0053b52b  57                   push edi
// 0053b52c  6a0c                 push 0xc
// 0053b52e  6a01                 push 1
// 0053b530  56                   push esi
// 0053b531  ffd1                 call ecx
// 0053b533  8bf8                 mov edi, eax
// 0053b535  89be50010000         mov dword ptr [esi + 0x150], edi
// 0053b53b  c70710d44700         mov dword ptr [edi], 0x47d410
// 0053b541  8b4628               mov eax, dword ptr [esi + 0x28]
// 0053b544  48                   dec eax
// 0053b545  bb04000000           mov ebx, 4
// 0053b54a  83c40c               add esp, 0xc
// 0053b54d  3bc3                 cmp eax, ebx
// 0053b54f  771e                 ja 0x53b56f
// 0053b551  ff248520b75300       jmp dword ptr [eax*4 + 0x53b720]
// 0053b558  837e2401             cmp dword ptr [esi + 0x24], 1
// 0053b55c  742a                 je 0x53b588
// 0053b55e  eb15                 jmp 0x53b575
// 0053b560  837e2403             cmp dword ptr [esi + 0x24], 3
// 0053b564  7422                 je 0x53b588
// 0053b566  eb0d                 jmp 0x53b575
// 0053b568  395e24               cmp dword ptr [esi + 0x24], ebx
// 0053b56b  741b                 je 0x53b588
// 0053b56d  eb06                 jmp 0x53b575
// 0053b56f  837e2401             cmp dword ptr [esi + 0x24], 1
// 0053b573  7d13                 jge 0x53b588
// 0053b575  8b16                 mov edx, dword ptr [esi]
// 0053b577  c7421409000000       mov dword ptr [edx + 0x14], 9
// 0053b57e  8b06                 mov eax, dword ptr [esi]
// 0053b580  8b08                 mov ecx, dword ptr [eax]
// 0053b582  56                   push esi
// 0053b583  ffd1                 call ecx
// 0053b585  83c404               add esp, 4
// 0053b588  8b4640               mov eax, dword ptr [esi + 0x40]
// 0053b58b  8d48ff               lea ecx, [eax - 1]
// 0053b58e  3bcb                 cmp ecx, ebx
// 0053b590  0f875e010000         ja 0x53b6f4
// 0053b596  ff248d34b75300       jmp dword ptr [ecx*4 + 0x53b734]
// 0053b59d  837e3c01             cmp dword ptr [esi + 0x3c], 1
// 0053b5a1  7413                 je 0x53b5b6
// 0053b5a3  8b16                 mov edx, dword ptr [esi]
// 0053b5a5  c742140a000000       mov dword ptr [edx + 0x14], 0xa
// 0053b5ac  8b06                 mov eax, dword ptr [esi]
// 0053b5ae  8b08                 mov ecx, dword ptr [eax]
// 0053b5b0  56                   push esi
// 0053b5b1  ffd1                 call ecx
// 0053b5b3  83c404               add esp, 4
// 0053b5b6  8b4628               mov eax, dword ptr [esi + 0x28]
// 0053b5b9  83f801               cmp eax, 1
// 0053b5bc  741b                 je 0x53b5d9
// 0053b5be  83f802               cmp eax, 2
// 0053b5c1  7511                 jne 0x53b5d4
// 0053b5c3  c70750b05300         mov dword ptr [edi], 0x53b050
// 0053b5c9  c7470440b25300       mov dword ptr [edi + 4], 0x53b240
// 0053b5d0  5f                   pop edi
// 0053b5d1  5e                   pop esi
// 0053b5d2  5b                   pop ebx
// 0053b5d3  c3                   ret 
// 0053b5d4  83f803               cmp eax, 3
// 0053b5d7  752e                 jne 0x53b607
// 0053b5d9  c7470440b45300       mov dword ptr [edi + 4], 0x53b440
// 0053b5e0  5f                   pop edi
// 0053b5e1  5e                   pop esi
// 0053b5e2  5b                   pop ebx
// 0053b5e3  c3                   ret 
// 0053b5e4  837e3c03             cmp dword ptr [esi + 0x3c], 3
// 0053b5e8  7413                 je 0x53b5fd
// 0053b5ea  8b16                 mov edx, dword ptr [esi]
// 0053b5ec  c742140a000000       mov dword ptr [edx + 0x14], 0xa
// 0053b5f3  8b06                 mov eax, dword ptr [esi]
// 0053b5f5  8b08                 mov ecx, dword ptr [eax]
// 0053b5f7  56                   push esi
// 0053b5f8  ffd1                 call ecx
// 0053b5fa  83c404               add esp, 4
// 0053b5fd  837e2802             cmp dword ptr [esi + 0x28], 2
// 0053b601  0f840d010000         je 0x53b714
// 0053b607  8b16                 mov edx, dword ptr [esi]
// 0053b609  c742141b000000       mov dword ptr [edx + 0x14], 0x1b
// 0053b610  8b06                 mov eax, dword ptr [esi]
// 0053b612  8b08                 mov ecx, dword ptr [eax]
// 0053b614  56                   push esi
// 0053b615  ffd1                 call ecx
// 0053b617  83c404               add esp, 4
// 0053b61a  5f                   pop edi
// 0053b61b  5e                   pop esi
// 0053b61c  5b                   pop ebx
// 0053b61d  c3                   ret 
// 0053b61e  837e3c03             cmp dword ptr [esi + 0x3c], 3
// 0053b622  7413                 je 0x53b637
// 0053b624  8b16                 mov edx, dword ptr [esi]
// 0053b626  c742140a000000       mov dword ptr [edx + 0x14], 0xa
// 0053b62d  8b06                 mov eax, dword ptr [esi]
// 0053b62f  8b08                 mov ecx, dword ptr [eax]
// 0053b631  56                   push esi
// 0053b632  ffd1                 call ecx
// 0053b634  83c404               add esp, 4
// 0053b637  8b4628               mov eax, dword ptr [esi + 0x28]
// 0053b63a  83f802               cmp eax, 2
// 0053b63d  7511                 jne 0x53b650
// 0053b63f  c70750b05300         mov dword ptr [edi], 0x53b050
// 0053b645  c7470430b15300       mov dword ptr [edi + 4], 0x53b130
// 0053b64c  5f                   pop edi
// 0053b64d  5e                   pop esi
// 0053b64e  5b                   pop ebx
// 0053b64f  c3                   ret 
// 0053b650  83f803               cmp eax, 3
// 0053b653  0f84bb000000         je 0x53b714
// 0053b659  8b16                 mov edx, dword ptr [esi]
// 0053b65b  c742141b000000       mov dword ptr [edx + 0x14], 0x1b
// 0053b662  8b06                 mov eax, dword ptr [esi]
// 0053b664  8b08                 mov ecx, dword ptr [eax]
// 0053b666  56                   push esi
// 0053b667  ffd1                 call ecx
// 0053b669  83c404               add esp, 4
// 0053b66c  5f                   pop edi
// 0053b66d  5e                   pop esi
// 0053b66e  5b                   pop ebx
// 0053b66f  c3                   ret 
// 0053b670  395e3c               cmp dword ptr [esi + 0x3c], ebx
// 0053b673  7413                 je 0x53b688
// 0053b675  8b16                 mov edx, dword ptr [esi]
// 0053b677  c742140a000000       mov dword ptr [edx + 0x14], 0xa
// 0053b67e  8b06                 mov eax, dword ptr [esi]
// 0053b680  8b08                 mov ecx, dword ptr [eax]
// 0053b682  56                   push esi
// 0053b683  ffd1                 call ecx
// 0053b685  83c404               add esp, 4
// 0053b688  395e28               cmp dword ptr [esi + 0x28], ebx
// 0053b68b  0f8483000000         je 0x53b714
// 0053b691  8b16                 mov edx, dword ptr [esi]
// 0053b693  c742141b000000       mov dword ptr [edx + 0x14], 0x1b
// 0053b69a  8b06                 mov eax, dword ptr [esi]
// 0053b69c  8b08                 mov ecx, dword ptr [eax]
// 0053b69e  56                   push esi
// 0053b69f  ffd1                 call ecx
// 0053b6a1  83c404               add esp, 4
// 0053b6a4  5f                   pop edi
// 0053b6a5  5e                   pop esi
// 0053b6a6  5b                   pop ebx
// 0053b6a7  c3                   ret 
// 0053b6a8  395e3c               cmp dword ptr [esi + 0x3c], ebx
// 0053b6ab  7413                 je 0x53b6c0
// 0053b6ad  8b16                 mov edx, dword ptr [esi]
// 0053b6af  c742140a000000       mov dword ptr [edx + 0x14], 0xa
// 0053b6b6  8b06                 mov eax, dword ptr [esi]
// 0053b6b8  8b08                 mov ecx, dword ptr [eax]
// 0053b6ba  56                   push esi
// 0053b6bb  ffd1                 call ecx
// 0053b6bd  83c404               add esp, 4
// 0053b6c0  8b4628               mov eax, dword ptr [esi + 0x28]
// 0053b6c3  3bc3                 cmp eax, ebx
// 0053b6c5  7511                 jne 0x53b6d8
// 0053b6c7  c70750b05300         mov dword ptr [edi], 0x53b050
// 0053b6cd  c74704f0b25300       mov dword ptr [edi + 4], 0x53b2f0
// 0053b6d4  5f                   pop edi
// 0053b6d5  5e                   pop esi
// 0053b6d6  5b                   pop ebx
// 0053b6d7  c3                   ret 
// 0053b6d8  83f805               cmp eax, 5
// 0053b6db  7437                 je 0x53b714
// 0053b6dd  8b16                 mov edx, dword ptr [esi]
// 0053b6df  c742141b000000       mov dword ptr [edx + 0x14], 0x1b
// 0053b6e6  8b06                 mov eax, dword ptr [esi]
// 0053b6e8  8b08                 mov ecx, dword ptr [eax]
// 0053b6ea  56                   push esi
// 0053b6eb  ffd1                 call ecx
// 0053b6ed  83c404               add esp, 4
// 0053b6f0  5f                   pop edi
// 0053b6f1  5e                   pop esi
// 0053b6f2  5b                   pop ebx
// 0053b6f3  c3                   ret 
// 0053b6f4  3b4628               cmp eax, dword ptr [esi + 0x28]
// 0053b6f7  7508                 jne 0x53b701
// 0053b6f9  8b563c               mov edx, dword ptr [esi + 0x3c]
// 0053b6fc  3b5624               cmp edx, dword ptr [esi + 0x24]
// 0053b6ff  7413                 je 0x53b714
// 0053b701  8b06                 mov eax, dword ptr [esi]
// 0053b703  c740141b000000       mov dword ptr [eax + 0x14], 0x1b
// 0053b70a  8b0e                 mov ecx, dword ptr [esi]
// 0053b70c  8b11                 mov edx, dword ptr [ecx]
// 0053b70e  56                   push esi
// 0053b70f  ffd2                 call edx
// 0053b711  83c404               add esp, 4
// 0053b714  c74704a0b45300       mov dword ptr [edi + 4], 0x53b4a0
// 0053b71b  5f                   pop edi
// 0053b71c  5e                   pop esi
// 0053b71d  5b                   pop ebx
// 0053b71e  c3                   ret 
// 0053b71f  90                   nop 
// 0053b720  58                   pop eax
// 0053b721  b553                 mov ch, 0x53
// 0053b723  0060b5               add byte ptr [eax - 0x4b], ah
// 0053b726  53                   push ebx
// 0053b727  0060b5               add byte ptr [eax - 0x4b], ah
// 0053b72a  53                   push ebx
// 0053b72b  0068b5               add byte ptr [eax - 0x4b], ch
// 0053b72e  53                   push ebx
// 0053b72f  0068b5               add byte ptr [eax - 0x4b], ch
// 0053b732  53                   push ebx
// 0053b733  009db55300e4         add byte ptr [ebp - 0x1bffac4b], bl
// 0053b739  b553                 mov ch, 0x53
// 0053b73b  001e                 add byte ptr [esi], bl
// 0053b73d  b653                 mov dh, 0x53
// 0053b73f  0070b6               add byte ptr [eax - 0x4a], dh
// 0053b742  53                   push ebx
// library jpeg-6b/jccolor.c (function _jinit_color_converter)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jccolor.c
