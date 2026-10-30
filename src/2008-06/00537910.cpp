// from server: 100% by auto
// roc 2008-06 00537910  unit: seg_00530000  size: 504 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00537910
//
// 00537910  81ec14050000         sub esp, 0x514
// 00537916  53                   push ebx
// 00537917  55                   push ebp
// 00537918  56                   push esi
// 00537919  8bb4242c050000       mov esi, dword ptr [esp + 0x52c]
// 00537920  57                   push edi
// 00537921  bf32000000           mov edi, 0x32
// 00537926  85f6                 test esi, esi
// 00537928  7c05                 jl 0x53792f
// 0053792a  83fe04               cmp esi, 4
// 0053792d  7c20                 jl 0x53794f
// 0053792f  8bac2428050000       mov ebp, dword ptr [esp + 0x528]
// 00537936  8b4500               mov eax, dword ptr [ebp]
// 00537939  897814               mov dword ptr [eax + 0x14], edi
// 0053793c  8b4d00               mov ecx, dword ptr [ebp]
// 0053793f  897118               mov dword ptr [ecx + 0x18], esi
// 00537942  8b5500               mov edx, dword ptr [ebp]
// 00537945  8b02                 mov eax, dword ptr [edx]
// 00537947  55                   push ebp
// 00537948  ffd0                 call eax
// 0053794a  83c404               add esp, 4
// 0053794d  eb07                 jmp 0x537956
// 0053794f  8bac2428050000       mov ebp, dword ptr [esp + 0x528]
// 00537956  80bc242c05000000     cmp byte ptr [esp + 0x52c], 0
// 0053795e  740a                 je 0x53796a
// 00537960  8b4cb558             mov ecx, dword ptr [ebp + esi*4 + 0x58]
// 00537964  894c2410             mov dword ptr [esp + 0x10], ecx
// 00537968  eb08                 jmp 0x537972
// 0053796a  8b54b568             mov edx, dword ptr [ebp + esi*4 + 0x68]
// 0053796e  89542410             mov dword ptr [esp + 0x10], edx
// 00537972  837c241000           cmp dword ptr [esp + 0x10], 0
// 00537977  7517                 jne 0x537990
// 00537979  8b4500               mov eax, dword ptr [ebp]
// 0053797c  897814               mov dword ptr [eax + 0x14], edi
// 0053797f  8b4d00               mov ecx, dword ptr [ebp]
// 00537982  897118               mov dword ptr [ecx + 0x18], esi
// 00537985  8b5500               mov edx, dword ptr [ebp]
// 00537988  8b02                 mov eax, dword ptr [edx]
// 0053798a  55                   push ebp
// 0053798b  ffd0                 call eax
// 0053798d  83c404               add esp, 4
// 00537990  8bb42434050000       mov esi, dword ptr [esp + 0x534]
// 00537997  833e00               cmp dword ptr [esi], 0
// 0053799a  7514                 jne 0x5379b0
// 0053799c  8b4d04               mov ecx, dword ptr [ebp + 4]
// 0053799f  8b11                 mov edx, dword ptr [ecx]
// 005379a1  6800050000           push 0x500
// 005379a6  6a01                 push 1
// 005379a8  55                   push ebp
// 005379a9  ffd2                 call edx
// 005379ab  83c40c               add esp, 0xc
// 005379ae  8906                 mov dword ptr [esi], eax
// 005379b0  8b06                 mov eax, dword ptr [esi]
// 005379b2  89442418             mov dword ptr [esp + 0x18], eax
// 005379b6  33ff                 xor edi, edi
// 005379b8  bb01000000           mov ebx, 1
// 005379bd  8d4900               lea ecx, [ecx]
// 005379c0  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005379c4  0fb6340b             movzx esi, byte ptr [ebx + ecx]
// 005379c8  85f6                 test esi, esi
// 005379ca  7c0b                 jl 0x5379d7
// 005379cc  8d143e               lea edx, [esi + edi]
// 005379cf  81fa00010000         cmp edx, 0x100
// 005379d5  7e15                 jle 0x5379ec
// 005379d7  8b4500               mov eax, dword ptr [ebp]
// 005379da  c7401408000000       mov dword ptr [eax + 0x14], 8
// 005379e1  8b4d00               mov ecx, dword ptr [ebp]
// 005379e4  8b11                 mov edx, dword ptr [ecx]
// 005379e6  55                   push ebp
// 005379e7  ffd2                 call edx
// 005379e9  83c404               add esp, 4
// 005379ec  85f6                 test esi, esi
// 005379ee  7411                 je 0x537a01
// 005379f0  56                   push esi
// 005379f1  8d443c20             lea eax, [esp + edi + 0x20]
// 005379f5  53                   push ebx
// 005379f6  50                   push eax
// 005379f7  e8089d1600           call 0x6a1704
// 005379fc  83c40c               add esp, 0xc
// 005379ff  03fe                 add edi, esi
// 00537a01  43                   inc ebx
// 00537a02  83fb10               cmp ebx, 0x10
// 00537a05  7eb9                 jle 0x5379c0
// 00537a07  c6443c1c00           mov byte ptr [esp + edi + 0x1c], 0
// 00537a0c  8a44241c             mov al, byte ptr [esp + 0x1c]
// 00537a10  897c2414             mov dword ptr [esp + 0x14], edi
// 00537a14  33ff                 xor edi, edi
// 00537a16  33f6                 xor esi, esi
// 00537a18  0fbed8               movsx ebx, al
// 00537a1b  84c0                 test al, al
// 00537a1d  7451                 je 0x537a70
// 00537a1f  8d44241c             lea eax, [esp + 0x1c]
// 00537a23  0fbe00               movsx eax, byte ptr [eax]
// 00537a26  3bc3                 cmp eax, ebx
// 00537a28  7518                 jne 0x537a42
// 00537a2a  8d9b00000000         lea ebx, [ebx]
// 00537a30  0fbe4c341d           movsx ecx, byte ptr [esp + esi + 0x1d]
// 00537a35  89bcb420010000       mov dword ptr [esp + esi*4 + 0x120], edi
// 00537a3c  46                   inc esi
// 00537a3d  47                   inc edi
// 00537a3e  3bcb                 cmp ecx, ebx
// 00537a40  74ee                 je 0x537a30
// 00537a42  ba01000000           mov edx, 1
// 00537a47  8bcb                 mov ecx, ebx
// 00537a49  d3e2                 shl edx, cl
// 00537a4b  3bfa                 cmp edi, edx
// 00537a4d  7c15                 jl 0x537a64
// 00537a4f  8b4500               mov eax, dword ptr [ebp]
// 00537a52  c7401408000000       mov dword ptr [eax + 0x14], 8
// 00537a59  8b4d00               mov ecx, dword ptr [ebp]
// 00537a5c  8b11                 mov edx, dword ptr [ecx]
// 00537a5e  55                   push ebp
// 00537a5f  ffd2                 call edx
// 00537a61  83c404               add esp, 4
// 00537a64  8d44341c             lea eax, [esp + esi + 0x1c]
// 00537a68  03ff                 add edi, edi
// 00537a6a  43                   inc ebx
// 00537a6b  803800               cmp byte ptr [eax], 0
// 00537a6e  75b3                 jne 0x537a23
// 00537a70  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 00537a74  6800010000           push 0x100
// 00537a79  81c500040000         add ebp, 0x400
// 00537a7f  6a00                 push 0
// 00537a81  55                   push ebp
// 00537a82  e87d9c1600           call 0x6a1704
// 00537a87  0fb69c2438050000     movzx ebx, byte ptr [esp + 0x538]
// 00537a8f  83c40c               add esp, 0xc
// 00537a92  f7db                 neg ebx
// 00537a94  1bdb                 sbb ebx, ebx
// 00537a96  81e310ffffff         and ebx, 0xffffff10
// 00537a9c  33f6                 xor esi, esi
// 00537a9e  81c3ff000000         add ebx, 0xff
// 00537aa4  39742414             cmp dword ptr [esp + 0x14], esi
// 00537aa8  7e53                 jle 0x537afd
// 00537aaa  8d9b00000000         lea ebx, [ebx]
// 00537ab0  8b442410             mov eax, dword ptr [esp + 0x10]
// 00537ab4  0fb67c3011           movzx edi, byte ptr [eax + esi + 0x11]
// 00537ab9  85ff                 test edi, edi
// 00537abb  7c0a                 jl 0x537ac7
// 00537abd  3bfb                 cmp edi, ebx
// 00537abf  7f06                 jg 0x537ac7
// 00537ac1  803c2f00             cmp byte ptr [edi + ebp], 0
// 00537ac5  741a                 je 0x537ae1
// 00537ac7  8b842428050000       mov eax, dword ptr [esp + 0x528]
// 00537ace  8b08                 mov ecx, dword ptr [eax]
// 00537ad0  c7411408000000       mov dword ptr [ecx + 0x14], 8
// 00537ad7  8b10                 mov edx, dword ptr [eax]
// 00537ad9  50                   push eax
// 00537ada  8b02                 mov eax, dword ptr [edx]
// 00537adc  ffd0                 call eax
// 00537ade  83c404               add esp, 4
// 00537ae1  8b8cb420010000       mov ecx, dword ptr [esp + esi*4 + 0x120]
// 00537ae8  8a44341c             mov al, byte ptr [esp + esi + 0x1c]
// 00537aec  8b542418             mov edx, dword ptr [esp + 0x18]
// 00537af0  46                   inc esi
// 00537af1  3b742414             cmp esi, dword ptr [esp + 0x14]
// 00537af5  890cba               mov dword ptr [edx + edi*4], ecx
// 00537af8  88042f               mov byte ptr [edi + ebp], al
// 00537afb  7cb3                 jl 0x537ab0
// 00537afd  5f                   pop edi
// 00537afe  5e                   pop esi
// 00537aff  5d                   pop ebp
// 00537b00  5b                   pop ebx
// 00537b01  81c414050000         add esp, 0x514
// 00537b07  c3                   ret 
// library jpeg-6b/jchuff.c (function _jpeg_make_c_derived_tbl)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jchuff.c
