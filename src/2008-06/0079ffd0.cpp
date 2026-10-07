// roc 2008-06 0079ffd0  unit: CXTPDialogBar  size: 791 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0079ffd0
//
// 0079ffd0  53                   push ebx
// 0079ffd1  55                   push ebp
// 0079ffd2  56                   push esi
// 0079ffd3  33ed                 xor ebp, ebp
// 0079ffd5  57                   push edi
// 0079ffd6  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0079ffda  8d5d01               lea ebx, [ebp + 1]
// 0079ffdd  8d4900               lea ecx, [ecx]
// 0079ffe0  8b4774               mov eax, dword ptr [edi + 0x74]
// 0079ffe3  3d06010000           cmp eax, 0x106
// 0079ffe8  7323                 jae 0x7a000d
// 0079ffea  e8d1fdffff           call 0x79fdc0
// 0079ffef  8b4774               mov eax, dword ptr [edi + 0x74]
// 0079fff2  8b742418             mov esi, dword ptr [esp + 0x18]
// 0079fff6  3d06010000           cmp eax, 0x106
// 0079fffb  7308                 jae 0x7a0005
// 0079fffd  85f6                 test esi, esi
// 0079ffff  0f847e020000         je 0x7a0283
// 007a0005  85c0                 test eax, eax
// 007a0007  0f847d020000         je 0x7a028a
// 007a000d  83f803               cmp eax, 3
// 007a0010  7249                 jb 0x7a005b
// 007a0012  8b4748               mov eax, dword ptr [edi + 0x48]
// 007a0015  8b4f58               mov ecx, dword ptr [edi + 0x58]
// 007a0018  8b576c               mov edx, dword ptr [edi + 0x6c]
// 007a001b  8b7734               mov esi, dword ptr [edi + 0x34]
// 007a001e  d3e0                 shl eax, cl
// 007a0020  8b4f38               mov ecx, dword ptr [edi + 0x38]
// 007a0023  0fb64c1102           movzx ecx, byte ptr [ecx + edx + 2]
// 007a0028  33c1                 xor eax, ecx
// 007a002a  234754               and eax, dword ptr [edi + 0x54]
// 007a002d  8b4f44               mov ecx, dword ptr [edi + 0x44]
// 007a0030  894748               mov dword ptr [edi + 0x48], eax
// 007a0033  668b0441             mov ax, word ptr [ecx + eax*2]
// 007a0037  23f2                 and esi, edx
// 007a0039  8b5740               mov edx, dword ptr [edi + 0x40]
// 007a003c  66890472             mov word ptr [edx + esi*2], ax
// 007a0040  8b4f6c               mov ecx, dword ptr [edi + 0x6c]
// 007a0043  234f34               and ecx, dword ptr [edi + 0x34]
// 007a0046  8b5740               mov edx, dword ptr [edi + 0x40]
// 007a0049  0fb72c4a             movzx ebp, word ptr [edx + ecx*2]
// 007a004d  8b4748               mov eax, dword ptr [edi + 0x48]
// 007a0050  8b4f44               mov ecx, dword ptr [edi + 0x44]
// 007a0053  668b576c             mov dx, word ptr [edi + 0x6c]
// 007a0057  66891441             mov word ptr [ecx + eax*2], dx
// 007a005b  85ed                 test ebp, ebp
// 007a005d  7442                 je 0x7a00a1
// 007a005f  8b476c               mov eax, dword ptr [edi + 0x6c]
// 007a0062  8b4f2c               mov ecx, dword ptr [edi + 0x2c]
// 007a0065  2bc5                 sub eax, ebp
// 007a0067  81e906010000         sub ecx, 0x106
// 007a006d  3bc1                 cmp eax, ecx
// 007a006f  7730                 ja 0x7a00a1
// 007a0071  8b8f88000000         mov ecx, dword ptr [edi + 0x88]
// 007a0077  83f902               cmp ecx, 2
// 007a007a  740e                 je 0x7a008a
// 007a007c  83f903               cmp ecx, 3
// 007a007f  740e                 je 0x7a008f
// 007a0081  8bc5                 mov eax, ebp
// 007a0083  e838fbffff           call 0x79fbc0
// 007a0088  eb14                 jmp 0x7a009e
// 007a008a  83f903               cmp ecx, 3
// 007a008d  7512                 jne 0x7a00a1
// 007a008f  3bc3                 cmp eax, ebx
// 007a0091  750e                 jne 0x7a00a1
// 007a0093  55                   push ebp
// 007a0094  8bf7                 mov esi, edi
// 007a0096  e885fcffff           call 0x79fd20
// 007a009b  83c404               add esp, 4
// 007a009e  894760               mov dword ptr [edi + 0x60], eax
// 007a00a1  837f6003             cmp dword ptr [edi + 0x60], 3
// 007a00a5  0f8238010000         jb 0x7a01e3
// 007a00ab  668b576c             mov dx, word ptr [edi + 0x6c]
// 007a00af  662b5770             sub dx, word ptr [edi + 0x70]
// 007a00b3  8a4760               mov al, byte ptr [edi + 0x60]
// 007a00b6  8bb7a4160000         mov esi, dword ptr [edi + 0x16a4]
// 007a00bc  0fb7ca               movzx ecx, dx
// 007a00bf  8b97a0160000         mov edx, dword ptr [edi + 0x16a0]
// 007a00c5  66890c56             mov word ptr [esi + edx*2], cx
// 007a00c9  8b9798160000         mov edx, dword ptr [edi + 0x1698]
// 007a00cf  8bb7a0160000         mov esi, dword ptr [edi + 0x16a0]
// 007a00d5  2c03                 sub al, 3
// 007a00d7  880432               mov byte ptr [edx + esi], al
// 007a00da  019fa0160000         add dword ptr [edi + 0x16a0], ebx
// 007a00e0  0fb6c0               movzx eax, al
// 007a00e3  0fb690481d8700       movzx edx, byte ptr [eax + 0x871d48]
// 007a00ea  66019c9798040000     add word ptr [edi + edx*4 + 0x498], bx
// 007a00f2  8d849798040000       lea eax, [edi + edx*4 + 0x498]
// 007a00f9  81c1ffff0000         add ecx, 0xffff
// 007a00ff  b800010000           mov eax, 0x100
// 007a0104  663bc8               cmp cx, ax
// 007a0107  730c                 jae 0x7a0115
// 007a0109  0fb7c9               movzx ecx, cx
// 007a010c  0fb681481b8700       movzx eax, byte ptr [ecx + 0x871b48]
// 007a0113  eb0d                 jmp 0x7a0122
// 007a0115  0fb7d1               movzx edx, cx
// 007a0118  c1ea07               shr edx, 7
// 007a011b  0fb682481c8700       movzx eax, byte ptr [edx + 0x871c48]
// 007a0122  66019c8788090000     add word ptr [edi + eax*4 + 0x988], bx
// 007a012a  8b879c160000         mov eax, dword ptr [edi + 0x169c]
// 007a0130  33c9                 xor ecx, ecx
// 007a0132  2bc3                 sub eax, ebx
// 007a0134  3987a0160000         cmp dword ptr [edi + 0x16a0], eax
// 007a013a  8b4760               mov eax, dword ptr [edi + 0x60]
// 007a013d  0f94c1               sete cl
// 007a0140  294774               sub dword ptr [edi + 0x74], eax
// 007a0143  8bf1                 mov esi, ecx
// 007a0145  8b4f74               mov ecx, dword ptr [edi + 0x74]
// 007a0148  3b8780000000         cmp eax, dword ptr [edi + 0x80]
// 007a014e  7767                 ja 0x7a01b7
// 007a0150  83f903               cmp ecx, 3
// 007a0153  7262                 jb 0x7a01b7
// 007a0155  48                   dec eax
// 007a0156  894760               mov dword ptr [edi + 0x60], eax
// 007a0159  8da42400000000       lea esp, [esp]
// 007a0160  015f6c               add dword ptr [edi + 0x6c], ebx
// 007a0163  8b576c               mov edx, dword ptr [edi + 0x6c]
// 007a0166  8b6f48               mov ebp, dword ptr [edi + 0x48]
// 007a0169  8b4f58               mov ecx, dword ptr [edi + 0x58]
// 007a016c  8b4738               mov eax, dword ptr [edi + 0x38]
// 007a016f  0fb6440202           movzx eax, byte ptr [edx + eax + 2]
// 007a0174  d3e5                 shl ebp, cl
// 007a0176  8b4f44               mov ecx, dword ptr [edi + 0x44]
// 007a0179  33c5                 xor eax, ebp
// 007a017b  234754               and eax, dword ptr [edi + 0x54]
// 007a017e  8b6f34               mov ebp, dword ptr [edi + 0x34]
// 007a0181  23ea                 and ebp, edx
// 007a0183  8b5740               mov edx, dword ptr [edi + 0x40]
// 007a0186  894748               mov dword ptr [edi + 0x48], eax
// 007a0189  668b0441             mov ax, word ptr [ecx + eax*2]
// 007a018d  6689046a             mov word ptr [edx + ebp*2], ax
// 007a0191  8b4f6c               mov ecx, dword ptr [edi + 0x6c]
// 007a0194  234f34               and ecx, dword ptr [edi + 0x34]
// 007a0197  8b5740               mov edx, dword ptr [edi + 0x40]
// 007a019a  0fb72c4a             movzx ebp, word ptr [edx + ecx*2]
// 007a019e  8b4748               mov eax, dword ptr [edi + 0x48]
// 007a01a1  8b4f44               mov ecx, dword ptr [edi + 0x44]
// 007a01a4  668b576c             mov dx, word ptr [edi + 0x6c]
// 007a01a8  66891441             mov word ptr [ecx + eax*2], dx
// 007a01ac  834760ff             add dword ptr [edi + 0x60], -1
// 007a01b0  75ae                 jne 0x7a0160
// 007a01b2  e986000000           jmp 0x7a023d
// 007a01b7  01476c               add dword ptr [edi + 0x6c], eax
// 007a01ba  8b476c               mov eax, dword ptr [edi + 0x6c]
// 007a01bd  8b4f38               mov ecx, dword ptr [edi + 0x38]
// 007a01c0  8d1408               lea edx, [eax + ecx]
// 007a01c3  8b4f58               mov ecx, dword ptr [edi + 0x58]
// 007a01c6  c7476000000000       mov dword ptr [edi + 0x60], 0
// 007a01cd  0fb602               movzx eax, byte ptr [edx]
// 007a01d0  894748               mov dword ptr [edi + 0x48], eax
// 007a01d3  0fb65201             movzx edx, byte ptr [edx + 1]
// 007a01d7  d3e0                 shl eax, cl
// 007a01d9  33c2                 xor eax, edx
// 007a01db  234754               and eax, dword ptr [edi + 0x54]
// 007a01de  894748               mov dword ptr [edi + 0x48], eax
// 007a01e1  eb5d                 jmp 0x7a0240
// 007a01e3  8b476c               mov eax, dword ptr [edi + 0x6c]
// 007a01e6  8b4f38               mov ecx, dword ptr [edi + 0x38]
// 007a01e9  8a0408               mov al, byte ptr [eax + ecx]
// 007a01ec  8b97a0160000         mov edx, dword ptr [edi + 0x16a0]
// 007a01f2  8b8fa4160000         mov ecx, dword ptr [edi + 0x16a4]
// 007a01f8  33f6                 xor esi, esi
// 007a01fa  66893451             mov word ptr [ecx + edx*2], si
// 007a01fe  8b8fa0160000         mov ecx, dword ptr [edi + 0x16a0]
// 007a0204  8b9798160000         mov edx, dword ptr [edi + 0x1698]
// 007a020a  88040a               mov byte ptr [edx + ecx], al
// 007a020d  019fa0160000         add dword ptr [edi + 0x16a0], ebx
// 007a0213  0fb6d0               movzx edx, al
// 007a0216  66019c9794000000     add word ptr [edi + edx*4 + 0x94], bx
// 007a021e  8d849794000000       lea eax, [edi + edx*4 + 0x94]
// 007a0225  8b879c160000         mov eax, dword ptr [edi + 0x169c]
// 007a022b  33c9                 xor ecx, ecx
// 007a022d  2bc3                 sub eax, ebx
// 007a022f  3987a0160000         cmp dword ptr [edi + 0x16a0], eax
// 007a0235  0f94c1               sete cl
// 007a0238  ff4f74               dec dword ptr [edi + 0x74]
// 007a023b  8bf1                 mov esi, ecx
// 007a023d  015f6c               add dword ptr [edi + 0x6c], ebx
// 007a0240  85f6                 test esi, esi
// 007a0242  0f8498fdffff         je 0x79ffe0
// 007a0248  8b4f5c               mov ecx, dword ptr [edi + 0x5c]
// 007a024b  85c9                 test ecx, ecx
// 007a024d  7c07                 jl 0x7a0256
// 007a024f  8b4738               mov eax, dword ptr [edi + 0x38]
// 007a0252  03c1                 add eax, ecx
// 007a0254  eb02                 jmp 0x7a0258
// 007a0256  33c0                 xor eax, eax
// 007a0258  8b576c               mov edx, dword ptr [edi + 0x6c]
// 007a025b  6a00                 push 0
// 007a025d  2bd1                 sub edx, ecx
// 007a025f  52                   push edx
// 007a0260  50                   push eax
// 007a0261  57                   push edi
// 007a0262  e899570000           call 0x7a5a00
// 007a0267  8b476c               mov eax, dword ptr [edi + 0x6c]
// 007a026a  89475c               mov dword ptr [edi + 0x5c], eax
// 007a026d  8b07                 mov eax, dword ptr [edi]
// 007a026f  83c410               add esp, 0x10
// 007a0272  e829620000           call 0x7a64a0
// 007a0277  8b0f                 mov ecx, dword ptr [edi]
// 007a0279  83791000             cmp dword ptr [ecx + 0x10], 0
// 007a027d  0f855dfdffff         jne 0x79ffe0
// 007a0283  5f                   pop edi
// 007a0284  5e                   pop esi
// 007a0285  5d                   pop ebp
// 007a0286  33c0                 xor eax, eax
// 007a0288  5b                   pop ebx
// 007a0289  c3                   ret 
// 007a028a  8b4f5c               mov ecx, dword ptr [edi + 0x5c]
// 007a028d  85c9                 test ecx, ecx
// 007a028f  7c07                 jl 0x7a0298
// 007a0291  8b4738               mov eax, dword ptr [edi + 0x38]
// 007a0294  03c1                 add eax, ecx
// 007a0296  eb02                 jmp 0x7a029a
// 007a0298  33c0                 xor eax, eax
// 007a029a  33d2                 xor edx, edx
// 007a029c  83fe04               cmp esi, 4
// 007a029f  0f94c2               sete dl
// 007a02a2  52                   push edx
// 007a02a3  8b576c               mov edx, dword ptr [edi + 0x6c]
// 007a02a6  2bd1                 sub edx, ecx
// 007a02a8  52                   push edx
// 007a02a9  50                   push eax
// 007a02aa  57                   push edi
// 007a02ab  e850570000           call 0x7a5a00
// 007a02b0  8b476c               mov eax, dword ptr [edi + 0x6c]
// 007a02b3  89475c               mov dword ptr [edi + 0x5c], eax
// 007a02b6  8b07                 mov eax, dword ptr [edi]
// 007a02b8  83c410               add esp, 0x10
// 007a02bb  e8e0610000           call 0x7a64a0
// 007a02c0  8b0f                 mov ecx, dword ptr [edi]
// 007a02c2  33c0                 xor eax, eax
// 007a02c4  394110               cmp dword ptr [ecx + 0x10], eax
// 007a02c7  750f                 jne 0x7a02d8
// 007a02c9  83fe04               cmp esi, 4
// 007a02cc  0f95c0               setne al
// 007a02cf  5f                   pop edi
// 007a02d0  5e                   pop esi
// 007a02d1  5d                   pop ebp
// 007a02d2  5b                   pop ebx
// 007a02d3  48                   dec eax
// 007a02d4  83e002               and eax, 2
// 007a02d7  c3                   ret 
// 007a02d8  83fe04               cmp esi, 4
// 007a02db  0f94c0               sete al
// 007a02de  5f                   pop edi
// 007a02df  5e                   pop esi
// 007a02e0  5d                   pop ebp
// 007a02e1  5b                   pop ebx
// 007a02e2  8d440001             lea eax, [eax + eax + 1]
// 007a02e6  c3                   ret 
// library zlib-1.2.3/deflate.c (function _deflate_fast)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /Ob1 /GS- /MD
// roc-lib: zlib-1.2.3 deflate.c
