// roc 2009-06 0059e360  unit: seg_00590000  size: 178 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0059e360
//
// 0059e360  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0059e364  8b442410             mov eax, dword ptr [esp + 0x10]
// 0059e368  53                   push ebx
// 0059e369  33db                 xor ebx, ebx
// 0059e36b  399914010000         cmp dword ptr [ecx + 0x114], ebx
// 0059e371  55                   push ebp
// 0059e372  8b28                 mov ebp, dword ptr [eax]
// 0059e374  0f8e95000000         jle 0x59e40f
// 0059e37a  8b442414             mov eax, dword ptr [esp + 0x14]
// 0059e37e  56                   push esi
// 0059e37f  2bc5                 sub eax, ebp
// 0059e381  57                   push edi
// 0059e382  89442420             mov dword ptr [esp + 0x20], eax
// 0059e386  eb0c                 jmp 0x59e394
// 0059e388  eb06                 jmp 0x59e390
// 0059e38a  8d9b00000000         lea ebx, [ebx]
// 0059e390  8b442420             mov eax, dword ptr [esp + 0x20]
// 0059e394  8b0c28               mov ecx, dword ptr [eax + ebp]
// 0059e397  0fb611               movzx edx, byte ptr [ecx]
// 0059e39a  8b4500               mov eax, dword ptr [ebp]
// 0059e39d  8810                 mov byte ptr [eax], dl
// 0059e39f  0fb67101             movzx esi, byte ptr [ecx + 1]
// 0059e3a3  41                   inc ecx
// 0059e3a4  8d1452               lea edx, [edx + edx*2]
// 0059e3a7  8d543202             lea edx, [edx + esi + 2]
// 0059e3ab  40                   inc eax
// 0059e3ac  c1fa02               sar edx, 2
// 0059e3af  8810                 mov byte ptr [eax], dl
// 0059e3b1  8b542418             mov edx, dword ptr [esp + 0x18]
// 0059e3b5  8b7228               mov esi, dword ptr [edx + 0x28]
// 0059e3b8  40                   inc eax
// 0059e3b9  83ee02               sub esi, 2
// 0059e3bc  7429                 je 0x59e3e7
// 0059e3be  8bff                 mov edi, edi
// 0059e3c0  0fb611               movzx edx, byte ptr [ecx]
// 0059e3c3  8d3c52               lea edi, [edx + edx*2]
// 0059e3c6  0fb651ff             movzx edx, byte ptr [ecx - 1]
// 0059e3ca  41                   inc ecx
// 0059e3cb  8d543a01             lea edx, [edx + edi + 1]
// 0059e3cf  c1fa02               sar edx, 2
// 0059e3d2  8810                 mov byte ptr [eax], dl
// 0059e3d4  0fb611               movzx edx, byte ptr [ecx]
// 0059e3d7  40                   inc eax
// 0059e3d8  8d543a02             lea edx, [edx + edi + 2]
// 0059e3dc  c1fa02               sar edx, 2
// 0059e3df  8810                 mov byte ptr [eax], dl
// 0059e3e1  40                   inc eax
// 0059e3e2  83ee01               sub esi, 1
// 0059e3e5  75d9                 jne 0x59e3c0
// 0059e3e7  0fb611               movzx edx, byte ptr [ecx]
// 0059e3ea  0fb649ff             movzx ecx, byte ptr [ecx - 1]
// 0059e3ee  8d3452               lea esi, [edx + edx*2]
// 0059e3f1  8d4c3101             lea ecx, [ecx + esi + 1]
// 0059e3f5  c1f902               sar ecx, 2
// 0059e3f8  8808                 mov byte ptr [eax], cl
// 0059e3fa  885001               mov byte ptr [eax + 1], dl
// 0059e3fd  8b542414             mov edx, dword ptr [esp + 0x14]
// 0059e401  43                   inc ebx
// 0059e402  83c504               add ebp, 4
// 0059e405  3b9a14010000         cmp ebx, dword ptr [edx + 0x114]
// 0059e40b  7c83                 jl 0x59e390
// 0059e40d  5f                   pop edi
// 0059e40e  5e                   pop esi
// 0059e40f  5d                   pop ebp
// 0059e410  5b                   pop ebx
// 0059e411  c3                   ret 
// library jpeg-6b/jdsample.c (function _h2v1_fancy_upsample)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdsample.c
