// roc 2009-06 0059ef20  unit: seg_00590000  size: 328 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0059ef20
//
// 0059ef20  83ec14               sub esp, 0x14
// 0059ef23  8b542418             mov edx, dword ptr [esp + 0x18]
// 0059ef27  8b82a0010000         mov eax, dword ptr [edx + 0x1a0]
// 0059ef2d  8b8a20010000         mov ecx, dword ptr [edx + 0x120]
// 0059ef33  53                   push ebx
// 0059ef34  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 0059ef38  55                   push ebp
// 0059ef39  8b6a5c               mov ebp, dword ptr [edx + 0x5c]
// 0059ef3c  56                   push esi
// 0059ef3d  8b7010               mov esi, dword ptr [eax + 0x10]
// 0059ef40  8974241c             mov dword ptr [esp + 0x1c], esi
// 0059ef44  8b7014               mov esi, dword ptr [eax + 0x14]
// 0059ef47  89742418             mov dword ptr [esp + 0x18], esi
// 0059ef4b  8b7018               mov esi, dword ptr [eax + 0x18]
// 0059ef4e  8b401c               mov eax, dword ptr [eax + 0x1c]
// 0059ef51  89742414             mov dword ptr [esp + 0x14], esi
// 0059ef55  8b33                 mov esi, dword ptr [ebx]
// 0059ef57  89442410             mov dword ptr [esp + 0x10], eax
// 0059ef5b  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0059ef5f  57                   push edi
// 0059ef60  8b3c86               mov edi, dword ptr [esi + eax*4]
// 0059ef63  8b7304               mov esi, dword ptr [ebx + 4]
// 0059ef66  8b5b08               mov ebx, dword ptr [ebx + 8]
// 0059ef69  8b3486               mov esi, dword ptr [esi + eax*4]
// 0059ef6c  8b1c83               mov ebx, dword ptr [ebx + eax*4]
// 0059ef6f  8b442434             mov eax, dword ptr [esp + 0x34]
// 0059ef73  8b00                 mov eax, dword ptr [eax]
// 0059ef75  d1ed                 shr ebp, 1
// 0059ef77  896c242c             mov dword ptr [esp + 0x2c], ebp
// 0059ef7b  0f8495000000         je 0x59f016
// 0059ef81  0fb62b               movzx ebp, byte ptr [ebx]
// 0059ef84  0fb616               movzx edx, byte ptr [esi]
// 0059ef87  46                   inc esi
// 0059ef88  43                   inc ebx
// 0059ef89  89742434             mov dword ptr [esp + 0x34], esi
// 0059ef8d  8b742420             mov esi, dword ptr [esp + 0x20]
// 0059ef91  8b34ae               mov esi, dword ptr [esi + ebp*4]
// 0059ef94  895c2410             mov dword ptr [esp + 0x10], ebx
// 0059ef98  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0059ef9c  89742430             mov dword ptr [esp + 0x30], esi
// 0059efa0  8b742414             mov esi, dword ptr [esp + 0x14]
// 0059efa4  8b3496               mov esi, dword ptr [esi + edx*4]
// 0059efa7  0334ab               add esi, dword ptr [ebx + ebp*4]
// 0059efaa  0fb62f               movzx ebp, byte ptr [edi]
// 0059efad  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0059efb1  8b1493               mov edx, dword ptr [ebx + edx*4]
// 0059efb4  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 0059efb8  03dd                 add ebx, ebp
// 0059efba  0fb61c0b             movzx ebx, byte ptr [ebx + ecx]
// 0059efbe  8818                 mov byte ptr [eax], bl
// 0059efc0  c1fe10               sar esi, 0x10
// 0059efc3  8d1c2e               lea ebx, [esi + ebp]
// 0059efc6  0fb61c0b             movzx ebx, byte ptr [ebx + ecx]
// 0059efca  885801               mov byte ptr [eax + 1], bl
// 0059efcd  03ea                 add ebp, edx
// 0059efcf  0fb61c29             movzx ebx, byte ptr [ecx + ebp]
// 0059efd3  885802               mov byte ptr [eax + 2], bl
// 0059efd6  0fb66f01             movzx ebp, byte ptr [edi + 1]
// 0059efda  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 0059efde  47                   inc edi
// 0059efdf  03dd                 add ebx, ebp
// 0059efe1  0fb61c0b             movzx ebx, byte ptr [ebx + ecx]
// 0059efe5  83c003               add eax, 3
// 0059efe8  03f5                 add esi, ebp
// 0059efea  8818                 mov byte ptr [eax], bl
// 0059efec  0fb61c0e             movzx ebx, byte ptr [esi + ecx]
// 0059eff0  8b742434             mov esi, dword ptr [esp + 0x34]
// 0059eff4  885801               mov byte ptr [eax + 1], bl
// 0059eff7  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0059effb  03ea                 add ebp, edx
// 0059effd  8a1429               mov dl, byte ptr [ecx + ebp]
// 0059f000  885002               mov byte ptr [eax + 2], dl
// 0059f003  47                   inc edi
// 0059f004  83c003               add eax, 3
// 0059f007  836c242c01           sub dword ptr [esp + 0x2c], 1
// 0059f00c  0f856fffffff         jne 0x59ef81
// 0059f012  8b542428             mov edx, dword ptr [esp + 0x28]
// 0059f016  f6425c01             test byte ptr [edx + 0x5c], 1
// 0059f01a  7444                 je 0x59f060
// 0059f01c  0fb616               movzx edx, byte ptr [esi]
// 0059f01f  0fb61b               movzx ebx, byte ptr [ebx]
// 0059f022  8b742414             mov esi, dword ptr [esp + 0x14]
// 0059f026  8b3496               mov esi, dword ptr [esi + edx*4]
// 0059f029  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 0059f02d  03749d00             add esi, dword ptr [ebp + ebx*4]
// 0059f031  0fb63f               movzx edi, byte ptr [edi]
// 0059f034  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 0059f038  8b6c9500             mov ebp, dword ptr [ebp + edx*4]
// 0059f03c  8b542420             mov edx, dword ptr [esp + 0x20]
// 0059f040  8b149a               mov edx, dword ptr [edx + ebx*4]
// 0059f043  03d7                 add edx, edi
// 0059f045  0fb6140a             movzx edx, byte ptr [edx + ecx]
// 0059f049  c1fe10               sar esi, 0x10
// 0059f04c  8810                 mov byte ptr [eax], dl
// 0059f04e  8d1437               lea edx, [edi + esi]
// 0059f051  0fb6140a             movzx edx, byte ptr [edx + ecx]
// 0059f055  03fd                 add edi, ebp
// 0059f057  885001               mov byte ptr [eax + 1], dl
// 0059f05a  8a0c0f               mov cl, byte ptr [edi + ecx]
// 0059f05d  884802               mov byte ptr [eax + 2], cl
// 0059f060  5f                   pop edi
// 0059f061  5e                   pop esi
// 0059f062  5d                   pop ebp
// 0059f063  5b                   pop ebx
// 0059f064  83c414               add esp, 0x14
// 0059f067  c3                   ret 
// library jpeg-6b/jdmerge.c (function _h2v1_merged_upsample)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmerge.c
