// from server: 100% by auto
// roc 2012-06 006645c0  unit: seg_00660000  size: 530 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006645c0
//
// 006645c0  83ec1c               sub esp, 0x1c
// 006645c3  53                   push ebx
// 006645c4  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 006645c8  8b8ba0010000         mov ecx, dword ptr [ebx + 0x1a0]
// 006645ce  8b5110               mov edx, dword ptr [ecx + 0x10]
// 006645d1  8b8320010000         mov eax, dword ptr [ebx + 0x120]
// 006645d7  89542410             mov dword ptr [esp + 0x10], edx
// 006645db  8b5114               mov edx, dword ptr [ecx + 0x14]
// 006645de  8954241c             mov dword ptr [esp + 0x1c], edx
// 006645e2  8b5118               mov edx, dword ptr [ecx + 0x18]
// 006645e5  8b491c               mov ecx, dword ptr [ecx + 0x1c]
// 006645e8  55                   push ebp
// 006645e9  8b6b5c               mov ebp, dword ptr [ebx + 0x5c]
// 006645ec  8954241c             mov dword ptr [esp + 0x1c], edx
// 006645f0  894c2418             mov dword ptr [esp + 0x18], ecx
// 006645f4  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 006645f8  8b11                 mov edx, dword ptr [ecx]
// 006645fa  56                   push esi
// 006645fb  8b742434             mov esi, dword ptr [esp + 0x34]
// 006645ff  8d14f2               lea edx, [edx + esi*8]
// 00664602  57                   push edi
// 00664603  8b3a                 mov edi, dword ptr [edx]
// 00664605  8b5204               mov edx, dword ptr [edx + 4]
// 00664608  89542410             mov dword ptr [esp + 0x10], edx
// 0066460c  8b5104               mov edx, dword ptr [ecx + 4]
// 0066460f  8b4908               mov ecx, dword ptr [ecx + 8]
// 00664612  8b14b2               mov edx, dword ptr [edx + esi*4]
// 00664615  897c2438             mov dword ptr [esp + 0x38], edi
// 00664619  8b3cb1               mov edi, dword ptr [ecx + esi*4]
// 0066461c  8b74243c             mov esi, dword ptr [esp + 0x3c]
// 00664620  8b0e                 mov ecx, dword ptr [esi]
// 00664622  8b7604               mov esi, dword ptr [esi + 4]
// 00664625  d1ed                 shr ebp, 1
// 00664627  896c243c             mov dword ptr [esp + 0x3c], ebp
// 0066462b  0f841f010000         je 0x664750
// 00664631  0fb61a               movzx ebx, byte ptr [edx]
// 00664634  895c2434             mov dword ptr [esp + 0x34], ebx
// 00664638  42                   inc edx
// 00664639  47                   inc edi
// 0066463a  89542414             mov dword ptr [esp + 0x14], edx
// 0066463e  0fb657ff             movzx edx, byte ptr [edi - 1]
// 00664642  897c2418             mov dword ptr [esp + 0x18], edi
// 00664646  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0066464a  8b2c97               mov ebp, dword ptr [edi + edx*4]
// 0066464d  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00664651  8b3c9f               mov edi, dword ptr [edi + ebx*4]
// 00664654  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 00664658  033c93               add edi, dword ptr [ebx + edx*4]
// 0066465b  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 0066465f  8b542428             mov edx, dword ptr [esp + 0x28]
// 00664663  8b149a               mov edx, dword ptr [edx + ebx*4]
// 00664666  8b5c2438             mov ebx, dword ptr [esp + 0x38]
// 0066466a  0fb61b               movzx ebx, byte ptr [ebx]
// 0066466d  895c2434             mov dword ptr [esp + 0x34], ebx
// 00664671  03dd                 add ebx, ebp
// 00664673  0fb61c03             movzx ebx, byte ptr [ebx + eax]
// 00664677  8819                 mov byte ptr [ecx], bl
// 00664679  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 0066467d  ff442438             inc dword ptr [esp + 0x38]
// 00664681  c1ff10               sar edi, 0x10
// 00664684  03df                 add ebx, edi
// 00664686  0fb61c03             movzx ebx, byte ptr [ebx + eax]
// 0066468a  885901               mov byte ptr [ecx + 1], bl
// 0066468d  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 00664691  03da                 add ebx, edx
// 00664693  0fb61c03             movzx ebx, byte ptr [ebx + eax]
// 00664697  885902               mov byte ptr [ecx + 2], bl
// 0066469a  8b5c2438             mov ebx, dword ptr [esp + 0x38]
// 0066469e  0fb61b               movzx ebx, byte ptr [ebx]
// 006646a1  895c2434             mov dword ptr [esp + 0x34], ebx
// 006646a5  03dd                 add ebx, ebp
// 006646a7  0fb61c03             movzx ebx, byte ptr [ebx + eax]
// 006646ab  885903               mov byte ptr [ecx + 3], bl
// 006646ae  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 006646b2  03df                 add ebx, edi
// 006646b4  0fb61c03             movzx ebx, byte ptr [ebx + eax]
// 006646b8  885904               mov byte ptr [ecx + 4], bl
// 006646bb  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 006646bf  03da                 add ebx, edx
// 006646c1  0fb61c03             movzx ebx, byte ptr [ebx + eax]
// 006646c5  83c103               add ecx, 3
// 006646c8  885902               mov byte ptr [ecx + 2], bl
// 006646cb  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 006646cf  0fb61b               movzx ebx, byte ptr [ebx]
// 006646d2  895c2434             mov dword ptr [esp + 0x34], ebx
// 006646d6  03dd                 add ebx, ebp
// 006646d8  0fb61c03             movzx ebx, byte ptr [ebx + eax]
// 006646dc  881e                 mov byte ptr [esi], bl
// 006646de  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 006646e2  ff442410             inc dword ptr [esp + 0x10]
// 006646e6  03df                 add ebx, edi
// 006646e8  0fb61c03             movzx ebx, byte ptr [ebx + eax]
// 006646ec  885e01               mov byte ptr [esi + 1], bl
// 006646ef  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 006646f3  03da                 add ebx, edx
// 006646f5  0fb61c03             movzx ebx, byte ptr [ebx + eax]
// 006646f9  885e02               mov byte ptr [esi + 2], bl
// 006646fc  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00664700  0fb61b               movzx ebx, byte ptr [ebx]
// 00664703  ff442438             inc dword ptr [esp + 0x38]
// 00664707  ff442410             inc dword ptr [esp + 0x10]
// 0066470b  895c2434             mov dword ptr [esp + 0x34], ebx
// 0066470f  03dd                 add ebx, ebp
// 00664711  0fb61c03             movzx ebx, byte ptr [ebx + eax]
// 00664715  83c603               add esi, 3
// 00664718  881e                 mov byte ptr [esi], bl
// 0066471a  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 0066471e  03df                 add ebx, edi
// 00664720  0fb61c03             movzx ebx, byte ptr [ebx + eax]
// 00664724  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 00664728  03fa                 add edi, edx
// 0066472a  885e01               mov byte ptr [esi + 1], bl
// 0066472d  8a1407               mov dl, byte ptr [edi + eax]
// 00664730  83c103               add ecx, 3
// 00664733  885602               mov byte ptr [esi + 2], dl
// 00664736  83c603               add esi, 3
// 00664739  836c243c01           sub dword ptr [esp + 0x3c], 1
// 0066473e  8b542414             mov edx, dword ptr [esp + 0x14]
// 00664742  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 00664746  0f85e5feffff         jne 0x664631
// 0066474c  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 00664750  f6435c01             test byte ptr [ebx + 0x5c], 1
// 00664754  7474                 je 0x6647ca
// 00664756  0fb61f               movzx ebx, byte ptr [edi]
// 00664759  0fb612               movzx edx, byte ptr [edx]
// 0066475c  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00664760  8b3c9f               mov edi, dword ptr [edi + ebx*4]
// 00664763  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 00664767  897c2430             mov dword ptr [esp + 0x30], edi
// 0066476b  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0066476f  8b3c97               mov edi, dword ptr [edi + edx*4]
// 00664772  037c9d00             add edi, dword ptr [ebp + ebx*4]
// 00664776  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 0066477a  8b1493               mov edx, dword ptr [ebx + edx*4]
// 0066477d  8b5c2438             mov ebx, dword ptr [esp + 0x38]
// 00664781  0fb62b               movzx ebp, byte ptr [ebx]
// 00664784  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 00664788  03dd                 add ebx, ebp
// 0066478a  0fb61c03             movzx ebx, byte ptr [ebx + eax]
// 0066478e  8819                 mov byte ptr [ecx], bl
// 00664790  c1ff10               sar edi, 0x10
// 00664793  8d1c2f               lea ebx, [edi + ebp]
// 00664796  0fb61c03             movzx ebx, byte ptr [ebx + eax]
// 0066479a  885901               mov byte ptr [ecx + 1], bl
// 0066479d  03ea                 add ebp, edx
// 0066479f  0fb61c28             movzx ebx, byte ptr [eax + ebp]
// 006647a3  885902               mov byte ptr [ecx + 2], bl
// 006647a6  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006647aa  0fb609               movzx ecx, byte ptr [ecx]
// 006647ad  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 006647b1  03d9                 add ebx, ecx
// 006647b3  0fb61c03             movzx ebx, byte ptr [ebx + eax]
// 006647b7  03f9                 add edi, ecx
// 006647b9  881e                 mov byte ptr [esi], bl
// 006647bb  0fb61c07             movzx ebx, byte ptr [edi + eax]
// 006647bf  03ca                 add ecx, edx
// 006647c1  885e01               mov byte ptr [esi + 1], bl
// 006647c4  8a1401               mov dl, byte ptr [ecx + eax]
// 006647c7  885602               mov byte ptr [esi + 2], dl
// 006647ca  5f                   pop edi
// 006647cb  5e                   pop esi
// 006647cc  5d                   pop ebp
// 006647cd  5b                   pop ebx
// 006647ce  83c41c               add esp, 0x1c
// 006647d1  c3                   ret 
// library jpeg-6b/jdmerge.c (function _h2v2_merged_upsample)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmerge.c
