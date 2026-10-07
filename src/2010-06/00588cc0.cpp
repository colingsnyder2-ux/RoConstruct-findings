// roc 2010-06 00588cc0  unit: seg_00580000  size: 377 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00588cc0
//
// 00588cc0  83ec08               sub esp, 8
// 00588cc3  53                   push ebx
// 00588cc4  56                   push esi
// 00588cc5  8b742414             mov esi, dword ptr [esp + 0x14]
// 00588cc9  8b4604               mov eax, dword ptr [esi + 4]
// 00588ccc  8b08                 mov ecx, dword ptr [eax]
// 00588cce  6a34                 push 0x34
// 00588cd0  6a01                 push 1
// 00588cd2  56                   push esi
// 00588cd3  c644241701           mov byte ptr [esp + 0x17], 1
// 00588cd8  ffd1                 call ecx
// 00588cda  8bd8                 mov ebx, eax
// 00588cdc  899e54010000         mov dword ptr [esi + 0x154], ebx
// 00588ce2  83c40c               add esp, 0xc
// 00588ce5  c703b0454500         mov dword ptr [ebx], 0x4545b0
// 00588ceb  c7430400855800       mov dword ptr [ebx + 4], 0x588500
// 00588cf2  c6430800             mov byte ptr [ebx + 8], 0
// 00588cf6  80beb300000000       cmp byte ptr [esi + 0xb3], 0
// 00588cfd  895c2414             mov dword ptr [esp + 0x14], ebx
// 00588d01  7413                 je 0x588d16
// 00588d03  8b16                 mov edx, dword ptr [esi]
// 00588d05  c7421419000000       mov dword ptr [edx + 0x14], 0x19
// 00588d0c  8b06                 mov eax, dword ptr [esi]
// 00588d0e  8b08                 mov ecx, dword ptr [eax]
// 00588d10  56                   push esi
// 00588d11  ffd1                 call ecx
// 00588d13  83c404               add esp, 4
// 00588d16  837e3c00             cmp dword ptr [esi + 0x3c], 0
// 00588d1a  8b4644               mov eax, dword ptr [esi + 0x44]
// 00588d1d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00588d25  0f8ee2000000         jle 0x588e0d
// 00588d2b  55                   push ebp
// 00588d2c  57                   push edi
// 00588d2d  8d680c               lea ebp, [eax + 0xc]
// 00588d30  8d7b0c               lea edi, [ebx + 0xc]
// 00588d33  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 00588d36  8b86d8000000         mov eax, dword ptr [esi + 0xd8]
// 00588d3c  3bc8                 cmp ecx, eax
// 00588d3e  752e                 jne 0x588d6e
// 00588d40  8b5500               mov edx, dword ptr [ebp]
// 00588d43  3b96dc000000         cmp edx, dword ptr [esi + 0xdc]
// 00588d49  7523                 jne 0x588d6e
// 00588d4b  83beb400000000       cmp dword ptr [esi + 0xb4], 0
// 00588d52  740f                 je 0x588d63
// 00588d54  c707408b5800         mov dword ptr [edi], 0x588b40
// 00588d5a  c6430801             mov byte ptr [ebx + 8], 1
// 00588d5e  e990000000           jmp 0x588df3
// 00588d63  c70700875800         mov dword ptr [edi], 0x588700
// 00588d69  e985000000           jmp 0x588df3
// 00588d6e  8d1409               lea edx, [ecx + ecx]
// 00588d71  3bd0                 cmp edx, eax
// 00588d73  754a                 jne 0x588dbf
// 00588d75  8b5d00               mov ebx, dword ptr [ebp]
// 00588d78  3b9edc000000         cmp ebx, dword ptr [esi + 0xdc]
// 00588d7e  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 00588d82  750d                 jne 0x588d91
// 00588d84  c644241300           mov byte ptr [esp + 0x13], 0
// 00588d89  c70750875800         mov dword ptr [edi], 0x588750
// 00588d8f  eb62                 jmp 0x588df3
// 00588d91  3bd0                 cmp edx, eax
// 00588d93  752a                 jne 0x588dbf
// 00588d95  8b5500               mov edx, dword ptr [ebp]
// 00588d98  03d2                 add edx, edx
// 00588d9a  3b96dc000000         cmp edx, dword ptr [esi + 0xdc]
// 00588da0  751d                 jne 0x588dbf
// 00588da2  83beb400000000       cmp dword ptr [esi + 0xb4], 0
// 00588da9  740c                 je 0x588db7
// 00588dab  c707c0885800         mov dword ptr [edi], 0x5888c0
// 00588db1  c6430801             mov byte ptr [ebx + 8], 1
// 00588db5  eb3c                 jmp 0x588df3
// 00588db7  c707f0875800         mov dword ptr [edi], 0x5887f0
// 00588dbd  eb34                 jmp 0x588df3
// 00588dbf  99                   cdq 
// 00588dc0  f7f9                 idiv ecx
// 00588dc2  85d2                 test edx, edx
// 00588dc4  751a                 jne 0x588de0
// 00588dc6  8b86dc000000         mov eax, dword ptr [esi + 0xdc]
// 00588dcc  99                   cdq 
// 00588dcd  f77d00               idiv dword ptr [ebp]
// 00588dd0  85d2                 test edx, edx
// 00588dd2  750c                 jne 0x588de0
// 00588dd4  88542413             mov byte ptr [esp + 0x13], dl
// 00588dd8  c70790855800         mov dword ptr [edi], 0x588590
// 00588dde  eb13                 jmp 0x588df3
// 00588de0  8b06                 mov eax, dword ptr [esi]
// 00588de2  c7401426000000       mov dword ptr [eax + 0x14], 0x26
// 00588de9  8b0e                 mov ecx, dword ptr [esi]
// 00588deb  8b11                 mov edx, dword ptr [ecx]
// 00588ded  56                   push esi
// 00588dee  ffd2                 call edx
// 00588df0  83c404               add esp, 4
// 00588df3  8b442414             mov eax, dword ptr [esp + 0x14]
// 00588df7  40                   inc eax
// 00588df8  83c704               add edi, 4
// 00588dfb  83c554               add ebp, 0x54
// 00588dfe  3b463c               cmp eax, dword ptr [esi + 0x3c]
// 00588e01  89442414             mov dword ptr [esp + 0x14], eax
// 00588e05  0f8c28ffffff         jl 0x588d33
// 00588e0b  5f                   pop edi
// 00588e0c  5d                   pop ebp
// 00588e0d  83beb400000000       cmp dword ptr [esi + 0xb4], 0
// 00588e14  741d                 je 0x588e33
// 00588e16  807c240b00           cmp byte ptr [esp + 0xb], 0
// 00588e1b  7516                 jne 0x588e33
// 00588e1d  8b06                 mov eax, dword ptr [esi]
// 00588e1f  c7401463000000       mov dword ptr [eax + 0x14], 0x63
// 00588e26  8b0e                 mov ecx, dword ptr [esi]
// 00588e28  8b5104               mov edx, dword ptr [ecx + 4]
// 00588e2b  6a00                 push 0
// 00588e2d  56                   push esi
// 00588e2e  ffd2                 call edx
// 00588e30  83c408               add esp, 8
// 00588e33  5e                   pop esi
// 00588e34  5b                   pop ebx
// 00588e35  83c408               add esp, 8
// 00588e38  c3                   ret 
// library jpeg-6b/jcsample.c (function _jinit_downsampler)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcsample.c
