// roc 2009-12 00623c20  unit: seg_00620000  size: 504 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00623c20
//
// 00623c20  81ec14050000         sub esp, 0x514
// 00623c26  53                   push ebx
// 00623c27  55                   push ebp
// 00623c28  56                   push esi
// 00623c29  8bb4242c050000       mov esi, dword ptr [esp + 0x52c]
// 00623c30  57                   push edi
// 00623c31  bf32000000           mov edi, 0x32
// 00623c36  85f6                 test esi, esi
// 00623c38  7c05                 jl 0x623c3f
// 00623c3a  83fe04               cmp esi, 4
// 00623c3d  7c20                 jl 0x623c5f
// 00623c3f  8bac2428050000       mov ebp, dword ptr [esp + 0x528]
// 00623c46  8b4500               mov eax, dword ptr [ebp]
// 00623c49  897814               mov dword ptr [eax + 0x14], edi
// 00623c4c  8b4d00               mov ecx, dword ptr [ebp]
// 00623c4f  897118               mov dword ptr [ecx + 0x18], esi
// 00623c52  8b5500               mov edx, dword ptr [ebp]
// 00623c55  8b02                 mov eax, dword ptr [edx]
// 00623c57  55                   push ebp
// 00623c58  ffd0                 call eax
// 00623c5a  83c404               add esp, 4
// 00623c5d  eb07                 jmp 0x623c66
// 00623c5f  8bac2428050000       mov ebp, dword ptr [esp + 0x528]
// 00623c66  80bc242c05000000     cmp byte ptr [esp + 0x52c], 0
// 00623c6e  740a                 je 0x623c7a
// 00623c70  8b4cb558             mov ecx, dword ptr [ebp + esi*4 + 0x58]
// 00623c74  894c2410             mov dword ptr [esp + 0x10], ecx
// 00623c78  eb08                 jmp 0x623c82
// 00623c7a  8b54b568             mov edx, dword ptr [ebp + esi*4 + 0x68]
// 00623c7e  89542410             mov dword ptr [esp + 0x10], edx
// 00623c82  837c241000           cmp dword ptr [esp + 0x10], 0
// 00623c87  7517                 jne 0x623ca0
// 00623c89  8b4500               mov eax, dword ptr [ebp]
// 00623c8c  897814               mov dword ptr [eax + 0x14], edi
// 00623c8f  8b4d00               mov ecx, dword ptr [ebp]
// 00623c92  897118               mov dword ptr [ecx + 0x18], esi
// 00623c95  8b5500               mov edx, dword ptr [ebp]
// 00623c98  8b02                 mov eax, dword ptr [edx]
// 00623c9a  55                   push ebp
// 00623c9b  ffd0                 call eax
// 00623c9d  83c404               add esp, 4
// 00623ca0  8bb42434050000       mov esi, dword ptr [esp + 0x534]
// 00623ca7  833e00               cmp dword ptr [esi], 0
// 00623caa  7514                 jne 0x623cc0
// 00623cac  8b4d04               mov ecx, dword ptr [ebp + 4]
// 00623caf  8b11                 mov edx, dword ptr [ecx]
// 00623cb1  6800050000           push 0x500
// 00623cb6  6a01                 push 1
// 00623cb8  55                   push ebp
// 00623cb9  ffd2                 call edx
// 00623cbb  83c40c               add esp, 0xc
// 00623cbe  8906                 mov dword ptr [esi], eax
// 00623cc0  8b06                 mov eax, dword ptr [esi]
// 00623cc2  89442418             mov dword ptr [esp + 0x18], eax
// 00623cc6  33ff                 xor edi, edi
// 00623cc8  bb01000000           mov ebx, 1
// 00623ccd  8d4900               lea ecx, [ecx]
// 00623cd0  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00623cd4  0fb6340b             movzx esi, byte ptr [ebx + ecx]
// 00623cd8  85f6                 test esi, esi
// 00623cda  7c0b                 jl 0x623ce7
// 00623cdc  8d143e               lea edx, [esi + edi]
// 00623cdf  81fa00010000         cmp edx, 0x100
// 00623ce5  7e15                 jle 0x623cfc
// 00623ce7  8b4500               mov eax, dword ptr [ebp]
// 00623cea  c7401408000000       mov dword ptr [eax + 0x14], 8
// 00623cf1  8b4d00               mov ecx, dword ptr [ebp]
// 00623cf4  8b11                 mov edx, dword ptr [ecx]
// 00623cf6  55                   push ebp
// 00623cf7  ffd2                 call edx
// 00623cf9  83c404               add esp, 4
// 00623cfc  85f6                 test esi, esi
// 00623cfe  7411                 je 0x623d11
// 00623d00  56                   push esi
// 00623d01  8d443c20             lea eax, [esp + edi + 0x20]
// 00623d05  53                   push ebx
// 00623d06  50                   push eax
// 00623d07  e8980d1d00           call 0x7f4aa4
// 00623d0c  83c40c               add esp, 0xc
// 00623d0f  03fe                 add edi, esi
// 00623d11  43                   inc ebx
// 00623d12  83fb10               cmp ebx, 0x10
// 00623d15  7eb9                 jle 0x623cd0
// 00623d17  c6443c1c00           mov byte ptr [esp + edi + 0x1c], 0
// 00623d1c  8a44241c             mov al, byte ptr [esp + 0x1c]
// 00623d20  897c2414             mov dword ptr [esp + 0x14], edi
// 00623d24  33ff                 xor edi, edi
// 00623d26  33f6                 xor esi, esi
// 00623d28  0fbed8               movsx ebx, al
// 00623d2b  84c0                 test al, al
// 00623d2d  7451                 je 0x623d80
// 00623d2f  8d44241c             lea eax, [esp + 0x1c]
// 00623d33  0fbe00               movsx eax, byte ptr [eax]
// 00623d36  3bc3                 cmp eax, ebx
// 00623d38  7518                 jne 0x623d52
// 00623d3a  8d9b00000000         lea ebx, [ebx]
// 00623d40  0fbe4c341d           movsx ecx, byte ptr [esp + esi + 0x1d]
// 00623d45  89bcb420010000       mov dword ptr [esp + esi*4 + 0x120], edi
// 00623d4c  46                   inc esi
// 00623d4d  47                   inc edi
// 00623d4e  3bcb                 cmp ecx, ebx
// 00623d50  74ee                 je 0x623d40
// 00623d52  ba01000000           mov edx, 1
// 00623d57  8bcb                 mov ecx, ebx
// 00623d59  d3e2                 shl edx, cl
// 00623d5b  3bfa                 cmp edi, edx
// 00623d5d  7c15                 jl 0x623d74
// 00623d5f  8b4500               mov eax, dword ptr [ebp]
// 00623d62  c7401408000000       mov dword ptr [eax + 0x14], 8
// 00623d69  8b4d00               mov ecx, dword ptr [ebp]
// 00623d6c  8b11                 mov edx, dword ptr [ecx]
// 00623d6e  55                   push ebp
// 00623d6f  ffd2                 call edx
// 00623d71  83c404               add esp, 4
// 00623d74  8d44341c             lea eax, [esp + esi + 0x1c]
// 00623d78  03ff                 add edi, edi
// 00623d7a  43                   inc ebx
// 00623d7b  803800               cmp byte ptr [eax], 0
// 00623d7e  75b3                 jne 0x623d33
// 00623d80  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 00623d84  6800010000           push 0x100
// 00623d89  81c500040000         add ebp, 0x400
// 00623d8f  6a00                 push 0
// 00623d91  55                   push ebp
// 00623d92  e80d0d1d00           call 0x7f4aa4
// 00623d97  0fb69c2438050000     movzx ebx, byte ptr [esp + 0x538]
// 00623d9f  83c40c               add esp, 0xc
// 00623da2  f7db                 neg ebx
// 00623da4  1bdb                 sbb ebx, ebx
// 00623da6  81e310ffffff         and ebx, 0xffffff10
// 00623dac  33f6                 xor esi, esi
// 00623dae  81c3ff000000         add ebx, 0xff
// 00623db4  39742414             cmp dword ptr [esp + 0x14], esi
// 00623db8  7e53                 jle 0x623e0d
// 00623dba  8d9b00000000         lea ebx, [ebx]
// 00623dc0  8b442410             mov eax, dword ptr [esp + 0x10]
// 00623dc4  0fb67c3011           movzx edi, byte ptr [eax + esi + 0x11]
// 00623dc9  85ff                 test edi, edi
// 00623dcb  7c0a                 jl 0x623dd7
// 00623dcd  3bfb                 cmp edi, ebx
// 00623dcf  7f06                 jg 0x623dd7
// 00623dd1  803c2f00             cmp byte ptr [edi + ebp], 0
// 00623dd5  741a                 je 0x623df1
// 00623dd7  8b842428050000       mov eax, dword ptr [esp + 0x528]
// 00623dde  8b08                 mov ecx, dword ptr [eax]
// 00623de0  c7411408000000       mov dword ptr [ecx + 0x14], 8
// 00623de7  8b10                 mov edx, dword ptr [eax]
// 00623de9  50                   push eax
// 00623dea  8b02                 mov eax, dword ptr [edx]
// 00623dec  ffd0                 call eax
// 00623dee  83c404               add esp, 4
// 00623df1  8b8cb420010000       mov ecx, dword ptr [esp + esi*4 + 0x120]
// 00623df8  8a44341c             mov al, byte ptr [esp + esi + 0x1c]
// 00623dfc  8b542418             mov edx, dword ptr [esp + 0x18]
// 00623e00  46                   inc esi
// 00623e01  3b742414             cmp esi, dword ptr [esp + 0x14]
// 00623e05  890cba               mov dword ptr [edx + edi*4], ecx
// 00623e08  88042f               mov byte ptr [edi + ebp], al
// 00623e0b  7cb3                 jl 0x623dc0
// 00623e0d  5f                   pop edi
// 00623e0e  5e                   pop esi
// 00623e0f  5d                   pop ebp
// 00623e10  5b                   pop ebx
// 00623e11  81c414050000         add esp, 0x514
// 00623e17  c3                   ret 
// library jpeg-6b/jchuff.c (function _jpeg_make_c_derived_tbl)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jchuff.c
