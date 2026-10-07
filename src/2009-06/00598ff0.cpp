// roc 2009-06 00598ff0  unit: seg_00590000  size: 602 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00598ff0
//
// 00598ff0  51                   push ecx
// 00598ff1  8b88bc160000         mov ecx, dword ptr [eax + 0x16bc]
// 00598ff7  83f90b               cmp ecx, 0xb
// 00598ffa  53                   push ebx
// 00598ffb  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 00598fff  55                   push ebp
// 00599000  56                   push esi
// 00599001  57                   push edi
// 00599002  bd01000000           mov ebp, 1
// 00599007  7e5e                 jle 0x599067
// 00599009  8b742418             mov esi, dword ptr [esp + 0x18]
// 0059900d  81c6fffeffff         add esi, 0xfffffeff
// 00599013  8bd6                 mov edx, esi
// 00599015  d3e2                 shl edx, cl
// 00599017  8b4814               mov ecx, dword ptr [eax + 0x14]
// 0059901a  660990b8160000       or word ptr [eax + 0x16b8], dx
// 00599021  0fb698b8160000       movzx ebx, byte ptr [eax + 0x16b8]
// 00599028  8b5008               mov edx, dword ptr [eax + 8]
// 0059902b  881c11               mov byte ptr [ecx + edx], bl
// 0059902e  016814               add dword ptr [eax + 0x14], ebp
// 00599031  0fb698b9160000       movzx ebx, byte ptr [eax + 0x16b9]
// 00599038  8b4814               mov ecx, dword ptr [eax + 0x14]
// 0059903b  8b5008               mov edx, dword ptr [eax + 8]
// 0059903e  881c11               mov byte ptr [ecx + edx], bl
// 00599041  8b90bc160000         mov edx, dword ptr [eax + 0x16bc]
// 00599047  016814               add dword ptr [eax + 0x14], ebp
// 0059904a  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 0059904e  b110                 mov cl, 0x10
// 00599050  2aca                 sub cl, dl
// 00599052  66d3ee               shr si, cl
// 00599055  83c2f5               add edx, -0xb
// 00599058  8990bc160000         mov dword ptr [eax + 0x16bc], edx
// 0059905e  6689b0b8160000       mov word ptr [eax + 0x16b8], si
// 00599065  eb1c                 jmp 0x599083
// 00599067  8b542418             mov edx, dword ptr [esp + 0x18]
// 0059906b  81c2fffeffff         add edx, 0xfffffeff
// 00599071  d3e2                 shl edx, cl
// 00599073  660990b8160000       or word ptr [eax + 0x16b8], dx
// 0059907a  83c105               add ecx, 5
// 0059907d  8988bc160000         mov dword ptr [eax + 0x16bc], ecx
// 00599083  8b88bc160000         mov ecx, dword ptr [eax + 0x16bc]
// 00599089  83f90b               cmp ecx, 0xb
// 0059908c  7e5d                 jle 0x5990eb
// 0059908e  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00599092  4e                   dec esi
// 00599093  8bd6                 mov edx, esi
// 00599095  d3e2                 shl edx, cl
// 00599097  8b4814               mov ecx, dword ptr [eax + 0x14]
// 0059909a  895c2410             mov dword ptr [esp + 0x10], ebx
// 0059909e  660990b8160000       or word ptr [eax + 0x16b8], dx
// 005990a5  0fb698b8160000       movzx ebx, byte ptr [eax + 0x16b8]
// 005990ac  8b5008               mov edx, dword ptr [eax + 8]
// 005990af  881c11               mov byte ptr [ecx + edx], bl
// 005990b2  016814               add dword ptr [eax + 0x14], ebp
// 005990b5  0fb698b9160000       movzx ebx, byte ptr [eax + 0x16b9]
// 005990bc  8b4814               mov ecx, dword ptr [eax + 0x14]
// 005990bf  8b5008               mov edx, dword ptr [eax + 8]
// 005990c2  881c11               mov byte ptr [ecx + edx], bl
// 005990c5  8b90bc160000         mov edx, dword ptr [eax + 0x16bc]
// 005990cb  016814               add dword ptr [eax + 0x14], ebp
// 005990ce  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 005990d2  b110                 mov cl, 0x10
// 005990d4  2aca                 sub cl, dl
// 005990d6  66d3ee               shr si, cl
// 005990d9  83c2f5               add edx, -0xb
// 005990dc  8990bc160000         mov dword ptr [eax + 0x16bc], edx
// 005990e2  6689b0b8160000       mov word ptr [eax + 0x16b8], si
// 005990e9  eb17                 jmp 0x599102
// 005990eb  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 005990ef  4a                   dec edx
// 005990f0  d3e2                 shl edx, cl
// 005990f2  660990b8160000       or word ptr [eax + 0x16b8], dx
// 005990f9  83c105               add ecx, 5
// 005990fc  8988bc160000         mov dword ptr [eax + 0x16bc], ecx
// 00599102  8b88bc160000         mov ecx, dword ptr [eax + 0x16bc]
// 00599108  83f90c               cmp ecx, 0xc
// 0059910b  7e5b                 jle 0x599168
// 0059910d  8d73fc               lea esi, [ebx - 4]
// 00599110  8bd6                 mov edx, esi
// 00599112  d3e2                 shl edx, cl
// 00599114  8b4814               mov ecx, dword ptr [eax + 0x14]
// 00599117  895c2410             mov dword ptr [esp + 0x10], ebx
// 0059911b  660990b8160000       or word ptr [eax + 0x16b8], dx
// 00599122  0fb698b8160000       movzx ebx, byte ptr [eax + 0x16b8]
// 00599129  8b5008               mov edx, dword ptr [eax + 8]
// 0059912c  881c11               mov byte ptr [ecx + edx], bl
// 0059912f  016814               add dword ptr [eax + 0x14], ebp
// 00599132  0fb698b9160000       movzx ebx, byte ptr [eax + 0x16b9]
// 00599139  8b4814               mov ecx, dword ptr [eax + 0x14]
// 0059913c  8b5008               mov edx, dword ptr [eax + 8]
// 0059913f  881c11               mov byte ptr [ecx + edx], bl
// 00599142  8b90bc160000         mov edx, dword ptr [eax + 0x16bc]
// 00599148  016814               add dword ptr [eax + 0x14], ebp
// 0059914b  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0059914f  b110                 mov cl, 0x10
// 00599151  2aca                 sub cl, dl
// 00599153  66d3ee               shr si, cl
// 00599156  83c2f4               add edx, -0xc
// 00599159  8990bc160000         mov dword ptr [eax + 0x16bc], edx
// 0059915f  6689b0b8160000       mov word ptr [eax + 0x16b8], si
// 00599166  eb15                 jmp 0x59917d
// 00599168  8d53fc               lea edx, [ebx - 4]
// 0059916b  d3e2                 shl edx, cl
// 0059916d  660990b8160000       or word ptr [eax + 0x16b8], dx
// 00599174  83c104               add ecx, 4
// 00599177  8988bc160000         mov dword ptr [eax + 0x16bc], ecx
// 0059917d  33ff                 xor edi, edi
// 0059917f  85db                 test ebx, ebx
// 00599181  0f8e9c000000         jle 0x599223
// 00599187  eb07                 jmp 0x599190
// 00599189  8da42400000000       lea esp, [esp]
// 00599190  8b88bc160000         mov ecx, dword ptr [eax + 0x16bc]
// 00599196  83f90d               cmp ecx, 0xd
// 00599199  0fb697a42e8d00       movzx edx, byte ptr [edi + 0x8d2ea4]
// 005991a0  7e5c                 jle 0x5991fe
// 005991a2  0fb7b4907e0a0000     movzx esi, word ptr [eax + edx*4 + 0xa7e]
// 005991aa  8bd6                 mov edx, esi
// 005991ac  d3e2                 shl edx, cl
// 005991ae  8b4814               mov ecx, dword ptr [eax + 0x14]
// 005991b1  660990b8160000       or word ptr [eax + 0x16b8], dx
// 005991b8  0fb698b8160000       movzx ebx, byte ptr [eax + 0x16b8]
// 005991bf  8b5008               mov edx, dword ptr [eax + 8]
// 005991c2  881c11               mov byte ptr [ecx + edx], bl
// 005991c5  016814               add dword ptr [eax + 0x14], ebp
// 005991c8  0fb698b9160000       movzx ebx, byte ptr [eax + 0x16b9]
// 005991cf  8b4814               mov ecx, dword ptr [eax + 0x14]
// 005991d2  8b5008               mov edx, dword ptr [eax + 8]
// 005991d5  881c11               mov byte ptr [ecx + edx], bl
// 005991d8  8b90bc160000         mov edx, dword ptr [eax + 0x16bc]
// 005991de  016814               add dword ptr [eax + 0x14], ebp
// 005991e1  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 005991e5  b110                 mov cl, 0x10
// 005991e7  2aca                 sub cl, dl
// 005991e9  66d3ee               shr si, cl
// 005991ec  83c2f3               add edx, -0xd
// 005991ef  8990bc160000         mov dword ptr [eax + 0x16bc], edx
// 005991f5  6689b0b8160000       mov word ptr [eax + 0x16b8], si
// 005991fc  eb1b                 jmp 0x599219
// 005991fe  668b94907e0a0000     mov dx, word ptr [eax + edx*4 + 0xa7e]
// 00599206  66d3e2               shl dx, cl
// 00599209  660990b8160000       or word ptr [eax + 0x16b8], dx
// 00599210  83c103               add ecx, 3
// 00599213  8988bc160000         mov dword ptr [eax + 0x16bc], ecx
// 00599219  03fd                 add edi, ebp
// 0059921b  3bfb                 cmp edi, ebx
// 0059921d  0f8c6dffffff         jl 0x599190
// 00599223  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00599227  49                   dec ecx
// 00599228  8d9094000000         lea edx, [eax + 0x94]
// 0059922e  e8adf8ffff           call 0x598ae0
// 00599233  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00599237  5f                   pop edi
// 00599238  5e                   pop esi
// 00599239  5d                   pop ebp
// 0059923a  49                   dec ecx
// 0059923b  8d9088090000         lea edx, [eax + 0x988]
// 00599241  5b                   pop ebx
// 00599242  83c404               add esp, 4
// 00599245  e996f8ffff           jmp 0x598ae0
// library zlib-1.2.3/trees.c (function _send_all_trees)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 trees.c
