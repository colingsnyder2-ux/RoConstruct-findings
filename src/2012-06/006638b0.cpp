// from server: 100% by auto
// roc 2012-06 006638b0  unit: seg_00660000  size: 178 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006638b0
//
// 006638b0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006638b4  8b442410             mov eax, dword ptr [esp + 0x10]
// 006638b8  53                   push ebx
// 006638b9  33db                 xor ebx, ebx
// 006638bb  399914010000         cmp dword ptr [ecx + 0x114], ebx
// 006638c1  55                   push ebp
// 006638c2  8b28                 mov ebp, dword ptr [eax]
// 006638c4  0f8e95000000         jle 0x66395f
// 006638ca  8b442414             mov eax, dword ptr [esp + 0x14]
// 006638ce  56                   push esi
// 006638cf  2bc5                 sub eax, ebp
// 006638d1  57                   push edi
// 006638d2  89442420             mov dword ptr [esp + 0x20], eax
// 006638d6  eb0c                 jmp 0x6638e4
// 006638d8  eb06                 jmp 0x6638e0
// 006638da  8d9b00000000         lea ebx, [ebx]
// 006638e0  8b442420             mov eax, dword ptr [esp + 0x20]
// 006638e4  8b0c28               mov ecx, dword ptr [eax + ebp]
// 006638e7  0fb611               movzx edx, byte ptr [ecx]
// 006638ea  8b4500               mov eax, dword ptr [ebp]
// 006638ed  8810                 mov byte ptr [eax], dl
// 006638ef  0fb67101             movzx esi, byte ptr [ecx + 1]
// 006638f3  41                   inc ecx
// 006638f4  8d1452               lea edx, [edx + edx*2]
// 006638f7  8d543202             lea edx, [edx + esi + 2]
// 006638fb  40                   inc eax
// 006638fc  c1fa02               sar edx, 2
// 006638ff  8810                 mov byte ptr [eax], dl
// 00663901  8b542418             mov edx, dword ptr [esp + 0x18]
// 00663905  8b7228               mov esi, dword ptr [edx + 0x28]
// 00663908  40                   inc eax
// 00663909  83ee02               sub esi, 2
// 0066390c  7429                 je 0x663937
// 0066390e  8bff                 mov edi, edi
// 00663910  0fb611               movzx edx, byte ptr [ecx]
// 00663913  8d3c52               lea edi, [edx + edx*2]
// 00663916  0fb651ff             movzx edx, byte ptr [ecx - 1]
// 0066391a  41                   inc ecx
// 0066391b  8d543a01             lea edx, [edx + edi + 1]
// 0066391f  c1fa02               sar edx, 2
// 00663922  8810                 mov byte ptr [eax], dl
// 00663924  0fb611               movzx edx, byte ptr [ecx]
// 00663927  40                   inc eax
// 00663928  8d543a02             lea edx, [edx + edi + 2]
// 0066392c  c1fa02               sar edx, 2
// 0066392f  8810                 mov byte ptr [eax], dl
// 00663931  40                   inc eax
// 00663932  83ee01               sub esi, 1
// 00663935  75d9                 jne 0x663910
// 00663937  0fb611               movzx edx, byte ptr [ecx]
// 0066393a  0fb649ff             movzx ecx, byte ptr [ecx - 1]
// 0066393e  8d3452               lea esi, [edx + edx*2]
// 00663941  8d4c3101             lea ecx, [ecx + esi + 1]
// 00663945  c1f902               sar ecx, 2
// 00663948  8808                 mov byte ptr [eax], cl
// 0066394a  885001               mov byte ptr [eax + 1], dl
// 0066394d  8b542414             mov edx, dword ptr [esp + 0x14]
// 00663951  43                   inc ebx
// 00663952  83c504               add ebp, 4
// 00663955  3b9a14010000         cmp ebx, dword ptr [edx + 0x114]
// 0066395b  7c83                 jl 0x6638e0
// 0066395d  5f                   pop edi
// 0066395e  5e                   pop esi
// 0066395f  5d                   pop ebp
// 00663960  5b                   pop ebx
// 00663961  c3                   ret 
// library jpeg-6b/jdsample.c (function _h2v1_fancy_upsample)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdsample.c
