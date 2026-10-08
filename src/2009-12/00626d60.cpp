// roc 2009-12 00626d60  unit: seg_00620000  size: 634 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00626d60
//
// 00626d60  83ec28               sub esp, 0x28
// 00626d63  8b442430             mov eax, dword ptr [esp + 0x30]
// 00626d67  53                   push ebx
// 00626d68  55                   push ebp
// 00626d69  8b6c243c             mov ebp, dword ptr [esp + 0x3c]
// 00626d6d  56                   push esi
// 00626d6e  8b701c               mov esi, dword ptr [eax + 0x1c]
// 00626d71  57                   push edi
// 00626d72  8b7c243c             mov edi, dword ptr [esp + 0x3c]
// 00626d76  8b8fdc000000         mov ecx, dword ptr [edi + 0xdc]
// 00626d7c  8b5f1c               mov ebx, dword ptr [edi + 0x1c]
// 00626d7f  03f6                 add esi, esi
// 00626d81  83c102               add ecx, 2
// 00626d84  03f6                 add esi, esi
// 00626d86  51                   push ecx
// 00626d87  03f6                 add esi, esi
// 00626d89  83c5fc               add ebp, -4
// 00626d8c  8d0436               lea eax, [esi + esi]
// 00626d8f  55                   push ebp
// 00626d90  e8bbfbffff           call 0x626950
// 00626d95  8b87b4000000         mov eax, dword ptr [edi + 0xb4]
// 00626d9b  8d1480               lea edx, [eax + eax*4]
// 00626d9e  c1e204               shl edx, 4
// 00626da1  b900400000           mov ecx, 0x4000
// 00626da6  2bca                 sub ecx, edx
// 00626da8  c1e004               shl eax, 4
// 00626dab  894c2444             mov dword ptr [esp + 0x44], ecx
// 00626daf  8944244c             mov dword ptr [esp + 0x4c], eax
// 00626db3  8b442448             mov eax, dword ptr [esp + 0x48]
// 00626db7  33c9                 xor ecx, ecx
// 00626db9  83c408               add esp, 8
// 00626dbc  39480c               cmp dword ptr [eax + 0xc], ecx
// 00626dbf  894c242c             mov dword ptr [esp + 0x2c], ecx
// 00626dc3  0f8e09020000         jle 0x626fd2
// 00626dc9  83c6fe               add esi, -2
// 00626dcc  89742434             mov dword ptr [esp + 0x34], esi
// 00626dd0  8bc5                 mov eax, ebp
// 00626dd2  896c2428             mov dword ptr [esp + 0x28], ebp
// 00626dd6  8b5808               mov ebx, dword ptr [eax + 8]
// 00626dd9  8b542448             mov edx, dword ptr [esp + 0x48]
// 00626ddd  8b348a               mov esi, dword ptr [edx + ecx*4]
// 00626de0  8b5004               mov edx, dword ptr [eax + 4]
// 00626de3  8b08                 mov ecx, dword ptr [eax]
// 00626de5  8b400c               mov eax, dword ptr [eax + 0xc]
// 00626de8  8d6a02               lea ebp, [edx + 2]
// 00626deb  896c241c             mov dword ptr [esp + 0x1c], ebp
// 00626def  0fb628               movzx ebp, byte ptr [eax]
// 00626df2  896c2410             mov dword ptr [esp + 0x10], ebp
// 00626df6  0fb629               movzx ebp, byte ptr [ecx]
// 00626df9  896c2430             mov dword ptr [esp + 0x30], ebp
// 00626dfd  0fb62b               movzx ebp, byte ptr [ebx]
// 00626e00  896c2418             mov dword ptr [esp + 0x18], ebp
// 00626e04  0fb62a               movzx ebp, byte ptr [edx]
// 00626e07  896c2414             mov dword ptr [esp + 0x14], ebp
// 00626e0b  8d6802               lea ebp, [eax + 2]
// 00626e0e  0fb64001             movzx eax, byte ptr [eax + 1]
// 00626e12  896c2424             mov dword ptr [esp + 0x24], ebp
// 00626e16  8d6902               lea ebp, [ecx + 2]
// 00626e19  0fb64901             movzx ecx, byte ptr [ecx + 1]
// 00626e1d  03c1                 add eax, ecx
// 00626e1f  0fb64b02             movzx ecx, byte ptr [ebx + 2]
// 00626e23  034c2414             add ecx, dword ptr [esp + 0x14]
// 00626e27  0fb65201             movzx edx, byte ptr [edx + 1]
// 00626e2b  03c8                 add ecx, eax
// 00626e2d  8b442430             mov eax, dword ptr [esp + 0x30]
// 00626e31  896c2420             mov dword ptr [esp + 0x20], ebp
// 00626e35  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 00626e39  0fb66d00             movzx ebp, byte ptr [ebp]
// 00626e3d  8d7b02               lea edi, [ebx + 2]
// 00626e40  03e9                 add ebp, ecx
// 00626e42  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00626e46  0fb609               movzx ecx, byte ptr [ecx]
// 00626e49  036c2418             add ebp, dword ptr [esp + 0x18]
// 00626e4d  03c8                 add ecx, eax
// 00626e4f  03e8                 add ebp, eax
// 00626e51  036c2410             add ebp, dword ptr [esp + 0x10]
// 00626e55  8b442424             mov eax, dword ptr [esp + 0x24]
// 00626e59  0fb600               movzx eax, byte ptr [eax]
// 00626e5c  8d0c69               lea ecx, [ecx + ebp*2]
// 00626e5f  03c1                 add eax, ecx
// 00626e61  0fb64b01             movzx ecx, byte ptr [ebx + 1]
// 00626e65  034c2414             add ecx, dword ptr [esp + 0x14]
// 00626e69  03442410             add eax, dword ptr [esp + 0x10]
// 00626e6d  03d1                 add edx, ecx
// 00626e6f  03542418             add edx, dword ptr [esp + 0x18]
// 00626e73  0faf442444           imul eax, dword ptr [esp + 0x44]
// 00626e78  0faf54243c           imul edx, dword ptr [esp + 0x3c]
// 00626e7d  8d841000800000       lea eax, [eax + edx + 0x8000]
// 00626e84  8b542434             mov edx, dword ptr [esp + 0x34]
// 00626e88  c1f810               sar eax, 0x10
// 00626e8b  8806                 mov byte ptr [esi], al
// 00626e8d  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00626e91  46                   inc esi
// 00626e92  8bcf                 mov ecx, edi
// 00626e94  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00626e98  89742410             mov dword ptr [esp + 0x10], esi
// 00626e9c  8b742420             mov esi, dword ptr [esp + 0x20]
// 00626ea0  89542424             mov dword ptr [esp + 0x24], edx
// 00626ea4  85d2                 test edx, edx
// 00626ea6  0f8694000000         jbe 0x626f40
// 00626eac  8d642400             lea esp, [esp]
// 00626eb0  0fb65e01             movzx ebx, byte ptr [esi + 1]
// 00626eb4  0fb65701             movzx edx, byte ptr [edi + 1]
// 00626eb8  03d3                 add edx, ebx
// 00626eba  0fb659ff             movzx ebx, byte ptr [ecx - 1]
// 00626ebe  03d3                 add edx, ebx
// 00626ec0  0fb658ff             movzx ebx, byte ptr [eax - 1]
// 00626ec4  03d3                 add edx, ebx
// 00626ec6  0fb61f               movzx ebx, byte ptr [edi]
// 00626ec9  03d3                 add edx, ebx
// 00626ecb  0fb65902             movzx ebx, byte ptr [ecx + 2]
// 00626ecf  03d3                 add edx, ebx
// 00626ed1  0fb61e               movzx ebx, byte ptr [esi]
// 00626ed4  03d3                 add edx, ebx
// 00626ed6  0fb65802             movzx ebx, byte ptr [eax + 2]
// 00626eda  03d3                 add edx, ebx
// 00626edc  0fb65fff             movzx ebx, byte ptr [edi - 1]
// 00626ee0  0fb66801             movzx ebp, byte ptr [eax + 1]
// 00626ee4  8d1453               lea edx, [ebx + edx*2]
// 00626ee7  0fb65eff             movzx ebx, byte ptr [esi - 1]
// 00626eeb  03d3                 add edx, ebx
// 00626eed  0fb65e02             movzx ebx, byte ptr [esi + 2]
// 00626ef1  03d3                 add edx, ebx
// 00626ef3  0fb65f02             movzx ebx, byte ptr [edi + 2]
// 00626ef7  03d3                 add edx, ebx
// 00626ef9  0fb65901             movzx ebx, byte ptr [ecx + 1]
// 00626efd  0faf542444           imul edx, dword ptr [esp + 0x44]
// 00626f02  03dd                 add ebx, ebp
// 00626f04  0fb629               movzx ebp, byte ptr [ecx]
// 00626f07  03dd                 add ebx, ebp
// 00626f09  0fb628               movzx ebp, byte ptr [eax]
// 00626f0c  03dd                 add ebx, ebp
// 00626f0e  0faf5c243c           imul ebx, dword ptr [esp + 0x3c]
// 00626f13  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 00626f17  8d941a00800000       lea edx, [edx + ebx + 0x8000]
// 00626f1e  c1fa10               sar edx, 0x10
// 00626f21  885500               mov byte ptr [ebp], dl
// 00626f24  45                   inc ebp
// 00626f25  83c002               add eax, 2
// 00626f28  83c102               add ecx, 2
// 00626f2b  83c602               add esi, 2
// 00626f2e  83c702               add edi, 2
// 00626f31  836c242401           sub dword ptr [esp + 0x24], 1
// 00626f36  896c2410             mov dword ptr [esp + 0x10], ebp
// 00626f3a  0f8570ffffff         jne 0x626eb0
// 00626f40  0fb659ff             movzx ebx, byte ptr [ecx - 1]
// 00626f44  0fb668ff             movzx ebp, byte ptr [eax - 1]
// 00626f48  0fb65001             movzx edx, byte ptr [eax + 1]
// 00626f4c  03dd                 add ebx, ebp
// 00626f4e  0fb62f               movzx ebp, byte ptr [edi]
// 00626f51  03ea                 add ebp, edx
// 00626f53  89542424             mov dword ptr [esp + 0x24], edx
// 00626f57  0fb616               movzx edx, byte ptr [esi]
// 00626f5a  03eb                 add ebp, ebx
// 00626f5c  0fb65e01             movzx ebx, byte ptr [esi + 1]
// 00626f60  0fb676ff             movzx esi, byte ptr [esi - 1]
// 00626f64  03d5                 add edx, ebp
// 00626f66  8bea                 mov ebp, edx
// 00626f68  0fb65101             movzx edx, byte ptr [ecx + 1]
// 00626f6c  0fb609               movzx ecx, byte ptr [ecx]
// 00626f6f  034c2424             add ecx, dword ptr [esp + 0x24]
// 00626f73  03ea                 add ebp, edx
// 00626f75  89542420             mov dword ptr [esp + 0x20], edx
// 00626f79  0fb65701             movzx edx, byte ptr [edi + 1]
// 00626f7d  0fb67fff             movzx edi, byte ptr [edi - 1]
// 00626f81  03eb                 add ebp, ebx
// 00626f83  03ea                 add ebp, edx
// 00626f85  03fb                 add edi, ebx
// 00626f87  8d3c6f               lea edi, [edi + ebp*2]
// 00626f8a  03f7                 add esi, edi
// 00626f8c  03f2                 add esi, edx
// 00626f8e  0fb610               movzx edx, byte ptr [eax]
// 00626f91  0faf742444           imul esi, dword ptr [esp + 0x44]
// 00626f96  03d1                 add edx, ecx
// 00626f98  03542420             add edx, dword ptr [esp + 0x20]
// 00626f9c  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00626fa0  0faf54243c           imul edx, dword ptr [esp + 0x3c]
// 00626fa5  8d841600800000       lea eax, [esi + edx + 0x8000]
// 00626fac  8b542440             mov edx, dword ptr [esp + 0x40]
// 00626fb0  c1f810               sar eax, 0x10
// 00626fb3  8801                 mov byte ptr [ecx], al
// 00626fb5  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00626fb9  8b442428             mov eax, dword ptr [esp + 0x28]
// 00626fbd  41                   inc ecx
// 00626fbe  83c008               add eax, 8
// 00626fc1  3b4a0c               cmp ecx, dword ptr [edx + 0xc]
// 00626fc4  89442428             mov dword ptr [esp + 0x28], eax
// 00626fc8  894c242c             mov dword ptr [esp + 0x2c], ecx
// 00626fcc  0f8c04feffff         jl 0x626dd6
// 00626fd2  5f                   pop edi
// 00626fd3  5e                   pop esi
// 00626fd4  5d                   pop ebp
// 00626fd5  5b                   pop ebx
// 00626fd6  83c428               add esp, 0x28
// 00626fd9  c3                   ret 
// library jpeg-6b/jcsample.c (function _h2v2_smooth_downsample)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcsample.c
