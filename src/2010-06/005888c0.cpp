// roc 2010-06 005888c0  unit: seg_00580000  size: 634 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005888c0
//
// 005888c0  83ec28               sub esp, 0x28
// 005888c3  8b442430             mov eax, dword ptr [esp + 0x30]
// 005888c7  53                   push ebx
// 005888c8  55                   push ebp
// 005888c9  8b6c243c             mov ebp, dword ptr [esp + 0x3c]
// 005888cd  56                   push esi
// 005888ce  8b701c               mov esi, dword ptr [eax + 0x1c]
// 005888d1  57                   push edi
// 005888d2  8b7c243c             mov edi, dword ptr [esp + 0x3c]
// 005888d6  8b8fdc000000         mov ecx, dword ptr [edi + 0xdc]
// 005888dc  8b5f1c               mov ebx, dword ptr [edi + 0x1c]
// 005888df  03f6                 add esi, esi
// 005888e1  83c102               add ecx, 2
// 005888e4  03f6                 add esi, esi
// 005888e6  51                   push ecx
// 005888e7  03f6                 add esi, esi
// 005888e9  83c5fc               add ebp, -4
// 005888ec  8d0436               lea eax, [esi + esi]
// 005888ef  55                   push ebp
// 005888f0  e8bbfbffff           call 0x5884b0
// 005888f5  8b87b4000000         mov eax, dword ptr [edi + 0xb4]
// 005888fb  8d1480               lea edx, [eax + eax*4]
// 005888fe  c1e204               shl edx, 4
// 00588901  b900400000           mov ecx, 0x4000
// 00588906  2bca                 sub ecx, edx
// 00588908  c1e004               shl eax, 4
// 0058890b  894c2444             mov dword ptr [esp + 0x44], ecx
// 0058890f  8944244c             mov dword ptr [esp + 0x4c], eax
// 00588913  8b442448             mov eax, dword ptr [esp + 0x48]
// 00588917  33c9                 xor ecx, ecx
// 00588919  83c408               add esp, 8
// 0058891c  39480c               cmp dword ptr [eax + 0xc], ecx
// 0058891f  894c242c             mov dword ptr [esp + 0x2c], ecx
// 00588923  0f8e09020000         jle 0x588b32
// 00588929  83c6fe               add esi, -2
// 0058892c  89742434             mov dword ptr [esp + 0x34], esi
// 00588930  8bc5                 mov eax, ebp
// 00588932  896c2428             mov dword ptr [esp + 0x28], ebp
// 00588936  8b5808               mov ebx, dword ptr [eax + 8]
// 00588939  8b542448             mov edx, dword ptr [esp + 0x48]
// 0058893d  8b348a               mov esi, dword ptr [edx + ecx*4]
// 00588940  8b5004               mov edx, dword ptr [eax + 4]
// 00588943  8b08                 mov ecx, dword ptr [eax]
// 00588945  8b400c               mov eax, dword ptr [eax + 0xc]
// 00588948  8d6a02               lea ebp, [edx + 2]
// 0058894b  896c241c             mov dword ptr [esp + 0x1c], ebp
// 0058894f  0fb628               movzx ebp, byte ptr [eax]
// 00588952  896c2410             mov dword ptr [esp + 0x10], ebp
// 00588956  0fb629               movzx ebp, byte ptr [ecx]
// 00588959  896c2430             mov dword ptr [esp + 0x30], ebp
// 0058895d  0fb62b               movzx ebp, byte ptr [ebx]
// 00588960  896c2418             mov dword ptr [esp + 0x18], ebp
// 00588964  0fb62a               movzx ebp, byte ptr [edx]
// 00588967  896c2414             mov dword ptr [esp + 0x14], ebp
// 0058896b  8d6802               lea ebp, [eax + 2]
// 0058896e  0fb64001             movzx eax, byte ptr [eax + 1]
// 00588972  896c2424             mov dword ptr [esp + 0x24], ebp
// 00588976  8d6902               lea ebp, [ecx + 2]
// 00588979  0fb64901             movzx ecx, byte ptr [ecx + 1]
// 0058897d  03c1                 add eax, ecx
// 0058897f  0fb64b02             movzx ecx, byte ptr [ebx + 2]
// 00588983  034c2414             add ecx, dword ptr [esp + 0x14]
// 00588987  0fb65201             movzx edx, byte ptr [edx + 1]
// 0058898b  03c8                 add ecx, eax
// 0058898d  8b442430             mov eax, dword ptr [esp + 0x30]
// 00588991  896c2420             mov dword ptr [esp + 0x20], ebp
// 00588995  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 00588999  0fb66d00             movzx ebp, byte ptr [ebp]
// 0058899d  8d7b02               lea edi, [ebx + 2]
// 005889a0  03e9                 add ebp, ecx
// 005889a2  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005889a6  0fb609               movzx ecx, byte ptr [ecx]
// 005889a9  036c2418             add ebp, dword ptr [esp + 0x18]
// 005889ad  03c8                 add ecx, eax
// 005889af  03e8                 add ebp, eax
// 005889b1  036c2410             add ebp, dword ptr [esp + 0x10]
// 005889b5  8b442424             mov eax, dword ptr [esp + 0x24]
// 005889b9  0fb600               movzx eax, byte ptr [eax]
// 005889bc  8d0c69               lea ecx, [ecx + ebp*2]
// 005889bf  03c1                 add eax, ecx
// 005889c1  0fb64b01             movzx ecx, byte ptr [ebx + 1]
// 005889c5  034c2414             add ecx, dword ptr [esp + 0x14]
// 005889c9  03442410             add eax, dword ptr [esp + 0x10]
// 005889cd  03d1                 add edx, ecx
// 005889cf  03542418             add edx, dword ptr [esp + 0x18]
// 005889d3  0faf442444           imul eax, dword ptr [esp + 0x44]
// 005889d8  0faf54243c           imul edx, dword ptr [esp + 0x3c]
// 005889dd  8d841000800000       lea eax, [eax + edx + 0x8000]
// 005889e4  8b542434             mov edx, dword ptr [esp + 0x34]
// 005889e8  c1f810               sar eax, 0x10
// 005889eb  8806                 mov byte ptr [esi], al
// 005889ed  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005889f1  46                   inc esi
// 005889f2  8bcf                 mov ecx, edi
// 005889f4  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 005889f8  89742410             mov dword ptr [esp + 0x10], esi
// 005889fc  8b742420             mov esi, dword ptr [esp + 0x20]
// 00588a00  89542424             mov dword ptr [esp + 0x24], edx
// 00588a04  85d2                 test edx, edx
// 00588a06  0f8694000000         jbe 0x588aa0
// 00588a0c  8d642400             lea esp, [esp]
// 00588a10  0fb65e01             movzx ebx, byte ptr [esi + 1]
// 00588a14  0fb65701             movzx edx, byte ptr [edi + 1]
// 00588a18  03d3                 add edx, ebx
// 00588a1a  0fb659ff             movzx ebx, byte ptr [ecx - 1]
// 00588a1e  03d3                 add edx, ebx
// 00588a20  0fb658ff             movzx ebx, byte ptr [eax - 1]
// 00588a24  03d3                 add edx, ebx
// 00588a26  0fb61f               movzx ebx, byte ptr [edi]
// 00588a29  03d3                 add edx, ebx
// 00588a2b  0fb65902             movzx ebx, byte ptr [ecx + 2]
// 00588a2f  03d3                 add edx, ebx
// 00588a31  0fb61e               movzx ebx, byte ptr [esi]
// 00588a34  03d3                 add edx, ebx
// 00588a36  0fb65802             movzx ebx, byte ptr [eax + 2]
// 00588a3a  03d3                 add edx, ebx
// 00588a3c  0fb65fff             movzx ebx, byte ptr [edi - 1]
// 00588a40  0fb66801             movzx ebp, byte ptr [eax + 1]
// 00588a44  8d1453               lea edx, [ebx + edx*2]
// 00588a47  0fb65eff             movzx ebx, byte ptr [esi - 1]
// 00588a4b  03d3                 add edx, ebx
// 00588a4d  0fb65e02             movzx ebx, byte ptr [esi + 2]
// 00588a51  03d3                 add edx, ebx
// 00588a53  0fb65f02             movzx ebx, byte ptr [edi + 2]
// 00588a57  03d3                 add edx, ebx
// 00588a59  0fb65901             movzx ebx, byte ptr [ecx + 1]
// 00588a5d  0faf542444           imul edx, dword ptr [esp + 0x44]
// 00588a62  03dd                 add ebx, ebp
// 00588a64  0fb629               movzx ebp, byte ptr [ecx]
// 00588a67  03dd                 add ebx, ebp
// 00588a69  0fb628               movzx ebp, byte ptr [eax]
// 00588a6c  03dd                 add ebx, ebp
// 00588a6e  0faf5c243c           imul ebx, dword ptr [esp + 0x3c]
// 00588a73  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 00588a77  8d941a00800000       lea edx, [edx + ebx + 0x8000]
// 00588a7e  c1fa10               sar edx, 0x10
// 00588a81  885500               mov byte ptr [ebp], dl
// 00588a84  45                   inc ebp
// 00588a85  83c002               add eax, 2
// 00588a88  83c102               add ecx, 2
// 00588a8b  83c602               add esi, 2
// 00588a8e  83c702               add edi, 2
// 00588a91  836c242401           sub dword ptr [esp + 0x24], 1
// 00588a96  896c2410             mov dword ptr [esp + 0x10], ebp
// 00588a9a  0f8570ffffff         jne 0x588a10
// 00588aa0  0fb659ff             movzx ebx, byte ptr [ecx - 1]
// 00588aa4  0fb668ff             movzx ebp, byte ptr [eax - 1]
// 00588aa8  0fb65001             movzx edx, byte ptr [eax + 1]
// 00588aac  03dd                 add ebx, ebp
// 00588aae  0fb62f               movzx ebp, byte ptr [edi]
// 00588ab1  03ea                 add ebp, edx
// 00588ab3  89542424             mov dword ptr [esp + 0x24], edx
// 00588ab7  0fb616               movzx edx, byte ptr [esi]
// 00588aba  03eb                 add ebp, ebx
// 00588abc  0fb65e01             movzx ebx, byte ptr [esi + 1]
// 00588ac0  0fb676ff             movzx esi, byte ptr [esi - 1]
// 00588ac4  03d5                 add edx, ebp
// 00588ac6  8bea                 mov ebp, edx
// 00588ac8  0fb65101             movzx edx, byte ptr [ecx + 1]
// 00588acc  0fb609               movzx ecx, byte ptr [ecx]
// 00588acf  034c2424             add ecx, dword ptr [esp + 0x24]
// 00588ad3  03ea                 add ebp, edx
// 00588ad5  89542420             mov dword ptr [esp + 0x20], edx
// 00588ad9  0fb65701             movzx edx, byte ptr [edi + 1]
// 00588add  0fb67fff             movzx edi, byte ptr [edi - 1]
// 00588ae1  03eb                 add ebp, ebx
// 00588ae3  03ea                 add ebp, edx
// 00588ae5  03fb                 add edi, ebx
// 00588ae7  8d3c6f               lea edi, [edi + ebp*2]
// 00588aea  03f7                 add esi, edi
// 00588aec  03f2                 add esi, edx
// 00588aee  0fb610               movzx edx, byte ptr [eax]
// 00588af1  0faf742444           imul esi, dword ptr [esp + 0x44]
// 00588af6  03d1                 add edx, ecx
// 00588af8  03542420             add edx, dword ptr [esp + 0x20]
// 00588afc  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00588b00  0faf54243c           imul edx, dword ptr [esp + 0x3c]
// 00588b05  8d841600800000       lea eax, [esi + edx + 0x8000]
// 00588b0c  8b542440             mov edx, dword ptr [esp + 0x40]
// 00588b10  c1f810               sar eax, 0x10
// 00588b13  8801                 mov byte ptr [ecx], al
// 00588b15  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00588b19  8b442428             mov eax, dword ptr [esp + 0x28]
// 00588b1d  41                   inc ecx
// 00588b1e  83c008               add eax, 8
// 00588b21  3b4a0c               cmp ecx, dword ptr [edx + 0xc]
// 00588b24  89442428             mov dword ptr [esp + 0x28], eax
// 00588b28  894c242c             mov dword ptr [esp + 0x2c], ecx
// 00588b2c  0f8c04feffff         jl 0x588936
// 00588b32  5f                   pop edi
// 00588b33  5e                   pop esi
// 00588b34  5d                   pop ebp
// 00588b35  5b                   pop ebx
// 00588b36  83c428               add esp, 0x28
// 00588b39  c3                   ret 
// library jpeg-6b/jcsample.c (function _h2v2_smooth_downsample)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcsample.c
