// from server: 100% by auto
// roc 2009-06 00599cf0  unit: seg_00590000  size: 493 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00599cf0
//
// 00599cf0  8b442404             mov eax, dword ptr [esp + 4]
// 00599cf4  8b88bc160000         mov ecx, dword ptr [eax + 0x16bc]
// 00599cfa  ba02000000           mov edx, 2
// 00599cff  d3e2                 shl edx, cl
// 00599d01  53                   push ebx
// 00599d02  56                   push esi
// 00599d03  57                   push edi
// 00599d04  660990b8160000       or word ptr [eax + 0x16b8], dx
// 00599d0b  83f90d               cmp ecx, 0xd
// 00599d0e  be01000000           mov esi, 1
// 00599d13  7e4a                 jle 0x599d5f
// 00599d15  0fb698b8160000       movzx ebx, byte ptr [eax + 0x16b8]
// 00599d1c  8b5014               mov edx, dword ptr [eax + 0x14]
// 00599d1f  8b4808               mov ecx, dword ptr [eax + 8]
// 00599d22  881c11               mov byte ptr [ecx + edx], bl
// 00599d25  017014               add dword ptr [eax + 0x14], esi
// 00599d28  0fb698b9160000       movzx ebx, byte ptr [eax + 0x16b9]
// 00599d2f  8b4814               mov ecx, dword ptr [eax + 0x14]
// 00599d32  8b5008               mov edx, dword ptr [eax + 8]
// 00599d35  881c11               mov byte ptr [ecx + edx], bl
// 00599d38  8b90bc160000         mov edx, dword ptr [eax + 0x16bc]
// 00599d3e  017014               add dword ptr [eax + 0x14], esi
// 00599d41  b110                 mov cl, 0x10
// 00599d43  2aca                 sub cl, dl
// 00599d45  bf02000000           mov edi, 2
// 00599d4a  66d3ef               shr di, cl
// 00599d4d  83c2f3               add edx, -0xd
// 00599d50  8990bc160000         mov dword ptr [eax + 0x16bc], edx
// 00599d56  6689b8b8160000       mov word ptr [eax + 0x16b8], di
// 00599d5d  eb09                 jmp 0x599d68
// 00599d5f  83c103               add ecx, 3
// 00599d62  8988bc160000         mov dword ptr [eax + 0x16bc], ecx
// 00599d68  8b88bc160000         mov ecx, dword ptr [eax + 0x16bc]
// 00599d6e  33d2                 xor edx, edx
// 00599d70  d3e2                 shl edx, cl
// 00599d72  660990b8160000       or word ptr [eax + 0x16b8], dx
// 00599d79  83f909               cmp ecx, 9
// 00599d7c  7e47                 jle 0x599dc5
// 00599d7e  0fb698b8160000       movzx ebx, byte ptr [eax + 0x16b8]
// 00599d85  8b5014               mov edx, dword ptr [eax + 0x14]
// 00599d88  8b4808               mov ecx, dword ptr [eax + 8]
// 00599d8b  881c11               mov byte ptr [ecx + edx], bl
// 00599d8e  017014               add dword ptr [eax + 0x14], esi
// 00599d91  0fb698b9160000       movzx ebx, byte ptr [eax + 0x16b9]
// 00599d98  8b4814               mov ecx, dword ptr [eax + 0x14]
// 00599d9b  8b5008               mov edx, dword ptr [eax + 8]
// 00599d9e  881c11               mov byte ptr [ecx + edx], bl
// 00599da1  8b90bc160000         mov edx, dword ptr [eax + 0x16bc]
// 00599da7  017014               add dword ptr [eax + 0x14], esi
// 00599daa  b110                 mov cl, 0x10
// 00599dac  2aca                 sub cl, dl
// 00599dae  33ff                 xor edi, edi
// 00599db0  66d3ef               shr di, cl
// 00599db3  83c2f7               add edx, -9
// 00599db6  8990bc160000         mov dword ptr [eax + 0x16bc], edx
// 00599dbc  6689b8b8160000       mov word ptr [eax + 0x16b8], di
// 00599dc3  eb09                 jmp 0x599dce
// 00599dc5  83c107               add ecx, 7
// 00599dc8  8988bc160000         mov dword ptr [eax + 0x16bc], ecx
// 00599dce  e84df9ffff           call 0x599720
// 00599dd3  8b88bc160000         mov ecx, dword ptr [eax + 0x16bc]
// 00599dd9  8b90b4160000         mov edx, dword ptr [eax + 0x16b4]
// 00599ddf  2bd1                 sub edx, ecx
// 00599de1  83c20b               add edx, 0xb
// 00599de4  83fa09               cmp edx, 9
// 00599de7  0f8de2000000         jge 0x599ecf
// 00599ded  ba02000000           mov edx, 2
// 00599df2  d3e2                 shl edx, cl
// 00599df4  660990b8160000       or word ptr [eax + 0x16b8], dx
// 00599dfb  83f90d               cmp ecx, 0xd
// 00599dfe  7e4a                 jle 0x599e4a
// 00599e00  0fb698b8160000       movzx ebx, byte ptr [eax + 0x16b8]
// 00599e07  8b5014               mov edx, dword ptr [eax + 0x14]
// 00599e0a  8b4808               mov ecx, dword ptr [eax + 8]
// 00599e0d  881c11               mov byte ptr [ecx + edx], bl
// 00599e10  017014               add dword ptr [eax + 0x14], esi
// 00599e13  0fb698b9160000       movzx ebx, byte ptr [eax + 0x16b9]
// 00599e1a  8b4814               mov ecx, dword ptr [eax + 0x14]
// 00599e1d  8b5008               mov edx, dword ptr [eax + 8]
// 00599e20  881c11               mov byte ptr [ecx + edx], bl
// 00599e23  8b90bc160000         mov edx, dword ptr [eax + 0x16bc]
// 00599e29  017014               add dword ptr [eax + 0x14], esi
// 00599e2c  b110                 mov cl, 0x10
// 00599e2e  2aca                 sub cl, dl
// 00599e30  bf02000000           mov edi, 2
// 00599e35  66d3ef               shr di, cl
// 00599e38  83c2f3               add edx, -0xd
// 00599e3b  8990bc160000         mov dword ptr [eax + 0x16bc], edx
// 00599e41  6689b8b8160000       mov word ptr [eax + 0x16b8], di
// 00599e48  eb09                 jmp 0x599e53
// 00599e4a  83c103               add ecx, 3
// 00599e4d  8988bc160000         mov dword ptr [eax + 0x16bc], ecx
// 00599e53  8b88bc160000         mov ecx, dword ptr [eax + 0x16bc]
// 00599e59  33d2                 xor edx, edx
// 00599e5b  d3e2                 shl edx, cl
// 00599e5d  660990b8160000       or word ptr [eax + 0x16b8], dx
// 00599e64  83f909               cmp ecx, 9
// 00599e67  7e58                 jle 0x599ec1
// 00599e69  0fb698b8160000       movzx ebx, byte ptr [eax + 0x16b8]
// 00599e70  8b5014               mov edx, dword ptr [eax + 0x14]
// 00599e73  8b4808               mov ecx, dword ptr [eax + 8]
// 00599e76  881c11               mov byte ptr [ecx + edx], bl
// 00599e79  017014               add dword ptr [eax + 0x14], esi
// 00599e7c  0fb698b9160000       movzx ebx, byte ptr [eax + 0x16b9]
// 00599e83  8b4814               mov ecx, dword ptr [eax + 0x14]
// 00599e86  8b5008               mov edx, dword ptr [eax + 8]
// 00599e89  881c11               mov byte ptr [ecx + edx], bl
// 00599e8c  8b90bc160000         mov edx, dword ptr [eax + 0x16bc]
// 00599e92  017014               add dword ptr [eax + 0x14], esi
// 00599e95  b110                 mov cl, 0x10
// 00599e97  2aca                 sub cl, dl
// 00599e99  33f6                 xor esi, esi
// 00599e9b  66d3ee               shr si, cl
// 00599e9e  83c2f7               add edx, -9
// 00599ea1  8990bc160000         mov dword ptr [eax + 0x16bc], edx
// 00599ea7  6689b0b8160000       mov word ptr [eax + 0x16b8], si
// 00599eae  e86df8ffff           call 0x599720
// 00599eb3  5f                   pop edi
// 00599eb4  5e                   pop esi
// 00599eb5  c780b416000007000000 mov dword ptr [eax + 0x16b4], 7
// 00599ebf  5b                   pop ebx
// 00599ec0  c3                   ret 
// 00599ec1  83c107               add ecx, 7
// 00599ec4  8988bc160000         mov dword ptr [eax + 0x16bc], ecx
// 00599eca  e851f8ffff           call 0x599720
// 00599ecf  5f                   pop edi
// 00599ed0  5e                   pop esi
// 00599ed1  c780b416000007000000 mov dword ptr [eax + 0x16b4], 7
// 00599edb  5b                   pop ebx
// 00599edc  c3                   ret 
// library zlib-1.2.3/trees.c (function __tr_align)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 trees.c
