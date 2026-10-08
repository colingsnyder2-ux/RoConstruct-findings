// from server: 100% by auto
// roc 2010-06 0057bfb0  unit: seg_00570000  size: 622 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0057bfb0
//
// 0057bfb0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0057bfb4  53                   push ebx
// 0057bfb5  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0057bfb9  57                   push edi
// 0057bfba  8bf9                 mov edi, ecx
// 0057bfbc  c1ef10               shr edi, 0x10
// 0057bfbf  81e1ffff0000         and ecx, 0xffff
// 0057bfc5  83fb01               cmp ebx, 1
// 0057bfc8  7531                 jne 0x57bffb
// 0057bfca  8b442410             mov eax, dword ptr [esp + 0x10]
// 0057bfce  0fb610               movzx edx, byte ptr [eax]
// 0057bfd1  03ca                 add ecx, edx
// 0057bfd3  81f9f1ff0000         cmp ecx, 0xfff1
// 0057bfd9  7206                 jb 0x57bfe1
// 0057bfdb  81e9f1ff0000         sub ecx, 0xfff1
// 0057bfe1  03f9                 add edi, ecx
// 0057bfe3  81fff1ff0000         cmp edi, 0xfff1
// 0057bfe9  7206                 jb 0x57bff1
// 0057bfeb  81eff1ff0000         sub edi, 0xfff1
// 0057bff1  8bc7                 mov eax, edi
// 0057bff3  c1e010               shl eax, 0x10
// 0057bff6  5f                   pop edi
// 0057bff7  0bc1                 or eax, ecx
// 0057bff9  5b                   pop ebx
// 0057bffa  c3                   ret 
// 0057bffb  56                   push esi
// 0057bffc  8b742414             mov esi, dword ptr [esp + 0x14]
// 0057c000  85f6                 test esi, esi
// 0057c002  7507                 jne 0x57c00b
// 0057c004  8d4601               lea eax, [esi + 1]
// 0057c007  5e                   pop esi
// 0057c008  5f                   pop edi
// 0057c009  5b                   pop ebx
// 0057c00a  c3                   ret 
// 0057c00b  83fb10               cmp ebx, 0x10
// 0057c00e  733b                 jae 0x57c04b
// 0057c010  85db                 test ebx, ebx
// 0057c012  740d                 je 0x57c021
// 0057c014  0fb606               movzx eax, byte ptr [esi]
// 0057c017  03c8                 add ecx, eax
// 0057c019  4b                   dec ebx
// 0057c01a  46                   inc esi
// 0057c01b  03f9                 add edi, ecx
// 0057c01d  85db                 test ebx, ebx
// 0057c01f  75f3                 jne 0x57c014
// 0057c021  81f9f1ff0000         cmp ecx, 0xfff1
// 0057c027  7206                 jb 0x57c02f
// 0057c029  81e9f1ff0000         sub ecx, 0xfff1
// 0057c02f  b871800780           mov eax, 0x80078071
// 0057c034  f7e7                 mul edi
// 0057c036  c1ea0f               shr edx, 0xf
// 0057c039  8bc2                 mov eax, edx
// 0057c03b  c1e004               shl eax, 4
// 0057c03e  2bc2                 sub eax, edx
// 0057c040  03c7                 add eax, edi
// 0057c042  5e                   pop esi
// 0057c043  c1e010               shl eax, 0x10
// 0057c046  5f                   pop edi
// 0057c047  0bc1                 or eax, ecx
// 0057c049  5b                   pop ebx
// 0057c04a  c3                   ret 
// 0057c04b  81fbb0150000         cmp ebx, 0x15b0
// 0057c051  0f82e2000000         jb 0x57c139
// 0057c057  b8afa96e5e           mov eax, 0x5e6ea9af
// 0057c05c  f7e3                 mul ebx
// 0057c05e  55                   push ebp
// 0057c05f  8bea                 mov ebp, edx
// 0057c061  c1ed0b               shr ebp, 0xb
// 0057c064  eb0a                 jmp 0x57c070
// 0057c066  8da42400000000       lea esp, [esp]
// 0057c06d  8d4900               lea ecx, [ecx]
// 0057c070  81ebb0150000         sub ebx, 0x15b0
// 0057c076  b85b010000           mov eax, 0x15b
// 0057c07b  eb03                 jmp 0x57c080
// 0057c07d  8d4900               lea ecx, [ecx]
// 0057c080  0fb616               movzx edx, byte ptr [esi]
// 0057c083  03ca                 add ecx, edx
// 0057c085  0fb65601             movzx edx, byte ptr [esi + 1]
// 0057c089  03f9                 add edi, ecx
// 0057c08b  03ca                 add ecx, edx
// 0057c08d  0fb65602             movzx edx, byte ptr [esi + 2]
// 0057c091  03f9                 add edi, ecx
// 0057c093  03ca                 add ecx, edx
// 0057c095  0fb65603             movzx edx, byte ptr [esi + 3]
// 0057c099  03f9                 add edi, ecx
// 0057c09b  03ca                 add ecx, edx
// 0057c09d  0fb65604             movzx edx, byte ptr [esi + 4]
// 0057c0a1  03f9                 add edi, ecx
// 0057c0a3  03ca                 add ecx, edx
// 0057c0a5  0fb65605             movzx edx, byte ptr [esi + 5]
// 0057c0a9  03f9                 add edi, ecx
// 0057c0ab  03ca                 add ecx, edx
// 0057c0ad  0fb65606             movzx edx, byte ptr [esi + 6]
// 0057c0b1  03f9                 add edi, ecx
// 0057c0b3  03ca                 add ecx, edx
// 0057c0b5  0fb65607             movzx edx, byte ptr [esi + 7]
// 0057c0b9  03f9                 add edi, ecx
// 0057c0bb  03ca                 add ecx, edx
// 0057c0bd  0fb65608             movzx edx, byte ptr [esi + 8]
// 0057c0c1  03f9                 add edi, ecx
// 0057c0c3  03ca                 add ecx, edx
// 0057c0c5  0fb65609             movzx edx, byte ptr [esi + 9]
// 0057c0c9  03f9                 add edi, ecx
// 0057c0cb  03ca                 add ecx, edx
// 0057c0cd  0fb6560a             movzx edx, byte ptr [esi + 0xa]
// 0057c0d1  03f9                 add edi, ecx
// 0057c0d3  03ca                 add ecx, edx
// 0057c0d5  0fb6560b             movzx edx, byte ptr [esi + 0xb]
// 0057c0d9  03f9                 add edi, ecx
// 0057c0db  03ca                 add ecx, edx
// 0057c0dd  0fb6560c             movzx edx, byte ptr [esi + 0xc]
// 0057c0e1  03f9                 add edi, ecx
// 0057c0e3  03ca                 add ecx, edx
// 0057c0e5  0fb6560d             movzx edx, byte ptr [esi + 0xd]
// 0057c0e9  03f9                 add edi, ecx
// 0057c0eb  03ca                 add ecx, edx
// 0057c0ed  0fb6560e             movzx edx, byte ptr [esi + 0xe]
// 0057c0f1  03f9                 add edi, ecx
// 0057c0f3  03ca                 add ecx, edx
// 0057c0f5  0fb6560f             movzx edx, byte ptr [esi + 0xf]
// 0057c0f9  03f9                 add edi, ecx
// 0057c0fb  03ca                 add ecx, edx
// 0057c0fd  03f9                 add edi, ecx
// 0057c0ff  83c610               add esi, 0x10
// 0057c102  83e801               sub eax, 1
// 0057c105  0f8575ffffff         jne 0x57c080
// 0057c10b  b871800780           mov eax, 0x80078071
// 0057c110  f7e1                 mul ecx
// 0057c112  c1ea0f               shr edx, 0xf
// 0057c115  69d20f00ffff         imul edx, edx, 0xffff000f
// 0057c11b  03ca                 add ecx, edx
// 0057c11d  b871800780           mov eax, 0x80078071
// 0057c122  f7e7                 mul edi
// 0057c124  c1ea0f               shr edx, 0xf
// 0057c127  69d20f00ffff         imul edx, edx, 0xffff000f
// 0057c12d  03fa                 add edi, edx
// 0057c12f  83ed01               sub ebp, 1
// 0057c132  0f8538ffffff         jne 0x57c070
// 0057c138  5d                   pop ebp
// 0057c139  85db                 test ebx, ebx
// 0057c13b  0f84d2000000         je 0x57c213
// 0057c141  83fb10               cmp ebx, 0x10
// 0057c144  0f8294000000         jb 0x57c1de
// 0057c14a  8bc3                 mov eax, ebx
// 0057c14c  c1e804               shr eax, 4
// 0057c14f  90                   nop 
// 0057c150  0fb616               movzx edx, byte ptr [esi]
// 0057c153  03ca                 add ecx, edx
// 0057c155  0fb65601             movzx edx, byte ptr [esi + 1]
// 0057c159  03f9                 add edi, ecx
// 0057c15b  03ca                 add ecx, edx
// 0057c15d  0fb65602             movzx edx, byte ptr [esi + 2]
// 0057c161  03f9                 add edi, ecx
// 0057c163  03ca                 add ecx, edx
// 0057c165  0fb65603             movzx edx, byte ptr [esi + 3]
// 0057c169  03f9                 add edi, ecx
// 0057c16b  03ca                 add ecx, edx
// 0057c16d  0fb65604             movzx edx, byte ptr [esi + 4]
// 0057c171  03f9                 add edi, ecx
// 0057c173  03ca                 add ecx, edx
// 0057c175  0fb65605             movzx edx, byte ptr [esi + 5]
// 0057c179  03f9                 add edi, ecx
// 0057c17b  03ca                 add ecx, edx
// 0057c17d  0fb65606             movzx edx, byte ptr [esi + 6]
// 0057c181  03f9                 add edi, ecx
// 0057c183  03ca                 add ecx, edx
// 0057c185  0fb65607             movzx edx, byte ptr [esi + 7]
// 0057c189  03f9                 add edi, ecx
// 0057c18b  03ca                 add ecx, edx
// 0057c18d  0fb65608             movzx edx, byte ptr [esi + 8]
// 0057c191  03f9                 add edi, ecx
// 0057c193  03ca                 add ecx, edx
// 0057c195  0fb65609             movzx edx, byte ptr [esi + 9]
// 0057c199  03f9                 add edi, ecx
// 0057c19b  03ca                 add ecx, edx
// 0057c19d  0fb6560a             movzx edx, byte ptr [esi + 0xa]
// 0057c1a1  03f9                 add edi, ecx
// 0057c1a3  03ca                 add ecx, edx
// 0057c1a5  0fb6560b             movzx edx, byte ptr [esi + 0xb]
// 0057c1a9  03f9                 add edi, ecx
// 0057c1ab  03ca                 add ecx, edx
// 0057c1ad  0fb6560c             movzx edx, byte ptr [esi + 0xc]
// 0057c1b1  03f9                 add edi, ecx
// 0057c1b3  03ca                 add ecx, edx
// 0057c1b5  0fb6560d             movzx edx, byte ptr [esi + 0xd]
// 0057c1b9  03f9                 add edi, ecx
// 0057c1bb  03ca                 add ecx, edx
// 0057c1bd  0fb6560e             movzx edx, byte ptr [esi + 0xe]
// 0057c1c1  03f9                 add edi, ecx
// 0057c1c3  03ca                 add ecx, edx
// 0057c1c5  0fb6560f             movzx edx, byte ptr [esi + 0xf]
// 0057c1c9  03f9                 add edi, ecx
// 0057c1cb  03ca                 add ecx, edx
// 0057c1cd  83eb10               sub ebx, 0x10
// 0057c1d0  03f9                 add edi, ecx
// 0057c1d2  83c610               add esi, 0x10
// 0057c1d5  83e801               sub eax, 1
// 0057c1d8  0f8572ffffff         jne 0x57c150
// 0057c1de  85db                 test ebx, ebx
// 0057c1e0  740d                 je 0x57c1ef
// 0057c1e2  0fb606               movzx eax, byte ptr [esi]
// 0057c1e5  03c8                 add ecx, eax
// 0057c1e7  4b                   dec ebx
// 0057c1e8  46                   inc esi
// 0057c1e9  03f9                 add edi, ecx
// 0057c1eb  85db                 test ebx, ebx
// 0057c1ed  75f3                 jne 0x57c1e2
// 0057c1ef  b871800780           mov eax, 0x80078071
// 0057c1f4  f7e1                 mul ecx
// 0057c1f6  c1ea0f               shr edx, 0xf
// 0057c1f9  69d20f00ffff         imul edx, edx, 0xffff000f
// 0057c1ff  03ca                 add ecx, edx
// 0057c201  b871800780           mov eax, 0x80078071
// 0057c206  f7e7                 mul edi
// 0057c208  c1ea0f               shr edx, 0xf
// 0057c20b  69d20f00ffff         imul edx, edx, 0xffff000f
// 0057c211  03fa                 add edi, edx
// 0057c213  8bc7                 mov eax, edi
// 0057c215  5e                   pop esi
// 0057c216  c1e010               shl eax, 0x10
// 0057c219  5f                   pop edi
// 0057c21a  0bc1                 or eax, ecx
// 0057c21c  5b                   pop ebx
// 0057c21d  c3                   ret 
// library zlib-1.2.3/adler32.c (function _adler32)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 adler32.c
