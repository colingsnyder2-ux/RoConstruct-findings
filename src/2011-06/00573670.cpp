// from server: 100% by auto
// roc 2011-06 00573670  unit: seg_00570000  size: 602 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00573670
//
// 00573670  51                   push ecx
// 00573671  8b88bc160000         mov ecx, dword ptr [eax + 0x16bc]
// 00573677  83f90b               cmp ecx, 0xb
// 0057367a  53                   push ebx
// 0057367b  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 0057367f  55                   push ebp
// 00573680  56                   push esi
// 00573681  57                   push edi
// 00573682  bd01000000           mov ebp, 1
// 00573687  7e5e                 jle 0x5736e7
// 00573689  8b742418             mov esi, dword ptr [esp + 0x18]
// 0057368d  81c6fffeffff         add esi, 0xfffffeff
// 00573693  8bd6                 mov edx, esi
// 00573695  d3e2                 shl edx, cl
// 00573697  8b4814               mov ecx, dword ptr [eax + 0x14]
// 0057369a  660990b8160000       or word ptr [eax + 0x16b8], dx
// 005736a1  0fb698b8160000       movzx ebx, byte ptr [eax + 0x16b8]
// 005736a8  8b5008               mov edx, dword ptr [eax + 8]
// 005736ab  881c11               mov byte ptr [ecx + edx], bl
// 005736ae  016814               add dword ptr [eax + 0x14], ebp
// 005736b1  0fb698b9160000       movzx ebx, byte ptr [eax + 0x16b9]
// 005736b8  8b4814               mov ecx, dword ptr [eax + 0x14]
// 005736bb  8b5008               mov edx, dword ptr [eax + 8]
// 005736be  881c11               mov byte ptr [ecx + edx], bl
// 005736c1  8b90bc160000         mov edx, dword ptr [eax + 0x16bc]
// 005736c7  016814               add dword ptr [eax + 0x14], ebp
// 005736ca  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 005736ce  b110                 mov cl, 0x10
// 005736d0  2aca                 sub cl, dl
// 005736d2  66d3ee               shr si, cl
// 005736d5  83c2f5               add edx, -0xb
// 005736d8  8990bc160000         mov dword ptr [eax + 0x16bc], edx
// 005736de  6689b0b8160000       mov word ptr [eax + 0x16b8], si
// 005736e5  eb1c                 jmp 0x573703
// 005736e7  8b542418             mov edx, dword ptr [esp + 0x18]
// 005736eb  81c2fffeffff         add edx, 0xfffffeff
// 005736f1  d3e2                 shl edx, cl
// 005736f3  660990b8160000       or word ptr [eax + 0x16b8], dx
// 005736fa  83c105               add ecx, 5
// 005736fd  8988bc160000         mov dword ptr [eax + 0x16bc], ecx
// 00573703  8b88bc160000         mov ecx, dword ptr [eax + 0x16bc]
// 00573709  83f90b               cmp ecx, 0xb
// 0057370c  7e5d                 jle 0x57376b
// 0057370e  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00573712  4e                   dec esi
// 00573713  8bd6                 mov edx, esi
// 00573715  d3e2                 shl edx, cl
// 00573717  8b4814               mov ecx, dword ptr [eax + 0x14]
// 0057371a  895c2410             mov dword ptr [esp + 0x10], ebx
// 0057371e  660990b8160000       or word ptr [eax + 0x16b8], dx
// 00573725  0fb698b8160000       movzx ebx, byte ptr [eax + 0x16b8]
// 0057372c  8b5008               mov edx, dword ptr [eax + 8]
// 0057372f  881c11               mov byte ptr [ecx + edx], bl
// 00573732  016814               add dword ptr [eax + 0x14], ebp
// 00573735  0fb698b9160000       movzx ebx, byte ptr [eax + 0x16b9]
// 0057373c  8b4814               mov ecx, dword ptr [eax + 0x14]
// 0057373f  8b5008               mov edx, dword ptr [eax + 8]
// 00573742  881c11               mov byte ptr [ecx + edx], bl
// 00573745  8b90bc160000         mov edx, dword ptr [eax + 0x16bc]
// 0057374b  016814               add dword ptr [eax + 0x14], ebp
// 0057374e  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00573752  b110                 mov cl, 0x10
// 00573754  2aca                 sub cl, dl
// 00573756  66d3ee               shr si, cl
// 00573759  83c2f5               add edx, -0xb
// 0057375c  8990bc160000         mov dword ptr [eax + 0x16bc], edx
// 00573762  6689b0b8160000       mov word ptr [eax + 0x16b8], si
// 00573769  eb17                 jmp 0x573782
// 0057376b  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0057376f  4a                   dec edx
// 00573770  d3e2                 shl edx, cl
// 00573772  660990b8160000       or word ptr [eax + 0x16b8], dx
// 00573779  83c105               add ecx, 5
// 0057377c  8988bc160000         mov dword ptr [eax + 0x16bc], ecx
// 00573782  8b88bc160000         mov ecx, dword ptr [eax + 0x16bc]
// 00573788  83f90c               cmp ecx, 0xc
// 0057378b  7e5b                 jle 0x5737e8
// 0057378d  8d73fc               lea esi, [ebx - 4]
// 00573790  8bd6                 mov edx, esi
// 00573792  d3e2                 shl edx, cl
// 00573794  8b4814               mov ecx, dword ptr [eax + 0x14]
// 00573797  895c2410             mov dword ptr [esp + 0x10], ebx
// 0057379b  660990b8160000       or word ptr [eax + 0x16b8], dx
// 005737a2  0fb698b8160000       movzx ebx, byte ptr [eax + 0x16b8]
// 005737a9  8b5008               mov edx, dword ptr [eax + 8]
// 005737ac  881c11               mov byte ptr [ecx + edx], bl
// 005737af  016814               add dword ptr [eax + 0x14], ebp
// 005737b2  0fb698b9160000       movzx ebx, byte ptr [eax + 0x16b9]
// 005737b9  8b4814               mov ecx, dword ptr [eax + 0x14]
// 005737bc  8b5008               mov edx, dword ptr [eax + 8]
// 005737bf  881c11               mov byte ptr [ecx + edx], bl
// 005737c2  8b90bc160000         mov edx, dword ptr [eax + 0x16bc]
// 005737c8  016814               add dword ptr [eax + 0x14], ebp
// 005737cb  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 005737cf  b110                 mov cl, 0x10
// 005737d1  2aca                 sub cl, dl
// 005737d3  66d3ee               shr si, cl
// 005737d6  83c2f4               add edx, -0xc
// 005737d9  8990bc160000         mov dword ptr [eax + 0x16bc], edx
// 005737df  6689b0b8160000       mov word ptr [eax + 0x16b8], si
// 005737e6  eb15                 jmp 0x5737fd
// 005737e8  8d53fc               lea edx, [ebx - 4]
// 005737eb  d3e2                 shl edx, cl
// 005737ed  660990b8160000       or word ptr [eax + 0x16b8], dx
// 005737f4  83c104               add ecx, 4
// 005737f7  8988bc160000         mov dword ptr [eax + 0x16bc], ecx
// 005737fd  33ff                 xor edi, edi
// 005737ff  85db                 test ebx, ebx
// 00573801  0f8e9c000000         jle 0x5738a3
// 00573807  eb07                 jmp 0x573810
// 00573809  8da42400000000       lea esp, [esp]
// 00573810  8b88bc160000         mov ecx, dword ptr [eax + 0x16bc]
// 00573816  83f90d               cmp ecx, 0xd
// 00573819  0fb6970473a800       movzx edx, byte ptr [edi + 0xa87304]
// 00573820  7e5c                 jle 0x57387e
// 00573822  0fb7b4907e0a0000     movzx esi, word ptr [eax + edx*4 + 0xa7e]
// 0057382a  8bd6                 mov edx, esi
// 0057382c  d3e2                 shl edx, cl
// 0057382e  8b4814               mov ecx, dword ptr [eax + 0x14]
// 00573831  660990b8160000       or word ptr [eax + 0x16b8], dx
// 00573838  0fb698b8160000       movzx ebx, byte ptr [eax + 0x16b8]
// 0057383f  8b5008               mov edx, dword ptr [eax + 8]
// 00573842  881c11               mov byte ptr [ecx + edx], bl
// 00573845  016814               add dword ptr [eax + 0x14], ebp
// 00573848  0fb698b9160000       movzx ebx, byte ptr [eax + 0x16b9]
// 0057384f  8b4814               mov ecx, dword ptr [eax + 0x14]
// 00573852  8b5008               mov edx, dword ptr [eax + 8]
// 00573855  881c11               mov byte ptr [ecx + edx], bl
// 00573858  8b90bc160000         mov edx, dword ptr [eax + 0x16bc]
// 0057385e  016814               add dword ptr [eax + 0x14], ebp
// 00573861  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 00573865  b110                 mov cl, 0x10
// 00573867  2aca                 sub cl, dl
// 00573869  66d3ee               shr si, cl
// 0057386c  83c2f3               add edx, -0xd
// 0057386f  8990bc160000         mov dword ptr [eax + 0x16bc], edx
// 00573875  6689b0b8160000       mov word ptr [eax + 0x16b8], si
// 0057387c  eb1b                 jmp 0x573899
// 0057387e  668b94907e0a0000     mov dx, word ptr [eax + edx*4 + 0xa7e]
// 00573886  66d3e2               shl dx, cl
// 00573889  660990b8160000       or word ptr [eax + 0x16b8], dx
// 00573890  83c103               add ecx, 3
// 00573893  8988bc160000         mov dword ptr [eax + 0x16bc], ecx
// 00573899  03fd                 add edi, ebp
// 0057389b  3bfb                 cmp edi, ebx
// 0057389d  0f8c6dffffff         jl 0x573810
// 005738a3  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005738a7  49                   dec ecx
// 005738a8  8d9094000000         lea edx, [eax + 0x94]
// 005738ae  e8adf8ffff           call 0x573160
// 005738b3  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005738b7  5f                   pop edi
// 005738b8  5e                   pop esi
// 005738b9  5d                   pop ebp
// 005738ba  49                   dec ecx
// 005738bb  8d9088090000         lea edx, [eax + 0x988]
// 005738c1  5b                   pop ebx
// 005738c2  83c404               add esp, 4
// 005738c5  e996f8ffff           jmp 0x573160
// library zlib-1.2.3/trees.c (function _send_all_trees)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 trees.c
