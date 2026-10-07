// roc 2008-06 0053aad0  unit: seg_00530000  size: 634 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0053aad0
//
// 0053aad0  83ec28               sub esp, 0x28
// 0053aad3  8b442430             mov eax, dword ptr [esp + 0x30]
// 0053aad7  53                   push ebx
// 0053aad8  55                   push ebp
// 0053aad9  8b6c243c             mov ebp, dword ptr [esp + 0x3c]
// 0053aadd  56                   push esi
// 0053aade  8b701c               mov esi, dword ptr [eax + 0x1c]
// 0053aae1  57                   push edi
// 0053aae2  8b7c243c             mov edi, dword ptr [esp + 0x3c]
// 0053aae6  8b8fdc000000         mov ecx, dword ptr [edi + 0xdc]
// 0053aaec  8b5f1c               mov ebx, dword ptr [edi + 0x1c]
// 0053aaef  03f6                 add esi, esi
// 0053aaf1  83c102               add ecx, 2
// 0053aaf4  03f6                 add esi, esi
// 0053aaf6  51                   push ecx
// 0053aaf7  03f6                 add esi, esi
// 0053aaf9  83c5fc               add ebp, -4
// 0053aafc  8d0436               lea eax, [esi + esi]
// 0053aaff  55                   push ebp
// 0053ab00  e8bbfbffff           call 0x53a6c0
// 0053ab05  8b87b4000000         mov eax, dword ptr [edi + 0xb4]
// 0053ab0b  8d1480               lea edx, [eax + eax*4]
// 0053ab0e  c1e204               shl edx, 4
// 0053ab11  b900400000           mov ecx, 0x4000
// 0053ab16  2bca                 sub ecx, edx
// 0053ab18  c1e004               shl eax, 4
// 0053ab1b  894c2444             mov dword ptr [esp + 0x44], ecx
// 0053ab1f  8944244c             mov dword ptr [esp + 0x4c], eax
// 0053ab23  8b442448             mov eax, dword ptr [esp + 0x48]
// 0053ab27  33c9                 xor ecx, ecx
// 0053ab29  83c408               add esp, 8
// 0053ab2c  39480c               cmp dword ptr [eax + 0xc], ecx
// 0053ab2f  894c242c             mov dword ptr [esp + 0x2c], ecx
// 0053ab33  0f8e09020000         jle 0x53ad42
// 0053ab39  83c6fe               add esi, -2
// 0053ab3c  89742434             mov dword ptr [esp + 0x34], esi
// 0053ab40  8bc5                 mov eax, ebp
// 0053ab42  896c2428             mov dword ptr [esp + 0x28], ebp
// 0053ab46  8b5808               mov ebx, dword ptr [eax + 8]
// 0053ab49  8b542448             mov edx, dword ptr [esp + 0x48]
// 0053ab4d  8b348a               mov esi, dword ptr [edx + ecx*4]
// 0053ab50  8b5004               mov edx, dword ptr [eax + 4]
// 0053ab53  8b08                 mov ecx, dword ptr [eax]
// 0053ab55  8b400c               mov eax, dword ptr [eax + 0xc]
// 0053ab58  8d6a02               lea ebp, [edx + 2]
// 0053ab5b  896c241c             mov dword ptr [esp + 0x1c], ebp
// 0053ab5f  0fb628               movzx ebp, byte ptr [eax]
// 0053ab62  896c2410             mov dword ptr [esp + 0x10], ebp
// 0053ab66  0fb629               movzx ebp, byte ptr [ecx]
// 0053ab69  896c2430             mov dword ptr [esp + 0x30], ebp
// 0053ab6d  0fb62b               movzx ebp, byte ptr [ebx]
// 0053ab70  896c2418             mov dword ptr [esp + 0x18], ebp
// 0053ab74  0fb62a               movzx ebp, byte ptr [edx]
// 0053ab77  896c2414             mov dword ptr [esp + 0x14], ebp
// 0053ab7b  8d6802               lea ebp, [eax + 2]
// 0053ab7e  0fb64001             movzx eax, byte ptr [eax + 1]
// 0053ab82  896c2424             mov dword ptr [esp + 0x24], ebp
// 0053ab86  8d6902               lea ebp, [ecx + 2]
// 0053ab89  0fb64901             movzx ecx, byte ptr [ecx + 1]
// 0053ab8d  03c1                 add eax, ecx
// 0053ab8f  0fb64b02             movzx ecx, byte ptr [ebx + 2]
// 0053ab93  034c2414             add ecx, dword ptr [esp + 0x14]
// 0053ab97  0fb65201             movzx edx, byte ptr [edx + 1]
// 0053ab9b  03c8                 add ecx, eax
// 0053ab9d  8b442430             mov eax, dword ptr [esp + 0x30]
// 0053aba1  896c2420             mov dword ptr [esp + 0x20], ebp
// 0053aba5  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 0053aba9  0fb66d00             movzx ebp, byte ptr [ebp]
// 0053abad  8d7b02               lea edi, [ebx + 2]
// 0053abb0  03e9                 add ebp, ecx
// 0053abb2  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0053abb6  0fb609               movzx ecx, byte ptr [ecx]
// 0053abb9  036c2418             add ebp, dword ptr [esp + 0x18]
// 0053abbd  03c8                 add ecx, eax
// 0053abbf  03e8                 add ebp, eax
// 0053abc1  036c2410             add ebp, dword ptr [esp + 0x10]
// 0053abc5  8b442424             mov eax, dword ptr [esp + 0x24]
// 0053abc9  0fb600               movzx eax, byte ptr [eax]
// 0053abcc  8d0c69               lea ecx, [ecx + ebp*2]
// 0053abcf  03c1                 add eax, ecx
// 0053abd1  0fb64b01             movzx ecx, byte ptr [ebx + 1]
// 0053abd5  034c2414             add ecx, dword ptr [esp + 0x14]
// 0053abd9  03442410             add eax, dword ptr [esp + 0x10]
// 0053abdd  03d1                 add edx, ecx
// 0053abdf  03542418             add edx, dword ptr [esp + 0x18]
// 0053abe3  0faf442444           imul eax, dword ptr [esp + 0x44]
// 0053abe8  0faf54243c           imul edx, dword ptr [esp + 0x3c]
// 0053abed  8d841000800000       lea eax, [eax + edx + 0x8000]
// 0053abf4  8b542434             mov edx, dword ptr [esp + 0x34]
// 0053abf8  c1f810               sar eax, 0x10
// 0053abfb  8806                 mov byte ptr [esi], al
// 0053abfd  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0053ac01  46                   inc esi
// 0053ac02  8bcf                 mov ecx, edi
// 0053ac04  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0053ac08  89742410             mov dword ptr [esp + 0x10], esi
// 0053ac0c  8b742420             mov esi, dword ptr [esp + 0x20]
// 0053ac10  89542424             mov dword ptr [esp + 0x24], edx
// 0053ac14  85d2                 test edx, edx
// 0053ac16  0f8694000000         jbe 0x53acb0
// 0053ac1c  8d642400             lea esp, [esp]
// 0053ac20  0fb65e01             movzx ebx, byte ptr [esi + 1]
// 0053ac24  0fb65701             movzx edx, byte ptr [edi + 1]
// 0053ac28  03d3                 add edx, ebx
// 0053ac2a  0fb659ff             movzx ebx, byte ptr [ecx - 1]
// 0053ac2e  03d3                 add edx, ebx
// 0053ac30  0fb658ff             movzx ebx, byte ptr [eax - 1]
// 0053ac34  03d3                 add edx, ebx
// 0053ac36  0fb61f               movzx ebx, byte ptr [edi]
// 0053ac39  03d3                 add edx, ebx
// 0053ac3b  0fb65902             movzx ebx, byte ptr [ecx + 2]
// 0053ac3f  03d3                 add edx, ebx
// 0053ac41  0fb61e               movzx ebx, byte ptr [esi]
// 0053ac44  03d3                 add edx, ebx
// 0053ac46  0fb65802             movzx ebx, byte ptr [eax + 2]
// 0053ac4a  03d3                 add edx, ebx
// 0053ac4c  0fb65fff             movzx ebx, byte ptr [edi - 1]
// 0053ac50  0fb66801             movzx ebp, byte ptr [eax + 1]
// 0053ac54  8d1453               lea edx, [ebx + edx*2]
// 0053ac57  0fb65eff             movzx ebx, byte ptr [esi - 1]
// 0053ac5b  03d3                 add edx, ebx
// 0053ac5d  0fb65e02             movzx ebx, byte ptr [esi + 2]
// 0053ac61  03d3                 add edx, ebx
// 0053ac63  0fb65f02             movzx ebx, byte ptr [edi + 2]
// 0053ac67  03d3                 add edx, ebx
// 0053ac69  0fb65901             movzx ebx, byte ptr [ecx + 1]
// 0053ac6d  0faf542444           imul edx, dword ptr [esp + 0x44]
// 0053ac72  03dd                 add ebx, ebp
// 0053ac74  0fb629               movzx ebp, byte ptr [ecx]
// 0053ac77  03dd                 add ebx, ebp
// 0053ac79  0fb628               movzx ebp, byte ptr [eax]
// 0053ac7c  03dd                 add ebx, ebp
// 0053ac7e  0faf5c243c           imul ebx, dword ptr [esp + 0x3c]
// 0053ac83  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0053ac87  8d941a00800000       lea edx, [edx + ebx + 0x8000]
// 0053ac8e  c1fa10               sar edx, 0x10
// 0053ac91  885500               mov byte ptr [ebp], dl
// 0053ac94  45                   inc ebp
// 0053ac95  83c002               add eax, 2
// 0053ac98  83c102               add ecx, 2
// 0053ac9b  83c602               add esi, 2
// 0053ac9e  83c702               add edi, 2
// 0053aca1  836c242401           sub dword ptr [esp + 0x24], 1
// 0053aca6  896c2410             mov dword ptr [esp + 0x10], ebp
// 0053acaa  0f8570ffffff         jne 0x53ac20
// 0053acb0  0fb659ff             movzx ebx, byte ptr [ecx - 1]
// 0053acb4  0fb668ff             movzx ebp, byte ptr [eax - 1]
// 0053acb8  0fb65001             movzx edx, byte ptr [eax + 1]
// 0053acbc  03dd                 add ebx, ebp
// 0053acbe  0fb62f               movzx ebp, byte ptr [edi]
// 0053acc1  03ea                 add ebp, edx
// 0053acc3  89542424             mov dword ptr [esp + 0x24], edx
// 0053acc7  0fb616               movzx edx, byte ptr [esi]
// 0053acca  03eb                 add ebp, ebx
// 0053accc  0fb65e01             movzx ebx, byte ptr [esi + 1]
// 0053acd0  0fb676ff             movzx esi, byte ptr [esi - 1]
// 0053acd4  03d5                 add edx, ebp
// 0053acd6  8bea                 mov ebp, edx
// 0053acd8  0fb65101             movzx edx, byte ptr [ecx + 1]
// 0053acdc  0fb609               movzx ecx, byte ptr [ecx]
// 0053acdf  034c2424             add ecx, dword ptr [esp + 0x24]
// 0053ace3  03ea                 add ebp, edx
// 0053ace5  89542420             mov dword ptr [esp + 0x20], edx
// 0053ace9  0fb65701             movzx edx, byte ptr [edi + 1]
// 0053aced  0fb67fff             movzx edi, byte ptr [edi - 1]
// 0053acf1  03eb                 add ebp, ebx
// 0053acf3  03ea                 add ebp, edx
// 0053acf5  03fb                 add edi, ebx
// 0053acf7  8d3c6f               lea edi, [edi + ebp*2]
// 0053acfa  03f7                 add esi, edi
// 0053acfc  03f2                 add esi, edx
// 0053acfe  0fb610               movzx edx, byte ptr [eax]
// 0053ad01  0faf742444           imul esi, dword ptr [esp + 0x44]
// 0053ad06  03d1                 add edx, ecx
// 0053ad08  03542420             add edx, dword ptr [esp + 0x20]
// 0053ad0c  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0053ad10  0faf54243c           imul edx, dword ptr [esp + 0x3c]
// 0053ad15  8d841600800000       lea eax, [esi + edx + 0x8000]
// 0053ad1c  8b542440             mov edx, dword ptr [esp + 0x40]
// 0053ad20  c1f810               sar eax, 0x10
// 0053ad23  8801                 mov byte ptr [ecx], al
// 0053ad25  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0053ad29  8b442428             mov eax, dword ptr [esp + 0x28]
// 0053ad2d  41                   inc ecx
// 0053ad2e  83c008               add eax, 8
// 0053ad31  3b4a0c               cmp ecx, dword ptr [edx + 0xc]
// 0053ad34  89442428             mov dword ptr [esp + 0x28], eax
// 0053ad38  894c242c             mov dword ptr [esp + 0x2c], ecx
// 0053ad3c  0f8c04feffff         jl 0x53ab46
// 0053ad42  5f                   pop edi
// 0053ad43  5e                   pop esi
// 0053ad44  5d                   pop ebp
// 0053ad45  5b                   pop ebx
// 0053ad46  83c428               add esp, 0x28
// 0053ad49  c3                   ret 
// library jpeg-6b/jcsample.c (function _h2v2_smooth_downsample)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcsample.c
