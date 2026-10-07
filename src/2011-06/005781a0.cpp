// roc 2011-06 005781a0  unit: seg_00570000  size: 178 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005781a0
//
// 005781a0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005781a4  8b442410             mov eax, dword ptr [esp + 0x10]
// 005781a8  53                   push ebx
// 005781a9  33db                 xor ebx, ebx
// 005781ab  399914010000         cmp dword ptr [ecx + 0x114], ebx
// 005781b1  55                   push ebp
// 005781b2  8b28                 mov ebp, dword ptr [eax]
// 005781b4  0f8e95000000         jle 0x57824f
// 005781ba  8b442414             mov eax, dword ptr [esp + 0x14]
// 005781be  56                   push esi
// 005781bf  2bc5                 sub eax, ebp
// 005781c1  57                   push edi
// 005781c2  89442420             mov dword ptr [esp + 0x20], eax
// 005781c6  eb0c                 jmp 0x5781d4
// 005781c8  eb06                 jmp 0x5781d0
// 005781ca  8d9b00000000         lea ebx, [ebx]
// 005781d0  8b442420             mov eax, dword ptr [esp + 0x20]
// 005781d4  8b0c28               mov ecx, dword ptr [eax + ebp]
// 005781d7  0fb611               movzx edx, byte ptr [ecx]
// 005781da  8b4500               mov eax, dword ptr [ebp]
// 005781dd  8810                 mov byte ptr [eax], dl
// 005781df  0fb67101             movzx esi, byte ptr [ecx + 1]
// 005781e3  41                   inc ecx
// 005781e4  8d1452               lea edx, [edx + edx*2]
// 005781e7  8d543202             lea edx, [edx + esi + 2]
// 005781eb  40                   inc eax
// 005781ec  c1fa02               sar edx, 2
// 005781ef  8810                 mov byte ptr [eax], dl
// 005781f1  8b542418             mov edx, dword ptr [esp + 0x18]
// 005781f5  8b7228               mov esi, dword ptr [edx + 0x28]
// 005781f8  40                   inc eax
// 005781f9  83ee02               sub esi, 2
// 005781fc  7429                 je 0x578227
// 005781fe  8bff                 mov edi, edi
// 00578200  0fb611               movzx edx, byte ptr [ecx]
// 00578203  8d3c52               lea edi, [edx + edx*2]
// 00578206  0fb651ff             movzx edx, byte ptr [ecx - 1]
// 0057820a  41                   inc ecx
// 0057820b  8d543a01             lea edx, [edx + edi + 1]
// 0057820f  c1fa02               sar edx, 2
// 00578212  8810                 mov byte ptr [eax], dl
// 00578214  0fb611               movzx edx, byte ptr [ecx]
// 00578217  40                   inc eax
// 00578218  8d543a02             lea edx, [edx + edi + 2]
// 0057821c  c1fa02               sar edx, 2
// 0057821f  8810                 mov byte ptr [eax], dl
// 00578221  40                   inc eax
// 00578222  83ee01               sub esi, 1
// 00578225  75d9                 jne 0x578200
// 00578227  0fb611               movzx edx, byte ptr [ecx]
// 0057822a  0fb649ff             movzx ecx, byte ptr [ecx - 1]
// 0057822e  8d3452               lea esi, [edx + edx*2]
// 00578231  8d4c3101             lea ecx, [ecx + esi + 1]
// 00578235  c1f902               sar ecx, 2
// 00578238  8808                 mov byte ptr [eax], cl
// 0057823a  885001               mov byte ptr [eax + 1], dl
// 0057823d  8b542414             mov edx, dword ptr [esp + 0x14]
// 00578241  43                   inc ebx
// 00578242  83c504               add ebp, 4
// 00578245  3b9a14010000         cmp ebx, dword ptr [edx + 0x114]
// 0057824b  7c83                 jl 0x5781d0
// 0057824d  5f                   pop edi
// 0057824e  5e                   pop esi
// 0057824f  5d                   pop ebp
// 00578250  5b                   pop ebx
// 00578251  c3                   ret 
// library jpeg-6b/jdsample.c (function _h2v1_fancy_upsample)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdsample.c
