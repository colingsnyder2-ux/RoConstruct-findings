// roc 2009-06 005a4db0  unit: seg_005a0000  size: 634 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005a4db0
//
// 005a4db0  83ec28               sub esp, 0x28
// 005a4db3  8b442430             mov eax, dword ptr [esp + 0x30]
// 005a4db7  53                   push ebx
// 005a4db8  55                   push ebp
// 005a4db9  8b6c243c             mov ebp, dword ptr [esp + 0x3c]
// 005a4dbd  56                   push esi
// 005a4dbe  8b701c               mov esi, dword ptr [eax + 0x1c]
// 005a4dc1  57                   push edi
// 005a4dc2  8b7c243c             mov edi, dword ptr [esp + 0x3c]
// 005a4dc6  8b8fdc000000         mov ecx, dword ptr [edi + 0xdc]
// 005a4dcc  8b5f1c               mov ebx, dword ptr [edi + 0x1c]
// 005a4dcf  03f6                 add esi, esi
// 005a4dd1  83c102               add ecx, 2
// 005a4dd4  03f6                 add esi, esi
// 005a4dd6  51                   push ecx
// 005a4dd7  03f6                 add esi, esi
// 005a4dd9  83c5fc               add ebp, -4
// 005a4ddc  8d0436               lea eax, [esi + esi]
// 005a4ddf  55                   push ebp
// 005a4de0  e8bbfbffff           call 0x5a49a0
// 005a4de5  8b87b4000000         mov eax, dword ptr [edi + 0xb4]
// 005a4deb  8d1480               lea edx, [eax + eax*4]
// 005a4dee  c1e204               shl edx, 4
// 005a4df1  b900400000           mov ecx, 0x4000
// 005a4df6  2bca                 sub ecx, edx
// 005a4df8  c1e004               shl eax, 4
// 005a4dfb  894c2444             mov dword ptr [esp + 0x44], ecx
// 005a4dff  8944244c             mov dword ptr [esp + 0x4c], eax
// 005a4e03  8b442448             mov eax, dword ptr [esp + 0x48]
// 005a4e07  33c9                 xor ecx, ecx
// 005a4e09  83c408               add esp, 8
// 005a4e0c  39480c               cmp dword ptr [eax + 0xc], ecx
// 005a4e0f  894c242c             mov dword ptr [esp + 0x2c], ecx
// 005a4e13  0f8e09020000         jle 0x5a5022
// 005a4e19  83c6fe               add esi, -2
// 005a4e1c  89742434             mov dword ptr [esp + 0x34], esi
// 005a4e20  8bc5                 mov eax, ebp
// 005a4e22  896c2428             mov dword ptr [esp + 0x28], ebp
// 005a4e26  8b5808               mov ebx, dword ptr [eax + 8]
// 005a4e29  8b542448             mov edx, dword ptr [esp + 0x48]
// 005a4e2d  8b348a               mov esi, dword ptr [edx + ecx*4]
// 005a4e30  8b5004               mov edx, dword ptr [eax + 4]
// 005a4e33  8b08                 mov ecx, dword ptr [eax]
// 005a4e35  8b400c               mov eax, dword ptr [eax + 0xc]
// 005a4e38  8d6a02               lea ebp, [edx + 2]
// 005a4e3b  896c241c             mov dword ptr [esp + 0x1c], ebp
// 005a4e3f  0fb628               movzx ebp, byte ptr [eax]
// 005a4e42  896c2410             mov dword ptr [esp + 0x10], ebp
// 005a4e46  0fb629               movzx ebp, byte ptr [ecx]
// 005a4e49  896c2430             mov dword ptr [esp + 0x30], ebp
// 005a4e4d  0fb62b               movzx ebp, byte ptr [ebx]
// 005a4e50  896c2418             mov dword ptr [esp + 0x18], ebp
// 005a4e54  0fb62a               movzx ebp, byte ptr [edx]
// 005a4e57  896c2414             mov dword ptr [esp + 0x14], ebp
// 005a4e5b  8d6802               lea ebp, [eax + 2]
// 005a4e5e  0fb64001             movzx eax, byte ptr [eax + 1]
// 005a4e62  896c2424             mov dword ptr [esp + 0x24], ebp
// 005a4e66  8d6902               lea ebp, [ecx + 2]
// 005a4e69  0fb64901             movzx ecx, byte ptr [ecx + 1]
// 005a4e6d  03c1                 add eax, ecx
// 005a4e6f  0fb64b02             movzx ecx, byte ptr [ebx + 2]
// 005a4e73  034c2414             add ecx, dword ptr [esp + 0x14]
// 005a4e77  0fb65201             movzx edx, byte ptr [edx + 1]
// 005a4e7b  03c8                 add ecx, eax
// 005a4e7d  8b442430             mov eax, dword ptr [esp + 0x30]
// 005a4e81  896c2420             mov dword ptr [esp + 0x20], ebp
// 005a4e85  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 005a4e89  0fb66d00             movzx ebp, byte ptr [ebp]
// 005a4e8d  8d7b02               lea edi, [ebx + 2]
// 005a4e90  03e9                 add ebp, ecx
// 005a4e92  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005a4e96  0fb609               movzx ecx, byte ptr [ecx]
// 005a4e99  036c2418             add ebp, dword ptr [esp + 0x18]
// 005a4e9d  03c8                 add ecx, eax
// 005a4e9f  03e8                 add ebp, eax
// 005a4ea1  036c2410             add ebp, dword ptr [esp + 0x10]
// 005a4ea5  8b442424             mov eax, dword ptr [esp + 0x24]
// 005a4ea9  0fb600               movzx eax, byte ptr [eax]
// 005a4eac  8d0c69               lea ecx, [ecx + ebp*2]
// 005a4eaf  03c1                 add eax, ecx
// 005a4eb1  0fb64b01             movzx ecx, byte ptr [ebx + 1]
// 005a4eb5  034c2414             add ecx, dword ptr [esp + 0x14]
// 005a4eb9  03442410             add eax, dword ptr [esp + 0x10]
// 005a4ebd  03d1                 add edx, ecx
// 005a4ebf  03542418             add edx, dword ptr [esp + 0x18]
// 005a4ec3  0faf442444           imul eax, dword ptr [esp + 0x44]
// 005a4ec8  0faf54243c           imul edx, dword ptr [esp + 0x3c]
// 005a4ecd  8d841000800000       lea eax, [eax + edx + 0x8000]
// 005a4ed4  8b542434             mov edx, dword ptr [esp + 0x34]
// 005a4ed8  c1f810               sar eax, 0x10
// 005a4edb  8806                 mov byte ptr [esi], al
// 005a4edd  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005a4ee1  46                   inc esi
// 005a4ee2  8bcf                 mov ecx, edi
// 005a4ee4  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 005a4ee8  89742410             mov dword ptr [esp + 0x10], esi
// 005a4eec  8b742420             mov esi, dword ptr [esp + 0x20]
// 005a4ef0  89542424             mov dword ptr [esp + 0x24], edx
// 005a4ef4  85d2                 test edx, edx
// 005a4ef6  0f8694000000         jbe 0x5a4f90
// 005a4efc  8d642400             lea esp, [esp]
// 005a4f00  0fb65e01             movzx ebx, byte ptr [esi + 1]
// 005a4f04  0fb65701             movzx edx, byte ptr [edi + 1]
// 005a4f08  03d3                 add edx, ebx
// 005a4f0a  0fb659ff             movzx ebx, byte ptr [ecx - 1]
// 005a4f0e  03d3                 add edx, ebx
// 005a4f10  0fb658ff             movzx ebx, byte ptr [eax - 1]
// 005a4f14  03d3                 add edx, ebx
// 005a4f16  0fb61f               movzx ebx, byte ptr [edi]
// 005a4f19  03d3                 add edx, ebx
// 005a4f1b  0fb65902             movzx ebx, byte ptr [ecx + 2]
// 005a4f1f  03d3                 add edx, ebx
// 005a4f21  0fb61e               movzx ebx, byte ptr [esi]
// 005a4f24  03d3                 add edx, ebx
// 005a4f26  0fb65802             movzx ebx, byte ptr [eax + 2]
// 005a4f2a  03d3                 add edx, ebx
// 005a4f2c  0fb65fff             movzx ebx, byte ptr [edi - 1]
// 005a4f30  0fb66801             movzx ebp, byte ptr [eax + 1]
// 005a4f34  8d1453               lea edx, [ebx + edx*2]
// 005a4f37  0fb65eff             movzx ebx, byte ptr [esi - 1]
// 005a4f3b  03d3                 add edx, ebx
// 005a4f3d  0fb65e02             movzx ebx, byte ptr [esi + 2]
// 005a4f41  03d3                 add edx, ebx
// 005a4f43  0fb65f02             movzx ebx, byte ptr [edi + 2]
// 005a4f47  03d3                 add edx, ebx
// 005a4f49  0fb65901             movzx ebx, byte ptr [ecx + 1]
// 005a4f4d  0faf542444           imul edx, dword ptr [esp + 0x44]
// 005a4f52  03dd                 add ebx, ebp
// 005a4f54  0fb629               movzx ebp, byte ptr [ecx]
// 005a4f57  03dd                 add ebx, ebp
// 005a4f59  0fb628               movzx ebp, byte ptr [eax]
// 005a4f5c  03dd                 add ebx, ebp
// 005a4f5e  0faf5c243c           imul ebx, dword ptr [esp + 0x3c]
// 005a4f63  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 005a4f67  8d941a00800000       lea edx, [edx + ebx + 0x8000]
// 005a4f6e  c1fa10               sar edx, 0x10
// 005a4f71  885500               mov byte ptr [ebp], dl
// 005a4f74  45                   inc ebp
// 005a4f75  83c002               add eax, 2
// 005a4f78  83c102               add ecx, 2
// 005a4f7b  83c602               add esi, 2
// 005a4f7e  83c702               add edi, 2
// 005a4f81  836c242401           sub dword ptr [esp + 0x24], 1
// 005a4f86  896c2410             mov dword ptr [esp + 0x10], ebp
// 005a4f8a  0f8570ffffff         jne 0x5a4f00
// 005a4f90  0fb659ff             movzx ebx, byte ptr [ecx - 1]
// 005a4f94  0fb668ff             movzx ebp, byte ptr [eax - 1]
// 005a4f98  0fb65001             movzx edx, byte ptr [eax + 1]
// 005a4f9c  03dd                 add ebx, ebp
// 005a4f9e  0fb62f               movzx ebp, byte ptr [edi]
// 005a4fa1  03ea                 add ebp, edx
// 005a4fa3  89542424             mov dword ptr [esp + 0x24], edx
// 005a4fa7  0fb616               movzx edx, byte ptr [esi]
// 005a4faa  03eb                 add ebp, ebx
// 005a4fac  0fb65e01             movzx ebx, byte ptr [esi + 1]
// 005a4fb0  0fb676ff             movzx esi, byte ptr [esi - 1]
// 005a4fb4  03d5                 add edx, ebp
// 005a4fb6  8bea                 mov ebp, edx
// 005a4fb8  0fb65101             movzx edx, byte ptr [ecx + 1]
// 005a4fbc  0fb609               movzx ecx, byte ptr [ecx]
// 005a4fbf  034c2424             add ecx, dword ptr [esp + 0x24]
// 005a4fc3  03ea                 add ebp, edx
// 005a4fc5  89542420             mov dword ptr [esp + 0x20], edx
// 005a4fc9  0fb65701             movzx edx, byte ptr [edi + 1]
// 005a4fcd  0fb67fff             movzx edi, byte ptr [edi - 1]
// 005a4fd1  03eb                 add ebp, ebx
// 005a4fd3  03ea                 add ebp, edx
// 005a4fd5  03fb                 add edi, ebx
// 005a4fd7  8d3c6f               lea edi, [edi + ebp*2]
// 005a4fda  03f7                 add esi, edi
// 005a4fdc  03f2                 add esi, edx
// 005a4fde  0fb610               movzx edx, byte ptr [eax]
// 005a4fe1  0faf742444           imul esi, dword ptr [esp + 0x44]
// 005a4fe6  03d1                 add edx, ecx
// 005a4fe8  03542420             add edx, dword ptr [esp + 0x20]
// 005a4fec  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005a4ff0  0faf54243c           imul edx, dword ptr [esp + 0x3c]
// 005a4ff5  8d841600800000       lea eax, [esi + edx + 0x8000]
// 005a4ffc  8b542440             mov edx, dword ptr [esp + 0x40]
// 005a5000  c1f810               sar eax, 0x10
// 005a5003  8801                 mov byte ptr [ecx], al
// 005a5005  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005a5009  8b442428             mov eax, dword ptr [esp + 0x28]
// 005a500d  41                   inc ecx
// 005a500e  83c008               add eax, 8
// 005a5011  3b4a0c               cmp ecx, dword ptr [edx + 0xc]
// 005a5014  89442428             mov dword ptr [esp + 0x28], eax
// 005a5018  894c242c             mov dword ptr [esp + 0x2c], ecx
// 005a501c  0f8c04feffff         jl 0x5a4e26
// 005a5022  5f                   pop edi
// 005a5023  5e                   pop esi
// 005a5024  5d                   pop ebp
// 005a5025  5b                   pop ebx
// 005a5026  83c428               add esp, 0x28
// 005a5029  c3                   ret 
// library jpeg-6b/jcsample.c (function _h2v2_smooth_downsample)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcsample.c
