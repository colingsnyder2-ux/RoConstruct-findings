// from server: 100% by auto
// roc 2011-06 009031e0  unit: CXTIconHandle  size: 622 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 009031e0
//
// 009031e0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 009031e4  53                   push ebx
// 009031e5  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 009031e9  57                   push edi
// 009031ea  8bf9                 mov edi, ecx
// 009031ec  c1ef10               shr edi, 0x10
// 009031ef  81e1ffff0000         and ecx, 0xffff
// 009031f5  83fb01               cmp ebx, 1
// 009031f8  7531                 jne 0x90322b
// 009031fa  8b442410             mov eax, dword ptr [esp + 0x10]
// 009031fe  0fb610               movzx edx, byte ptr [eax]
// 00903201  03ca                 add ecx, edx
// 00903203  81f9f1ff0000         cmp ecx, 0xfff1
// 00903209  7206                 jb 0x903211
// 0090320b  81e9f1ff0000         sub ecx, 0xfff1
// 00903211  03f9                 add edi, ecx
// 00903213  81fff1ff0000         cmp edi, 0xfff1
// 00903219  7206                 jb 0x903221
// 0090321b  81eff1ff0000         sub edi, 0xfff1
// 00903221  8bc7                 mov eax, edi
// 00903223  c1e010               shl eax, 0x10
// 00903226  5f                   pop edi
// 00903227  0bc1                 or eax, ecx
// 00903229  5b                   pop ebx
// 0090322a  c3                   ret 
// 0090322b  56                   push esi
// 0090322c  8b742414             mov esi, dword ptr [esp + 0x14]
// 00903230  85f6                 test esi, esi
// 00903232  7507                 jne 0x90323b
// 00903234  8d4601               lea eax, [esi + 1]
// 00903237  5e                   pop esi
// 00903238  5f                   pop edi
// 00903239  5b                   pop ebx
// 0090323a  c3                   ret 
// 0090323b  83fb10               cmp ebx, 0x10
// 0090323e  733b                 jae 0x90327b
// 00903240  85db                 test ebx, ebx
// 00903242  740d                 je 0x903251
// 00903244  0fb606               movzx eax, byte ptr [esi]
// 00903247  03c8                 add ecx, eax
// 00903249  4b                   dec ebx
// 0090324a  46                   inc esi
// 0090324b  03f9                 add edi, ecx
// 0090324d  85db                 test ebx, ebx
// 0090324f  75f3                 jne 0x903244
// 00903251  81f9f1ff0000         cmp ecx, 0xfff1
// 00903257  7206                 jb 0x90325f
// 00903259  81e9f1ff0000         sub ecx, 0xfff1
// 0090325f  b871800780           mov eax, 0x80078071
// 00903264  f7e7                 mul edi
// 00903266  c1ea0f               shr edx, 0xf
// 00903269  8bc2                 mov eax, edx
// 0090326b  c1e004               shl eax, 4
// 0090326e  2bc2                 sub eax, edx
// 00903270  03c7                 add eax, edi
// 00903272  5e                   pop esi
// 00903273  c1e010               shl eax, 0x10
// 00903276  5f                   pop edi
// 00903277  0bc1                 or eax, ecx
// 00903279  5b                   pop ebx
// 0090327a  c3                   ret 
// 0090327b  81fbb0150000         cmp ebx, 0x15b0
// 00903281  0f82e2000000         jb 0x903369
// 00903287  b8afa96e5e           mov eax, 0x5e6ea9af
// 0090328c  f7e3                 mul ebx
// 0090328e  55                   push ebp
// 0090328f  8bea                 mov ebp, edx
// 00903291  c1ed0b               shr ebp, 0xb
// 00903294  eb0a                 jmp 0x9032a0
// 00903296  8da42400000000       lea esp, [esp]
// 0090329d  8d4900               lea ecx, [ecx]
// 009032a0  81ebb0150000         sub ebx, 0x15b0
// 009032a6  b85b010000           mov eax, 0x15b
// 009032ab  eb03                 jmp 0x9032b0
// 009032ad  8d4900               lea ecx, [ecx]
// 009032b0  0fb616               movzx edx, byte ptr [esi]
// 009032b3  03ca                 add ecx, edx
// 009032b5  0fb65601             movzx edx, byte ptr [esi + 1]
// 009032b9  03f9                 add edi, ecx
// 009032bb  03ca                 add ecx, edx
// 009032bd  0fb65602             movzx edx, byte ptr [esi + 2]
// 009032c1  03f9                 add edi, ecx
// 009032c3  03ca                 add ecx, edx
// 009032c5  0fb65603             movzx edx, byte ptr [esi + 3]
// 009032c9  03f9                 add edi, ecx
// 009032cb  03ca                 add ecx, edx
// 009032cd  0fb65604             movzx edx, byte ptr [esi + 4]
// 009032d1  03f9                 add edi, ecx
// 009032d3  03ca                 add ecx, edx
// 009032d5  0fb65605             movzx edx, byte ptr [esi + 5]
// 009032d9  03f9                 add edi, ecx
// 009032db  03ca                 add ecx, edx
// 009032dd  0fb65606             movzx edx, byte ptr [esi + 6]
// 009032e1  03f9                 add edi, ecx
// 009032e3  03ca                 add ecx, edx
// 009032e5  0fb65607             movzx edx, byte ptr [esi + 7]
// 009032e9  03f9                 add edi, ecx
// 009032eb  03ca                 add ecx, edx
// 009032ed  0fb65608             movzx edx, byte ptr [esi + 8]
// 009032f1  03f9                 add edi, ecx
// 009032f3  03ca                 add ecx, edx
// 009032f5  0fb65609             movzx edx, byte ptr [esi + 9]
// 009032f9  03f9                 add edi, ecx
// 009032fb  03ca                 add ecx, edx
// 009032fd  0fb6560a             movzx edx, byte ptr [esi + 0xa]
// 00903301  03f9                 add edi, ecx
// 00903303  03ca                 add ecx, edx
// 00903305  0fb6560b             movzx edx, byte ptr [esi + 0xb]
// 00903309  03f9                 add edi, ecx
// 0090330b  03ca                 add ecx, edx
// 0090330d  0fb6560c             movzx edx, byte ptr [esi + 0xc]
// 00903311  03f9                 add edi, ecx
// 00903313  03ca                 add ecx, edx
// 00903315  0fb6560d             movzx edx, byte ptr [esi + 0xd]
// 00903319  03f9                 add edi, ecx
// 0090331b  03ca                 add ecx, edx
// 0090331d  0fb6560e             movzx edx, byte ptr [esi + 0xe]
// 00903321  03f9                 add edi, ecx
// 00903323  03ca                 add ecx, edx
// 00903325  0fb6560f             movzx edx, byte ptr [esi + 0xf]
// 00903329  03f9                 add edi, ecx
// 0090332b  03ca                 add ecx, edx
// 0090332d  03f9                 add edi, ecx
// 0090332f  83c610               add esi, 0x10
// 00903332  83e801               sub eax, 1
// 00903335  0f8575ffffff         jne 0x9032b0
// 0090333b  b871800780           mov eax, 0x80078071
// 00903340  f7e1                 mul ecx
// 00903342  c1ea0f               shr edx, 0xf
// 00903345  69d20f00ffff         imul edx, edx, 0xffff000f
// 0090334b  03ca                 add ecx, edx
// 0090334d  b871800780           mov eax, 0x80078071
// 00903352  f7e7                 mul edi
// 00903354  c1ea0f               shr edx, 0xf
// 00903357  69d20f00ffff         imul edx, edx, 0xffff000f
// 0090335d  03fa                 add edi, edx
// 0090335f  83ed01               sub ebp, 1
// 00903362  0f8538ffffff         jne 0x9032a0
// 00903368  5d                   pop ebp
// 00903369  85db                 test ebx, ebx
// 0090336b  0f84d2000000         je 0x903443
// 00903371  83fb10               cmp ebx, 0x10
// 00903374  0f8294000000         jb 0x90340e
// 0090337a  8bc3                 mov eax, ebx
// 0090337c  c1e804               shr eax, 4
// 0090337f  90                   nop 
// 00903380  0fb616               movzx edx, byte ptr [esi]
// 00903383  03ca                 add ecx, edx
// 00903385  0fb65601             movzx edx, byte ptr [esi + 1]
// 00903389  03f9                 add edi, ecx
// 0090338b  03ca                 add ecx, edx
// 0090338d  0fb65602             movzx edx, byte ptr [esi + 2]
// 00903391  03f9                 add edi, ecx
// 00903393  03ca                 add ecx, edx
// 00903395  0fb65603             movzx edx, byte ptr [esi + 3]
// 00903399  03f9                 add edi, ecx
// 0090339b  03ca                 add ecx, edx
// 0090339d  0fb65604             movzx edx, byte ptr [esi + 4]
// 009033a1  03f9                 add edi, ecx
// 009033a3  03ca                 add ecx, edx
// 009033a5  0fb65605             movzx edx, byte ptr [esi + 5]
// 009033a9  03f9                 add edi, ecx
// 009033ab  03ca                 add ecx, edx
// 009033ad  0fb65606             movzx edx, byte ptr [esi + 6]
// 009033b1  03f9                 add edi, ecx
// 009033b3  03ca                 add ecx, edx
// 009033b5  0fb65607             movzx edx, byte ptr [esi + 7]
// 009033b9  03f9                 add edi, ecx
// 009033bb  03ca                 add ecx, edx
// 009033bd  0fb65608             movzx edx, byte ptr [esi + 8]
// 009033c1  03f9                 add edi, ecx
// 009033c3  03ca                 add ecx, edx
// 009033c5  0fb65609             movzx edx, byte ptr [esi + 9]
// 009033c9  03f9                 add edi, ecx
// 009033cb  03ca                 add ecx, edx
// 009033cd  0fb6560a             movzx edx, byte ptr [esi + 0xa]
// 009033d1  03f9                 add edi, ecx
// 009033d3  03ca                 add ecx, edx
// 009033d5  0fb6560b             movzx edx, byte ptr [esi + 0xb]
// 009033d9  03f9                 add edi, ecx
// 009033db  03ca                 add ecx, edx
// 009033dd  0fb6560c             movzx edx, byte ptr [esi + 0xc]
// 009033e1  03f9                 add edi, ecx
// 009033e3  03ca                 add ecx, edx
// 009033e5  0fb6560d             movzx edx, byte ptr [esi + 0xd]
// 009033e9  03f9                 add edi, ecx
// 009033eb  03ca                 add ecx, edx
// 009033ed  0fb6560e             movzx edx, byte ptr [esi + 0xe]
// 009033f1  03f9                 add edi, ecx
// 009033f3  03ca                 add ecx, edx
// 009033f5  0fb6560f             movzx edx, byte ptr [esi + 0xf]
// 009033f9  03f9                 add edi, ecx
// 009033fb  03ca                 add ecx, edx
// 009033fd  83eb10               sub ebx, 0x10
// 00903400  03f9                 add edi, ecx
// 00903402  83c610               add esi, 0x10
// 00903405  83e801               sub eax, 1
// 00903408  0f8572ffffff         jne 0x903380
// 0090340e  85db                 test ebx, ebx
// 00903410  740d                 je 0x90341f
// 00903412  0fb606               movzx eax, byte ptr [esi]
// 00903415  03c8                 add ecx, eax
// 00903417  4b                   dec ebx
// 00903418  46                   inc esi
// 00903419  03f9                 add edi, ecx
// 0090341b  85db                 test ebx, ebx
// 0090341d  75f3                 jne 0x903412
// 0090341f  b871800780           mov eax, 0x80078071
// 00903424  f7e1                 mul ecx
// 00903426  c1ea0f               shr edx, 0xf
// 00903429  69d20f00ffff         imul edx, edx, 0xffff000f
// 0090342f  03ca                 add ecx, edx
// 00903431  b871800780           mov eax, 0x80078071
// 00903436  f7e7                 mul edi
// 00903438  c1ea0f               shr edx, 0xf
// 0090343b  69d20f00ffff         imul edx, edx, 0xffff000f
// 00903441  03fa                 add edi, edx
// 00903443  8bc7                 mov eax, edi
// 00903445  5e                   pop esi
// 00903446  c1e010               shl eax, 0x10
// 00903449  5f                   pop edi
// 0090344a  0bc1                 or eax, ecx
// 0090344c  5b                   pop ebx
// 0090344d  c3                   ret 
// library zlib-1.2.3/adler32.c (function _adler32)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 adler32.c
