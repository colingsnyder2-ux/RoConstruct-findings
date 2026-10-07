// roc 2011-06 0057eb70  unit: seg_00570000  size: 634 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0057eb70
//
// 0057eb70  83ec28               sub esp, 0x28
// 0057eb73  8b442430             mov eax, dword ptr [esp + 0x30]
// 0057eb77  53                   push ebx
// 0057eb78  55                   push ebp
// 0057eb79  8b6c243c             mov ebp, dword ptr [esp + 0x3c]
// 0057eb7d  56                   push esi
// 0057eb7e  8b701c               mov esi, dword ptr [eax + 0x1c]
// 0057eb81  57                   push edi
// 0057eb82  8b7c243c             mov edi, dword ptr [esp + 0x3c]
// 0057eb86  8b8fdc000000         mov ecx, dword ptr [edi + 0xdc]
// 0057eb8c  8b5f1c               mov ebx, dword ptr [edi + 0x1c]
// 0057eb8f  03f6                 add esi, esi
// 0057eb91  83c102               add ecx, 2
// 0057eb94  03f6                 add esi, esi
// 0057eb96  51                   push ecx
// 0057eb97  03f6                 add esi, esi
// 0057eb99  83c5fc               add ebp, -4
// 0057eb9c  8d0436               lea eax, [esi + esi]
// 0057eb9f  55                   push ebp
// 0057eba0  e8bbfbffff           call 0x57e760
// 0057eba5  8b87b4000000         mov eax, dword ptr [edi + 0xb4]
// 0057ebab  8d1480               lea edx, [eax + eax*4]
// 0057ebae  c1e204               shl edx, 4
// 0057ebb1  b900400000           mov ecx, 0x4000
// 0057ebb6  2bca                 sub ecx, edx
// 0057ebb8  c1e004               shl eax, 4
// 0057ebbb  894c2444             mov dword ptr [esp + 0x44], ecx
// 0057ebbf  8944244c             mov dword ptr [esp + 0x4c], eax
// 0057ebc3  8b442448             mov eax, dword ptr [esp + 0x48]
// 0057ebc7  33c9                 xor ecx, ecx
// 0057ebc9  83c408               add esp, 8
// 0057ebcc  39480c               cmp dword ptr [eax + 0xc], ecx
// 0057ebcf  894c242c             mov dword ptr [esp + 0x2c], ecx
// 0057ebd3  0f8e09020000         jle 0x57ede2
// 0057ebd9  83c6fe               add esi, -2
// 0057ebdc  89742434             mov dword ptr [esp + 0x34], esi
// 0057ebe0  8bc5                 mov eax, ebp
// 0057ebe2  896c2428             mov dword ptr [esp + 0x28], ebp
// 0057ebe6  8b5808               mov ebx, dword ptr [eax + 8]
// 0057ebe9  8b542448             mov edx, dword ptr [esp + 0x48]
// 0057ebed  8b348a               mov esi, dword ptr [edx + ecx*4]
// 0057ebf0  8b5004               mov edx, dword ptr [eax + 4]
// 0057ebf3  8b08                 mov ecx, dword ptr [eax]
// 0057ebf5  8b400c               mov eax, dword ptr [eax + 0xc]
// 0057ebf8  8d6a02               lea ebp, [edx + 2]
// 0057ebfb  896c241c             mov dword ptr [esp + 0x1c], ebp
// 0057ebff  0fb628               movzx ebp, byte ptr [eax]
// 0057ec02  896c2410             mov dword ptr [esp + 0x10], ebp
// 0057ec06  0fb629               movzx ebp, byte ptr [ecx]
// 0057ec09  896c2430             mov dword ptr [esp + 0x30], ebp
// 0057ec0d  0fb62b               movzx ebp, byte ptr [ebx]
// 0057ec10  896c2418             mov dword ptr [esp + 0x18], ebp
// 0057ec14  0fb62a               movzx ebp, byte ptr [edx]
// 0057ec17  896c2414             mov dword ptr [esp + 0x14], ebp
// 0057ec1b  8d6802               lea ebp, [eax + 2]
// 0057ec1e  0fb64001             movzx eax, byte ptr [eax + 1]
// 0057ec22  896c2424             mov dword ptr [esp + 0x24], ebp
// 0057ec26  8d6902               lea ebp, [ecx + 2]
// 0057ec29  0fb64901             movzx ecx, byte ptr [ecx + 1]
// 0057ec2d  03c1                 add eax, ecx
// 0057ec2f  0fb64b02             movzx ecx, byte ptr [ebx + 2]
// 0057ec33  034c2414             add ecx, dword ptr [esp + 0x14]
// 0057ec37  0fb65201             movzx edx, byte ptr [edx + 1]
// 0057ec3b  03c8                 add ecx, eax
// 0057ec3d  8b442430             mov eax, dword ptr [esp + 0x30]
// 0057ec41  896c2420             mov dword ptr [esp + 0x20], ebp
// 0057ec45  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 0057ec49  0fb66d00             movzx ebp, byte ptr [ebp]
// 0057ec4d  8d7b02               lea edi, [ebx + 2]
// 0057ec50  03e9                 add ebp, ecx
// 0057ec52  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0057ec56  0fb609               movzx ecx, byte ptr [ecx]
// 0057ec59  036c2418             add ebp, dword ptr [esp + 0x18]
// 0057ec5d  03c8                 add ecx, eax
// 0057ec5f  03e8                 add ebp, eax
// 0057ec61  036c2410             add ebp, dword ptr [esp + 0x10]
// 0057ec65  8b442424             mov eax, dword ptr [esp + 0x24]
// 0057ec69  0fb600               movzx eax, byte ptr [eax]
// 0057ec6c  8d0c69               lea ecx, [ecx + ebp*2]
// 0057ec6f  03c1                 add eax, ecx
// 0057ec71  0fb64b01             movzx ecx, byte ptr [ebx + 1]
// 0057ec75  034c2414             add ecx, dword ptr [esp + 0x14]
// 0057ec79  03442410             add eax, dword ptr [esp + 0x10]
// 0057ec7d  03d1                 add edx, ecx
// 0057ec7f  03542418             add edx, dword ptr [esp + 0x18]
// 0057ec83  0faf442444           imul eax, dword ptr [esp + 0x44]
// 0057ec88  0faf54243c           imul edx, dword ptr [esp + 0x3c]
// 0057ec8d  8d841000800000       lea eax, [eax + edx + 0x8000]
// 0057ec94  8b542434             mov edx, dword ptr [esp + 0x34]
// 0057ec98  c1f810               sar eax, 0x10
// 0057ec9b  8806                 mov byte ptr [esi], al
// 0057ec9d  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0057eca1  46                   inc esi
// 0057eca2  8bcf                 mov ecx, edi
// 0057eca4  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0057eca8  89742410             mov dword ptr [esp + 0x10], esi
// 0057ecac  8b742420             mov esi, dword ptr [esp + 0x20]
// 0057ecb0  89542424             mov dword ptr [esp + 0x24], edx
// 0057ecb4  85d2                 test edx, edx
// 0057ecb6  0f8694000000         jbe 0x57ed50
// 0057ecbc  8d642400             lea esp, [esp]
// 0057ecc0  0fb65e01             movzx ebx, byte ptr [esi + 1]
// 0057ecc4  0fb65701             movzx edx, byte ptr [edi + 1]
// 0057ecc8  03d3                 add edx, ebx
// 0057ecca  0fb659ff             movzx ebx, byte ptr [ecx - 1]
// 0057ecce  03d3                 add edx, ebx
// 0057ecd0  0fb658ff             movzx ebx, byte ptr [eax - 1]
// 0057ecd4  03d3                 add edx, ebx
// 0057ecd6  0fb61f               movzx ebx, byte ptr [edi]
// 0057ecd9  03d3                 add edx, ebx
// 0057ecdb  0fb65902             movzx ebx, byte ptr [ecx + 2]
// 0057ecdf  03d3                 add edx, ebx
// 0057ece1  0fb61e               movzx ebx, byte ptr [esi]
// 0057ece4  03d3                 add edx, ebx
// 0057ece6  0fb65802             movzx ebx, byte ptr [eax + 2]
// 0057ecea  03d3                 add edx, ebx
// 0057ecec  0fb65fff             movzx ebx, byte ptr [edi - 1]
// 0057ecf0  0fb66801             movzx ebp, byte ptr [eax + 1]
// 0057ecf4  8d1453               lea edx, [ebx + edx*2]
// 0057ecf7  0fb65eff             movzx ebx, byte ptr [esi - 1]
// 0057ecfb  03d3                 add edx, ebx
// 0057ecfd  0fb65e02             movzx ebx, byte ptr [esi + 2]
// 0057ed01  03d3                 add edx, ebx
// 0057ed03  0fb65f02             movzx ebx, byte ptr [edi + 2]
// 0057ed07  03d3                 add edx, ebx
// 0057ed09  0fb65901             movzx ebx, byte ptr [ecx + 1]
// 0057ed0d  0faf542444           imul edx, dword ptr [esp + 0x44]
// 0057ed12  03dd                 add ebx, ebp
// 0057ed14  0fb629               movzx ebp, byte ptr [ecx]
// 0057ed17  03dd                 add ebx, ebp
// 0057ed19  0fb628               movzx ebp, byte ptr [eax]
// 0057ed1c  03dd                 add ebx, ebp
// 0057ed1e  0faf5c243c           imul ebx, dword ptr [esp + 0x3c]
// 0057ed23  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0057ed27  8d941a00800000       lea edx, [edx + ebx + 0x8000]
// 0057ed2e  c1fa10               sar edx, 0x10
// 0057ed31  885500               mov byte ptr [ebp], dl
// 0057ed34  45                   inc ebp
// 0057ed35  83c002               add eax, 2
// 0057ed38  83c102               add ecx, 2
// 0057ed3b  83c602               add esi, 2
// 0057ed3e  83c702               add edi, 2
// 0057ed41  836c242401           sub dword ptr [esp + 0x24], 1
// 0057ed46  896c2410             mov dword ptr [esp + 0x10], ebp
// 0057ed4a  0f8570ffffff         jne 0x57ecc0
// 0057ed50  0fb659ff             movzx ebx, byte ptr [ecx - 1]
// 0057ed54  0fb668ff             movzx ebp, byte ptr [eax - 1]
// 0057ed58  0fb65001             movzx edx, byte ptr [eax + 1]
// 0057ed5c  03dd                 add ebx, ebp
// 0057ed5e  0fb62f               movzx ebp, byte ptr [edi]
// 0057ed61  03ea                 add ebp, edx
// 0057ed63  89542424             mov dword ptr [esp + 0x24], edx
// 0057ed67  0fb616               movzx edx, byte ptr [esi]
// 0057ed6a  03eb                 add ebp, ebx
// 0057ed6c  0fb65e01             movzx ebx, byte ptr [esi + 1]
// 0057ed70  0fb676ff             movzx esi, byte ptr [esi - 1]
// 0057ed74  03d5                 add edx, ebp
// 0057ed76  8bea                 mov ebp, edx
// 0057ed78  0fb65101             movzx edx, byte ptr [ecx + 1]
// 0057ed7c  0fb609               movzx ecx, byte ptr [ecx]
// 0057ed7f  034c2424             add ecx, dword ptr [esp + 0x24]
// 0057ed83  03ea                 add ebp, edx
// 0057ed85  89542420             mov dword ptr [esp + 0x20], edx
// 0057ed89  0fb65701             movzx edx, byte ptr [edi + 1]
// 0057ed8d  0fb67fff             movzx edi, byte ptr [edi - 1]
// 0057ed91  03eb                 add ebp, ebx
// 0057ed93  03ea                 add ebp, edx
// 0057ed95  03fb                 add edi, ebx
// 0057ed97  8d3c6f               lea edi, [edi + ebp*2]
// 0057ed9a  03f7                 add esi, edi
// 0057ed9c  03f2                 add esi, edx
// 0057ed9e  0fb610               movzx edx, byte ptr [eax]
// 0057eda1  0faf742444           imul esi, dword ptr [esp + 0x44]
// 0057eda6  03d1                 add edx, ecx
// 0057eda8  03542420             add edx, dword ptr [esp + 0x20]
// 0057edac  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0057edb0  0faf54243c           imul edx, dword ptr [esp + 0x3c]
// 0057edb5  8d841600800000       lea eax, [esi + edx + 0x8000]
// 0057edbc  8b542440             mov edx, dword ptr [esp + 0x40]
// 0057edc0  c1f810               sar eax, 0x10
// 0057edc3  8801                 mov byte ptr [ecx], al
// 0057edc5  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0057edc9  8b442428             mov eax, dword ptr [esp + 0x28]
// 0057edcd  41                   inc ecx
// 0057edce  83c008               add eax, 8
// 0057edd1  3b4a0c               cmp ecx, dword ptr [edx + 0xc]
// 0057edd4  89442428             mov dword ptr [esp + 0x28], eax
// 0057edd8  894c242c             mov dword ptr [esp + 0x2c], ecx
// 0057eddc  0f8c04feffff         jl 0x57ebe6
// 0057ede2  5f                   pop edi
// 0057ede3  5e                   pop esi
// 0057ede4  5d                   pop ebp
// 0057ede5  5b                   pop ebx
// 0057ede6  83c428               add esp, 0x28
// 0057ede9  c3                   ret 
// library jpeg-6b/jcsample.c (function _h2v2_smooth_downsample)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcsample.c
