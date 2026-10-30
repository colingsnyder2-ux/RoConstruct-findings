// roc 2007-03 00529c60  unit: seg_00520000  size: 379 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00529c60
//
// 00529c60  83ec08               sub esp, 8
// 00529c63  53                   push ebx
// 00529c64  56                   push esi
// 00529c65  8b742414             mov esi, dword ptr [esp + 0x14]
// 00529c69  8b4604               mov eax, dword ptr [esi + 4]
// 00529c6c  8b08                 mov ecx, dword ptr [eax]
// 00529c6e  6a34                 push 0x34
// 00529c70  6a01                 push 1
// 00529c72  56                   push esi
// 00529c73  c644241701           mov byte ptr [esp + 0x17], 1
// 00529c78  ffd1                 call ecx
// 00529c7a  8bd8                 mov ebx, eax
// 00529c7c  899e54010000         mov dword ptr [esi + 0x154], ebx
// 00529c82  83c40c               add esp, 0xc
// 00529c85  c703c07d6900         mov dword ptr [ebx], 0x697dc0
// 00529c8b  c74304c0945200       mov dword ptr [ebx + 4], 0x5294c0
// 00529c92  c6430800             mov byte ptr [ebx + 8], 0
// 00529c96  80beb300000000       cmp byte ptr [esi + 0xb3], 0
// 00529c9d  895c2414             mov dword ptr [esp + 0x14], ebx
// 00529ca1  7413                 je 0x529cb6
// 00529ca3  8b16                 mov edx, dword ptr [esi]
// 00529ca5  c7421419000000       mov dword ptr [edx + 0x14], 0x19
// 00529cac  8b06                 mov eax, dword ptr [esi]
// 00529cae  8b08                 mov ecx, dword ptr [eax]
// 00529cb0  56                   push esi
// 00529cb1  ffd1                 call ecx
// 00529cb3  83c404               add esp, 4
// 00529cb6  837e3c00             cmp dword ptr [esi + 0x3c], 0
// 00529cba  8b4644               mov eax, dword ptr [esi + 0x44]
// 00529cbd  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00529cc5  0f8ee4000000         jle 0x529daf
// 00529ccb  55                   push ebp
// 00529ccc  57                   push edi
// 00529ccd  8d680c               lea ebp, [eax + 0xc]
// 00529cd0  8d7b0c               lea edi, [ebx + 0xc]
// 00529cd3  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 00529cd6  8b86d8000000         mov eax, dword ptr [esi + 0xd8]
// 00529cdc  3bc8                 cmp ecx, eax
// 00529cde  752e                 jne 0x529d0e
// 00529ce0  8b5500               mov edx, dword ptr [ebp]
// 00529ce3  3b96dc000000         cmp edx, dword ptr [esi + 0xdc]
// 00529ce9  7523                 jne 0x529d0e
// 00529ceb  83beb400000000       cmp dword ptr [esi + 0xb4], 0
// 00529cf2  740f                 je 0x529d03
// 00529cf4  c707d09a5200         mov dword ptr [edi], 0x529ad0
// 00529cfa  c6430801             mov byte ptr [ebx + 8], 1
// 00529cfe  e990000000           jmp 0x529d93
// 00529d03  c70780965200         mov dword ptr [edi], 0x529680
// 00529d09  e985000000           jmp 0x529d93
// 00529d0e  8d1409               lea edx, [ecx + ecx]
// 00529d11  3bd0                 cmp edx, eax
// 00529d13  754a                 jne 0x529d5f
// 00529d15  8b5d00               mov ebx, dword ptr [ebp]
// 00529d18  3b9edc000000         cmp ebx, dword ptr [esi + 0xdc]
// 00529d1e  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 00529d22  750d                 jne 0x529d31
// 00529d24  c644241300           mov byte ptr [esp + 0x13], 0
// 00529d29  c707d0965200         mov dword ptr [edi], 0x5296d0
// 00529d2f  eb62                 jmp 0x529d93
// 00529d31  3bd0                 cmp edx, eax
// 00529d33  752a                 jne 0x529d5f
// 00529d35  8b5500               mov edx, dword ptr [ebp]
// 00529d38  03d2                 add edx, edx
// 00529d3a  3b96dc000000         cmp edx, dword ptr [esi + 0xdc]
// 00529d40  751d                 jne 0x529d5f
// 00529d42  83beb400000000       cmp dword ptr [esi + 0xb4], 0
// 00529d49  740c                 je 0x529d57
// 00529d4b  c70750985200         mov dword ptr [edi], 0x529850
// 00529d51  c6430801             mov byte ptr [ebx + 8], 1
// 00529d55  eb3c                 jmp 0x529d93
// 00529d57  c70780975200         mov dword ptr [edi], 0x529780
// 00529d5d  eb34                 jmp 0x529d93
// 00529d5f  99                   cdq 
// 00529d60  f7f9                 idiv ecx
// 00529d62  85d2                 test edx, edx
// 00529d64  751a                 jne 0x529d80
// 00529d66  8b86dc000000         mov eax, dword ptr [esi + 0xdc]
// 00529d6c  99                   cdq 
// 00529d6d  f77d00               idiv dword ptr [ebp]
// 00529d70  85d2                 test edx, edx
// 00529d72  750c                 jne 0x529d80
// 00529d74  88542413             mov byte ptr [esp + 0x13], dl
// 00529d78  c70750955200         mov dword ptr [edi], 0x529550
// 00529d7e  eb13                 jmp 0x529d93
// 00529d80  8b06                 mov eax, dword ptr [esi]
// 00529d82  c7401426000000       mov dword ptr [eax + 0x14], 0x26
// 00529d89  8b0e                 mov ecx, dword ptr [esi]
// 00529d8b  8b11                 mov edx, dword ptr [ecx]
// 00529d8d  56                   push esi
// 00529d8e  ffd2                 call edx
// 00529d90  83c404               add esp, 4
// 00529d93  8b442414             mov eax, dword ptr [esp + 0x14]
// 00529d97  83c001               add eax, 1
// 00529d9a  83c704               add edi, 4
// 00529d9d  83c554               add ebp, 0x54
// 00529da0  3b463c               cmp eax, dword ptr [esi + 0x3c]
// 00529da3  89442414             mov dword ptr [esp + 0x14], eax
// 00529da7  0f8c26ffffff         jl 0x529cd3
// 00529dad  5f                   pop edi
// 00529dae  5d                   pop ebp
// 00529daf  83beb400000000       cmp dword ptr [esi + 0xb4], 0
// 00529db6  741d                 je 0x529dd5
// 00529db8  807c240b00           cmp byte ptr [esp + 0xb], 0
// 00529dbd  7516                 jne 0x529dd5
// 00529dbf  8b06                 mov eax, dword ptr [esi]
// 00529dc1  c7401463000000       mov dword ptr [eax + 0x14], 0x63
// 00529dc8  8b0e                 mov ecx, dword ptr [esi]
// 00529dca  8b5104               mov edx, dword ptr [ecx + 4]
// 00529dcd  6a00                 push 0
// 00529dcf  56                   push esi
// 00529dd0  ffd2                 call edx
// 00529dd2  83c408               add esp, 8
// 00529dd5  5e                   pop esi
// 00529dd6  5b                   pop ebx
// 00529dd7  83c408               add esp, 8
// 00529dda  c3                   ret 
// library jpeg-6b/jcsample.c (function _jinit_downsampler)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcsample.c
