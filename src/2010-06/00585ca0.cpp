// roc 2010-06 00585ca0  unit: seg_00580000  size: 349 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00585ca0
//
// 00585ca0  83ec24               sub esp, 0x24
// 00585ca3  56                   push esi
// 00585ca4  57                   push edi
// 00585ca5  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 00585ca9  83bfbc00000000       cmp dword ptr [edi + 0xbc], 0
// 00585cb0  8bb75c010000         mov esi, dword ptr [edi + 0x15c]
// 00585cb6  8b4718               mov eax, dword ptr [edi + 0x18]
// 00585cb9  8b08                 mov ecx, dword ptr [eax]
// 00585cbb  8b5004               mov edx, dword ptr [eax + 4]
// 00585cbe  8b460c               mov eax, dword ptr [esi + 0xc]
// 00585cc1  894c2408             mov dword ptr [esp + 8], ecx
// 00585cc5  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00585cc8  8954240c             mov dword ptr [esp + 0xc], edx
// 00585ccc  8b5614               mov edx, dword ptr [esi + 0x14]
// 00585ccf  89442410             mov dword ptr [esp + 0x10], eax
// 00585cd3  8b4618               mov eax, dword ptr [esi + 0x18]
// 00585cd6  894c2414             mov dword ptr [esp + 0x14], ecx
// 00585cda  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 00585cdd  89542418             mov dword ptr [esp + 0x18], edx
// 00585ce1  8b5620               mov edx, dword ptr [esi + 0x20]
// 00585ce4  8944241c             mov dword ptr [esp + 0x1c], eax
// 00585ce8  894c2420             mov dword ptr [esp + 0x20], ecx
// 00585cec  89542424             mov dword ptr [esp + 0x24], edx
// 00585cf0  897c2428             mov dword ptr [esp + 0x28], edi
// 00585cf4  7420                 je 0x585d16
// 00585cf6  837e2400             cmp dword ptr [esi + 0x24], 0
// 00585cfa  751a                 jne 0x585d16
// 00585cfc  8b4628               mov eax, dword ptr [esi + 0x28]
// 00585cff  50                   push eax
// 00585d00  8d44240c             lea eax, [esp + 0xc]
// 00585d04  e8d7feffff           call 0x585be0
// 00585d09  83c404               add esp, 4
// 00585d0c  84c0                 test al, al
// 00585d0e  7506                 jne 0x585d16
// 00585d10  5f                   pop edi
// 00585d11  5e                   pop esi
// 00585d12  83c424               add esp, 0x24
// 00585d15  c3                   ret 
// 00585d16  53                   push ebx
// 00585d17  33db                 xor ebx, ebx
// 00585d19  399f00010000         cmp dword ptr [edi + 0x100], ebx
// 00585d1f  55                   push ebp
// 00585d20  7e6a                 jle 0x585d8c
// 00585d22  8d8f04010000         lea ecx, [edi + 0x104]
// 00585d28  894c2438             mov dword ptr [esp + 0x38], ecx
// 00585d2c  8d642400             lea esp, [esp]
// 00585d30  8b542438             mov edx, dword ptr [esp + 0x38]
// 00585d34  8b02                 mov eax, dword ptr [edx]
// 00585d36  8b8c87e8000000       mov ecx, dword ptr [edi + eax*4 + 0xe8]
// 00585d3d  8d6c8420             lea ebp, [esp + eax*4 + 0x20]
// 00585d41  8b4118               mov eax, dword ptr [ecx + 0x18]
// 00585d44  8b54863c             mov edx, dword ptr [esi + eax*4 + 0x3c]
// 00585d48  8b4114               mov eax, dword ptr [ecx + 0x14]
// 00585d4b  8b4c862c             mov ecx, dword ptr [esi + eax*4 + 0x2c]
// 00585d4f  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 00585d53  52                   push edx
// 00585d54  8b5500               mov edx, dword ptr [ebp]
// 00585d57  51                   push ecx
// 00585d58  8b0c98               mov ecx, dword ptr [eax + ebx*4]
// 00585d5b  52                   push edx
// 00585d5c  51                   push ecx
// 00585d5d  8d442420             lea eax, [esp + 0x20]
// 00585d61  e8fafcffff           call 0x585a60
// 00585d66  83c410               add esp, 0x10
// 00585d69  84c0                 test al, al
// 00585d6b  0f8482000000         je 0x585df3
// 00585d71  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 00585d75  8b049a               mov eax, dword ptr [edx + ebx*4]
// 00585d78  0fbf08               movsx ecx, word ptr [eax]
// 00585d7b  8344243804           add dword ptr [esp + 0x38], 4
// 00585d80  43                   inc ebx
// 00585d81  3b9f00010000         cmp ebx, dword ptr [edi + 0x100]
// 00585d87  894d00               mov dword ptr [ebp], ecx
// 00585d8a  7ca4                 jl 0x585d30
// 00585d8c  8b5718               mov edx, dword ptr [edi + 0x18]
// 00585d8f  8b442410             mov eax, dword ptr [esp + 0x10]
// 00585d93  8902                 mov dword ptr [edx], eax
// 00585d95  8b4f18               mov ecx, dword ptr [edi + 0x18]
// 00585d98  8b542414             mov edx, dword ptr [esp + 0x14]
// 00585d9c  8b442418             mov eax, dword ptr [esp + 0x18]
// 00585da0  895104               mov dword ptr [ecx + 4], edx
// 00585da3  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00585da7  8b542420             mov edx, dword ptr [esp + 0x20]
// 00585dab  89460c               mov dword ptr [esi + 0xc], eax
// 00585dae  8b442424             mov eax, dword ptr [esp + 0x24]
// 00585db2  894e10               mov dword ptr [esi + 0x10], ecx
// 00585db5  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00585db9  895614               mov dword ptr [esi + 0x14], edx
// 00585dbc  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00585dc0  894618               mov dword ptr [esi + 0x18], eax
// 00585dc3  894e1c               mov dword ptr [esi + 0x1c], ecx
// 00585dc6  895620               mov dword ptr [esi + 0x20], edx
// 00585dc9  8bbfbc000000         mov edi, dword ptr [edi + 0xbc]
// 00585dcf  85ff                 test edi, edi
// 00585dd1  7416                 je 0x585de9
// 00585dd3  837e2400             cmp dword ptr [esi + 0x24], 0
// 00585dd7  750d                 jne 0x585de6
// 00585dd9  8b4628               mov eax, dword ptr [esi + 0x28]
// 00585ddc  40                   inc eax
// 00585ddd  83e007               and eax, 7
// 00585de0  897e24               mov dword ptr [esi + 0x24], edi
// 00585de3  894628               mov dword ptr [esi + 0x28], eax
// 00585de6  ff4e24               dec dword ptr [esi + 0x24]
// 00585de9  5d                   pop ebp
// 00585dea  5b                   pop ebx
// 00585deb  5f                   pop edi
// 00585dec  b001                 mov al, 1
// 00585dee  5e                   pop esi
// 00585def  83c424               add esp, 0x24
// 00585df2  c3                   ret 
// 00585df3  5d                   pop ebp
// 00585df4  5b                   pop ebx
// 00585df5  5f                   pop edi
// 00585df6  32c0                 xor al, al
// 00585df8  5e                   pop esi
// 00585df9  83c424               add esp, 0x24
// 00585dfc  c3                   ret 
// library jpeg-6b/jchuff.c (function _encode_mcu_huff)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jchuff.c
