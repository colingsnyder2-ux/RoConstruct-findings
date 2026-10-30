// roc 2009-12 006210a0  unit: seg_00620000  size: 530 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006210a0
//
// 006210a0  83ec1c               sub esp, 0x1c
// 006210a3  53                   push ebx
// 006210a4  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 006210a8  8b8ba0010000         mov ecx, dword ptr [ebx + 0x1a0]
// 006210ae  8b5110               mov edx, dword ptr [ecx + 0x10]
// 006210b1  8b8320010000         mov eax, dword ptr [ebx + 0x120]
// 006210b7  89542410             mov dword ptr [esp + 0x10], edx
// 006210bb  8b5114               mov edx, dword ptr [ecx + 0x14]
// 006210be  8954241c             mov dword ptr [esp + 0x1c], edx
// 006210c2  8b5118               mov edx, dword ptr [ecx + 0x18]
// 006210c5  8b491c               mov ecx, dword ptr [ecx + 0x1c]
// 006210c8  55                   push ebp
// 006210c9  8b6b5c               mov ebp, dword ptr [ebx + 0x5c]
// 006210cc  8954241c             mov dword ptr [esp + 0x1c], edx
// 006210d0  894c2418             mov dword ptr [esp + 0x18], ecx
// 006210d4  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 006210d8  8b11                 mov edx, dword ptr [ecx]
// 006210da  56                   push esi
// 006210db  8b742434             mov esi, dword ptr [esp + 0x34]
// 006210df  8d14f2               lea edx, [edx + esi*8]
// 006210e2  57                   push edi
// 006210e3  8b3a                 mov edi, dword ptr [edx]
// 006210e5  8b5204               mov edx, dword ptr [edx + 4]
// 006210e8  89542410             mov dword ptr [esp + 0x10], edx
// 006210ec  8b5104               mov edx, dword ptr [ecx + 4]
// 006210ef  8b4908               mov ecx, dword ptr [ecx + 8]
// 006210f2  8b14b2               mov edx, dword ptr [edx + esi*4]
// 006210f5  897c2438             mov dword ptr [esp + 0x38], edi
// 006210f9  8b3cb1               mov edi, dword ptr [ecx + esi*4]
// 006210fc  8b74243c             mov esi, dword ptr [esp + 0x3c]
// 00621100  8b0e                 mov ecx, dword ptr [esi]
// 00621102  8b7604               mov esi, dword ptr [esi + 4]
// 00621105  d1ed                 shr ebp, 1
// 00621107  896c243c             mov dword ptr [esp + 0x3c], ebp
// 0062110b  0f841f010000         je 0x621230
// 00621111  0fb61a               movzx ebx, byte ptr [edx]
// 00621114  895c2434             mov dword ptr [esp + 0x34], ebx
// 00621118  42                   inc edx
// 00621119  47                   inc edi
// 0062111a  89542414             mov dword ptr [esp + 0x14], edx
// 0062111e  0fb657ff             movzx edx, byte ptr [edi - 1]
// 00621122  897c2418             mov dword ptr [esp + 0x18], edi
// 00621126  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0062112a  8b2c97               mov ebp, dword ptr [edi + edx*4]
// 0062112d  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00621131  8b3c9f               mov edi, dword ptr [edi + ebx*4]
// 00621134  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 00621138  033c93               add edi, dword ptr [ebx + edx*4]
// 0062113b  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 0062113f  8b542428             mov edx, dword ptr [esp + 0x28]
// 00621143  8b149a               mov edx, dword ptr [edx + ebx*4]
// 00621146  8b5c2438             mov ebx, dword ptr [esp + 0x38]
// 0062114a  0fb61b               movzx ebx, byte ptr [ebx]
// 0062114d  895c2434             mov dword ptr [esp + 0x34], ebx
// 00621151  03dd                 add ebx, ebp
// 00621153  0fb61c03             movzx ebx, byte ptr [ebx + eax]
// 00621157  8819                 mov byte ptr [ecx], bl
// 00621159  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 0062115d  ff442438             inc dword ptr [esp + 0x38]
// 00621161  c1ff10               sar edi, 0x10
// 00621164  03df                 add ebx, edi
// 00621166  0fb61c03             movzx ebx, byte ptr [ebx + eax]
// 0062116a  885901               mov byte ptr [ecx + 1], bl
// 0062116d  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 00621171  03da                 add ebx, edx
// 00621173  0fb61c03             movzx ebx, byte ptr [ebx + eax]
// 00621177  885902               mov byte ptr [ecx + 2], bl
// 0062117a  8b5c2438             mov ebx, dword ptr [esp + 0x38]
// 0062117e  0fb61b               movzx ebx, byte ptr [ebx]
// 00621181  895c2434             mov dword ptr [esp + 0x34], ebx
// 00621185  03dd                 add ebx, ebp
// 00621187  0fb61c03             movzx ebx, byte ptr [ebx + eax]
// 0062118b  885903               mov byte ptr [ecx + 3], bl
// 0062118e  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 00621192  03df                 add ebx, edi
// 00621194  0fb61c03             movzx ebx, byte ptr [ebx + eax]
// 00621198  885904               mov byte ptr [ecx + 4], bl
// 0062119b  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 0062119f  03da                 add ebx, edx
// 006211a1  0fb61c03             movzx ebx, byte ptr [ebx + eax]
// 006211a5  83c103               add ecx, 3
// 006211a8  885902               mov byte ptr [ecx + 2], bl
// 006211ab  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 006211af  0fb61b               movzx ebx, byte ptr [ebx]
// 006211b2  895c2434             mov dword ptr [esp + 0x34], ebx
// 006211b6  03dd                 add ebx, ebp
// 006211b8  0fb61c03             movzx ebx, byte ptr [ebx + eax]
// 006211bc  881e                 mov byte ptr [esi], bl
// 006211be  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 006211c2  ff442410             inc dword ptr [esp + 0x10]
// 006211c6  03df                 add ebx, edi
// 006211c8  0fb61c03             movzx ebx, byte ptr [ebx + eax]
// 006211cc  885e01               mov byte ptr [esi + 1], bl
// 006211cf  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 006211d3  03da                 add ebx, edx
// 006211d5  0fb61c03             movzx ebx, byte ptr [ebx + eax]
// 006211d9  885e02               mov byte ptr [esi + 2], bl
// 006211dc  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 006211e0  0fb61b               movzx ebx, byte ptr [ebx]
// 006211e3  ff442438             inc dword ptr [esp + 0x38]
// 006211e7  ff442410             inc dword ptr [esp + 0x10]
// 006211eb  895c2434             mov dword ptr [esp + 0x34], ebx
// 006211ef  03dd                 add ebx, ebp
// 006211f1  0fb61c03             movzx ebx, byte ptr [ebx + eax]
// 006211f5  83c603               add esi, 3
// 006211f8  881e                 mov byte ptr [esi], bl
// 006211fa  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 006211fe  03df                 add ebx, edi
// 00621200  0fb61c03             movzx ebx, byte ptr [ebx + eax]
// 00621204  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 00621208  03fa                 add edi, edx
// 0062120a  885e01               mov byte ptr [esi + 1], bl
// 0062120d  8a1407               mov dl, byte ptr [edi + eax]
// 00621210  83c103               add ecx, 3
// 00621213  885602               mov byte ptr [esi + 2], dl
// 00621216  83c603               add esi, 3
// 00621219  836c243c01           sub dword ptr [esp + 0x3c], 1
// 0062121e  8b542414             mov edx, dword ptr [esp + 0x14]
// 00621222  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 00621226  0f85e5feffff         jne 0x621111
// 0062122c  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 00621230  f6435c01             test byte ptr [ebx + 0x5c], 1
// 00621234  7474                 je 0x6212aa
// 00621236  0fb61f               movzx ebx, byte ptr [edi]
// 00621239  0fb612               movzx edx, byte ptr [edx]
// 0062123c  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00621240  8b3c9f               mov edi, dword ptr [edi + ebx*4]
// 00621243  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 00621247  897c2430             mov dword ptr [esp + 0x30], edi
// 0062124b  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0062124f  8b3c97               mov edi, dword ptr [edi + edx*4]
// 00621252  037c9d00             add edi, dword ptr [ebp + ebx*4]
// 00621256  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 0062125a  8b1493               mov edx, dword ptr [ebx + edx*4]
// 0062125d  8b5c2438             mov ebx, dword ptr [esp + 0x38]
// 00621261  0fb62b               movzx ebp, byte ptr [ebx]
// 00621264  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 00621268  03dd                 add ebx, ebp
// 0062126a  0fb61c03             movzx ebx, byte ptr [ebx + eax]
// 0062126e  8819                 mov byte ptr [ecx], bl
// 00621270  c1ff10               sar edi, 0x10
// 00621273  8d1c2f               lea ebx, [edi + ebp]
// 00621276  0fb61c03             movzx ebx, byte ptr [ebx + eax]
// 0062127a  885901               mov byte ptr [ecx + 1], bl
// 0062127d  03ea                 add ebp, edx
// 0062127f  0fb61c28             movzx ebx, byte ptr [eax + ebp]
// 00621283  885902               mov byte ptr [ecx + 2], bl
// 00621286  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0062128a  0fb609               movzx ecx, byte ptr [ecx]
// 0062128d  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 00621291  03d9                 add ebx, ecx
// 00621293  0fb61c03             movzx ebx, byte ptr [ebx + eax]
// 00621297  03f9                 add edi, ecx
// 00621299  881e                 mov byte ptr [esi], bl
// 0062129b  0fb61c07             movzx ebx, byte ptr [edi + eax]
// 0062129f  03ca                 add ecx, edx
// 006212a1  885e01               mov byte ptr [esi + 1], bl
// 006212a4  8a1401               mov dl, byte ptr [ecx + eax]
// 006212a7  885602               mov byte ptr [esi + 2], dl
// 006212aa  5f                   pop edi
// 006212ab  5e                   pop esi
// 006212ac  5d                   pop ebp
// 006212ad  5b                   pop ebx
// 006212ae  83c41c               add esp, 0x1c
// 006212b1  c3                   ret 
// library jpeg-6b/jdmerge.c (function _h2v2_merged_upsample)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmerge.c
