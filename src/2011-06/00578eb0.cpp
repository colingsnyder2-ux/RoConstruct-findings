// roc 2011-06 00578eb0  unit: seg_00570000  size: 530 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00578eb0
//
// 00578eb0  83ec1c               sub esp, 0x1c
// 00578eb3  53                   push ebx
// 00578eb4  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 00578eb8  8b8ba0010000         mov ecx, dword ptr [ebx + 0x1a0]
// 00578ebe  8b5110               mov edx, dword ptr [ecx + 0x10]
// 00578ec1  8b8320010000         mov eax, dword ptr [ebx + 0x120]
// 00578ec7  89542410             mov dword ptr [esp + 0x10], edx
// 00578ecb  8b5114               mov edx, dword ptr [ecx + 0x14]
// 00578ece  8954241c             mov dword ptr [esp + 0x1c], edx
// 00578ed2  8b5118               mov edx, dword ptr [ecx + 0x18]
// 00578ed5  8b491c               mov ecx, dword ptr [ecx + 0x1c]
// 00578ed8  55                   push ebp
// 00578ed9  8b6b5c               mov ebp, dword ptr [ebx + 0x5c]
// 00578edc  8954241c             mov dword ptr [esp + 0x1c], edx
// 00578ee0  894c2418             mov dword ptr [esp + 0x18], ecx
// 00578ee4  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00578ee8  8b11                 mov edx, dword ptr [ecx]
// 00578eea  56                   push esi
// 00578eeb  8b742434             mov esi, dword ptr [esp + 0x34]
// 00578eef  8d14f2               lea edx, [edx + esi*8]
// 00578ef2  57                   push edi
// 00578ef3  8b3a                 mov edi, dword ptr [edx]
// 00578ef5  8b5204               mov edx, dword ptr [edx + 4]
// 00578ef8  89542410             mov dword ptr [esp + 0x10], edx
// 00578efc  8b5104               mov edx, dword ptr [ecx + 4]
// 00578eff  8b4908               mov ecx, dword ptr [ecx + 8]
// 00578f02  8b14b2               mov edx, dword ptr [edx + esi*4]
// 00578f05  897c2438             mov dword ptr [esp + 0x38], edi
// 00578f09  8b3cb1               mov edi, dword ptr [ecx + esi*4]
// 00578f0c  8b74243c             mov esi, dword ptr [esp + 0x3c]
// 00578f10  8b0e                 mov ecx, dword ptr [esi]
// 00578f12  8b7604               mov esi, dword ptr [esi + 4]
// 00578f15  d1ed                 shr ebp, 1
// 00578f17  896c243c             mov dword ptr [esp + 0x3c], ebp
// 00578f1b  0f841f010000         je 0x579040
// 00578f21  0fb61a               movzx ebx, byte ptr [edx]
// 00578f24  895c2434             mov dword ptr [esp + 0x34], ebx
// 00578f28  42                   inc edx
// 00578f29  47                   inc edi
// 00578f2a  89542414             mov dword ptr [esp + 0x14], edx
// 00578f2e  0fb657ff             movzx edx, byte ptr [edi - 1]
// 00578f32  897c2418             mov dword ptr [esp + 0x18], edi
// 00578f36  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00578f3a  8b2c97               mov ebp, dword ptr [edi + edx*4]
// 00578f3d  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00578f41  8b3c9f               mov edi, dword ptr [edi + ebx*4]
// 00578f44  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 00578f48  033c93               add edi, dword ptr [ebx + edx*4]
// 00578f4b  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 00578f4f  8b542428             mov edx, dword ptr [esp + 0x28]
// 00578f53  8b149a               mov edx, dword ptr [edx + ebx*4]
// 00578f56  8b5c2438             mov ebx, dword ptr [esp + 0x38]
// 00578f5a  0fb61b               movzx ebx, byte ptr [ebx]
// 00578f5d  895c2434             mov dword ptr [esp + 0x34], ebx
// 00578f61  03dd                 add ebx, ebp
// 00578f63  0fb61c03             movzx ebx, byte ptr [ebx + eax]
// 00578f67  8819                 mov byte ptr [ecx], bl
// 00578f69  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 00578f6d  ff442438             inc dword ptr [esp + 0x38]
// 00578f71  c1ff10               sar edi, 0x10
// 00578f74  03df                 add ebx, edi
// 00578f76  0fb61c03             movzx ebx, byte ptr [ebx + eax]
// 00578f7a  885901               mov byte ptr [ecx + 1], bl
// 00578f7d  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 00578f81  03da                 add ebx, edx
// 00578f83  0fb61c03             movzx ebx, byte ptr [ebx + eax]
// 00578f87  885902               mov byte ptr [ecx + 2], bl
// 00578f8a  8b5c2438             mov ebx, dword ptr [esp + 0x38]
// 00578f8e  0fb61b               movzx ebx, byte ptr [ebx]
// 00578f91  895c2434             mov dword ptr [esp + 0x34], ebx
// 00578f95  03dd                 add ebx, ebp
// 00578f97  0fb61c03             movzx ebx, byte ptr [ebx + eax]
// 00578f9b  885903               mov byte ptr [ecx + 3], bl
// 00578f9e  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 00578fa2  03df                 add ebx, edi
// 00578fa4  0fb61c03             movzx ebx, byte ptr [ebx + eax]
// 00578fa8  885904               mov byte ptr [ecx + 4], bl
// 00578fab  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 00578faf  03da                 add ebx, edx
// 00578fb1  0fb61c03             movzx ebx, byte ptr [ebx + eax]
// 00578fb5  83c103               add ecx, 3
// 00578fb8  885902               mov byte ptr [ecx + 2], bl
// 00578fbb  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00578fbf  0fb61b               movzx ebx, byte ptr [ebx]
// 00578fc2  895c2434             mov dword ptr [esp + 0x34], ebx
// 00578fc6  03dd                 add ebx, ebp
// 00578fc8  0fb61c03             movzx ebx, byte ptr [ebx + eax]
// 00578fcc  881e                 mov byte ptr [esi], bl
// 00578fce  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 00578fd2  ff442410             inc dword ptr [esp + 0x10]
// 00578fd6  03df                 add ebx, edi
// 00578fd8  0fb61c03             movzx ebx, byte ptr [ebx + eax]
// 00578fdc  885e01               mov byte ptr [esi + 1], bl
// 00578fdf  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 00578fe3  03da                 add ebx, edx
// 00578fe5  0fb61c03             movzx ebx, byte ptr [ebx + eax]
// 00578fe9  885e02               mov byte ptr [esi + 2], bl
// 00578fec  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00578ff0  0fb61b               movzx ebx, byte ptr [ebx]
// 00578ff3  ff442438             inc dword ptr [esp + 0x38]
// 00578ff7  ff442410             inc dword ptr [esp + 0x10]
// 00578ffb  895c2434             mov dword ptr [esp + 0x34], ebx
// 00578fff  03dd                 add ebx, ebp
// 00579001  0fb61c03             movzx ebx, byte ptr [ebx + eax]
// 00579005  83c603               add esi, 3
// 00579008  881e                 mov byte ptr [esi], bl
// 0057900a  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 0057900e  03df                 add ebx, edi
// 00579010  0fb61c03             movzx ebx, byte ptr [ebx + eax]
// 00579014  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 00579018  03fa                 add edi, edx
// 0057901a  885e01               mov byte ptr [esi + 1], bl
// 0057901d  8a1407               mov dl, byte ptr [edi + eax]
// 00579020  83c103               add ecx, 3
// 00579023  885602               mov byte ptr [esi + 2], dl
// 00579026  83c603               add esi, 3
// 00579029  836c243c01           sub dword ptr [esp + 0x3c], 1
// 0057902e  8b542414             mov edx, dword ptr [esp + 0x14]
// 00579032  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 00579036  0f85e5feffff         jne 0x578f21
// 0057903c  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 00579040  f6435c01             test byte ptr [ebx + 0x5c], 1
// 00579044  7474                 je 0x5790ba
// 00579046  0fb61f               movzx ebx, byte ptr [edi]
// 00579049  0fb612               movzx edx, byte ptr [edx]
// 0057904c  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00579050  8b3c9f               mov edi, dword ptr [edi + ebx*4]
// 00579053  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 00579057  897c2430             mov dword ptr [esp + 0x30], edi
// 0057905b  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0057905f  8b3c97               mov edi, dword ptr [edi + edx*4]
// 00579062  037c9d00             add edi, dword ptr [ebp + ebx*4]
// 00579066  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 0057906a  8b1493               mov edx, dword ptr [ebx + edx*4]
// 0057906d  8b5c2438             mov ebx, dword ptr [esp + 0x38]
// 00579071  0fb62b               movzx ebp, byte ptr [ebx]
// 00579074  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 00579078  03dd                 add ebx, ebp
// 0057907a  0fb61c03             movzx ebx, byte ptr [ebx + eax]
// 0057907e  8819                 mov byte ptr [ecx], bl
// 00579080  c1ff10               sar edi, 0x10
// 00579083  8d1c2f               lea ebx, [edi + ebp]
// 00579086  0fb61c03             movzx ebx, byte ptr [ebx + eax]
// 0057908a  885901               mov byte ptr [ecx + 1], bl
// 0057908d  03ea                 add ebp, edx
// 0057908f  0fb61c28             movzx ebx, byte ptr [eax + ebp]
// 00579093  885902               mov byte ptr [ecx + 2], bl
// 00579096  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0057909a  0fb609               movzx ecx, byte ptr [ecx]
// 0057909d  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 005790a1  03d9                 add ebx, ecx
// 005790a3  0fb61c03             movzx ebx, byte ptr [ebx + eax]
// 005790a7  03f9                 add edi, ecx
// 005790a9  881e                 mov byte ptr [esi], bl
// 005790ab  0fb61c07             movzx ebx, byte ptr [edi + eax]
// 005790af  03ca                 add ecx, edx
// 005790b1  885e01               mov byte ptr [esi + 1], bl
// 005790b4  8a1401               mov dl, byte ptr [ecx + eax]
// 005790b7  885602               mov byte ptr [esi + 2], dl
// 005790ba  5f                   pop edi
// 005790bb  5e                   pop esi
// 005790bc  5d                   pop ebp
// 005790bd  5b                   pop ebx
// 005790be  83c41c               add esp, 0x1c
// 005790c1  c3                   ret 
// library jpeg-6b/jdmerge.c (function _h2v2_merged_upsample)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmerge.c
