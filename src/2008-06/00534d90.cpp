// roc 2008-06 00534d90  unit: seg_00530000  size: 530 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00534d90
//
// 00534d90  83ec1c               sub esp, 0x1c
// 00534d93  53                   push ebx
// 00534d94  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 00534d98  8b8ba0010000         mov ecx, dword ptr [ebx + 0x1a0]
// 00534d9e  8b5110               mov edx, dword ptr [ecx + 0x10]
// 00534da1  8b8320010000         mov eax, dword ptr [ebx + 0x120]
// 00534da7  89542410             mov dword ptr [esp + 0x10], edx
// 00534dab  8b5114               mov edx, dword ptr [ecx + 0x14]
// 00534dae  8954241c             mov dword ptr [esp + 0x1c], edx
// 00534db2  8b5118               mov edx, dword ptr [ecx + 0x18]
// 00534db5  8b491c               mov ecx, dword ptr [ecx + 0x1c]
// 00534db8  55                   push ebp
// 00534db9  8b6b5c               mov ebp, dword ptr [ebx + 0x5c]
// 00534dbc  8954241c             mov dword ptr [esp + 0x1c], edx
// 00534dc0  894c2418             mov dword ptr [esp + 0x18], ecx
// 00534dc4  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00534dc8  8b11                 mov edx, dword ptr [ecx]
// 00534dca  56                   push esi
// 00534dcb  8b742434             mov esi, dword ptr [esp + 0x34]
// 00534dcf  8d14f2               lea edx, [edx + esi*8]
// 00534dd2  57                   push edi
// 00534dd3  8b3a                 mov edi, dword ptr [edx]
// 00534dd5  8b5204               mov edx, dword ptr [edx + 4]
// 00534dd8  89542410             mov dword ptr [esp + 0x10], edx
// 00534ddc  8b5104               mov edx, dword ptr [ecx + 4]
// 00534ddf  8b4908               mov ecx, dword ptr [ecx + 8]
// 00534de2  8b14b2               mov edx, dword ptr [edx + esi*4]
// 00534de5  897c2438             mov dword ptr [esp + 0x38], edi
// 00534de9  8b3cb1               mov edi, dword ptr [ecx + esi*4]
// 00534dec  8b74243c             mov esi, dword ptr [esp + 0x3c]
// 00534df0  8b0e                 mov ecx, dword ptr [esi]
// 00534df2  8b7604               mov esi, dword ptr [esi + 4]
// 00534df5  d1ed                 shr ebp, 1
// 00534df7  896c243c             mov dword ptr [esp + 0x3c], ebp
// 00534dfb  0f841f010000         je 0x534f20
// 00534e01  0fb61a               movzx ebx, byte ptr [edx]
// 00534e04  895c2434             mov dword ptr [esp + 0x34], ebx
// 00534e08  42                   inc edx
// 00534e09  47                   inc edi
// 00534e0a  89542414             mov dword ptr [esp + 0x14], edx
// 00534e0e  0fb657ff             movzx edx, byte ptr [edi - 1]
// 00534e12  897c2418             mov dword ptr [esp + 0x18], edi
// 00534e16  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00534e1a  8b2c97               mov ebp, dword ptr [edi + edx*4]
// 00534e1d  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00534e21  8b3c9f               mov edi, dword ptr [edi + ebx*4]
// 00534e24  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 00534e28  033c93               add edi, dword ptr [ebx + edx*4]
// 00534e2b  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 00534e2f  8b542428             mov edx, dword ptr [esp + 0x28]
// 00534e33  8b149a               mov edx, dword ptr [edx + ebx*4]
// 00534e36  8b5c2438             mov ebx, dword ptr [esp + 0x38]
// 00534e3a  0fb61b               movzx ebx, byte ptr [ebx]
// 00534e3d  895c2434             mov dword ptr [esp + 0x34], ebx
// 00534e41  03dd                 add ebx, ebp
// 00534e43  0fb61c03             movzx ebx, byte ptr [ebx + eax]
// 00534e47  8819                 mov byte ptr [ecx], bl
// 00534e49  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 00534e4d  ff442438             inc dword ptr [esp + 0x38]
// 00534e51  c1ff10               sar edi, 0x10
// 00534e54  03df                 add ebx, edi
// 00534e56  0fb61c03             movzx ebx, byte ptr [ebx + eax]
// 00534e5a  885901               mov byte ptr [ecx + 1], bl
// 00534e5d  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 00534e61  03da                 add ebx, edx
// 00534e63  0fb61c03             movzx ebx, byte ptr [ebx + eax]
// 00534e67  885902               mov byte ptr [ecx + 2], bl
// 00534e6a  8b5c2438             mov ebx, dword ptr [esp + 0x38]
// 00534e6e  0fb61b               movzx ebx, byte ptr [ebx]
// 00534e71  895c2434             mov dword ptr [esp + 0x34], ebx
// 00534e75  03dd                 add ebx, ebp
// 00534e77  0fb61c03             movzx ebx, byte ptr [ebx + eax]
// 00534e7b  885903               mov byte ptr [ecx + 3], bl
// 00534e7e  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 00534e82  03df                 add ebx, edi
// 00534e84  0fb61c03             movzx ebx, byte ptr [ebx + eax]
// 00534e88  885904               mov byte ptr [ecx + 4], bl
// 00534e8b  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 00534e8f  03da                 add ebx, edx
// 00534e91  0fb61c03             movzx ebx, byte ptr [ebx + eax]
// 00534e95  83c103               add ecx, 3
// 00534e98  885902               mov byte ptr [ecx + 2], bl
// 00534e9b  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00534e9f  0fb61b               movzx ebx, byte ptr [ebx]
// 00534ea2  895c2434             mov dword ptr [esp + 0x34], ebx
// 00534ea6  03dd                 add ebx, ebp
// 00534ea8  0fb61c03             movzx ebx, byte ptr [ebx + eax]
// 00534eac  881e                 mov byte ptr [esi], bl
// 00534eae  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 00534eb2  ff442410             inc dword ptr [esp + 0x10]
// 00534eb6  03df                 add ebx, edi
// 00534eb8  0fb61c03             movzx ebx, byte ptr [ebx + eax]
// 00534ebc  885e01               mov byte ptr [esi + 1], bl
// 00534ebf  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 00534ec3  03da                 add ebx, edx
// 00534ec5  0fb61c03             movzx ebx, byte ptr [ebx + eax]
// 00534ec9  885e02               mov byte ptr [esi + 2], bl
// 00534ecc  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00534ed0  0fb61b               movzx ebx, byte ptr [ebx]
// 00534ed3  ff442438             inc dword ptr [esp + 0x38]
// 00534ed7  ff442410             inc dword ptr [esp + 0x10]
// 00534edb  895c2434             mov dword ptr [esp + 0x34], ebx
// 00534edf  03dd                 add ebx, ebp
// 00534ee1  0fb61c03             movzx ebx, byte ptr [ebx + eax]
// 00534ee5  83c603               add esi, 3
// 00534ee8  881e                 mov byte ptr [esi], bl
// 00534eea  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 00534eee  03df                 add ebx, edi
// 00534ef0  0fb61c03             movzx ebx, byte ptr [ebx + eax]
// 00534ef4  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 00534ef8  03fa                 add edi, edx
// 00534efa  885e01               mov byte ptr [esi + 1], bl
// 00534efd  8a1407               mov dl, byte ptr [edi + eax]
// 00534f00  83c103               add ecx, 3
// 00534f03  885602               mov byte ptr [esi + 2], dl
// 00534f06  83c603               add esi, 3
// 00534f09  836c243c01           sub dword ptr [esp + 0x3c], 1
// 00534f0e  8b542414             mov edx, dword ptr [esp + 0x14]
// 00534f12  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 00534f16  0f85e5feffff         jne 0x534e01
// 00534f1c  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 00534f20  f6435c01             test byte ptr [ebx + 0x5c], 1
// 00534f24  7474                 je 0x534f9a
// 00534f26  0fb61f               movzx ebx, byte ptr [edi]
// 00534f29  0fb612               movzx edx, byte ptr [edx]
// 00534f2c  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00534f30  8b3c9f               mov edi, dword ptr [edi + ebx*4]
// 00534f33  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 00534f37  897c2430             mov dword ptr [esp + 0x30], edi
// 00534f3b  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00534f3f  8b3c97               mov edi, dword ptr [edi + edx*4]
// 00534f42  037c9d00             add edi, dword ptr [ebp + ebx*4]
// 00534f46  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 00534f4a  8b1493               mov edx, dword ptr [ebx + edx*4]
// 00534f4d  8b5c2438             mov ebx, dword ptr [esp + 0x38]
// 00534f51  0fb62b               movzx ebp, byte ptr [ebx]
// 00534f54  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 00534f58  03dd                 add ebx, ebp
// 00534f5a  0fb61c03             movzx ebx, byte ptr [ebx + eax]
// 00534f5e  8819                 mov byte ptr [ecx], bl
// 00534f60  c1ff10               sar edi, 0x10
// 00534f63  8d1c2f               lea ebx, [edi + ebp]
// 00534f66  0fb61c03             movzx ebx, byte ptr [ebx + eax]
// 00534f6a  885901               mov byte ptr [ecx + 1], bl
// 00534f6d  03ea                 add ebp, edx
// 00534f6f  0fb61c28             movzx ebx, byte ptr [eax + ebp]
// 00534f73  885902               mov byte ptr [ecx + 2], bl
// 00534f76  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00534f7a  0fb609               movzx ecx, byte ptr [ecx]
// 00534f7d  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 00534f81  03d9                 add ebx, ecx
// 00534f83  0fb61c03             movzx ebx, byte ptr [ebx + eax]
// 00534f87  03f9                 add edi, ecx
// 00534f89  881e                 mov byte ptr [esi], bl
// 00534f8b  0fb61c07             movzx ebx, byte ptr [edi + eax]
// 00534f8f  03ca                 add ecx, edx
// 00534f91  885e01               mov byte ptr [esi + 1], bl
// 00534f94  8a1401               mov dl, byte ptr [ecx + eax]
// 00534f97  885602               mov byte ptr [esi + 2], dl
// 00534f9a  5f                   pop edi
// 00534f9b  5e                   pop esi
// 00534f9c  5d                   pop ebp
// 00534f9d  5b                   pop ebx
// 00534f9e  83c41c               add esp, 0x1c
// 00534fa1  c3                   ret 
// library jpeg-6b/jdmerge.c (function _h2v2_merged_upsample)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmerge.c
