// from server: 100% by auto
// roc 2007-08 00527eb0  unit: G3D::Line  size: 194 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00527eb0
//
// 00527eb0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00527eb4  8b442410             mov eax, dword ptr [esp + 0x10]
// 00527eb8  53                   push ebx
// 00527eb9  33db                 xor ebx, ebx
// 00527ebb  399914010000         cmp dword ptr [ecx + 0x114], ebx
// 00527ec1  55                   push ebp
// 00527ec2  8b28                 mov ebp, dword ptr [eax]
// 00527ec4  0f8ea5000000         jle 0x527f6f
// 00527eca  8b442414             mov eax, dword ptr [esp + 0x14]
// 00527ece  56                   push esi
// 00527ecf  2bc5                 sub eax, ebp
// 00527ed1  57                   push edi
// 00527ed2  89442420             mov dword ptr [esp + 0x20], eax
// 00527ed6  eb0c                 jmp 0x527ee4
// 00527ed8  eb06                 jmp 0x527ee0
// 00527eda  8d9b00000000         lea ebx, [ebx]
// 00527ee0  8b442420             mov eax, dword ptr [esp + 0x20]
// 00527ee4  8b0c28               mov ecx, dword ptr [eax + ebp]
// 00527ee7  0fb611               movzx edx, byte ptr [ecx]
// 00527eea  8b4500               mov eax, dword ptr [ebp]
// 00527eed  8810                 mov byte ptr [eax], dl
// 00527eef  0fb67101             movzx esi, byte ptr [ecx + 1]
// 00527ef3  83c101               add ecx, 1
// 00527ef6  8d1452               lea edx, [edx + edx*2]
// 00527ef9  8d543202             lea edx, [edx + esi + 2]
// 00527efd  83c001               add eax, 1
// 00527f00  c1fa02               sar edx, 2
// 00527f03  8810                 mov byte ptr [eax], dl
// 00527f05  8b542418             mov edx, dword ptr [esp + 0x18]
// 00527f09  8b7228               mov esi, dword ptr [edx + 0x28]
// 00527f0c  83c001               add eax, 1
// 00527f0f  83ee02               sub esi, 2
// 00527f12  742d                 je 0x527f41
// 00527f14  0fb611               movzx edx, byte ptr [ecx]
// 00527f17  8d3c52               lea edi, [edx + edx*2]
// 00527f1a  0fb651ff             movzx edx, byte ptr [ecx - 1]
// 00527f1e  83c101               add ecx, 1
// 00527f21  8d543a01             lea edx, [edx + edi + 1]
// 00527f25  c1fa02               sar edx, 2
// 00527f28  8810                 mov byte ptr [eax], dl
// 00527f2a  0fb611               movzx edx, byte ptr [ecx]
// 00527f2d  83c001               add eax, 1
// 00527f30  8d543a02             lea edx, [edx + edi + 2]
// 00527f34  c1fa02               sar edx, 2
// 00527f37  8810                 mov byte ptr [eax], dl
// 00527f39  83c001               add eax, 1
// 00527f3c  83ee01               sub esi, 1
// 00527f3f  75d3                 jne 0x527f14
// 00527f41  0fb611               movzx edx, byte ptr [ecx]
// 00527f44  0fb649ff             movzx ecx, byte ptr [ecx - 1]
// 00527f48  8d3452               lea esi, [edx + edx*2]
// 00527f4b  8d4c3101             lea ecx, [ecx + esi + 1]
// 00527f4f  c1f902               sar ecx, 2
// 00527f52  8808                 mov byte ptr [eax], cl
// 00527f54  885001               mov byte ptr [eax + 1], dl
// 00527f57  8b542414             mov edx, dword ptr [esp + 0x14]
// 00527f5b  83c301               add ebx, 1
// 00527f5e  83c504               add ebp, 4
// 00527f61  3b9a14010000         cmp ebx, dword ptr [edx + 0x114]
// 00527f67  0f8c73ffffff         jl 0x527ee0
// 00527f6d  5f                   pop edi
// 00527f6e  5e                   pop esi
// 00527f6f  5d                   pop ebp
// 00527f70  5b                   pop ebx
// 00527f71  c3                   ret 
// library jpeg-6b/jdsample.c (function _h2v1_fancy_upsample)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdsample.c
