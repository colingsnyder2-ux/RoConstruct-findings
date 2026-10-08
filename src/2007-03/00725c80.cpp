// roc 2007-03 00725c80  unit: seg_00720000  size: 493 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00725c80
//
// 00725c80  8b442404             mov eax, dword ptr [esp + 4]
// 00725c84  8b88bc160000         mov ecx, dword ptr [eax + 0x16bc]
// 00725c8a  ba02000000           mov edx, 2
// 00725c8f  d3e2                 shl edx, cl
// 00725c91  53                   push ebx
// 00725c92  56                   push esi
// 00725c93  57                   push edi
// 00725c94  660990b8160000       or word ptr [eax + 0x16b8], dx
// 00725c9b  83f90d               cmp ecx, 0xd
// 00725c9e  be01000000           mov esi, 1
// 00725ca3  7e4a                 jle 0x725cef
// 00725ca5  0fb698b8160000       movzx ebx, byte ptr [eax + 0x16b8]
// 00725cac  8b5014               mov edx, dword ptr [eax + 0x14]
// 00725caf  8b4808               mov ecx, dword ptr [eax + 8]
// 00725cb2  881c11               mov byte ptr [ecx + edx], bl
// 00725cb5  017014               add dword ptr [eax + 0x14], esi
// 00725cb8  0fb698b9160000       movzx ebx, byte ptr [eax + 0x16b9]
// 00725cbf  8b4814               mov ecx, dword ptr [eax + 0x14]
// 00725cc2  8b5008               mov edx, dword ptr [eax + 8]
// 00725cc5  881c11               mov byte ptr [ecx + edx], bl
// 00725cc8  8b90bc160000         mov edx, dword ptr [eax + 0x16bc]
// 00725cce  017014               add dword ptr [eax + 0x14], esi
// 00725cd1  b110                 mov cl, 0x10
// 00725cd3  2aca                 sub cl, dl
// 00725cd5  bf02000000           mov edi, 2
// 00725cda  66d3ef               shr di, cl
// 00725cdd  83c2f3               add edx, -0xd
// 00725ce0  8990bc160000         mov dword ptr [eax + 0x16bc], edx
// 00725ce6  6689b8b8160000       mov word ptr [eax + 0x16b8], di
// 00725ced  eb09                 jmp 0x725cf8
// 00725cef  83c103               add ecx, 3
// 00725cf2  8988bc160000         mov dword ptr [eax + 0x16bc], ecx
// 00725cf8  8b88bc160000         mov ecx, dword ptr [eax + 0x16bc]
// 00725cfe  33d2                 xor edx, edx
// 00725d00  d3e2                 shl edx, cl
// 00725d02  660990b8160000       or word ptr [eax + 0x16b8], dx
// 00725d09  83f909               cmp ecx, 9
// 00725d0c  7e47                 jle 0x725d55
// 00725d0e  0fb698b8160000       movzx ebx, byte ptr [eax + 0x16b8]
// 00725d15  8b5014               mov edx, dword ptr [eax + 0x14]
// 00725d18  8b4808               mov ecx, dword ptr [eax + 8]
// 00725d1b  881c11               mov byte ptr [ecx + edx], bl
// 00725d1e  017014               add dword ptr [eax + 0x14], esi
// 00725d21  0fb698b9160000       movzx ebx, byte ptr [eax + 0x16b9]
// 00725d28  8b4814               mov ecx, dword ptr [eax + 0x14]
// 00725d2b  8b5008               mov edx, dword ptr [eax + 8]
// 00725d2e  881c11               mov byte ptr [ecx + edx], bl
// 00725d31  8b90bc160000         mov edx, dword ptr [eax + 0x16bc]
// 00725d37  017014               add dword ptr [eax + 0x14], esi
// 00725d3a  b110                 mov cl, 0x10
// 00725d3c  2aca                 sub cl, dl
// 00725d3e  33ff                 xor edi, edi
// 00725d40  66d3ef               shr di, cl
// 00725d43  83c2f7               add edx, -9
// 00725d46  8990bc160000         mov dword ptr [eax + 0x16bc], edx
// 00725d4c  6689b8b8160000       mov word ptr [eax + 0x16b8], di
// 00725d53  eb09                 jmp 0x725d5e
// 00725d55  83c107               add ecx, 7
// 00725d58  8988bc160000         mov dword ptr [eax + 0x16bc], ecx
// 00725d5e  e82df9ffff           call 0x725690
// 00725d63  8b88bc160000         mov ecx, dword ptr [eax + 0x16bc]
// 00725d69  8b90b4160000         mov edx, dword ptr [eax + 0x16b4]
// 00725d6f  2bd1                 sub edx, ecx
// 00725d71  83c20b               add edx, 0xb
// 00725d74  83fa09               cmp edx, 9
// 00725d77  0f8de2000000         jge 0x725e5f
// 00725d7d  ba02000000           mov edx, 2
// 00725d82  d3e2                 shl edx, cl
// 00725d84  660990b8160000       or word ptr [eax + 0x16b8], dx
// 00725d8b  83f90d               cmp ecx, 0xd
// 00725d8e  7e4a                 jle 0x725dda
// 00725d90  0fb698b8160000       movzx ebx, byte ptr [eax + 0x16b8]
// 00725d97  8b5014               mov edx, dword ptr [eax + 0x14]
// 00725d9a  8b4808               mov ecx, dword ptr [eax + 8]
// 00725d9d  881c11               mov byte ptr [ecx + edx], bl
// 00725da0  017014               add dword ptr [eax + 0x14], esi
// 00725da3  0fb698b9160000       movzx ebx, byte ptr [eax + 0x16b9]
// 00725daa  8b4814               mov ecx, dword ptr [eax + 0x14]
// 00725dad  8b5008               mov edx, dword ptr [eax + 8]
// 00725db0  881c11               mov byte ptr [ecx + edx], bl
// 00725db3  8b90bc160000         mov edx, dword ptr [eax + 0x16bc]
// 00725db9  017014               add dword ptr [eax + 0x14], esi
// 00725dbc  b110                 mov cl, 0x10
// 00725dbe  2aca                 sub cl, dl
// 00725dc0  bf02000000           mov edi, 2
// 00725dc5  66d3ef               shr di, cl
// 00725dc8  83c2f3               add edx, -0xd
// 00725dcb  8990bc160000         mov dword ptr [eax + 0x16bc], edx
// 00725dd1  6689b8b8160000       mov word ptr [eax + 0x16b8], di
// 00725dd8  eb09                 jmp 0x725de3
// 00725dda  83c103               add ecx, 3
// 00725ddd  8988bc160000         mov dword ptr [eax + 0x16bc], ecx
// 00725de3  8b88bc160000         mov ecx, dword ptr [eax + 0x16bc]
// 00725de9  33d2                 xor edx, edx
// 00725deb  d3e2                 shl edx, cl
// 00725ded  660990b8160000       or word ptr [eax + 0x16b8], dx
// 00725df4  83f909               cmp ecx, 9
// 00725df7  7e58                 jle 0x725e51
// 00725df9  0fb698b8160000       movzx ebx, byte ptr [eax + 0x16b8]
// 00725e00  8b5014               mov edx, dword ptr [eax + 0x14]
// 00725e03  8b4808               mov ecx, dword ptr [eax + 8]
// 00725e06  881c11               mov byte ptr [ecx + edx], bl
// 00725e09  017014               add dword ptr [eax + 0x14], esi
// 00725e0c  0fb698b9160000       movzx ebx, byte ptr [eax + 0x16b9]
// 00725e13  8b4814               mov ecx, dword ptr [eax + 0x14]
// 00725e16  8b5008               mov edx, dword ptr [eax + 8]
// 00725e19  881c11               mov byte ptr [ecx + edx], bl
// 00725e1c  8b90bc160000         mov edx, dword ptr [eax + 0x16bc]
// 00725e22  017014               add dword ptr [eax + 0x14], esi
// 00725e25  b110                 mov cl, 0x10
// 00725e27  2aca                 sub cl, dl
// 00725e29  33f6                 xor esi, esi
// 00725e2b  66d3ee               shr si, cl
// 00725e2e  83c2f7               add edx, -9
// 00725e31  8990bc160000         mov dword ptr [eax + 0x16bc], edx
// 00725e37  6689b0b8160000       mov word ptr [eax + 0x16b8], si
// 00725e3e  e84df8ffff           call 0x725690
// 00725e43  5f                   pop edi
// 00725e44  5e                   pop esi
// 00725e45  c780b416000007000000 mov dword ptr [eax + 0x16b4], 7
// 00725e4f  5b                   pop ebx
// 00725e50  c3                   ret 
// 00725e51  83c107               add ecx, 7
// 00725e54  8988bc160000         mov dword ptr [eax + 0x16bc], ecx
// 00725e5a  e831f8ffff           call 0x725690
// 00725e5f  5f                   pop edi
// 00725e60  5e                   pop esi
// 00725e61  c780b416000007000000 mov dword ptr [eax + 0x16b4], 7
// 00725e6b  5b                   pop ebx
// 00725e6c  c3                   ret 
// library zlib-1.2.3/trees.c (function __tr_align)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 trees.c
