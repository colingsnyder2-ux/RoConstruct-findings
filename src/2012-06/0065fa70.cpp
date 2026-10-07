// roc 2012-06 0065fa70  unit: seg_00650000  size: 493 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0065fa70
//
// 0065fa70  8b442404             mov eax, dword ptr [esp + 4]
// 0065fa74  8b88bc160000         mov ecx, dword ptr [eax + 0x16bc]
// 0065fa7a  ba02000000           mov edx, 2
// 0065fa7f  d3e2                 shl edx, cl
// 0065fa81  53                   push ebx
// 0065fa82  56                   push esi
// 0065fa83  57                   push edi
// 0065fa84  660990b8160000       or word ptr [eax + 0x16b8], dx
// 0065fa8b  83f90d               cmp ecx, 0xd
// 0065fa8e  be01000000           mov esi, 1
// 0065fa93  7e4a                 jle 0x65fadf
// 0065fa95  0fb698b8160000       movzx ebx, byte ptr [eax + 0x16b8]
// 0065fa9c  8b5014               mov edx, dword ptr [eax + 0x14]
// 0065fa9f  8b4808               mov ecx, dword ptr [eax + 8]
// 0065faa2  881c11               mov byte ptr [ecx + edx], bl
// 0065faa5  017014               add dword ptr [eax + 0x14], esi
// 0065faa8  0fb698b9160000       movzx ebx, byte ptr [eax + 0x16b9]
// 0065faaf  8b4814               mov ecx, dword ptr [eax + 0x14]
// 0065fab2  8b5008               mov edx, dword ptr [eax + 8]
// 0065fab5  881c11               mov byte ptr [ecx + edx], bl
// 0065fab8  8b90bc160000         mov edx, dword ptr [eax + 0x16bc]
// 0065fabe  017014               add dword ptr [eax + 0x14], esi
// 0065fac1  b110                 mov cl, 0x10
// 0065fac3  2aca                 sub cl, dl
// 0065fac5  bf02000000           mov edi, 2
// 0065faca  66d3ef               shr di, cl
// 0065facd  83c2f3               add edx, -0xd
// 0065fad0  8990bc160000         mov dword ptr [eax + 0x16bc], edx
// 0065fad6  6689b8b8160000       mov word ptr [eax + 0x16b8], di
// 0065fadd  eb09                 jmp 0x65fae8
// 0065fadf  83c103               add ecx, 3
// 0065fae2  8988bc160000         mov dword ptr [eax + 0x16bc], ecx
// 0065fae8  8b88bc160000         mov ecx, dword ptr [eax + 0x16bc]
// 0065faee  33d2                 xor edx, edx
// 0065faf0  d3e2                 shl edx, cl
// 0065faf2  660990b8160000       or word ptr [eax + 0x16b8], dx
// 0065faf9  83f909               cmp ecx, 9
// 0065fafc  7e47                 jle 0x65fb45
// 0065fafe  0fb698b8160000       movzx ebx, byte ptr [eax + 0x16b8]
// 0065fb05  8b5014               mov edx, dword ptr [eax + 0x14]
// 0065fb08  8b4808               mov ecx, dword ptr [eax + 8]
// 0065fb0b  881c11               mov byte ptr [ecx + edx], bl
// 0065fb0e  017014               add dword ptr [eax + 0x14], esi
// 0065fb11  0fb698b9160000       movzx ebx, byte ptr [eax + 0x16b9]
// 0065fb18  8b4814               mov ecx, dword ptr [eax + 0x14]
// 0065fb1b  8b5008               mov edx, dword ptr [eax + 8]
// 0065fb1e  881c11               mov byte ptr [ecx + edx], bl
// 0065fb21  8b90bc160000         mov edx, dword ptr [eax + 0x16bc]
// 0065fb27  017014               add dword ptr [eax + 0x14], esi
// 0065fb2a  b110                 mov cl, 0x10
// 0065fb2c  2aca                 sub cl, dl
// 0065fb2e  33ff                 xor edi, edi
// 0065fb30  66d3ef               shr di, cl
// 0065fb33  83c2f7               add edx, -9
// 0065fb36  8990bc160000         mov dword ptr [eax + 0x16bc], edx
// 0065fb3c  6689b8b8160000       mov word ptr [eax + 0x16b8], di
// 0065fb43  eb09                 jmp 0x65fb4e
// 0065fb45  83c107               add ecx, 7
// 0065fb48  8988bc160000         mov dword ptr [eax + 0x16bc], ecx
// 0065fb4e  e84df9ffff           call 0x65f4a0
// 0065fb53  8b88bc160000         mov ecx, dword ptr [eax + 0x16bc]
// 0065fb59  8b90b4160000         mov edx, dword ptr [eax + 0x16b4]
// 0065fb5f  2bd1                 sub edx, ecx
// 0065fb61  83c20b               add edx, 0xb
// 0065fb64  83fa09               cmp edx, 9
// 0065fb67  0f8de2000000         jge 0x65fc4f
// 0065fb6d  ba02000000           mov edx, 2
// 0065fb72  d3e2                 shl edx, cl
// 0065fb74  660990b8160000       or word ptr [eax + 0x16b8], dx
// 0065fb7b  83f90d               cmp ecx, 0xd
// 0065fb7e  7e4a                 jle 0x65fbca
// 0065fb80  0fb698b8160000       movzx ebx, byte ptr [eax + 0x16b8]
// 0065fb87  8b5014               mov edx, dword ptr [eax + 0x14]
// 0065fb8a  8b4808               mov ecx, dword ptr [eax + 8]
// 0065fb8d  881c11               mov byte ptr [ecx + edx], bl
// 0065fb90  017014               add dword ptr [eax + 0x14], esi
// 0065fb93  0fb698b9160000       movzx ebx, byte ptr [eax + 0x16b9]
// 0065fb9a  8b4814               mov ecx, dword ptr [eax + 0x14]
// 0065fb9d  8b5008               mov edx, dword ptr [eax + 8]
// 0065fba0  881c11               mov byte ptr [ecx + edx], bl
// 0065fba3  8b90bc160000         mov edx, dword ptr [eax + 0x16bc]
// 0065fba9  017014               add dword ptr [eax + 0x14], esi
// 0065fbac  b110                 mov cl, 0x10
// 0065fbae  2aca                 sub cl, dl
// 0065fbb0  bf02000000           mov edi, 2
// 0065fbb5  66d3ef               shr di, cl
// 0065fbb8  83c2f3               add edx, -0xd
// 0065fbbb  8990bc160000         mov dword ptr [eax + 0x16bc], edx
// 0065fbc1  6689b8b8160000       mov word ptr [eax + 0x16b8], di
// 0065fbc8  eb09                 jmp 0x65fbd3
// 0065fbca  83c103               add ecx, 3
// 0065fbcd  8988bc160000         mov dword ptr [eax + 0x16bc], ecx
// 0065fbd3  8b88bc160000         mov ecx, dword ptr [eax + 0x16bc]
// 0065fbd9  33d2                 xor edx, edx
// 0065fbdb  d3e2                 shl edx, cl
// 0065fbdd  660990b8160000       or word ptr [eax + 0x16b8], dx
// 0065fbe4  83f909               cmp ecx, 9
// 0065fbe7  7e58                 jle 0x65fc41
// 0065fbe9  0fb698b8160000       movzx ebx, byte ptr [eax + 0x16b8]
// 0065fbf0  8b5014               mov edx, dword ptr [eax + 0x14]
// 0065fbf3  8b4808               mov ecx, dword ptr [eax + 8]
// 0065fbf6  881c11               mov byte ptr [ecx + edx], bl
// 0065fbf9  017014               add dword ptr [eax + 0x14], esi
// 0065fbfc  0fb698b9160000       movzx ebx, byte ptr [eax + 0x16b9]
// 0065fc03  8b4814               mov ecx, dword ptr [eax + 0x14]
// 0065fc06  8b5008               mov edx, dword ptr [eax + 8]
// 0065fc09  881c11               mov byte ptr [ecx + edx], bl
// 0065fc0c  8b90bc160000         mov edx, dword ptr [eax + 0x16bc]
// 0065fc12  017014               add dword ptr [eax + 0x14], esi
// 0065fc15  b110                 mov cl, 0x10
// 0065fc17  2aca                 sub cl, dl
// 0065fc19  33f6                 xor esi, esi
// 0065fc1b  66d3ee               shr si, cl
// 0065fc1e  83c2f7               add edx, -9
// 0065fc21  8990bc160000         mov dword ptr [eax + 0x16bc], edx
// 0065fc27  6689b0b8160000       mov word ptr [eax + 0x16b8], si
// 0065fc2e  e86df8ffff           call 0x65f4a0
// 0065fc33  5f                   pop edi
// 0065fc34  5e                   pop esi
// 0065fc35  c780b416000007000000 mov dword ptr [eax + 0x16b4], 7
// 0065fc3f  5b                   pop ebx
// 0065fc40  c3                   ret 
// 0065fc41  83c107               add ecx, 7
// 0065fc44  8988bc160000         mov dword ptr [eax + 0x16bc], ecx
// 0065fc4a  e851f8ffff           call 0x65f4a0
// 0065fc4f  5f                   pop edi
// 0065fc50  5e                   pop esi
// 0065fc51  c780b416000007000000 mov dword ptr [eax + 0x16b4], 7
// 0065fc5b  5b                   pop ebx
// 0065fc5c  c3                   ret 
// library zlib-1.2.3/trees.c (function __tr_align)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 trees.c
