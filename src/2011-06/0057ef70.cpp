// roc 2011-06 0057ef70  unit: seg_00570000  size: 377 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0057ef70
//
// 0057ef70  83ec08               sub esp, 8
// 0057ef73  53                   push ebx
// 0057ef74  56                   push esi
// 0057ef75  8b742414             mov esi, dword ptr [esp + 0x14]
// 0057ef79  8b4604               mov eax, dword ptr [esi + 4]
// 0057ef7c  8b08                 mov ecx, dword ptr [eax]
// 0057ef7e  6a34                 push 0x34
// 0057ef80  6a01                 push 1
// 0057ef82  56                   push esi
// 0057ef83  c644241701           mov byte ptr [esp + 0x17], 1
// 0057ef88  ffd1                 call ecx
// 0057ef8a  8bd8                 mov ebx, eax
// 0057ef8c  899e54010000         mov dword ptr [esi + 0x154], ebx
// 0057ef92  83c40c               add esp, 0xc
// 0057ef95  c70340b68600         mov dword ptr [ebx], 0x86b640
// 0057ef9b  c74304b0e75700       mov dword ptr [ebx + 4], 0x57e7b0
// 0057efa2  c6430800             mov byte ptr [ebx + 8], 0
// 0057efa6  80beb300000000       cmp byte ptr [esi + 0xb3], 0
// 0057efad  895c2414             mov dword ptr [esp + 0x14], ebx
// 0057efb1  7413                 je 0x57efc6
// 0057efb3  8b16                 mov edx, dword ptr [esi]
// 0057efb5  c7421419000000       mov dword ptr [edx + 0x14], 0x19
// 0057efbc  8b06                 mov eax, dword ptr [esi]
// 0057efbe  8b08                 mov ecx, dword ptr [eax]
// 0057efc0  56                   push esi
// 0057efc1  ffd1                 call ecx
// 0057efc3  83c404               add esp, 4
// 0057efc6  837e3c00             cmp dword ptr [esi + 0x3c], 0
// 0057efca  8b4644               mov eax, dword ptr [esi + 0x44]
// 0057efcd  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0057efd5  0f8ee2000000         jle 0x57f0bd
// 0057efdb  55                   push ebp
// 0057efdc  57                   push edi
// 0057efdd  8d680c               lea ebp, [eax + 0xc]
// 0057efe0  8d7b0c               lea edi, [ebx + 0xc]
// 0057efe3  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 0057efe6  8b86d8000000         mov eax, dword ptr [esi + 0xd8]
// 0057efec  3bc8                 cmp ecx, eax
// 0057efee  752e                 jne 0x57f01e
// 0057eff0  8b5500               mov edx, dword ptr [ebp]
// 0057eff3  3b96dc000000         cmp edx, dword ptr [esi + 0xdc]
// 0057eff9  7523                 jne 0x57f01e
// 0057effb  83beb400000000       cmp dword ptr [esi + 0xb4], 0
// 0057f002  740f                 je 0x57f013
// 0057f004  c707f0ed5700         mov dword ptr [edi], 0x57edf0
// 0057f00a  c6430801             mov byte ptr [ebx + 8], 1
// 0057f00e  e990000000           jmp 0x57f0a3
// 0057f013  c707b0e95700         mov dword ptr [edi], 0x57e9b0
// 0057f019  e985000000           jmp 0x57f0a3
// 0057f01e  8d1409               lea edx, [ecx + ecx]
// 0057f021  3bd0                 cmp edx, eax
// 0057f023  754a                 jne 0x57f06f
// 0057f025  8b5d00               mov ebx, dword ptr [ebp]
// 0057f028  3b9edc000000         cmp ebx, dword ptr [esi + 0xdc]
// 0057f02e  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0057f032  750d                 jne 0x57f041
// 0057f034  c644241300           mov byte ptr [esp + 0x13], 0
// 0057f039  c70700ea5700         mov dword ptr [edi], 0x57ea00
// 0057f03f  eb62                 jmp 0x57f0a3
// 0057f041  3bd0                 cmp edx, eax
// 0057f043  752a                 jne 0x57f06f
// 0057f045  8b5500               mov edx, dword ptr [ebp]
// 0057f048  03d2                 add edx, edx
// 0057f04a  3b96dc000000         cmp edx, dword ptr [esi + 0xdc]
// 0057f050  751d                 jne 0x57f06f
// 0057f052  83beb400000000       cmp dword ptr [esi + 0xb4], 0
// 0057f059  740c                 je 0x57f067
// 0057f05b  c70770eb5700         mov dword ptr [edi], 0x57eb70
// 0057f061  c6430801             mov byte ptr [ebx + 8], 1
// 0057f065  eb3c                 jmp 0x57f0a3
// 0057f067  c707a0ea5700         mov dword ptr [edi], 0x57eaa0
// 0057f06d  eb34                 jmp 0x57f0a3
// 0057f06f  99                   cdq 
// 0057f070  f7f9                 idiv ecx
// 0057f072  85d2                 test edx, edx
// 0057f074  751a                 jne 0x57f090
// 0057f076  8b86dc000000         mov eax, dword ptr [esi + 0xdc]
// 0057f07c  99                   cdq 
// 0057f07d  f77d00               idiv dword ptr [ebp]
// 0057f080  85d2                 test edx, edx
// 0057f082  750c                 jne 0x57f090
// 0057f084  88542413             mov byte ptr [esp + 0x13], dl
// 0057f088  c70740e85700         mov dword ptr [edi], 0x57e840
// 0057f08e  eb13                 jmp 0x57f0a3
// 0057f090  8b06                 mov eax, dword ptr [esi]
// 0057f092  c7401426000000       mov dword ptr [eax + 0x14], 0x26
// 0057f099  8b0e                 mov ecx, dword ptr [esi]
// 0057f09b  8b11                 mov edx, dword ptr [ecx]
// 0057f09d  56                   push esi
// 0057f09e  ffd2                 call edx
// 0057f0a0  83c404               add esp, 4
// 0057f0a3  8b442414             mov eax, dword ptr [esp + 0x14]
// 0057f0a7  40                   inc eax
// 0057f0a8  83c704               add edi, 4
// 0057f0ab  83c554               add ebp, 0x54
// 0057f0ae  3b463c               cmp eax, dword ptr [esi + 0x3c]
// 0057f0b1  89442414             mov dword ptr [esp + 0x14], eax
// 0057f0b5  0f8c28ffffff         jl 0x57efe3
// 0057f0bb  5f                   pop edi
// 0057f0bc  5d                   pop ebp
// 0057f0bd  83beb400000000       cmp dword ptr [esi + 0xb4], 0
// 0057f0c4  741d                 je 0x57f0e3
// 0057f0c6  807c240b00           cmp byte ptr [esp + 0xb], 0
// 0057f0cb  7516                 jne 0x57f0e3
// 0057f0cd  8b06                 mov eax, dword ptr [esi]
// 0057f0cf  c7401463000000       mov dword ptr [eax + 0x14], 0x63
// 0057f0d6  8b0e                 mov ecx, dword ptr [esi]
// 0057f0d8  8b5104               mov edx, dword ptr [ecx + 4]
// 0057f0db  6a00                 push 0
// 0057f0dd  56                   push esi
// 0057f0de  ffd2                 call edx
// 0057f0e0  83c408               add esp, 8
// 0057f0e3  5e                   pop esi
// 0057f0e4  5b                   pop ebx
// 0057f0e5  83c408               add esp, 8
// 0057f0e8  c3                   ret 
// library jpeg-6b/jcsample.c (function _jinit_downsampler)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcsample.c
