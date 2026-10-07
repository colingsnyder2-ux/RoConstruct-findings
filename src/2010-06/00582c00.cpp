// roc 2010-06 00582c00  unit: seg_00580000  size: 530 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00582c00
//
// 00582c00  83ec1c               sub esp, 0x1c
// 00582c03  53                   push ebx
// 00582c04  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 00582c08  8b8ba0010000         mov ecx, dword ptr [ebx + 0x1a0]
// 00582c0e  8b5110               mov edx, dword ptr [ecx + 0x10]
// 00582c11  8b8320010000         mov eax, dword ptr [ebx + 0x120]
// 00582c17  89542410             mov dword ptr [esp + 0x10], edx
// 00582c1b  8b5114               mov edx, dword ptr [ecx + 0x14]
// 00582c1e  8954241c             mov dword ptr [esp + 0x1c], edx
// 00582c22  8b5118               mov edx, dword ptr [ecx + 0x18]
// 00582c25  8b491c               mov ecx, dword ptr [ecx + 0x1c]
// 00582c28  55                   push ebp
// 00582c29  8b6b5c               mov ebp, dword ptr [ebx + 0x5c]
// 00582c2c  8954241c             mov dword ptr [esp + 0x1c], edx
// 00582c30  894c2418             mov dword ptr [esp + 0x18], ecx
// 00582c34  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00582c38  8b11                 mov edx, dword ptr [ecx]
// 00582c3a  56                   push esi
// 00582c3b  8b742434             mov esi, dword ptr [esp + 0x34]
// 00582c3f  8d14f2               lea edx, [edx + esi*8]
// 00582c42  57                   push edi
// 00582c43  8b3a                 mov edi, dword ptr [edx]
// 00582c45  8b5204               mov edx, dword ptr [edx + 4]
// 00582c48  89542410             mov dword ptr [esp + 0x10], edx
// 00582c4c  8b5104               mov edx, dword ptr [ecx + 4]
// 00582c4f  8b4908               mov ecx, dword ptr [ecx + 8]
// 00582c52  8b14b2               mov edx, dword ptr [edx + esi*4]
// 00582c55  897c2438             mov dword ptr [esp + 0x38], edi
// 00582c59  8b3cb1               mov edi, dword ptr [ecx + esi*4]
// 00582c5c  8b74243c             mov esi, dword ptr [esp + 0x3c]
// 00582c60  8b0e                 mov ecx, dword ptr [esi]
// 00582c62  8b7604               mov esi, dword ptr [esi + 4]
// 00582c65  d1ed                 shr ebp, 1
// 00582c67  896c243c             mov dword ptr [esp + 0x3c], ebp
// 00582c6b  0f841f010000         je 0x582d90
// 00582c71  0fb61a               movzx ebx, byte ptr [edx]
// 00582c74  895c2434             mov dword ptr [esp + 0x34], ebx
// 00582c78  42                   inc edx
// 00582c79  47                   inc edi
// 00582c7a  89542414             mov dword ptr [esp + 0x14], edx
// 00582c7e  0fb657ff             movzx edx, byte ptr [edi - 1]
// 00582c82  897c2418             mov dword ptr [esp + 0x18], edi
// 00582c86  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00582c8a  8b2c97               mov ebp, dword ptr [edi + edx*4]
// 00582c8d  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00582c91  8b3c9f               mov edi, dword ptr [edi + ebx*4]
// 00582c94  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 00582c98  033c93               add edi, dword ptr [ebx + edx*4]
// 00582c9b  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 00582c9f  8b542428             mov edx, dword ptr [esp + 0x28]
// 00582ca3  8b149a               mov edx, dword ptr [edx + ebx*4]
// 00582ca6  8b5c2438             mov ebx, dword ptr [esp + 0x38]
// 00582caa  0fb61b               movzx ebx, byte ptr [ebx]
// 00582cad  895c2434             mov dword ptr [esp + 0x34], ebx
// 00582cb1  03dd                 add ebx, ebp
// 00582cb3  0fb61c03             movzx ebx, byte ptr [ebx + eax]
// 00582cb7  8819                 mov byte ptr [ecx], bl
// 00582cb9  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 00582cbd  ff442438             inc dword ptr [esp + 0x38]
// 00582cc1  c1ff10               sar edi, 0x10
// 00582cc4  03df                 add ebx, edi
// 00582cc6  0fb61c03             movzx ebx, byte ptr [ebx + eax]
// 00582cca  885901               mov byte ptr [ecx + 1], bl
// 00582ccd  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 00582cd1  03da                 add ebx, edx
// 00582cd3  0fb61c03             movzx ebx, byte ptr [ebx + eax]
// 00582cd7  885902               mov byte ptr [ecx + 2], bl
// 00582cda  8b5c2438             mov ebx, dword ptr [esp + 0x38]
// 00582cde  0fb61b               movzx ebx, byte ptr [ebx]
// 00582ce1  895c2434             mov dword ptr [esp + 0x34], ebx
// 00582ce5  03dd                 add ebx, ebp
// 00582ce7  0fb61c03             movzx ebx, byte ptr [ebx + eax]
// 00582ceb  885903               mov byte ptr [ecx + 3], bl
// 00582cee  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 00582cf2  03df                 add ebx, edi
// 00582cf4  0fb61c03             movzx ebx, byte ptr [ebx + eax]
// 00582cf8  885904               mov byte ptr [ecx + 4], bl
// 00582cfb  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 00582cff  03da                 add ebx, edx
// 00582d01  0fb61c03             movzx ebx, byte ptr [ebx + eax]
// 00582d05  83c103               add ecx, 3
// 00582d08  885902               mov byte ptr [ecx + 2], bl
// 00582d0b  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00582d0f  0fb61b               movzx ebx, byte ptr [ebx]
// 00582d12  895c2434             mov dword ptr [esp + 0x34], ebx
// 00582d16  03dd                 add ebx, ebp
// 00582d18  0fb61c03             movzx ebx, byte ptr [ebx + eax]
// 00582d1c  881e                 mov byte ptr [esi], bl
// 00582d1e  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 00582d22  ff442410             inc dword ptr [esp + 0x10]
// 00582d26  03df                 add ebx, edi
// 00582d28  0fb61c03             movzx ebx, byte ptr [ebx + eax]
// 00582d2c  885e01               mov byte ptr [esi + 1], bl
// 00582d2f  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 00582d33  03da                 add ebx, edx
// 00582d35  0fb61c03             movzx ebx, byte ptr [ebx + eax]
// 00582d39  885e02               mov byte ptr [esi + 2], bl
// 00582d3c  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00582d40  0fb61b               movzx ebx, byte ptr [ebx]
// 00582d43  ff442438             inc dword ptr [esp + 0x38]
// 00582d47  ff442410             inc dword ptr [esp + 0x10]
// 00582d4b  895c2434             mov dword ptr [esp + 0x34], ebx
// 00582d4f  03dd                 add ebx, ebp
// 00582d51  0fb61c03             movzx ebx, byte ptr [ebx + eax]
// 00582d55  83c603               add esi, 3
// 00582d58  881e                 mov byte ptr [esi], bl
// 00582d5a  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 00582d5e  03df                 add ebx, edi
// 00582d60  0fb61c03             movzx ebx, byte ptr [ebx + eax]
// 00582d64  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 00582d68  03fa                 add edi, edx
// 00582d6a  885e01               mov byte ptr [esi + 1], bl
// 00582d6d  8a1407               mov dl, byte ptr [edi + eax]
// 00582d70  83c103               add ecx, 3
// 00582d73  885602               mov byte ptr [esi + 2], dl
// 00582d76  83c603               add esi, 3
// 00582d79  836c243c01           sub dword ptr [esp + 0x3c], 1
// 00582d7e  8b542414             mov edx, dword ptr [esp + 0x14]
// 00582d82  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 00582d86  0f85e5feffff         jne 0x582c71
// 00582d8c  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 00582d90  f6435c01             test byte ptr [ebx + 0x5c], 1
// 00582d94  7474                 je 0x582e0a
// 00582d96  0fb61f               movzx ebx, byte ptr [edi]
// 00582d99  0fb612               movzx edx, byte ptr [edx]
// 00582d9c  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00582da0  8b3c9f               mov edi, dword ptr [edi + ebx*4]
// 00582da3  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 00582da7  897c2430             mov dword ptr [esp + 0x30], edi
// 00582dab  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00582daf  8b3c97               mov edi, dword ptr [edi + edx*4]
// 00582db2  037c9d00             add edi, dword ptr [ebp + ebx*4]
// 00582db6  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 00582dba  8b1493               mov edx, dword ptr [ebx + edx*4]
// 00582dbd  8b5c2438             mov ebx, dword ptr [esp + 0x38]
// 00582dc1  0fb62b               movzx ebp, byte ptr [ebx]
// 00582dc4  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 00582dc8  03dd                 add ebx, ebp
// 00582dca  0fb61c03             movzx ebx, byte ptr [ebx + eax]
// 00582dce  8819                 mov byte ptr [ecx], bl
// 00582dd0  c1ff10               sar edi, 0x10
// 00582dd3  8d1c2f               lea ebx, [edi + ebp]
// 00582dd6  0fb61c03             movzx ebx, byte ptr [ebx + eax]
// 00582dda  885901               mov byte ptr [ecx + 1], bl
// 00582ddd  03ea                 add ebp, edx
// 00582ddf  0fb61c28             movzx ebx, byte ptr [eax + ebp]
// 00582de3  885902               mov byte ptr [ecx + 2], bl
// 00582de6  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00582dea  0fb609               movzx ecx, byte ptr [ecx]
// 00582ded  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 00582df1  03d9                 add ebx, ecx
// 00582df3  0fb61c03             movzx ebx, byte ptr [ebx + eax]
// 00582df7  03f9                 add edi, ecx
// 00582df9  881e                 mov byte ptr [esi], bl
// 00582dfb  0fb61c07             movzx ebx, byte ptr [edi + eax]
// 00582dff  03ca                 add ecx, edx
// 00582e01  885e01               mov byte ptr [esi + 1], bl
// 00582e04  8a1401               mov dl, byte ptr [ecx + eax]
// 00582e07  885602               mov byte ptr [esi + 2], dl
// 00582e0a  5f                   pop edi
// 00582e0b  5e                   pop esi
// 00582e0c  5d                   pop ebp
// 00582e0d  5b                   pop ebx
// 00582e0e  83c41c               add esp, 0x1c
// 00582e11  c3                   ret 
// library jpeg-6b/jdmerge.c (function _h2v2_merged_upsample)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmerge.c
