// from server: 100% by auto
// roc 2008-06 00534080  unit: seg_00530000  size: 178 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00534080
//
// 00534080  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00534084  8b442410             mov eax, dword ptr [esp + 0x10]
// 00534088  53                   push ebx
// 00534089  33db                 xor ebx, ebx
// 0053408b  399914010000         cmp dword ptr [ecx + 0x114], ebx
// 00534091  55                   push ebp
// 00534092  8b28                 mov ebp, dword ptr [eax]
// 00534094  0f8e95000000         jle 0x53412f
// 0053409a  8b442414             mov eax, dword ptr [esp + 0x14]
// 0053409e  56                   push esi
// 0053409f  2bc5                 sub eax, ebp
// 005340a1  57                   push edi
// 005340a2  89442420             mov dword ptr [esp + 0x20], eax
// 005340a6  eb0c                 jmp 0x5340b4
// 005340a8  eb06                 jmp 0x5340b0
// 005340aa  8d9b00000000         lea ebx, [ebx]
// 005340b0  8b442420             mov eax, dword ptr [esp + 0x20]
// 005340b4  8b0c28               mov ecx, dword ptr [eax + ebp]
// 005340b7  0fb611               movzx edx, byte ptr [ecx]
// 005340ba  8b4500               mov eax, dword ptr [ebp]
// 005340bd  8810                 mov byte ptr [eax], dl
// 005340bf  0fb67101             movzx esi, byte ptr [ecx + 1]
// 005340c3  41                   inc ecx
// 005340c4  8d1452               lea edx, [edx + edx*2]
// 005340c7  8d543202             lea edx, [edx + esi + 2]
// 005340cb  40                   inc eax
// 005340cc  c1fa02               sar edx, 2
// 005340cf  8810                 mov byte ptr [eax], dl
// 005340d1  8b542418             mov edx, dword ptr [esp + 0x18]
// 005340d5  8b7228               mov esi, dword ptr [edx + 0x28]
// 005340d8  40                   inc eax
// 005340d9  83ee02               sub esi, 2
// 005340dc  7429                 je 0x534107
// 005340de  8bff                 mov edi, edi
// 005340e0  0fb611               movzx edx, byte ptr [ecx]
// 005340e3  8d3c52               lea edi, [edx + edx*2]
// 005340e6  0fb651ff             movzx edx, byte ptr [ecx - 1]
// 005340ea  41                   inc ecx
// 005340eb  8d543a01             lea edx, [edx + edi + 1]
// 005340ef  c1fa02               sar edx, 2
// 005340f2  8810                 mov byte ptr [eax], dl
// 005340f4  0fb611               movzx edx, byte ptr [ecx]
// 005340f7  40                   inc eax
// 005340f8  8d543a02             lea edx, [edx + edi + 2]
// 005340fc  c1fa02               sar edx, 2
// 005340ff  8810                 mov byte ptr [eax], dl
// 00534101  40                   inc eax
// 00534102  83ee01               sub esi, 1
// 00534105  75d9                 jne 0x5340e0
// 00534107  0fb611               movzx edx, byte ptr [ecx]
// 0053410a  0fb649ff             movzx ecx, byte ptr [ecx - 1]
// 0053410e  8d3452               lea esi, [edx + edx*2]
// 00534111  8d4c3101             lea ecx, [ecx + esi + 1]
// 00534115  c1f902               sar ecx, 2
// 00534118  8808                 mov byte ptr [eax], cl
// 0053411a  885001               mov byte ptr [eax + 1], dl
// 0053411d  8b542414             mov edx, dword ptr [esp + 0x14]
// 00534121  43                   inc ebx
// 00534122  83c504               add ebp, 4
// 00534125  3b9a14010000         cmp ebx, dword ptr [edx + 0x114]
// 0053412b  7c83                 jl 0x5340b0
// 0053412d  5f                   pop edi
// 0053412e  5e                   pop esi
// 0053412f  5d                   pop ebp
// 00534130  5b                   pop ebx
// 00534131  c3                   ret 
// library jpeg-6b/jdsample.c (function _h2v1_fancy_upsample)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdsample.c
