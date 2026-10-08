// from server: 100% by auto
// roc 2007-08 0052a390  unit: seg_00520000  size: 365 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0052a390
//
// 0052a390  83ec20               sub esp, 0x20
// 0052a393  53                   push ebx
// 0052a394  55                   push ebp
// 0052a395  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 0052a399  8b9da8010000         mov ebx, dword ptr [ebp + 0x1a8]
// 0052a39f  56                   push esi
// 0052a3a0  57                   push edi
// 0052a3a1  8d7320               lea esi, [ebx + 0x20]
// 0052a3a4  56                   push esi
// 0052a3a5  55                   push ebp
// 0052a3a6  895c2434             mov dword ptr [esp + 0x34], ebx
// 0052a3aa  e8b1feffff           call 0x52a260
// 0052a3af  83c408               add esp, 8
// 0052a3b2  837d6403             cmp dword ptr [ebp + 0x64], 3
// 0052a3b6  8bf8                 mov edi, eax
// 0052a3b8  6a01                 push 1
// 0052a3ba  897c2420             mov dword ptr [esp + 0x20], edi
// 0052a3be  55                   push ebp
// 0052a3bf  752d                 jne 0x52a3ee
// 0052a3c1  8b4500               mov eax, dword ptr [ebp]
// 0052a3c4  83c018               add eax, 0x18
// 0052a3c7  8938                 mov dword ptr [eax], edi
// 0052a3c9  8b0e                 mov ecx, dword ptr [esi]
// 0052a3cb  894804               mov dword ptr [eax + 4], ecx
// 0052a3ce  8b5324               mov edx, dword ptr [ebx + 0x24]
// 0052a3d1  895008               mov dword ptr [eax + 8], edx
// 0052a3d4  8b4b28               mov ecx, dword ptr [ebx + 0x28]
// 0052a3d7  89480c               mov dword ptr [eax + 0xc], ecx
// 0052a3da  8b5500               mov edx, dword ptr [ebp]
// 0052a3dd  c742145e000000       mov dword ptr [edx + 0x14], 0x5e
// 0052a3e4  8b4500               mov eax, dword ptr [ebp]
// 0052a3e7  8b4804               mov ecx, dword ptr [eax + 4]
// 0052a3ea  ffd1                 call ecx
// 0052a3ec  eb18                 jmp 0x52a406
// 0052a3ee  8b5500               mov edx, dword ptr [ebp]
// 0052a3f1  c742145f000000       mov dword ptr [edx + 0x14], 0x5f
// 0052a3f8  8b4500               mov eax, dword ptr [ebp]
// 0052a3fb  897818               mov dword ptr [eax + 0x18], edi
// 0052a3fe  8b4d00               mov ecx, dword ptr [ebp]
// 0052a401  8b5104               mov edx, dword ptr [ecx + 4]
// 0052a404  ffd2                 call edx
// 0052a406  8b4d64               mov ecx, dword ptr [ebp + 0x64]
// 0052a409  8b4504               mov eax, dword ptr [ebp + 4]
// 0052a40c  8b5008               mov edx, dword ptr [eax + 8]
// 0052a40f  83c408               add esp, 8
// 0052a412  51                   push ecx
// 0052a413  57                   push edi
// 0052a414  6a01                 push 1
// 0052a416  55                   push ebp
// 0052a417  ffd2                 call edx
// 0052a419  83c410               add esp, 0x10
// 0052a41c  837d6400             cmp dword ptr [ebp + 0x64], 0
// 0052a420  8bc8                 mov ecx, eax
// 0052a422  894c2428             mov dword ptr [esp + 0x28], ecx
// 0052a426  897c2414             mov dword ptr [esp + 0x14], edi
// 0052a42a  c744242400000000     mov dword ptr [esp + 0x24], 0
// 0052a432  0f8eb7000000         jle 0x52a4ef
// 0052a438  8bd9                 mov ebx, ecx
// 0052a43a  89742418             mov dword ptr [esp + 0x18], esi
// 0052a43e  8bff                 mov edi, edi
// 0052a440  8b442418             mov eax, dword ptr [esp + 0x18]
// 0052a444  8b30                 mov esi, dword ptr [eax]
// 0052a446  8b442414             mov eax, dword ptr [esp + 0x14]
// 0052a44a  99                   cdq 
// 0052a44b  f7fe                 idiv esi
// 0052a44d  85f6                 test esi, esi
// 0052a44f  89742420             mov dword ptr [esp + 0x20], esi
// 0052a453  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0052a45b  8bf8                 mov edi, eax
// 0052a45d  7e5a                 jle 0x52a4b9
// 0052a45f  33ed                 xor ebp, ebp
// 0052a461  eb04                 jmp 0x52a467
// 0052a463  8b742420             mov esi, dword ptr [esp + 0x20]
// 0052a467  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0052a46b  83c6ff               add esi, -1
// 0052a46e  e8ddfeffff           call 0x52a350
// 0052a473  3b6c241c             cmp ebp, dword ptr [esp + 0x1c]
// 0052a477  8bd5                 mov edx, ebp
// 0052a479  7d23                 jge 0x52a49e
// 0052a47b  eb03                 jmp 0x52a480
// 0052a47d  8d4900               lea ecx, [ecx]
// 0052a480  33c9                 xor ecx, ecx
// 0052a482  85ff                 test edi, edi
// 0052a484  7e0e                 jle 0x52a494
// 0052a486  8b33                 mov esi, dword ptr [ebx]
// 0052a488  03f1                 add esi, ecx
// 0052a48a  83c101               add ecx, 1
// 0052a48d  3bcf                 cmp ecx, edi
// 0052a48f  880416               mov byte ptr [esi + edx], al
// 0052a492  7cf2                 jl 0x52a486
// 0052a494  03542414             add edx, dword ptr [esp + 0x14]
// 0052a498  3b54241c             cmp edx, dword ptr [esp + 0x1c]
// 0052a49c  7ce2                 jl 0x52a480
// 0052a49e  8b442410             mov eax, dword ptr [esp + 0x10]
// 0052a4a2  83c001               add eax, 1
// 0052a4a5  03ef                 add ebp, edi
// 0052a4a7  3b442420             cmp eax, dword ptr [esp + 0x20]
// 0052a4ab  89442410             mov dword ptr [esp + 0x10], eax
// 0052a4af  7cb2                 jl 0x52a463
// 0052a4b1  8b6c2434             mov ebp, dword ptr [esp + 0x34]
// 0052a4b5  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0052a4b9  8b442424             mov eax, dword ptr [esp + 0x24]
// 0052a4bd  8344241804           add dword ptr [esp + 0x18], 4
// 0052a4c2  83c001               add eax, 1
// 0052a4c5  83c304               add ebx, 4
// 0052a4c8  3b4564               cmp eax, dword ptr [ebp + 0x64]
// 0052a4cb  897c2414             mov dword ptr [esp + 0x14], edi
// 0052a4cf  89442424             mov dword ptr [esp + 0x24], eax
// 0052a4d3  0f8c67ffffff         jl 0x52a440
// 0052a4d9  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0052a4dd  5f                   pop edi
// 0052a4de  5e                   pop esi
// 0052a4df  894810               mov dword ptr [eax + 0x10], ecx
// 0052a4e2  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0052a4e6  5d                   pop ebp
// 0052a4e7  894814               mov dword ptr [eax + 0x14], ecx
// 0052a4ea  5b                   pop ebx
// 0052a4eb  83c420               add esp, 0x20
// 0052a4ee  c3                   ret 
// 0052a4ef  897b14               mov dword ptr [ebx + 0x14], edi
// 0052a4f2  5f                   pop edi
// 0052a4f3  5e                   pop esi
// 0052a4f4  5d                   pop ebp
// 0052a4f5  894b10               mov dword ptr [ebx + 0x10], ecx
// 0052a4f8  5b                   pop ebx
// 0052a4f9  83c420               add esp, 0x20
// 0052a4fc  c3                   ret 
// library jpeg-6b/jquant1.c (function _create_colormap)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /Ob1 /GS- /MD
// roc-lib: jpeg-6b jquant1.c
