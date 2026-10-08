// from server: 100% by auto
// roc 2010-06 00581ef0  unit: seg_00580000  size: 178 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00581ef0
//
// 00581ef0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00581ef4  8b442410             mov eax, dword ptr [esp + 0x10]
// 00581ef8  53                   push ebx
// 00581ef9  33db                 xor ebx, ebx
// 00581efb  399914010000         cmp dword ptr [ecx + 0x114], ebx
// 00581f01  55                   push ebp
// 00581f02  8b28                 mov ebp, dword ptr [eax]
// 00581f04  0f8e95000000         jle 0x581f9f
// 00581f0a  8b442414             mov eax, dword ptr [esp + 0x14]
// 00581f0e  56                   push esi
// 00581f0f  2bc5                 sub eax, ebp
// 00581f11  57                   push edi
// 00581f12  89442420             mov dword ptr [esp + 0x20], eax
// 00581f16  eb0c                 jmp 0x581f24
// 00581f18  eb06                 jmp 0x581f20
// 00581f1a  8d9b00000000         lea ebx, [ebx]
// 00581f20  8b442420             mov eax, dword ptr [esp + 0x20]
// 00581f24  8b0c28               mov ecx, dword ptr [eax + ebp]
// 00581f27  0fb611               movzx edx, byte ptr [ecx]
// 00581f2a  8b4500               mov eax, dword ptr [ebp]
// 00581f2d  8810                 mov byte ptr [eax], dl
// 00581f2f  0fb67101             movzx esi, byte ptr [ecx + 1]
// 00581f33  41                   inc ecx
// 00581f34  8d1452               lea edx, [edx + edx*2]
// 00581f37  8d543202             lea edx, [edx + esi + 2]
// 00581f3b  40                   inc eax
// 00581f3c  c1fa02               sar edx, 2
// 00581f3f  8810                 mov byte ptr [eax], dl
// 00581f41  8b542418             mov edx, dword ptr [esp + 0x18]
// 00581f45  8b7228               mov esi, dword ptr [edx + 0x28]
// 00581f48  40                   inc eax
// 00581f49  83ee02               sub esi, 2
// 00581f4c  7429                 je 0x581f77
// 00581f4e  8bff                 mov edi, edi
// 00581f50  0fb611               movzx edx, byte ptr [ecx]
// 00581f53  8d3c52               lea edi, [edx + edx*2]
// 00581f56  0fb651ff             movzx edx, byte ptr [ecx - 1]
// 00581f5a  41                   inc ecx
// 00581f5b  8d543a01             lea edx, [edx + edi + 1]
// 00581f5f  c1fa02               sar edx, 2
// 00581f62  8810                 mov byte ptr [eax], dl
// 00581f64  0fb611               movzx edx, byte ptr [ecx]
// 00581f67  40                   inc eax
// 00581f68  8d543a02             lea edx, [edx + edi + 2]
// 00581f6c  c1fa02               sar edx, 2
// 00581f6f  8810                 mov byte ptr [eax], dl
// 00581f71  40                   inc eax
// 00581f72  83ee01               sub esi, 1
// 00581f75  75d9                 jne 0x581f50
// 00581f77  0fb611               movzx edx, byte ptr [ecx]
// 00581f7a  0fb649ff             movzx ecx, byte ptr [ecx - 1]
// 00581f7e  8d3452               lea esi, [edx + edx*2]
// 00581f81  8d4c3101             lea ecx, [ecx + esi + 1]
// 00581f85  c1f902               sar ecx, 2
// 00581f88  8808                 mov byte ptr [eax], cl
// 00581f8a  885001               mov byte ptr [eax + 1], dl
// 00581f8d  8b542414             mov edx, dword ptr [esp + 0x14]
// 00581f91  43                   inc ebx
// 00581f92  83c504               add ebp, 4
// 00581f95  3b9a14010000         cmp ebx, dword ptr [edx + 0x114]
// 00581f9b  7c83                 jl 0x581f20
// 00581f9d  5f                   pop edi
// 00581f9e  5e                   pop esi
// 00581f9f  5d                   pop ebp
// 00581fa0  5b                   pop ebx
// 00581fa1  c3                   ret 
// library jpeg-6b/jdsample.c (function _h2v1_fancy_upsample)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdsample.c
