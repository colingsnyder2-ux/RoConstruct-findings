// from server: 100% by auto
// roc 2012-06 0065ed70  unit: seg_00650000  size: 602 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0065ed70
//
// 0065ed70  51                   push ecx
// 0065ed71  8b88bc160000         mov ecx, dword ptr [eax + 0x16bc]
// 0065ed77  83f90b               cmp ecx, 0xb
// 0065ed7a  53                   push ebx
// 0065ed7b  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 0065ed7f  55                   push ebp
// 0065ed80  56                   push esi
// 0065ed81  57                   push edi
// 0065ed82  bd01000000           mov ebp, 1
// 0065ed87  7e5e                 jle 0x65ede7
// 0065ed89  8b742418             mov esi, dword ptr [esp + 0x18]
// 0065ed8d  81c6fffeffff         add esi, 0xfffffeff
// 0065ed93  8bd6                 mov edx, esi
// 0065ed95  d3e2                 shl edx, cl
// 0065ed97  8b4814               mov ecx, dword ptr [eax + 0x14]
// 0065ed9a  660990b8160000       or word ptr [eax + 0x16b8], dx
// 0065eda1  0fb698b8160000       movzx ebx, byte ptr [eax + 0x16b8]
// 0065eda8  8b5008               mov edx, dword ptr [eax + 8]
// 0065edab  881c11               mov byte ptr [ecx + edx], bl
// 0065edae  016814               add dword ptr [eax + 0x14], ebp
// 0065edb1  0fb698b9160000       movzx ebx, byte ptr [eax + 0x16b9]
// 0065edb8  8b4814               mov ecx, dword ptr [eax + 0x14]
// 0065edbb  8b5008               mov edx, dword ptr [eax + 8]
// 0065edbe  881c11               mov byte ptr [ecx + edx], bl
// 0065edc1  8b90bc160000         mov edx, dword ptr [eax + 0x16bc]
// 0065edc7  016814               add dword ptr [eax + 0x14], ebp
// 0065edca  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 0065edce  b110                 mov cl, 0x10
// 0065edd0  2aca                 sub cl, dl
// 0065edd2  66d3ee               shr si, cl
// 0065edd5  83c2f5               add edx, -0xb
// 0065edd8  8990bc160000         mov dword ptr [eax + 0x16bc], edx
// 0065edde  6689b0b8160000       mov word ptr [eax + 0x16b8], si
// 0065ede5  eb1c                 jmp 0x65ee03
// 0065ede7  8b542418             mov edx, dword ptr [esp + 0x18]
// 0065edeb  81c2fffeffff         add edx, 0xfffffeff
// 0065edf1  d3e2                 shl edx, cl
// 0065edf3  660990b8160000       or word ptr [eax + 0x16b8], dx
// 0065edfa  83c105               add ecx, 5
// 0065edfd  8988bc160000         mov dword ptr [eax + 0x16bc], ecx
// 0065ee03  8b88bc160000         mov ecx, dword ptr [eax + 0x16bc]
// 0065ee09  83f90b               cmp ecx, 0xb
// 0065ee0c  7e5d                 jle 0x65ee6b
// 0065ee0e  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0065ee12  4e                   dec esi
// 0065ee13  8bd6                 mov edx, esi
// 0065ee15  d3e2                 shl edx, cl
// 0065ee17  8b4814               mov ecx, dword ptr [eax + 0x14]
// 0065ee1a  895c2410             mov dword ptr [esp + 0x10], ebx
// 0065ee1e  660990b8160000       or word ptr [eax + 0x16b8], dx
// 0065ee25  0fb698b8160000       movzx ebx, byte ptr [eax + 0x16b8]
// 0065ee2c  8b5008               mov edx, dword ptr [eax + 8]
// 0065ee2f  881c11               mov byte ptr [ecx + edx], bl
// 0065ee32  016814               add dword ptr [eax + 0x14], ebp
// 0065ee35  0fb698b9160000       movzx ebx, byte ptr [eax + 0x16b9]
// 0065ee3c  8b4814               mov ecx, dword ptr [eax + 0x14]
// 0065ee3f  8b5008               mov edx, dword ptr [eax + 8]
// 0065ee42  881c11               mov byte ptr [ecx + edx], bl
// 0065ee45  8b90bc160000         mov edx, dword ptr [eax + 0x16bc]
// 0065ee4b  016814               add dword ptr [eax + 0x14], ebp
// 0065ee4e  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0065ee52  b110                 mov cl, 0x10
// 0065ee54  2aca                 sub cl, dl
// 0065ee56  66d3ee               shr si, cl
// 0065ee59  83c2f5               add edx, -0xb
// 0065ee5c  8990bc160000         mov dword ptr [eax + 0x16bc], edx
// 0065ee62  6689b0b8160000       mov word ptr [eax + 0x16b8], si
// 0065ee69  eb17                 jmp 0x65ee82
// 0065ee6b  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0065ee6f  4a                   dec edx
// 0065ee70  d3e2                 shl edx, cl
// 0065ee72  660990b8160000       or word ptr [eax + 0x16b8], dx
// 0065ee79  83c105               add ecx, 5
// 0065ee7c  8988bc160000         mov dword ptr [eax + 0x16bc], ecx
// 0065ee82  8b88bc160000         mov ecx, dword ptr [eax + 0x16bc]
// 0065ee88  83f90c               cmp ecx, 0xc
// 0065ee8b  7e5b                 jle 0x65eee8
// 0065ee8d  8d73fc               lea esi, [ebx - 4]
// 0065ee90  8bd6                 mov edx, esi
// 0065ee92  d3e2                 shl edx, cl
// 0065ee94  8b4814               mov ecx, dword ptr [eax + 0x14]
// 0065ee97  895c2410             mov dword ptr [esp + 0x10], ebx
// 0065ee9b  660990b8160000       or word ptr [eax + 0x16b8], dx
// 0065eea2  0fb698b8160000       movzx ebx, byte ptr [eax + 0x16b8]
// 0065eea9  8b5008               mov edx, dword ptr [eax + 8]
// 0065eeac  881c11               mov byte ptr [ecx + edx], bl
// 0065eeaf  016814               add dword ptr [eax + 0x14], ebp
// 0065eeb2  0fb698b9160000       movzx ebx, byte ptr [eax + 0x16b9]
// 0065eeb9  8b4814               mov ecx, dword ptr [eax + 0x14]
// 0065eebc  8b5008               mov edx, dword ptr [eax + 8]
// 0065eebf  881c11               mov byte ptr [ecx + edx], bl
// 0065eec2  8b90bc160000         mov edx, dword ptr [eax + 0x16bc]
// 0065eec8  016814               add dword ptr [eax + 0x14], ebp
// 0065eecb  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0065eecf  b110                 mov cl, 0x10
// 0065eed1  2aca                 sub cl, dl
// 0065eed3  66d3ee               shr si, cl
// 0065eed6  83c2f4               add edx, -0xc
// 0065eed9  8990bc160000         mov dword ptr [eax + 0x16bc], edx
// 0065eedf  6689b0b8160000       mov word ptr [eax + 0x16b8], si
// 0065eee6  eb15                 jmp 0x65eefd
// 0065eee8  8d53fc               lea edx, [ebx - 4]
// 0065eeeb  d3e2                 shl edx, cl
// 0065eeed  660990b8160000       or word ptr [eax + 0x16b8], dx
// 0065eef4  83c104               add ecx, 4
// 0065eef7  8988bc160000         mov dword ptr [eax + 0x16bc], ecx
// 0065eefd  33ff                 xor edi, edi
// 0065eeff  85db                 test ebx, ebx
// 0065ef01  0f8e9c000000         jle 0x65efa3
// 0065ef07  eb07                 jmp 0x65ef10
// 0065ef09  8da42400000000       lea esp, [esp]
// 0065ef10  8b88bc160000         mov ecx, dword ptr [eax + 0x16bc]
// 0065ef16  83f90d               cmp ecx, 0xd
// 0065ef19  0fb69754b1b800       movzx edx, byte ptr [edi + 0xb8b154]
// 0065ef20  7e5c                 jle 0x65ef7e
// 0065ef22  0fb7b4907e0a0000     movzx esi, word ptr [eax + edx*4 + 0xa7e]
// 0065ef2a  8bd6                 mov edx, esi
// 0065ef2c  d3e2                 shl edx, cl
// 0065ef2e  8b4814               mov ecx, dword ptr [eax + 0x14]
// 0065ef31  660990b8160000       or word ptr [eax + 0x16b8], dx
// 0065ef38  0fb698b8160000       movzx ebx, byte ptr [eax + 0x16b8]
// 0065ef3f  8b5008               mov edx, dword ptr [eax + 8]
// 0065ef42  881c11               mov byte ptr [ecx + edx], bl
// 0065ef45  016814               add dword ptr [eax + 0x14], ebp
// 0065ef48  0fb698b9160000       movzx ebx, byte ptr [eax + 0x16b9]
// 0065ef4f  8b4814               mov ecx, dword ptr [eax + 0x14]
// 0065ef52  8b5008               mov edx, dword ptr [eax + 8]
// 0065ef55  881c11               mov byte ptr [ecx + edx], bl
// 0065ef58  8b90bc160000         mov edx, dword ptr [eax + 0x16bc]
// 0065ef5e  016814               add dword ptr [eax + 0x14], ebp
// 0065ef61  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 0065ef65  b110                 mov cl, 0x10
// 0065ef67  2aca                 sub cl, dl
// 0065ef69  66d3ee               shr si, cl
// 0065ef6c  83c2f3               add edx, -0xd
// 0065ef6f  8990bc160000         mov dword ptr [eax + 0x16bc], edx
// 0065ef75  6689b0b8160000       mov word ptr [eax + 0x16b8], si
// 0065ef7c  eb1b                 jmp 0x65ef99
// 0065ef7e  668b94907e0a0000     mov dx, word ptr [eax + edx*4 + 0xa7e]
// 0065ef86  66d3e2               shl dx, cl
// 0065ef89  660990b8160000       or word ptr [eax + 0x16b8], dx
// 0065ef90  83c103               add ecx, 3
// 0065ef93  8988bc160000         mov dword ptr [eax + 0x16bc], ecx
// 0065ef99  03fd                 add edi, ebp
// 0065ef9b  3bfb                 cmp edi, ebx
// 0065ef9d  0f8c6dffffff         jl 0x65ef10
// 0065efa3  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0065efa7  49                   dec ecx
// 0065efa8  8d9094000000         lea edx, [eax + 0x94]
// 0065efae  e8adf8ffff           call 0x65e860
// 0065efb3  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0065efb7  5f                   pop edi
// 0065efb8  5e                   pop esi
// 0065efb9  5d                   pop ebp
// 0065efba  49                   dec ecx
// 0065efbb  8d9088090000         lea edx, [eax + 0x988]
// 0065efc1  5b                   pop ebx
// 0065efc2  83c404               add esp, 4
// 0065efc5  e996f8ffff           jmp 0x65e860
// library zlib-1.2.3/trees.c (function _send_all_trees)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 trees.c
