// roc 2009-12 00620390  unit: seg_00620000  size: 178 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00620390
//
// 00620390  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00620394  8b442410             mov eax, dword ptr [esp + 0x10]
// 00620398  53                   push ebx
// 00620399  33db                 xor ebx, ebx
// 0062039b  399914010000         cmp dword ptr [ecx + 0x114], ebx
// 006203a1  55                   push ebp
// 006203a2  8b28                 mov ebp, dword ptr [eax]
// 006203a4  0f8e95000000         jle 0x62043f
// 006203aa  8b442414             mov eax, dword ptr [esp + 0x14]
// 006203ae  56                   push esi
// 006203af  2bc5                 sub eax, ebp
// 006203b1  57                   push edi
// 006203b2  89442420             mov dword ptr [esp + 0x20], eax
// 006203b6  eb0c                 jmp 0x6203c4
// 006203b8  eb06                 jmp 0x6203c0
// 006203ba  8d9b00000000         lea ebx, [ebx]
// 006203c0  8b442420             mov eax, dword ptr [esp + 0x20]
// 006203c4  8b0c28               mov ecx, dword ptr [eax + ebp]
// 006203c7  0fb611               movzx edx, byte ptr [ecx]
// 006203ca  8b4500               mov eax, dword ptr [ebp]
// 006203cd  8810                 mov byte ptr [eax], dl
// 006203cf  0fb67101             movzx esi, byte ptr [ecx + 1]
// 006203d3  41                   inc ecx
// 006203d4  8d1452               lea edx, [edx + edx*2]
// 006203d7  8d543202             lea edx, [edx + esi + 2]
// 006203db  40                   inc eax
// 006203dc  c1fa02               sar edx, 2
// 006203df  8810                 mov byte ptr [eax], dl
// 006203e1  8b542418             mov edx, dword ptr [esp + 0x18]
// 006203e5  8b7228               mov esi, dword ptr [edx + 0x28]
// 006203e8  40                   inc eax
// 006203e9  83ee02               sub esi, 2
// 006203ec  7429                 je 0x620417
// 006203ee  8bff                 mov edi, edi
// 006203f0  0fb611               movzx edx, byte ptr [ecx]
// 006203f3  8d3c52               lea edi, [edx + edx*2]
// 006203f6  0fb651ff             movzx edx, byte ptr [ecx - 1]
// 006203fa  41                   inc ecx
// 006203fb  8d543a01             lea edx, [edx + edi + 1]
// 006203ff  c1fa02               sar edx, 2
// 00620402  8810                 mov byte ptr [eax], dl
// 00620404  0fb611               movzx edx, byte ptr [ecx]
// 00620407  40                   inc eax
// 00620408  8d543a02             lea edx, [edx + edi + 2]
// 0062040c  c1fa02               sar edx, 2
// 0062040f  8810                 mov byte ptr [eax], dl
// 00620411  40                   inc eax
// 00620412  83ee01               sub esi, 1
// 00620415  75d9                 jne 0x6203f0
// 00620417  0fb611               movzx edx, byte ptr [ecx]
// 0062041a  0fb649ff             movzx ecx, byte ptr [ecx - 1]
// 0062041e  8d3452               lea esi, [edx + edx*2]
// 00620421  8d4c3101             lea ecx, [ecx + esi + 1]
// 00620425  c1f902               sar ecx, 2
// 00620428  8808                 mov byte ptr [eax], cl
// 0062042a  885001               mov byte ptr [eax + 1], dl
// 0062042d  8b542414             mov edx, dword ptr [esp + 0x14]
// 00620431  43                   inc ebx
// 00620432  83c504               add ebp, 4
// 00620435  3b9a14010000         cmp ebx, dword ptr [edx + 0x114]
// 0062043b  7c83                 jl 0x6203c0
// 0062043d  5f                   pop edi
// 0062043e  5e                   pop esi
// 0062043f  5d                   pop ebp
// 00620440  5b                   pop ebx
// 00620441  c3                   ret 
// library jpeg-6b/jdsample.c (function _h2v1_fancy_upsample)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdsample.c
