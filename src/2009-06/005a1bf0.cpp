// from server: 100% by auto
// roc 2009-06 005a1bf0  unit: seg_005a0000  size: 504 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005a1bf0
//
// 005a1bf0  81ec14050000         sub esp, 0x514
// 005a1bf6  53                   push ebx
// 005a1bf7  55                   push ebp
// 005a1bf8  56                   push esi
// 005a1bf9  8bb4242c050000       mov esi, dword ptr [esp + 0x52c]
// 005a1c00  57                   push edi
// 005a1c01  bf32000000           mov edi, 0x32
// 005a1c06  85f6                 test esi, esi
// 005a1c08  7c05                 jl 0x5a1c0f
// 005a1c0a  83fe04               cmp esi, 4
// 005a1c0d  7c20                 jl 0x5a1c2f
// 005a1c0f  8bac2428050000       mov ebp, dword ptr [esp + 0x528]
// 005a1c16  8b4500               mov eax, dword ptr [ebp]
// 005a1c19  897814               mov dword ptr [eax + 0x14], edi
// 005a1c1c  8b4d00               mov ecx, dword ptr [ebp]
// 005a1c1f  897118               mov dword ptr [ecx + 0x18], esi
// 005a1c22  8b5500               mov edx, dword ptr [ebp]
// 005a1c25  8b02                 mov eax, dword ptr [edx]
// 005a1c27  55                   push ebp
// 005a1c28  ffd0                 call eax
// 005a1c2a  83c404               add esp, 4
// 005a1c2d  eb07                 jmp 0x5a1c36
// 005a1c2f  8bac2428050000       mov ebp, dword ptr [esp + 0x528]
// 005a1c36  80bc242c05000000     cmp byte ptr [esp + 0x52c], 0
// 005a1c3e  740a                 je 0x5a1c4a
// 005a1c40  8b4cb558             mov ecx, dword ptr [ebp + esi*4 + 0x58]
// 005a1c44  894c2410             mov dword ptr [esp + 0x10], ecx
// 005a1c48  eb08                 jmp 0x5a1c52
// 005a1c4a  8b54b568             mov edx, dword ptr [ebp + esi*4 + 0x68]
// 005a1c4e  89542410             mov dword ptr [esp + 0x10], edx
// 005a1c52  837c241000           cmp dword ptr [esp + 0x10], 0
// 005a1c57  7517                 jne 0x5a1c70
// 005a1c59  8b4500               mov eax, dword ptr [ebp]
// 005a1c5c  897814               mov dword ptr [eax + 0x14], edi
// 005a1c5f  8b4d00               mov ecx, dword ptr [ebp]
// 005a1c62  897118               mov dword ptr [ecx + 0x18], esi
// 005a1c65  8b5500               mov edx, dword ptr [ebp]
// 005a1c68  8b02                 mov eax, dword ptr [edx]
// 005a1c6a  55                   push ebp
// 005a1c6b  ffd0                 call eax
// 005a1c6d  83c404               add esp, 4
// 005a1c70  8bb42434050000       mov esi, dword ptr [esp + 0x534]
// 005a1c77  833e00               cmp dword ptr [esi], 0
// 005a1c7a  7514                 jne 0x5a1c90
// 005a1c7c  8b4d04               mov ecx, dword ptr [ebp + 4]
// 005a1c7f  8b11                 mov edx, dword ptr [ecx]
// 005a1c81  6800050000           push 0x500
// 005a1c86  6a01                 push 1
// 005a1c88  55                   push ebp
// 005a1c89  ffd2                 call edx
// 005a1c8b  83c40c               add esp, 0xc
// 005a1c8e  8906                 mov dword ptr [esi], eax
// 005a1c90  8b06                 mov eax, dword ptr [esi]
// 005a1c92  89442418             mov dword ptr [esp + 0x18], eax
// 005a1c96  33ff                 xor edi, edi
// 005a1c98  bb01000000           mov ebx, 1
// 005a1c9d  8d4900               lea ecx, [ecx]
// 005a1ca0  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005a1ca4  0fb6340b             movzx esi, byte ptr [ebx + ecx]
// 005a1ca8  85f6                 test esi, esi
// 005a1caa  7c0b                 jl 0x5a1cb7
// 005a1cac  8d143e               lea edx, [esi + edi]
// 005a1caf  81fa00010000         cmp edx, 0x100
// 005a1cb5  7e15                 jle 0x5a1ccc
// 005a1cb7  8b4500               mov eax, dword ptr [ebp]
// 005a1cba  c7401408000000       mov dword ptr [eax + 0x14], 8
// 005a1cc1  8b4d00               mov ecx, dword ptr [ebp]
// 005a1cc4  8b11                 mov edx, dword ptr [ecx]
// 005a1cc6  55                   push ebp
// 005a1cc7  ffd2                 call edx
// 005a1cc9  83c404               add esp, 4
// 005a1ccc  85f6                 test esi, esi
// 005a1cce  7411                 je 0x5a1ce1
// 005a1cd0  56                   push esi
// 005a1cd1  8d443c20             lea eax, [esp + edi + 0x20]
// 005a1cd5  53                   push ebx
// 005a1cd6  50                   push eax
// 005a1cd7  e8987f1700           call 0x719c74
// 005a1cdc  83c40c               add esp, 0xc
// 005a1cdf  03fe                 add edi, esi
// 005a1ce1  43                   inc ebx
// 005a1ce2  83fb10               cmp ebx, 0x10
// 005a1ce5  7eb9                 jle 0x5a1ca0
// 005a1ce7  c6443c1c00           mov byte ptr [esp + edi + 0x1c], 0
// 005a1cec  8a44241c             mov al, byte ptr [esp + 0x1c]
// 005a1cf0  897c2414             mov dword ptr [esp + 0x14], edi
// 005a1cf4  33ff                 xor edi, edi
// 005a1cf6  33f6                 xor esi, esi
// 005a1cf8  0fbed8               movsx ebx, al
// 005a1cfb  84c0                 test al, al
// 005a1cfd  7451                 je 0x5a1d50
// 005a1cff  8d44241c             lea eax, [esp + 0x1c]
// 005a1d03  0fbe00               movsx eax, byte ptr [eax]
// 005a1d06  3bc3                 cmp eax, ebx
// 005a1d08  7518                 jne 0x5a1d22
// 005a1d0a  8d9b00000000         lea ebx, [ebx]
// 005a1d10  0fbe4c341d           movsx ecx, byte ptr [esp + esi + 0x1d]
// 005a1d15  89bcb420010000       mov dword ptr [esp + esi*4 + 0x120], edi
// 005a1d1c  46                   inc esi
// 005a1d1d  47                   inc edi
// 005a1d1e  3bcb                 cmp ecx, ebx
// 005a1d20  74ee                 je 0x5a1d10
// 005a1d22  ba01000000           mov edx, 1
// 005a1d27  8bcb                 mov ecx, ebx
// 005a1d29  d3e2                 shl edx, cl
// 005a1d2b  3bfa                 cmp edi, edx
// 005a1d2d  7c15                 jl 0x5a1d44
// 005a1d2f  8b4500               mov eax, dword ptr [ebp]
// 005a1d32  c7401408000000       mov dword ptr [eax + 0x14], 8
// 005a1d39  8b4d00               mov ecx, dword ptr [ebp]
// 005a1d3c  8b11                 mov edx, dword ptr [ecx]
// 005a1d3e  55                   push ebp
// 005a1d3f  ffd2                 call edx
// 005a1d41  83c404               add esp, 4
// 005a1d44  8d44341c             lea eax, [esp + esi + 0x1c]
// 005a1d48  03ff                 add edi, edi
// 005a1d4a  43                   inc ebx
// 005a1d4b  803800               cmp byte ptr [eax], 0
// 005a1d4e  75b3                 jne 0x5a1d03
// 005a1d50  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 005a1d54  6800010000           push 0x100
// 005a1d59  81c500040000         add ebp, 0x400
// 005a1d5f  6a00                 push 0
// 005a1d61  55                   push ebp
// 005a1d62  e80d7f1700           call 0x719c74
// 005a1d67  0fb69c2438050000     movzx ebx, byte ptr [esp + 0x538]
// 005a1d6f  83c40c               add esp, 0xc
// 005a1d72  f7db                 neg ebx
// 005a1d74  1bdb                 sbb ebx, ebx
// 005a1d76  81e310ffffff         and ebx, 0xffffff10
// 005a1d7c  33f6                 xor esi, esi
// 005a1d7e  81c3ff000000         add ebx, 0xff
// 005a1d84  39742414             cmp dword ptr [esp + 0x14], esi
// 005a1d88  7e53                 jle 0x5a1ddd
// 005a1d8a  8d9b00000000         lea ebx, [ebx]
// 005a1d90  8b442410             mov eax, dword ptr [esp + 0x10]
// 005a1d94  0fb67c3011           movzx edi, byte ptr [eax + esi + 0x11]
// 005a1d99  85ff                 test edi, edi
// 005a1d9b  7c0a                 jl 0x5a1da7
// 005a1d9d  3bfb                 cmp edi, ebx
// 005a1d9f  7f06                 jg 0x5a1da7
// 005a1da1  803c2f00             cmp byte ptr [edi + ebp], 0
// 005a1da5  741a                 je 0x5a1dc1
// 005a1da7  8b842428050000       mov eax, dword ptr [esp + 0x528]
// 005a1dae  8b08                 mov ecx, dword ptr [eax]
// 005a1db0  c7411408000000       mov dword ptr [ecx + 0x14], 8
// 005a1db7  8b10                 mov edx, dword ptr [eax]
// 005a1db9  50                   push eax
// 005a1dba  8b02                 mov eax, dword ptr [edx]
// 005a1dbc  ffd0                 call eax
// 005a1dbe  83c404               add esp, 4
// 005a1dc1  8b8cb420010000       mov ecx, dword ptr [esp + esi*4 + 0x120]
// 005a1dc8  8a44341c             mov al, byte ptr [esp + esi + 0x1c]
// 005a1dcc  8b542418             mov edx, dword ptr [esp + 0x18]
// 005a1dd0  46                   inc esi
// 005a1dd1  3b742414             cmp esi, dword ptr [esp + 0x14]
// 005a1dd5  890cba               mov dword ptr [edx + edi*4], ecx
// 005a1dd8  88042f               mov byte ptr [edi + ebp], al
// 005a1ddb  7cb3                 jl 0x5a1d90
// 005a1ddd  5f                   pop edi
// 005a1dde  5e                   pop esi
// 005a1ddf  5d                   pop ebp
// 005a1de0  5b                   pop ebx
// 005a1de1  81c414050000         add esp, 0x514
// 005a1de7  c3                   ret 
// library jpeg-6b/jchuff.c (function _jpeg_make_c_derived_tbl)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jchuff.c
