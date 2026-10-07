// roc 2012-06 0066a280  unit: seg_00660000  size: 634 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0066a280
//
// 0066a280  83ec28               sub esp, 0x28
// 0066a283  8b442430             mov eax, dword ptr [esp + 0x30]
// 0066a287  53                   push ebx
// 0066a288  55                   push ebp
// 0066a289  8b6c243c             mov ebp, dword ptr [esp + 0x3c]
// 0066a28d  56                   push esi
// 0066a28e  8b701c               mov esi, dword ptr [eax + 0x1c]
// 0066a291  57                   push edi
// 0066a292  8b7c243c             mov edi, dword ptr [esp + 0x3c]
// 0066a296  8b8fdc000000         mov ecx, dword ptr [edi + 0xdc]
// 0066a29c  8b5f1c               mov ebx, dword ptr [edi + 0x1c]
// 0066a29f  03f6                 add esi, esi
// 0066a2a1  83c102               add ecx, 2
// 0066a2a4  03f6                 add esi, esi
// 0066a2a6  51                   push ecx
// 0066a2a7  03f6                 add esi, esi
// 0066a2a9  83c5fc               add ebp, -4
// 0066a2ac  8d0436               lea eax, [esi + esi]
// 0066a2af  55                   push ebp
// 0066a2b0  e8bbfbffff           call 0x669e70
// 0066a2b5  8b87b4000000         mov eax, dword ptr [edi + 0xb4]
// 0066a2bb  8d1480               lea edx, [eax + eax*4]
// 0066a2be  c1e204               shl edx, 4
// 0066a2c1  b900400000           mov ecx, 0x4000
// 0066a2c6  2bca                 sub ecx, edx
// 0066a2c8  c1e004               shl eax, 4
// 0066a2cb  894c2444             mov dword ptr [esp + 0x44], ecx
// 0066a2cf  8944244c             mov dword ptr [esp + 0x4c], eax
// 0066a2d3  8b442448             mov eax, dword ptr [esp + 0x48]
// 0066a2d7  33c9                 xor ecx, ecx
// 0066a2d9  83c408               add esp, 8
// 0066a2dc  39480c               cmp dword ptr [eax + 0xc], ecx
// 0066a2df  894c242c             mov dword ptr [esp + 0x2c], ecx
// 0066a2e3  0f8e09020000         jle 0x66a4f2
// 0066a2e9  83c6fe               add esi, -2
// 0066a2ec  89742434             mov dword ptr [esp + 0x34], esi
// 0066a2f0  8bc5                 mov eax, ebp
// 0066a2f2  896c2428             mov dword ptr [esp + 0x28], ebp
// 0066a2f6  8b5808               mov ebx, dword ptr [eax + 8]
// 0066a2f9  8b542448             mov edx, dword ptr [esp + 0x48]
// 0066a2fd  8b348a               mov esi, dword ptr [edx + ecx*4]
// 0066a300  8b5004               mov edx, dword ptr [eax + 4]
// 0066a303  8b08                 mov ecx, dword ptr [eax]
// 0066a305  8b400c               mov eax, dword ptr [eax + 0xc]
// 0066a308  8d6a02               lea ebp, [edx + 2]
// 0066a30b  896c241c             mov dword ptr [esp + 0x1c], ebp
// 0066a30f  0fb628               movzx ebp, byte ptr [eax]
// 0066a312  896c2410             mov dword ptr [esp + 0x10], ebp
// 0066a316  0fb629               movzx ebp, byte ptr [ecx]
// 0066a319  896c2430             mov dword ptr [esp + 0x30], ebp
// 0066a31d  0fb62b               movzx ebp, byte ptr [ebx]
// 0066a320  896c2418             mov dword ptr [esp + 0x18], ebp
// 0066a324  0fb62a               movzx ebp, byte ptr [edx]
// 0066a327  896c2414             mov dword ptr [esp + 0x14], ebp
// 0066a32b  8d6802               lea ebp, [eax + 2]
// 0066a32e  0fb64001             movzx eax, byte ptr [eax + 1]
// 0066a332  896c2424             mov dword ptr [esp + 0x24], ebp
// 0066a336  8d6902               lea ebp, [ecx + 2]
// 0066a339  0fb64901             movzx ecx, byte ptr [ecx + 1]
// 0066a33d  03c1                 add eax, ecx
// 0066a33f  0fb64b02             movzx ecx, byte ptr [ebx + 2]
// 0066a343  034c2414             add ecx, dword ptr [esp + 0x14]
// 0066a347  0fb65201             movzx edx, byte ptr [edx + 1]
// 0066a34b  03c8                 add ecx, eax
// 0066a34d  8b442430             mov eax, dword ptr [esp + 0x30]
// 0066a351  896c2420             mov dword ptr [esp + 0x20], ebp
// 0066a355  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 0066a359  0fb66d00             movzx ebp, byte ptr [ebp]
// 0066a35d  8d7b02               lea edi, [ebx + 2]
// 0066a360  03e9                 add ebp, ecx
// 0066a362  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0066a366  0fb609               movzx ecx, byte ptr [ecx]
// 0066a369  036c2418             add ebp, dword ptr [esp + 0x18]
// 0066a36d  03c8                 add ecx, eax
// 0066a36f  03e8                 add ebp, eax
// 0066a371  036c2410             add ebp, dword ptr [esp + 0x10]
// 0066a375  8b442424             mov eax, dword ptr [esp + 0x24]
// 0066a379  0fb600               movzx eax, byte ptr [eax]
// 0066a37c  8d0c69               lea ecx, [ecx + ebp*2]
// 0066a37f  03c1                 add eax, ecx
// 0066a381  0fb64b01             movzx ecx, byte ptr [ebx + 1]
// 0066a385  034c2414             add ecx, dword ptr [esp + 0x14]
// 0066a389  03442410             add eax, dword ptr [esp + 0x10]
// 0066a38d  03d1                 add edx, ecx
// 0066a38f  03542418             add edx, dword ptr [esp + 0x18]
// 0066a393  0faf442444           imul eax, dword ptr [esp + 0x44]
// 0066a398  0faf54243c           imul edx, dword ptr [esp + 0x3c]
// 0066a39d  8d841000800000       lea eax, [eax + edx + 0x8000]
// 0066a3a4  8b542434             mov edx, dword ptr [esp + 0x34]
// 0066a3a8  c1f810               sar eax, 0x10
// 0066a3ab  8806                 mov byte ptr [esi], al
// 0066a3ad  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0066a3b1  46                   inc esi
// 0066a3b2  8bcf                 mov ecx, edi
// 0066a3b4  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0066a3b8  89742410             mov dword ptr [esp + 0x10], esi
// 0066a3bc  8b742420             mov esi, dword ptr [esp + 0x20]
// 0066a3c0  89542424             mov dword ptr [esp + 0x24], edx
// 0066a3c4  85d2                 test edx, edx
// 0066a3c6  0f8694000000         jbe 0x66a460
// 0066a3cc  8d642400             lea esp, [esp]
// 0066a3d0  0fb65e01             movzx ebx, byte ptr [esi + 1]
// 0066a3d4  0fb65701             movzx edx, byte ptr [edi + 1]
// 0066a3d8  03d3                 add edx, ebx
// 0066a3da  0fb659ff             movzx ebx, byte ptr [ecx - 1]
// 0066a3de  03d3                 add edx, ebx
// 0066a3e0  0fb658ff             movzx ebx, byte ptr [eax - 1]
// 0066a3e4  03d3                 add edx, ebx
// 0066a3e6  0fb61f               movzx ebx, byte ptr [edi]
// 0066a3e9  03d3                 add edx, ebx
// 0066a3eb  0fb65902             movzx ebx, byte ptr [ecx + 2]
// 0066a3ef  03d3                 add edx, ebx
// 0066a3f1  0fb61e               movzx ebx, byte ptr [esi]
// 0066a3f4  03d3                 add edx, ebx
// 0066a3f6  0fb65802             movzx ebx, byte ptr [eax + 2]
// 0066a3fa  03d3                 add edx, ebx
// 0066a3fc  0fb65fff             movzx ebx, byte ptr [edi - 1]
// 0066a400  0fb66801             movzx ebp, byte ptr [eax + 1]
// 0066a404  8d1453               lea edx, [ebx + edx*2]
// 0066a407  0fb65eff             movzx ebx, byte ptr [esi - 1]
// 0066a40b  03d3                 add edx, ebx
// 0066a40d  0fb65e02             movzx ebx, byte ptr [esi + 2]
// 0066a411  03d3                 add edx, ebx
// 0066a413  0fb65f02             movzx ebx, byte ptr [edi + 2]
// 0066a417  03d3                 add edx, ebx
// 0066a419  0fb65901             movzx ebx, byte ptr [ecx + 1]
// 0066a41d  0faf542444           imul edx, dword ptr [esp + 0x44]
// 0066a422  03dd                 add ebx, ebp
// 0066a424  0fb629               movzx ebp, byte ptr [ecx]
// 0066a427  03dd                 add ebx, ebp
// 0066a429  0fb628               movzx ebp, byte ptr [eax]
// 0066a42c  03dd                 add ebx, ebp
// 0066a42e  0faf5c243c           imul ebx, dword ptr [esp + 0x3c]
// 0066a433  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0066a437  8d941a00800000       lea edx, [edx + ebx + 0x8000]
// 0066a43e  c1fa10               sar edx, 0x10
// 0066a441  885500               mov byte ptr [ebp], dl
// 0066a444  45                   inc ebp
// 0066a445  83c002               add eax, 2
// 0066a448  83c102               add ecx, 2
// 0066a44b  83c602               add esi, 2
// 0066a44e  83c702               add edi, 2
// 0066a451  836c242401           sub dword ptr [esp + 0x24], 1
// 0066a456  896c2410             mov dword ptr [esp + 0x10], ebp
// 0066a45a  0f8570ffffff         jne 0x66a3d0
// 0066a460  0fb659ff             movzx ebx, byte ptr [ecx - 1]
// 0066a464  0fb668ff             movzx ebp, byte ptr [eax - 1]
// 0066a468  0fb65001             movzx edx, byte ptr [eax + 1]
// 0066a46c  03dd                 add ebx, ebp
// 0066a46e  0fb62f               movzx ebp, byte ptr [edi]
// 0066a471  03ea                 add ebp, edx
// 0066a473  89542424             mov dword ptr [esp + 0x24], edx
// 0066a477  0fb616               movzx edx, byte ptr [esi]
// 0066a47a  03eb                 add ebp, ebx
// 0066a47c  0fb65e01             movzx ebx, byte ptr [esi + 1]
// 0066a480  0fb676ff             movzx esi, byte ptr [esi - 1]
// 0066a484  03d5                 add edx, ebp
// 0066a486  8bea                 mov ebp, edx
// 0066a488  0fb65101             movzx edx, byte ptr [ecx + 1]
// 0066a48c  0fb609               movzx ecx, byte ptr [ecx]
// 0066a48f  034c2424             add ecx, dword ptr [esp + 0x24]
// 0066a493  03ea                 add ebp, edx
// 0066a495  89542420             mov dword ptr [esp + 0x20], edx
// 0066a499  0fb65701             movzx edx, byte ptr [edi + 1]
// 0066a49d  0fb67fff             movzx edi, byte ptr [edi - 1]
// 0066a4a1  03eb                 add ebp, ebx
// 0066a4a3  03ea                 add ebp, edx
// 0066a4a5  03fb                 add edi, ebx
// 0066a4a7  8d3c6f               lea edi, [edi + ebp*2]
// 0066a4aa  03f7                 add esi, edi
// 0066a4ac  03f2                 add esi, edx
// 0066a4ae  0fb610               movzx edx, byte ptr [eax]
// 0066a4b1  0faf742444           imul esi, dword ptr [esp + 0x44]
// 0066a4b6  03d1                 add edx, ecx
// 0066a4b8  03542420             add edx, dword ptr [esp + 0x20]
// 0066a4bc  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0066a4c0  0faf54243c           imul edx, dword ptr [esp + 0x3c]
// 0066a4c5  8d841600800000       lea eax, [esi + edx + 0x8000]
// 0066a4cc  8b542440             mov edx, dword ptr [esp + 0x40]
// 0066a4d0  c1f810               sar eax, 0x10
// 0066a4d3  8801                 mov byte ptr [ecx], al
// 0066a4d5  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0066a4d9  8b442428             mov eax, dword ptr [esp + 0x28]
// 0066a4dd  41                   inc ecx
// 0066a4de  83c008               add eax, 8
// 0066a4e1  3b4a0c               cmp ecx, dword ptr [edx + 0xc]
// 0066a4e4  89442428             mov dword ptr [esp + 0x28], eax
// 0066a4e8  894c242c             mov dword ptr [esp + 0x2c], ecx
// 0066a4ec  0f8c04feffff         jl 0x66a2f6
// 0066a4f2  5f                   pop edi
// 0066a4f3  5e                   pop esi
// 0066a4f4  5d                   pop ebp
// 0066a4f5  5b                   pop ebx
// 0066a4f6  83c428               add esp, 0x28
// 0066a4f9  c3                   ret 
// library jpeg-6b/jcsample.c (function _h2v2_smooth_downsample)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcsample.c
