// from server: 100% by auto
// roc 2007-08 0072c220  unit: boost::signals::detail::Ubasic_connection::?$sp_counted_impl_p  size: 470 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0072c220
//
// 0072c220  51                   push ecx
// 0072c221  53                   push ebx
// 0072c222  56                   push esi
// 0072c223  8b742410             mov esi, dword ptr [esp + 0x10]
// 0072c227  8b460c               mov eax, dword ptr [esi + 0xc]
// 0072c22a  83c0fb               add eax, -5
// 0072c22d  3dffff0000           cmp eax, 0xffff
// 0072c232  57                   push edi
// 0072c233  c744240cffff0000     mov dword ptr [esp + 0xc], 0xffff
// 0072c23b  7304                 jae 0x72c241
// 0072c23d  8944240c             mov dword ptr [esp + 0xc], eax
// 0072c241  8b4674               mov eax, dword ptr [esi + 0x74]
// 0072c244  83f801               cmp eax, 1
// 0072c247  7710                 ja 0x72c259
// 0072c249  e882feffff           call 0x72c0d0
// 0072c24e  8b4674               mov eax, dword ptr [esi + 0x74]
// 0072c251  85c0                 test eax, eax
// 0072c253  0f8436010000         je 0x72c38f
// 0072c259  01466c               add dword ptr [esi + 0x6c], eax
// 0072c25c  8b4e5c               mov ecx, dword ptr [esi + 0x5c]
// 0072c25f  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0072c263  8b566c               mov edx, dword ptr [esi + 0x6c]
// 0072c266  c7467400000000       mov dword ptr [esi + 0x74], 0
// 0072c26d  8d0401               lea eax, [ecx + eax]
// 0072c270  7408                 je 0x72c27a
// 0072c272  3bd0                 cmp edx, eax
// 0072c274  0f8280000000         jb 0x72c2fa
// 0072c27a  2bd0                 sub edx, eax
// 0072c27c  85c9                 test ecx, ecx
// 0072c27e  895674               mov dword ptr [esi + 0x74], edx
// 0072c281  89466c               mov dword ptr [esi + 0x6c], eax
// 0072c284  7c07                 jl 0x72c28d
// 0072c286  8b5638               mov edx, dword ptr [esi + 0x38]
// 0072c289  03d1                 add edx, ecx
// 0072c28b  eb02                 jmp 0x72c28f
// 0072c28d  33d2                 xor edx, edx
// 0072c28f  6a00                 push 0
// 0072c291  2bc1                 sub eax, ecx
// 0072c293  50                   push eax
// 0072c294  52                   push edx
// 0072c295  56                   push esi
// 0072c296  e8f588ffff           call 0x724b90
// 0072c29b  8b4e6c               mov ecx, dword ptr [esi + 0x6c]
// 0072c29e  8b3e                 mov edi, dword ptr [esi]
// 0072c2a0  894e5c               mov dword ptr [esi + 0x5c], ecx
// 0072c2a3  8b471c               mov eax, dword ptr [edi + 0x1c]
// 0072c2a6  8b5814               mov ebx, dword ptr [eax + 0x14]
// 0072c2a9  8b4f10               mov ecx, dword ptr [edi + 0x10]
// 0072c2ac  83c410               add esp, 0x10
// 0072c2af  3bd9                 cmp ebx, ecx
// 0072c2b1  7602                 jbe 0x72c2b5
// 0072c2b3  8bd9                 mov ebx, ecx
// 0072c2b5  85db                 test ebx, ebx
// 0072c2b7  7435                 je 0x72c2ee
// 0072c2b9  8b5010               mov edx, dword ptr [eax + 0x10]
// 0072c2bc  8b470c               mov eax, dword ptr [edi + 0xc]
// 0072c2bf  53                   push ebx
// 0072c2c0  52                   push edx
// 0072c2c1  50                   push eax
// 0072c2c2  e8854af0ff           call 0x630d4c
// 0072c2c7  8b471c               mov eax, dword ptr [edi + 0x1c]
// 0072c2ca  015f0c               add dword ptr [edi + 0xc], ebx
// 0072c2cd  015810               add dword ptr [eax + 0x10], ebx
// 0072c2d0  015f14               add dword ptr [edi + 0x14], ebx
// 0072c2d3  295f10               sub dword ptr [edi + 0x10], ebx
// 0072c2d6  8b471c               mov eax, dword ptr [edi + 0x1c]
// 0072c2d9  295814               sub dword ptr [eax + 0x14], ebx
// 0072c2dc  8b7f1c               mov edi, dword ptr [edi + 0x1c]
// 0072c2df  83c40c               add esp, 0xc
// 0072c2e2  837f1400             cmp dword ptr [edi + 0x14], 0
// 0072c2e6  7506                 jne 0x72c2ee
// 0072c2e8  8b4f08               mov ecx, dword ptr [edi + 8]
// 0072c2eb  894f10               mov dword ptr [edi + 0x10], ecx
// 0072c2ee  8b16                 mov edx, dword ptr [esi]
// 0072c2f0  837a1000             cmp dword ptr [edx + 0x10], 0
// 0072c2f4  0f848e000000         je 0x72c388
// 0072c2fa  8b565c               mov edx, dword ptr [esi + 0x5c]
// 0072c2fd  8b4e6c               mov ecx, dword ptr [esi + 0x6c]
// 0072c300  8b462c               mov eax, dword ptr [esi + 0x2c]
// 0072c303  2bca                 sub ecx, edx
// 0072c305  2d06010000           sub eax, 0x106
// 0072c30a  3bc8                 cmp ecx, eax
// 0072c30c  0f822fffffff         jb 0x72c241
// 0072c312  85d2                 test edx, edx
// 0072c314  7c07                 jl 0x72c31d
// 0072c316  8b4638               mov eax, dword ptr [esi + 0x38]
// 0072c319  03c2                 add eax, edx
// 0072c31b  eb02                 jmp 0x72c31f
// 0072c31d  33c0                 xor eax, eax
// 0072c31f  6a00                 push 0
// 0072c321  51                   push ecx
// 0072c322  50                   push eax
// 0072c323  56                   push esi
// 0072c324  e86788ffff           call 0x724b90
// 0072c329  8b4e6c               mov ecx, dword ptr [esi + 0x6c]
// 0072c32c  8b3e                 mov edi, dword ptr [esi]
// 0072c32e  894e5c               mov dword ptr [esi + 0x5c], ecx
// 0072c331  8b471c               mov eax, dword ptr [edi + 0x1c]
// 0072c334  8b5814               mov ebx, dword ptr [eax + 0x14]
// 0072c337  8b4f10               mov ecx, dword ptr [edi + 0x10]
// 0072c33a  83c410               add esp, 0x10
// 0072c33d  3bd9                 cmp ebx, ecx
// 0072c33f  7602                 jbe 0x72c343
// 0072c341  8bd9                 mov ebx, ecx
// 0072c343  85db                 test ebx, ebx
// 0072c345  7435                 je 0x72c37c
// 0072c347  8b5010               mov edx, dword ptr [eax + 0x10]
// 0072c34a  8b470c               mov eax, dword ptr [edi + 0xc]
// 0072c34d  53                   push ebx
// 0072c34e  52                   push edx
// 0072c34f  50                   push eax
// 0072c350  e8f749f0ff           call 0x630d4c
// 0072c355  8b471c               mov eax, dword ptr [edi + 0x1c]
// 0072c358  015f0c               add dword ptr [edi + 0xc], ebx
// 0072c35b  015810               add dword ptr [eax + 0x10], ebx
// 0072c35e  015f14               add dword ptr [edi + 0x14], ebx
// 0072c361  295f10               sub dword ptr [edi + 0x10], ebx
// 0072c364  8b471c               mov eax, dword ptr [edi + 0x1c]
// 0072c367  295814               sub dword ptr [eax + 0x14], ebx
// 0072c36a  8b7f1c               mov edi, dword ptr [edi + 0x1c]
// 0072c36d  83c40c               add esp, 0xc
// 0072c370  837f1400             cmp dword ptr [edi + 0x14], 0
// 0072c374  7506                 jne 0x72c37c
// 0072c376  8b4f08               mov ecx, dword ptr [edi + 8]
// 0072c379  894f10               mov dword ptr [edi + 0x10], ecx
// 0072c37c  8b16                 mov edx, dword ptr [esi]
// 0072c37e  837a1000             cmp dword ptr [edx + 0x10], 0
// 0072c382  0f85b9feffff         jne 0x72c241
// 0072c388  5f                   pop edi
// 0072c389  5e                   pop esi
// 0072c38a  33c0                 xor eax, eax
// 0072c38c  5b                   pop ebx
// 0072c38d  59                   pop ecx
// 0072c38e  c3                   ret 
// 0072c38f  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0072c393  85ff                 test edi, edi
// 0072c395  74f1                 je 0x72c388
// 0072c397  8b4e5c               mov ecx, dword ptr [esi + 0x5c]
// 0072c39a  85c9                 test ecx, ecx
// 0072c39c  7c07                 jl 0x72c3a5
// 0072c39e  8b4638               mov eax, dword ptr [esi + 0x38]
// 0072c3a1  03c1                 add eax, ecx
// 0072c3a3  eb02                 jmp 0x72c3a7
// 0072c3a5  33c0                 xor eax, eax
// 0072c3a7  33d2                 xor edx, edx
// 0072c3a9  83ff04               cmp edi, 4
// 0072c3ac  0f94c2               sete dl
// 0072c3af  52                   push edx
// 0072c3b0  8b566c               mov edx, dword ptr [esi + 0x6c]
// 0072c3b3  2bd1                 sub edx, ecx
// 0072c3b5  52                   push edx
// 0072c3b6  50                   push eax
// 0072c3b7  56                   push esi
// 0072c3b8  e8d387ffff           call 0x724b90
// 0072c3bd  8b466c               mov eax, dword ptr [esi + 0x6c]
// 0072c3c0  89465c               mov dword ptr [esi + 0x5c], eax
// 0072c3c3  8b06                 mov eax, dword ptr [esi]
// 0072c3c5  83c410               add esp, 0x10
// 0072c3c8  e8d329ffff           call 0x71eda0
// 0072c3cd  8b0e                 mov ecx, dword ptr [esi]
// 0072c3cf  33c0                 xor eax, eax
// 0072c3d1  394110               cmp dword ptr [ecx + 0x10], eax
// 0072c3d4  7511                 jne 0x72c3e7
// 0072c3d6  83ff04               cmp edi, 4
// 0072c3d9  0f95c0               setne al
// 0072c3dc  5f                   pop edi
// 0072c3dd  5e                   pop esi
// 0072c3de  5b                   pop ebx
// 0072c3df  83e801               sub eax, 1
// 0072c3e2  83e002               and eax, 2
// 0072c3e5  59                   pop ecx
// 0072c3e6  c3                   ret 
// 0072c3e7  83ff04               cmp edi, 4
// 0072c3ea  0f94c0               sete al
// 0072c3ed  5f                   pop edi
// 0072c3ee  5e                   pop esi
// 0072c3ef  5b                   pop ebx
// 0072c3f0  8d440001             lea eax, [eax + eax + 1]
// 0072c3f4  59                   pop ecx
// 0072c3f5  c3                   ret 
// library zlib-1.2.3/deflate.c (function _deflate_stored)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 deflate.c
