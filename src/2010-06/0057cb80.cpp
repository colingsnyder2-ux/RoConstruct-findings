// from server: 100% by auto
// roc 2010-06 0057cb80  unit: seg_00570000  size: 602 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0057cb80
//
// 0057cb80  51                   push ecx
// 0057cb81  8b88bc160000         mov ecx, dword ptr [eax + 0x16bc]
// 0057cb87  83f90b               cmp ecx, 0xb
// 0057cb8a  53                   push ebx
// 0057cb8b  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 0057cb8f  55                   push ebp
// 0057cb90  56                   push esi
// 0057cb91  57                   push edi
// 0057cb92  bd01000000           mov ebp, 1
// 0057cb97  7e5e                 jle 0x57cbf7
// 0057cb99  8b742418             mov esi, dword ptr [esp + 0x18]
// 0057cb9d  81c6fffeffff         add esi, 0xfffffeff
// 0057cba3  8bd6                 mov edx, esi
// 0057cba5  d3e2                 shl edx, cl
// 0057cba7  8b4814               mov ecx, dword ptr [eax + 0x14]
// 0057cbaa  660990b8160000       or word ptr [eax + 0x16b8], dx
// 0057cbb1  0fb698b8160000       movzx ebx, byte ptr [eax + 0x16b8]
// 0057cbb8  8b5008               mov edx, dword ptr [eax + 8]
// 0057cbbb  881c11               mov byte ptr [ecx + edx], bl
// 0057cbbe  016814               add dword ptr [eax + 0x14], ebp
// 0057cbc1  0fb698b9160000       movzx ebx, byte ptr [eax + 0x16b9]
// 0057cbc8  8b4814               mov ecx, dword ptr [eax + 0x14]
// 0057cbcb  8b5008               mov edx, dword ptr [eax + 8]
// 0057cbce  881c11               mov byte ptr [ecx + edx], bl
// 0057cbd1  8b90bc160000         mov edx, dword ptr [eax + 0x16bc]
// 0057cbd7  016814               add dword ptr [eax + 0x14], ebp
// 0057cbda  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 0057cbde  b110                 mov cl, 0x10
// 0057cbe0  2aca                 sub cl, dl
// 0057cbe2  66d3ee               shr si, cl
// 0057cbe5  83c2f5               add edx, -0xb
// 0057cbe8  8990bc160000         mov dword ptr [eax + 0x16bc], edx
// 0057cbee  6689b0b8160000       mov word ptr [eax + 0x16b8], si
// 0057cbf5  eb1c                 jmp 0x57cc13
// 0057cbf7  8b542418             mov edx, dword ptr [esp + 0x18]
// 0057cbfb  81c2fffeffff         add edx, 0xfffffeff
// 0057cc01  d3e2                 shl edx, cl
// 0057cc03  660990b8160000       or word ptr [eax + 0x16b8], dx
// 0057cc0a  83c105               add ecx, 5
// 0057cc0d  8988bc160000         mov dword ptr [eax + 0x16bc], ecx
// 0057cc13  8b88bc160000         mov ecx, dword ptr [eax + 0x16bc]
// 0057cc19  83f90b               cmp ecx, 0xb
// 0057cc1c  7e5d                 jle 0x57cc7b
// 0057cc1e  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0057cc22  4e                   dec esi
// 0057cc23  8bd6                 mov edx, esi
// 0057cc25  d3e2                 shl edx, cl
// 0057cc27  8b4814               mov ecx, dword ptr [eax + 0x14]
// 0057cc2a  895c2410             mov dword ptr [esp + 0x10], ebx
// 0057cc2e  660990b8160000       or word ptr [eax + 0x16b8], dx
// 0057cc35  0fb698b8160000       movzx ebx, byte ptr [eax + 0x16b8]
// 0057cc3c  8b5008               mov edx, dword ptr [eax + 8]
// 0057cc3f  881c11               mov byte ptr [ecx + edx], bl
// 0057cc42  016814               add dword ptr [eax + 0x14], ebp
// 0057cc45  0fb698b9160000       movzx ebx, byte ptr [eax + 0x16b9]
// 0057cc4c  8b4814               mov ecx, dword ptr [eax + 0x14]
// 0057cc4f  8b5008               mov edx, dword ptr [eax + 8]
// 0057cc52  881c11               mov byte ptr [ecx + edx], bl
// 0057cc55  8b90bc160000         mov edx, dword ptr [eax + 0x16bc]
// 0057cc5b  016814               add dword ptr [eax + 0x14], ebp
// 0057cc5e  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0057cc62  b110                 mov cl, 0x10
// 0057cc64  2aca                 sub cl, dl
// 0057cc66  66d3ee               shr si, cl
// 0057cc69  83c2f5               add edx, -0xb
// 0057cc6c  8990bc160000         mov dword ptr [eax + 0x16bc], edx
// 0057cc72  6689b0b8160000       mov word ptr [eax + 0x16b8], si
// 0057cc79  eb17                 jmp 0x57cc92
// 0057cc7b  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0057cc7f  4a                   dec edx
// 0057cc80  d3e2                 shl edx, cl
// 0057cc82  660990b8160000       or word ptr [eax + 0x16b8], dx
// 0057cc89  83c105               add ecx, 5
// 0057cc8c  8988bc160000         mov dword ptr [eax + 0x16bc], ecx
// 0057cc92  8b88bc160000         mov ecx, dword ptr [eax + 0x16bc]
// 0057cc98  83f90c               cmp ecx, 0xc
// 0057cc9b  7e5b                 jle 0x57ccf8
// 0057cc9d  8d73fc               lea esi, [ebx - 4]
// 0057cca0  8bd6                 mov edx, esi
// 0057cca2  d3e2                 shl edx, cl
// 0057cca4  8b4814               mov ecx, dword ptr [eax + 0x14]
// 0057cca7  895c2410             mov dword ptr [esp + 0x10], ebx
// 0057ccab  660990b8160000       or word ptr [eax + 0x16b8], dx
// 0057ccb2  0fb698b8160000       movzx ebx, byte ptr [eax + 0x16b8]
// 0057ccb9  8b5008               mov edx, dword ptr [eax + 8]
// 0057ccbc  881c11               mov byte ptr [ecx + edx], bl
// 0057ccbf  016814               add dword ptr [eax + 0x14], ebp
// 0057ccc2  0fb698b9160000       movzx ebx, byte ptr [eax + 0x16b9]
// 0057ccc9  8b4814               mov ecx, dword ptr [eax + 0x14]
// 0057cccc  8b5008               mov edx, dword ptr [eax + 8]
// 0057cccf  881c11               mov byte ptr [ecx + edx], bl
// 0057ccd2  8b90bc160000         mov edx, dword ptr [eax + 0x16bc]
// 0057ccd8  016814               add dword ptr [eax + 0x14], ebp
// 0057ccdb  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0057ccdf  b110                 mov cl, 0x10
// 0057cce1  2aca                 sub cl, dl
// 0057cce3  66d3ee               shr si, cl
// 0057cce6  83c2f4               add edx, -0xc
// 0057cce9  8990bc160000         mov dword ptr [eax + 0x16bc], edx
// 0057ccef  6689b0b8160000       mov word ptr [eax + 0x16b8], si
// 0057ccf6  eb15                 jmp 0x57cd0d
// 0057ccf8  8d53fc               lea edx, [ebx - 4]
// 0057ccfb  d3e2                 shl edx, cl
// 0057ccfd  660990b8160000       or word ptr [eax + 0x16b8], dx
// 0057cd04  83c104               add ecx, 4
// 0057cd07  8988bc160000         mov dword ptr [eax + 0x16bc], ecx
// 0057cd0d  33ff                 xor edi, edi
// 0057cd0f  85db                 test ebx, ebx
// 0057cd11  0f8e9c000000         jle 0x57cdb3
// 0057cd17  eb07                 jmp 0x57cd20
// 0057cd19  8da42400000000       lea esp, [esp]
// 0057cd20  8b88bc160000         mov ecx, dword ptr [eax + 0x16bc]
// 0057cd26  83f90d               cmp ecx, 0xd
// 0057cd29  0fb697b47aa200       movzx edx, byte ptr [edi + 0xa27ab4]
// 0057cd30  7e5c                 jle 0x57cd8e
// 0057cd32  0fb7b4907e0a0000     movzx esi, word ptr [eax + edx*4 + 0xa7e]
// 0057cd3a  8bd6                 mov edx, esi
// 0057cd3c  d3e2                 shl edx, cl
// 0057cd3e  8b4814               mov ecx, dword ptr [eax + 0x14]
// 0057cd41  660990b8160000       or word ptr [eax + 0x16b8], dx
// 0057cd48  0fb698b8160000       movzx ebx, byte ptr [eax + 0x16b8]
// 0057cd4f  8b5008               mov edx, dword ptr [eax + 8]
// 0057cd52  881c11               mov byte ptr [ecx + edx], bl
// 0057cd55  016814               add dword ptr [eax + 0x14], ebp
// 0057cd58  0fb698b9160000       movzx ebx, byte ptr [eax + 0x16b9]
// 0057cd5f  8b4814               mov ecx, dword ptr [eax + 0x14]
// 0057cd62  8b5008               mov edx, dword ptr [eax + 8]
// 0057cd65  881c11               mov byte ptr [ecx + edx], bl
// 0057cd68  8b90bc160000         mov edx, dword ptr [eax + 0x16bc]
// 0057cd6e  016814               add dword ptr [eax + 0x14], ebp
// 0057cd71  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 0057cd75  b110                 mov cl, 0x10
// 0057cd77  2aca                 sub cl, dl
// 0057cd79  66d3ee               shr si, cl
// 0057cd7c  83c2f3               add edx, -0xd
// 0057cd7f  8990bc160000         mov dword ptr [eax + 0x16bc], edx
// 0057cd85  6689b0b8160000       mov word ptr [eax + 0x16b8], si
// 0057cd8c  eb1b                 jmp 0x57cda9
// 0057cd8e  668b94907e0a0000     mov dx, word ptr [eax + edx*4 + 0xa7e]
// 0057cd96  66d3e2               shl dx, cl
// 0057cd99  660990b8160000       or word ptr [eax + 0x16b8], dx
// 0057cda0  83c103               add ecx, 3
// 0057cda3  8988bc160000         mov dword ptr [eax + 0x16bc], ecx
// 0057cda9  03fd                 add edi, ebp
// 0057cdab  3bfb                 cmp edi, ebx
// 0057cdad  0f8c6dffffff         jl 0x57cd20
// 0057cdb3  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0057cdb7  49                   dec ecx
// 0057cdb8  8d9094000000         lea edx, [eax + 0x94]
// 0057cdbe  e8adf8ffff           call 0x57c670
// 0057cdc3  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0057cdc7  5f                   pop edi
// 0057cdc8  5e                   pop esi
// 0057cdc9  5d                   pop ebp
// 0057cdca  49                   dec ecx
// 0057cdcb  8d9088090000         lea edx, [eax + 0x988]
// 0057cdd1  5b                   pop ebx
// 0057cdd2  83c404               add esp, 4
// 0057cdd5  e996f8ffff           jmp 0x57c670
// library zlib-1.2.3/trees.c (function _send_all_trees)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 trees.c
