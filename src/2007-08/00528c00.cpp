// roc 2007-08 00528c00  unit: seg_00520000  size: 538 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00528c00
//
// 00528c00  83ec1c               sub esp, 0x1c
// 00528c03  53                   push ebx
// 00528c04  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 00528c08  8b8ba0010000         mov ecx, dword ptr [ebx + 0x1a0]
// 00528c0e  8b5110               mov edx, dword ptr [ecx + 0x10]
// 00528c11  8b8320010000         mov eax, dword ptr [ebx + 0x120]
// 00528c17  89542410             mov dword ptr [esp + 0x10], edx
// 00528c1b  8b5114               mov edx, dword ptr [ecx + 0x14]
// 00528c1e  8954241c             mov dword ptr [esp + 0x1c], edx
// 00528c22  8b5118               mov edx, dword ptr [ecx + 0x18]
// 00528c25  8b491c               mov ecx, dword ptr [ecx + 0x1c]
// 00528c28  55                   push ebp
// 00528c29  8b6b5c               mov ebp, dword ptr [ebx + 0x5c]
// 00528c2c  8954241c             mov dword ptr [esp + 0x1c], edx
// 00528c30  894c2418             mov dword ptr [esp + 0x18], ecx
// 00528c34  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00528c38  8b11                 mov edx, dword ptr [ecx]
// 00528c3a  56                   push esi
// 00528c3b  8b742434             mov esi, dword ptr [esp + 0x34]
// 00528c3f  8d14f2               lea edx, [edx + esi*8]
// 00528c42  57                   push edi
// 00528c43  8b3a                 mov edi, dword ptr [edx]
// 00528c45  8b5204               mov edx, dword ptr [edx + 4]
// 00528c48  89542410             mov dword ptr [esp + 0x10], edx
// 00528c4c  8b5104               mov edx, dword ptr [ecx + 4]
// 00528c4f  8b4908               mov ecx, dword ptr [ecx + 8]
// 00528c52  8b14b2               mov edx, dword ptr [edx + esi*4]
// 00528c55  897c2438             mov dword ptr [esp + 0x38], edi
// 00528c59  8b3cb1               mov edi, dword ptr [ecx + esi*4]
// 00528c5c  8b74243c             mov esi, dword ptr [esp + 0x3c]
// 00528c60  8b0e                 mov ecx, dword ptr [esi]
// 00528c62  8b7604               mov esi, dword ptr [esi + 4]
// 00528c65  d1ed                 shr ebp, 1
// 00528c67  896c243c             mov dword ptr [esp + 0x3c], ebp
// 00528c6b  0f8427010000         je 0x528d98
// 00528c71  0fb61a               movzx ebx, byte ptr [edx]
// 00528c74  895c2434             mov dword ptr [esp + 0x34], ebx
// 00528c78  83c201               add edx, 1
// 00528c7b  83c701               add edi, 1
// 00528c7e  89542414             mov dword ptr [esp + 0x14], edx
// 00528c82  0fb657ff             movzx edx, byte ptr [edi - 1]
// 00528c86  897c2418             mov dword ptr [esp + 0x18], edi
// 00528c8a  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00528c8e  8b2c97               mov ebp, dword ptr [edi + edx*4]
// 00528c91  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00528c95  8b3c9f               mov edi, dword ptr [edi + ebx*4]
// 00528c98  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 00528c9c  033c93               add edi, dword ptr [ebx + edx*4]
// 00528c9f  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 00528ca3  8b542428             mov edx, dword ptr [esp + 0x28]
// 00528ca7  8b149a               mov edx, dword ptr [edx + ebx*4]
// 00528caa  8b5c2438             mov ebx, dword ptr [esp + 0x38]
// 00528cae  0fb61b               movzx ebx, byte ptr [ebx]
// 00528cb1  895c2434             mov dword ptr [esp + 0x34], ebx
// 00528cb5  03dd                 add ebx, ebp
// 00528cb7  0fb61c03             movzx ebx, byte ptr [ebx + eax]
// 00528cbb  8819                 mov byte ptr [ecx], bl
// 00528cbd  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 00528cc1  8344243801           add dword ptr [esp + 0x38], 1
// 00528cc6  c1ff10               sar edi, 0x10
// 00528cc9  03df                 add ebx, edi
// 00528ccb  0fb61c03             movzx ebx, byte ptr [ebx + eax]
// 00528ccf  885901               mov byte ptr [ecx + 1], bl
// 00528cd2  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 00528cd6  03da                 add ebx, edx
// 00528cd8  0fb61c03             movzx ebx, byte ptr [ebx + eax]
// 00528cdc  885902               mov byte ptr [ecx + 2], bl
// 00528cdf  8b5c2438             mov ebx, dword ptr [esp + 0x38]
// 00528ce3  0fb61b               movzx ebx, byte ptr [ebx]
// 00528ce6  895c2434             mov dword ptr [esp + 0x34], ebx
// 00528cea  03dd                 add ebx, ebp
// 00528cec  0fb61c03             movzx ebx, byte ptr [ebx + eax]
// 00528cf0  885903               mov byte ptr [ecx + 3], bl
// 00528cf3  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 00528cf7  03df                 add ebx, edi
// 00528cf9  0fb61c03             movzx ebx, byte ptr [ebx + eax]
// 00528cfd  885904               mov byte ptr [ecx + 4], bl
// 00528d00  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 00528d04  03da                 add ebx, edx
// 00528d06  0fb61c03             movzx ebx, byte ptr [ebx + eax]
// 00528d0a  83c103               add ecx, 3
// 00528d0d  885902               mov byte ptr [ecx + 2], bl
// 00528d10  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00528d14  0fb61b               movzx ebx, byte ptr [ebx]
// 00528d17  895c2434             mov dword ptr [esp + 0x34], ebx
// 00528d1b  03dd                 add ebx, ebp
// 00528d1d  0fb61c03             movzx ebx, byte ptr [ebx + eax]
// 00528d21  881e                 mov byte ptr [esi], bl
// 00528d23  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 00528d27  8344241001           add dword ptr [esp + 0x10], 1
// 00528d2c  03df                 add ebx, edi
// 00528d2e  0fb61c03             movzx ebx, byte ptr [ebx + eax]
// 00528d32  885e01               mov byte ptr [esi + 1], bl
// 00528d35  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 00528d39  03da                 add ebx, edx
// 00528d3b  0fb61c03             movzx ebx, byte ptr [ebx + eax]
// 00528d3f  885e02               mov byte ptr [esi + 2], bl
// 00528d42  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00528d46  0fb61b               movzx ebx, byte ptr [ebx]
// 00528d49  8344243801           add dword ptr [esp + 0x38], 1
// 00528d4e  8344241001           add dword ptr [esp + 0x10], 1
// 00528d53  895c2434             mov dword ptr [esp + 0x34], ebx
// 00528d57  03dd                 add ebx, ebp
// 00528d59  0fb61c03             movzx ebx, byte ptr [ebx + eax]
// 00528d5d  83c603               add esi, 3
// 00528d60  881e                 mov byte ptr [esi], bl
// 00528d62  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 00528d66  03df                 add ebx, edi
// 00528d68  0fb61c03             movzx ebx, byte ptr [ebx + eax]
// 00528d6c  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 00528d70  03fa                 add edi, edx
// 00528d72  885e01               mov byte ptr [esi + 1], bl
// 00528d75  8a1407               mov dl, byte ptr [edi + eax]
// 00528d78  83c103               add ecx, 3
// 00528d7b  885602               mov byte ptr [esi + 2], dl
// 00528d7e  83c603               add esi, 3
// 00528d81  836c243c01           sub dword ptr [esp + 0x3c], 1
// 00528d86  8b542414             mov edx, dword ptr [esp + 0x14]
// 00528d8a  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 00528d8e  0f85ddfeffff         jne 0x528c71
// 00528d94  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 00528d98  f6435c01             test byte ptr [ebx + 0x5c], 1
// 00528d9c  7474                 je 0x528e12
// 00528d9e  0fb61f               movzx ebx, byte ptr [edi]
// 00528da1  0fb612               movzx edx, byte ptr [edx]
// 00528da4  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00528da8  8b3c9f               mov edi, dword ptr [edi + ebx*4]
// 00528dab  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 00528daf  897c2430             mov dword ptr [esp + 0x30], edi
// 00528db3  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00528db7  8b3c97               mov edi, dword ptr [edi + edx*4]
// 00528dba  037c9d00             add edi, dword ptr [ebp + ebx*4]
// 00528dbe  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 00528dc2  8b1493               mov edx, dword ptr [ebx + edx*4]
// 00528dc5  8b5c2438             mov ebx, dword ptr [esp + 0x38]
// 00528dc9  0fb62b               movzx ebp, byte ptr [ebx]
// 00528dcc  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 00528dd0  03dd                 add ebx, ebp
// 00528dd2  0fb61c03             movzx ebx, byte ptr [ebx + eax]
// 00528dd6  8819                 mov byte ptr [ecx], bl
// 00528dd8  c1ff10               sar edi, 0x10
// 00528ddb  8d1c2f               lea ebx, [edi + ebp]
// 00528dde  0fb61c03             movzx ebx, byte ptr [ebx + eax]
// 00528de2  885901               mov byte ptr [ecx + 1], bl
// 00528de5  03ea                 add ebp, edx
// 00528de7  0fb61c28             movzx ebx, byte ptr [eax + ebp]
// 00528deb  885902               mov byte ptr [ecx + 2], bl
// 00528dee  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00528df2  0fb609               movzx ecx, byte ptr [ecx]
// 00528df5  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 00528df9  03d9                 add ebx, ecx
// 00528dfb  0fb61c03             movzx ebx, byte ptr [ebx + eax]
// 00528dff  03f9                 add edi, ecx
// 00528e01  881e                 mov byte ptr [esi], bl
// 00528e03  0fb61c07             movzx ebx, byte ptr [edi + eax]
// 00528e07  03ca                 add ecx, edx
// 00528e09  885e01               mov byte ptr [esi + 1], bl
// 00528e0c  8a1401               mov dl, byte ptr [ecx + eax]
// 00528e0f  885602               mov byte ptr [esi + 2], dl
// 00528e12  5f                   pop edi
// 00528e13  5e                   pop esi
// 00528e14  5d                   pop ebp
// 00528e15  5b                   pop ebx
// 00528e16  83c41c               add esp, 0x1c
// 00528e19  c3                   ret 
// library jpeg-6b/jdmerge.c (function _h2v2_merged_upsample)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmerge.c
