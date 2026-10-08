// roc 2007-03 00724f30  unit: seg_00720000  size: 606 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00724f30
//
// 00724f30  51                   push ecx
// 00724f31  8b88bc160000         mov ecx, dword ptr [eax + 0x16bc]
// 00724f37  83f90b               cmp ecx, 0xb
// 00724f3a  53                   push ebx
// 00724f3b  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 00724f3f  55                   push ebp
// 00724f40  56                   push esi
// 00724f41  57                   push edi
// 00724f42  bd01000000           mov ebp, 1
// 00724f47  7e5e                 jle 0x724fa7
// 00724f49  8b742418             mov esi, dword ptr [esp + 0x18]
// 00724f4d  81c6fffeffff         add esi, 0xfffffeff
// 00724f53  8bd6                 mov edx, esi
// 00724f55  d3e2                 shl edx, cl
// 00724f57  8b4814               mov ecx, dword ptr [eax + 0x14]
// 00724f5a  660990b8160000       or word ptr [eax + 0x16b8], dx
// 00724f61  0fb698b8160000       movzx ebx, byte ptr [eax + 0x16b8]
// 00724f68  8b5008               mov edx, dword ptr [eax + 8]
// 00724f6b  881c11               mov byte ptr [ecx + edx], bl
// 00724f6e  016814               add dword ptr [eax + 0x14], ebp
// 00724f71  0fb698b9160000       movzx ebx, byte ptr [eax + 0x16b9]
// 00724f78  8b4814               mov ecx, dword ptr [eax + 0x14]
// 00724f7b  8b5008               mov edx, dword ptr [eax + 8]
// 00724f7e  881c11               mov byte ptr [ecx + edx], bl
// 00724f81  8b90bc160000         mov edx, dword ptr [eax + 0x16bc]
// 00724f87  016814               add dword ptr [eax + 0x14], ebp
// 00724f8a  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 00724f8e  b110                 mov cl, 0x10
// 00724f90  2aca                 sub cl, dl
// 00724f92  66d3ee               shr si, cl
// 00724f95  83c2f5               add edx, -0xb
// 00724f98  8990bc160000         mov dword ptr [eax + 0x16bc], edx
// 00724f9e  6689b0b8160000       mov word ptr [eax + 0x16b8], si
// 00724fa5  eb1c                 jmp 0x724fc3
// 00724fa7  8b542418             mov edx, dword ptr [esp + 0x18]
// 00724fab  81c2fffeffff         add edx, 0xfffffeff
// 00724fb1  d3e2                 shl edx, cl
// 00724fb3  660990b8160000       or word ptr [eax + 0x16b8], dx
// 00724fba  83c105               add ecx, 5
// 00724fbd  8988bc160000         mov dword ptr [eax + 0x16bc], ecx
// 00724fc3  8b88bc160000         mov ecx, dword ptr [eax + 0x16bc]
// 00724fc9  83f90b               cmp ecx, 0xb
// 00724fcc  7e5f                 jle 0x72502d
// 00724fce  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00724fd2  83c6ff               add esi, -1
// 00724fd5  8bd6                 mov edx, esi
// 00724fd7  d3e2                 shl edx, cl
// 00724fd9  8b4814               mov ecx, dword ptr [eax + 0x14]
// 00724fdc  895c2410             mov dword ptr [esp + 0x10], ebx
// 00724fe0  660990b8160000       or word ptr [eax + 0x16b8], dx
// 00724fe7  0fb698b8160000       movzx ebx, byte ptr [eax + 0x16b8]
// 00724fee  8b5008               mov edx, dword ptr [eax + 8]
// 00724ff1  881c11               mov byte ptr [ecx + edx], bl
// 00724ff4  016814               add dword ptr [eax + 0x14], ebp
// 00724ff7  0fb698b9160000       movzx ebx, byte ptr [eax + 0x16b9]
// 00724ffe  8b4814               mov ecx, dword ptr [eax + 0x14]
// 00725001  8b5008               mov edx, dword ptr [eax + 8]
// 00725004  881c11               mov byte ptr [ecx + edx], bl
// 00725007  8b90bc160000         mov edx, dword ptr [eax + 0x16bc]
// 0072500d  016814               add dword ptr [eax + 0x14], ebp
// 00725010  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00725014  b110                 mov cl, 0x10
// 00725016  2aca                 sub cl, dl
// 00725018  66d3ee               shr si, cl
// 0072501b  83c2f5               add edx, -0xb
// 0072501e  8990bc160000         mov dword ptr [eax + 0x16bc], edx
// 00725024  6689b0b8160000       mov word ptr [eax + 0x16b8], si
// 0072502b  eb19                 jmp 0x725046
// 0072502d  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00725031  83c2ff               add edx, -1
// 00725034  d3e2                 shl edx, cl
// 00725036  660990b8160000       or word ptr [eax + 0x16b8], dx
// 0072503d  83c105               add ecx, 5
// 00725040  8988bc160000         mov dword ptr [eax + 0x16bc], ecx
// 00725046  8b88bc160000         mov ecx, dword ptr [eax + 0x16bc]
// 0072504c  83f90c               cmp ecx, 0xc
// 0072504f  7e5b                 jle 0x7250ac
// 00725051  8d73fc               lea esi, [ebx - 4]
// 00725054  8bd6                 mov edx, esi
// 00725056  d3e2                 shl edx, cl
// 00725058  8b4814               mov ecx, dword ptr [eax + 0x14]
// 0072505b  895c2410             mov dword ptr [esp + 0x10], ebx
// 0072505f  660990b8160000       or word ptr [eax + 0x16b8], dx
// 00725066  0fb698b8160000       movzx ebx, byte ptr [eax + 0x16b8]
// 0072506d  8b5008               mov edx, dword ptr [eax + 8]
// 00725070  881c11               mov byte ptr [ecx + edx], bl
// 00725073  016814               add dword ptr [eax + 0x14], ebp
// 00725076  0fb698b9160000       movzx ebx, byte ptr [eax + 0x16b9]
// 0072507d  8b4814               mov ecx, dword ptr [eax + 0x14]
// 00725080  8b5008               mov edx, dword ptr [eax + 8]
// 00725083  881c11               mov byte ptr [ecx + edx], bl
// 00725086  8b90bc160000         mov edx, dword ptr [eax + 0x16bc]
// 0072508c  016814               add dword ptr [eax + 0x14], ebp
// 0072508f  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00725093  b110                 mov cl, 0x10
// 00725095  2aca                 sub cl, dl
// 00725097  66d3ee               shr si, cl
// 0072509a  83c2f4               add edx, -0xc
// 0072509d  8990bc160000         mov dword ptr [eax + 0x16bc], edx
// 007250a3  6689b0b8160000       mov word ptr [eax + 0x16b8], si
// 007250aa  eb15                 jmp 0x7250c1
// 007250ac  8d53fc               lea edx, [ebx - 4]
// 007250af  d3e2                 shl edx, cl
// 007250b1  660990b8160000       or word ptr [eax + 0x16b8], dx
// 007250b8  83c104               add ecx, 4
// 007250bb  8988bc160000         mov dword ptr [eax + 0x16bc], ecx
// 007250c1  33ff                 xor edi, edi
// 007250c3  85db                 test ebx, ebx
// 007250c5  0f8e98000000         jle 0x725163
// 007250cb  eb03                 jmp 0x7250d0
// 007250cd  8d4900               lea ecx, [ecx]
// 007250d0  8b88bc160000         mov ecx, dword ptr [eax + 0x16bc]
// 007250d6  83f90d               cmp ecx, 0xd
// 007250d9  0fb6970c637e00       movzx edx, byte ptr [edi + 0x7e630c]
// 007250e0  7e5c                 jle 0x72513e
// 007250e2  0fb7b4907e0a0000     movzx esi, word ptr [eax + edx*4 + 0xa7e]
// 007250ea  8bd6                 mov edx, esi
// 007250ec  d3e2                 shl edx, cl
// 007250ee  8b4814               mov ecx, dword ptr [eax + 0x14]
// 007250f1  660990b8160000       or word ptr [eax + 0x16b8], dx
// 007250f8  0fb698b8160000       movzx ebx, byte ptr [eax + 0x16b8]
// 007250ff  8b5008               mov edx, dword ptr [eax + 8]
// 00725102  881c11               mov byte ptr [ecx + edx], bl
// 00725105  016814               add dword ptr [eax + 0x14], ebp
// 00725108  0fb698b9160000       movzx ebx, byte ptr [eax + 0x16b9]
// 0072510f  8b4814               mov ecx, dword ptr [eax + 0x14]
// 00725112  8b5008               mov edx, dword ptr [eax + 8]
// 00725115  881c11               mov byte ptr [ecx + edx], bl
// 00725118  8b90bc160000         mov edx, dword ptr [eax + 0x16bc]
// 0072511e  016814               add dword ptr [eax + 0x14], ebp
// 00725121  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 00725125  b110                 mov cl, 0x10
// 00725127  2aca                 sub cl, dl
// 00725129  66d3ee               shr si, cl
// 0072512c  83c2f3               add edx, -0xd
// 0072512f  8990bc160000         mov dword ptr [eax + 0x16bc], edx
// 00725135  6689b0b8160000       mov word ptr [eax + 0x16b8], si
// 0072513c  eb1b                 jmp 0x725159
// 0072513e  668b94907e0a0000     mov dx, word ptr [eax + edx*4 + 0xa7e]
// 00725146  66d3e2               shl dx, cl
// 00725149  660990b8160000       or word ptr [eax + 0x16b8], dx
// 00725150  83c103               add ecx, 3
// 00725153  8988bc160000         mov dword ptr [eax + 0x16bc], ecx
// 00725159  03fd                 add edi, ebp
// 0072515b  3bfb                 cmp edi, ebx
// 0072515d  0f8c6dffffff         jl 0x7250d0
// 00725163  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00725167  83c1ff               add ecx, -1
// 0072516a  8d9094000000         lea edx, [eax + 0x94]
// 00725170  e89bf8ffff           call 0x724a10
// 00725175  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00725179  5f                   pop edi
// 0072517a  5e                   pop esi
// 0072517b  5d                   pop ebp
// 0072517c  83c1ff               add ecx, -1
// 0072517f  8d9088090000         lea edx, [eax + 0x988]
// 00725185  5b                   pop ebx
// 00725186  83c404               add esp, 4
// 00725189  e982f8ffff           jmp 0x724a10
// library zlib-1.2.3/trees.c (function _send_all_trees)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 trees.c
