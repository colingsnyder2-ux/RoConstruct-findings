// from server: 100% by auto
// roc 2009-06 0059f070  unit: seg_00590000  size: 530 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0059f070
//
// 0059f070  83ec1c               sub esp, 0x1c
// 0059f073  53                   push ebx
// 0059f074  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 0059f078  8b8ba0010000         mov ecx, dword ptr [ebx + 0x1a0]
// 0059f07e  8b5110               mov edx, dword ptr [ecx + 0x10]
// 0059f081  8b8320010000         mov eax, dword ptr [ebx + 0x120]
// 0059f087  89542410             mov dword ptr [esp + 0x10], edx
// 0059f08b  8b5114               mov edx, dword ptr [ecx + 0x14]
// 0059f08e  8954241c             mov dword ptr [esp + 0x1c], edx
// 0059f092  8b5118               mov edx, dword ptr [ecx + 0x18]
// 0059f095  8b491c               mov ecx, dword ptr [ecx + 0x1c]
// 0059f098  55                   push ebp
// 0059f099  8b6b5c               mov ebp, dword ptr [ebx + 0x5c]
// 0059f09c  8954241c             mov dword ptr [esp + 0x1c], edx
// 0059f0a0  894c2418             mov dword ptr [esp + 0x18], ecx
// 0059f0a4  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0059f0a8  8b11                 mov edx, dword ptr [ecx]
// 0059f0aa  56                   push esi
// 0059f0ab  8b742434             mov esi, dword ptr [esp + 0x34]
// 0059f0af  8d14f2               lea edx, [edx + esi*8]
// 0059f0b2  57                   push edi
// 0059f0b3  8b3a                 mov edi, dword ptr [edx]
// 0059f0b5  8b5204               mov edx, dword ptr [edx + 4]
// 0059f0b8  89542410             mov dword ptr [esp + 0x10], edx
// 0059f0bc  8b5104               mov edx, dword ptr [ecx + 4]
// 0059f0bf  8b4908               mov ecx, dword ptr [ecx + 8]
// 0059f0c2  8b14b2               mov edx, dword ptr [edx + esi*4]
// 0059f0c5  897c2438             mov dword ptr [esp + 0x38], edi
// 0059f0c9  8b3cb1               mov edi, dword ptr [ecx + esi*4]
// 0059f0cc  8b74243c             mov esi, dword ptr [esp + 0x3c]
// 0059f0d0  8b0e                 mov ecx, dword ptr [esi]
// 0059f0d2  8b7604               mov esi, dword ptr [esi + 4]
// 0059f0d5  d1ed                 shr ebp, 1
// 0059f0d7  896c243c             mov dword ptr [esp + 0x3c], ebp
// 0059f0db  0f841f010000         je 0x59f200
// 0059f0e1  0fb61a               movzx ebx, byte ptr [edx]
// 0059f0e4  895c2434             mov dword ptr [esp + 0x34], ebx
// 0059f0e8  42                   inc edx
// 0059f0e9  47                   inc edi
// 0059f0ea  89542414             mov dword ptr [esp + 0x14], edx
// 0059f0ee  0fb657ff             movzx edx, byte ptr [edi - 1]
// 0059f0f2  897c2418             mov dword ptr [esp + 0x18], edi
// 0059f0f6  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0059f0fa  8b2c97               mov ebp, dword ptr [edi + edx*4]
// 0059f0fd  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0059f101  8b3c9f               mov edi, dword ptr [edi + ebx*4]
// 0059f104  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 0059f108  033c93               add edi, dword ptr [ebx + edx*4]
// 0059f10b  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 0059f10f  8b542428             mov edx, dword ptr [esp + 0x28]
// 0059f113  8b149a               mov edx, dword ptr [edx + ebx*4]
// 0059f116  8b5c2438             mov ebx, dword ptr [esp + 0x38]
// 0059f11a  0fb61b               movzx ebx, byte ptr [ebx]
// 0059f11d  895c2434             mov dword ptr [esp + 0x34], ebx
// 0059f121  03dd                 add ebx, ebp
// 0059f123  0fb61c03             movzx ebx, byte ptr [ebx + eax]
// 0059f127  8819                 mov byte ptr [ecx], bl
// 0059f129  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 0059f12d  ff442438             inc dword ptr [esp + 0x38]
// 0059f131  c1ff10               sar edi, 0x10
// 0059f134  03df                 add ebx, edi
// 0059f136  0fb61c03             movzx ebx, byte ptr [ebx + eax]
// 0059f13a  885901               mov byte ptr [ecx + 1], bl
// 0059f13d  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 0059f141  03da                 add ebx, edx
// 0059f143  0fb61c03             movzx ebx, byte ptr [ebx + eax]
// 0059f147  885902               mov byte ptr [ecx + 2], bl
// 0059f14a  8b5c2438             mov ebx, dword ptr [esp + 0x38]
// 0059f14e  0fb61b               movzx ebx, byte ptr [ebx]
// 0059f151  895c2434             mov dword ptr [esp + 0x34], ebx
// 0059f155  03dd                 add ebx, ebp
// 0059f157  0fb61c03             movzx ebx, byte ptr [ebx + eax]
// 0059f15b  885903               mov byte ptr [ecx + 3], bl
// 0059f15e  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 0059f162  03df                 add ebx, edi
// 0059f164  0fb61c03             movzx ebx, byte ptr [ebx + eax]
// 0059f168  885904               mov byte ptr [ecx + 4], bl
// 0059f16b  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 0059f16f  03da                 add ebx, edx
// 0059f171  0fb61c03             movzx ebx, byte ptr [ebx + eax]
// 0059f175  83c103               add ecx, 3
// 0059f178  885902               mov byte ptr [ecx + 2], bl
// 0059f17b  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0059f17f  0fb61b               movzx ebx, byte ptr [ebx]
// 0059f182  895c2434             mov dword ptr [esp + 0x34], ebx
// 0059f186  03dd                 add ebx, ebp
// 0059f188  0fb61c03             movzx ebx, byte ptr [ebx + eax]
// 0059f18c  881e                 mov byte ptr [esi], bl
// 0059f18e  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 0059f192  ff442410             inc dword ptr [esp + 0x10]
// 0059f196  03df                 add ebx, edi
// 0059f198  0fb61c03             movzx ebx, byte ptr [ebx + eax]
// 0059f19c  885e01               mov byte ptr [esi + 1], bl
// 0059f19f  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 0059f1a3  03da                 add ebx, edx
// 0059f1a5  0fb61c03             movzx ebx, byte ptr [ebx + eax]
// 0059f1a9  885e02               mov byte ptr [esi + 2], bl
// 0059f1ac  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0059f1b0  0fb61b               movzx ebx, byte ptr [ebx]
// 0059f1b3  ff442438             inc dword ptr [esp + 0x38]
// 0059f1b7  ff442410             inc dword ptr [esp + 0x10]
// 0059f1bb  895c2434             mov dword ptr [esp + 0x34], ebx
// 0059f1bf  03dd                 add ebx, ebp
// 0059f1c1  0fb61c03             movzx ebx, byte ptr [ebx + eax]
// 0059f1c5  83c603               add esi, 3
// 0059f1c8  881e                 mov byte ptr [esi], bl
// 0059f1ca  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 0059f1ce  03df                 add ebx, edi
// 0059f1d0  0fb61c03             movzx ebx, byte ptr [ebx + eax]
// 0059f1d4  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 0059f1d8  03fa                 add edi, edx
// 0059f1da  885e01               mov byte ptr [esi + 1], bl
// 0059f1dd  8a1407               mov dl, byte ptr [edi + eax]
// 0059f1e0  83c103               add ecx, 3
// 0059f1e3  885602               mov byte ptr [esi + 2], dl
// 0059f1e6  83c603               add esi, 3
// 0059f1e9  836c243c01           sub dword ptr [esp + 0x3c], 1
// 0059f1ee  8b542414             mov edx, dword ptr [esp + 0x14]
// 0059f1f2  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0059f1f6  0f85e5feffff         jne 0x59f0e1
// 0059f1fc  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 0059f200  f6435c01             test byte ptr [ebx + 0x5c], 1
// 0059f204  7474                 je 0x59f27a
// 0059f206  0fb61f               movzx ebx, byte ptr [edi]
// 0059f209  0fb612               movzx edx, byte ptr [edx]
// 0059f20c  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0059f210  8b3c9f               mov edi, dword ptr [edi + ebx*4]
// 0059f213  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 0059f217  897c2430             mov dword ptr [esp + 0x30], edi
// 0059f21b  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0059f21f  8b3c97               mov edi, dword ptr [edi + edx*4]
// 0059f222  037c9d00             add edi, dword ptr [ebp + ebx*4]
// 0059f226  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 0059f22a  8b1493               mov edx, dword ptr [ebx + edx*4]
// 0059f22d  8b5c2438             mov ebx, dword ptr [esp + 0x38]
// 0059f231  0fb62b               movzx ebp, byte ptr [ebx]
// 0059f234  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 0059f238  03dd                 add ebx, ebp
// 0059f23a  0fb61c03             movzx ebx, byte ptr [ebx + eax]
// 0059f23e  8819                 mov byte ptr [ecx], bl
// 0059f240  c1ff10               sar edi, 0x10
// 0059f243  8d1c2f               lea ebx, [edi + ebp]
// 0059f246  0fb61c03             movzx ebx, byte ptr [ebx + eax]
// 0059f24a  885901               mov byte ptr [ecx + 1], bl
// 0059f24d  03ea                 add ebp, edx
// 0059f24f  0fb61c28             movzx ebx, byte ptr [eax + ebp]
// 0059f253  885902               mov byte ptr [ecx + 2], bl
// 0059f256  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0059f25a  0fb609               movzx ecx, byte ptr [ecx]
// 0059f25d  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 0059f261  03d9                 add ebx, ecx
// 0059f263  0fb61c03             movzx ebx, byte ptr [ebx + eax]
// 0059f267  03f9                 add edi, ecx
// 0059f269  881e                 mov byte ptr [esi], bl
// 0059f26b  0fb61c07             movzx ebx, byte ptr [edi + eax]
// 0059f26f  03ca                 add ecx, edx
// 0059f271  885e01               mov byte ptr [esi + 1], bl
// 0059f274  8a1401               mov dl, byte ptr [ecx + eax]
// 0059f277  885602               mov byte ptr [esi + 2], dl
// 0059f27a  5f                   pop edi
// 0059f27b  5e                   pop esi
// 0059f27c  5d                   pop ebp
// 0059f27d  5b                   pop ebx
// 0059f27e  83c41c               add esp, 0x1c
// 0059f281  c3                   ret 
// library jpeg-6b/jdmerge.c (function _h2v2_merged_upsample)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmerge.c
