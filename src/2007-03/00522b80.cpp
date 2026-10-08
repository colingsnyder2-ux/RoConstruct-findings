// roc 2007-03 00522b80  unit: seg_00520000  size: 194 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00522b80
//
// 00522b80  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00522b84  8b442410             mov eax, dword ptr [esp + 0x10]
// 00522b88  53                   push ebx
// 00522b89  33db                 xor ebx, ebx
// 00522b8b  399914010000         cmp dword ptr [ecx + 0x114], ebx
// 00522b91  55                   push ebp
// 00522b92  8b28                 mov ebp, dword ptr [eax]
// 00522b94  0f8ea5000000         jle 0x522c3f
// 00522b9a  8b442414             mov eax, dword ptr [esp + 0x14]
// 00522b9e  56                   push esi
// 00522b9f  2bc5                 sub eax, ebp
// 00522ba1  57                   push edi
// 00522ba2  89442420             mov dword ptr [esp + 0x20], eax
// 00522ba6  eb0c                 jmp 0x522bb4
// 00522ba8  eb06                 jmp 0x522bb0
// 00522baa  8d9b00000000         lea ebx, [ebx]
// 00522bb0  8b442420             mov eax, dword ptr [esp + 0x20]
// 00522bb4  8b0c28               mov ecx, dword ptr [eax + ebp]
// 00522bb7  0fb611               movzx edx, byte ptr [ecx]
// 00522bba  8b4500               mov eax, dword ptr [ebp]
// 00522bbd  8810                 mov byte ptr [eax], dl
// 00522bbf  0fb67101             movzx esi, byte ptr [ecx + 1]
// 00522bc3  83c101               add ecx, 1
// 00522bc6  8d1452               lea edx, [edx + edx*2]
// 00522bc9  8d543202             lea edx, [edx + esi + 2]
// 00522bcd  83c001               add eax, 1
// 00522bd0  c1fa02               sar edx, 2
// 00522bd3  8810                 mov byte ptr [eax], dl
// 00522bd5  8b542418             mov edx, dword ptr [esp + 0x18]
// 00522bd9  8b7228               mov esi, dword ptr [edx + 0x28]
// 00522bdc  83c001               add eax, 1
// 00522bdf  83ee02               sub esi, 2
// 00522be2  742d                 je 0x522c11
// 00522be4  0fb611               movzx edx, byte ptr [ecx]
// 00522be7  8d3c52               lea edi, [edx + edx*2]
// 00522bea  0fb651ff             movzx edx, byte ptr [ecx - 1]
// 00522bee  83c101               add ecx, 1
// 00522bf1  8d543a01             lea edx, [edx + edi + 1]
// 00522bf5  c1fa02               sar edx, 2
// 00522bf8  8810                 mov byte ptr [eax], dl
// 00522bfa  0fb611               movzx edx, byte ptr [ecx]
// 00522bfd  83c001               add eax, 1
// 00522c00  8d543a02             lea edx, [edx + edi + 2]
// 00522c04  c1fa02               sar edx, 2
// 00522c07  8810                 mov byte ptr [eax], dl
// 00522c09  83c001               add eax, 1
// 00522c0c  83ee01               sub esi, 1
// 00522c0f  75d3                 jne 0x522be4
// 00522c11  0fb611               movzx edx, byte ptr [ecx]
// 00522c14  0fb649ff             movzx ecx, byte ptr [ecx - 1]
// 00522c18  8d3452               lea esi, [edx + edx*2]
// 00522c1b  8d4c3101             lea ecx, [ecx + esi + 1]
// 00522c1f  c1f902               sar ecx, 2
// 00522c22  8808                 mov byte ptr [eax], cl
// 00522c24  885001               mov byte ptr [eax + 1], dl
// 00522c27  8b542414             mov edx, dword ptr [esp + 0x14]
// 00522c2b  83c301               add ebx, 1
// 00522c2e  83c504               add ebp, 4
// 00522c31  3b9a14010000         cmp ebx, dword ptr [edx + 0x114]
// 00522c37  0f8c73ffffff         jl 0x522bb0
// 00522c3d  5f                   pop edi
// 00522c3e  5e                   pop esi
// 00522c3f  5d                   pop ebp
// 00522c40  5b                   pop ebx
// 00522c41  c3                   ret 
// library jpeg-6b/jdsample.c (function _h2v1_fancy_upsample)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdsample.c
