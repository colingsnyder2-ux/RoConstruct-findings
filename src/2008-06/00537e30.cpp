// from server: 100% by auto
// roc 2008-06 00537e30  unit: seg_00530000  size: 349 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00537e30
//
// 00537e30  83ec24               sub esp, 0x24
// 00537e33  56                   push esi
// 00537e34  57                   push edi
// 00537e35  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 00537e39  83bfbc00000000       cmp dword ptr [edi + 0xbc], 0
// 00537e40  8bb75c010000         mov esi, dword ptr [edi + 0x15c]
// 00537e46  8b4718               mov eax, dword ptr [edi + 0x18]
// 00537e49  8b08                 mov ecx, dword ptr [eax]
// 00537e4b  8b5004               mov edx, dword ptr [eax + 4]
// 00537e4e  8b460c               mov eax, dword ptr [esi + 0xc]
// 00537e51  894c2408             mov dword ptr [esp + 8], ecx
// 00537e55  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00537e58  8954240c             mov dword ptr [esp + 0xc], edx
// 00537e5c  8b5614               mov edx, dword ptr [esi + 0x14]
// 00537e5f  89442410             mov dword ptr [esp + 0x10], eax
// 00537e63  8b4618               mov eax, dword ptr [esi + 0x18]
// 00537e66  894c2414             mov dword ptr [esp + 0x14], ecx
// 00537e6a  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 00537e6d  89542418             mov dword ptr [esp + 0x18], edx
// 00537e71  8b5620               mov edx, dword ptr [esi + 0x20]
// 00537e74  8944241c             mov dword ptr [esp + 0x1c], eax
// 00537e78  894c2420             mov dword ptr [esp + 0x20], ecx
// 00537e7c  89542424             mov dword ptr [esp + 0x24], edx
// 00537e80  897c2428             mov dword ptr [esp + 0x28], edi
// 00537e84  7420                 je 0x537ea6
// 00537e86  837e2400             cmp dword ptr [esi + 0x24], 0
// 00537e8a  751a                 jne 0x537ea6
// 00537e8c  8b4628               mov eax, dword ptr [esi + 0x28]
// 00537e8f  50                   push eax
// 00537e90  8d44240c             lea eax, [esp + 0xc]
// 00537e94  e8d7feffff           call 0x537d70
// 00537e99  83c404               add esp, 4
// 00537e9c  84c0                 test al, al
// 00537e9e  7506                 jne 0x537ea6
// 00537ea0  5f                   pop edi
// 00537ea1  5e                   pop esi
// 00537ea2  83c424               add esp, 0x24
// 00537ea5  c3                   ret 
// 00537ea6  53                   push ebx
// 00537ea7  33db                 xor ebx, ebx
// 00537ea9  399f00010000         cmp dword ptr [edi + 0x100], ebx
// 00537eaf  55                   push ebp
// 00537eb0  7e6a                 jle 0x537f1c
// 00537eb2  8d8f04010000         lea ecx, [edi + 0x104]
// 00537eb8  894c2438             mov dword ptr [esp + 0x38], ecx
// 00537ebc  8d642400             lea esp, [esp]
// 00537ec0  8b542438             mov edx, dword ptr [esp + 0x38]
// 00537ec4  8b02                 mov eax, dword ptr [edx]
// 00537ec6  8b8c87e8000000       mov ecx, dword ptr [edi + eax*4 + 0xe8]
// 00537ecd  8d6c8420             lea ebp, [esp + eax*4 + 0x20]
// 00537ed1  8b4118               mov eax, dword ptr [ecx + 0x18]
// 00537ed4  8b54863c             mov edx, dword ptr [esi + eax*4 + 0x3c]
// 00537ed8  8b4114               mov eax, dword ptr [ecx + 0x14]
// 00537edb  8b4c862c             mov ecx, dword ptr [esi + eax*4 + 0x2c]
// 00537edf  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 00537ee3  52                   push edx
// 00537ee4  8b5500               mov edx, dword ptr [ebp]
// 00537ee7  51                   push ecx
// 00537ee8  8b0c98               mov ecx, dword ptr [eax + ebx*4]
// 00537eeb  52                   push edx
// 00537eec  51                   push ecx
// 00537eed  8d442420             lea eax, [esp + 0x20]
// 00537ef1  e8fafcffff           call 0x537bf0
// 00537ef6  83c410               add esp, 0x10
// 00537ef9  84c0                 test al, al
// 00537efb  0f8482000000         je 0x537f83
// 00537f01  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 00537f05  8b049a               mov eax, dword ptr [edx + ebx*4]
// 00537f08  0fbf08               movsx ecx, word ptr [eax]
// 00537f0b  8344243804           add dword ptr [esp + 0x38], 4
// 00537f10  43                   inc ebx
// 00537f11  3b9f00010000         cmp ebx, dword ptr [edi + 0x100]
// 00537f17  894d00               mov dword ptr [ebp], ecx
// 00537f1a  7ca4                 jl 0x537ec0
// 00537f1c  8b5718               mov edx, dword ptr [edi + 0x18]
// 00537f1f  8b442410             mov eax, dword ptr [esp + 0x10]
// 00537f23  8902                 mov dword ptr [edx], eax
// 00537f25  8b4f18               mov ecx, dword ptr [edi + 0x18]
// 00537f28  8b542414             mov edx, dword ptr [esp + 0x14]
// 00537f2c  8b442418             mov eax, dword ptr [esp + 0x18]
// 00537f30  895104               mov dword ptr [ecx + 4], edx
// 00537f33  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00537f37  8b542420             mov edx, dword ptr [esp + 0x20]
// 00537f3b  89460c               mov dword ptr [esi + 0xc], eax
// 00537f3e  8b442424             mov eax, dword ptr [esp + 0x24]
// 00537f42  894e10               mov dword ptr [esi + 0x10], ecx
// 00537f45  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00537f49  895614               mov dword ptr [esi + 0x14], edx
// 00537f4c  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00537f50  894618               mov dword ptr [esi + 0x18], eax
// 00537f53  894e1c               mov dword ptr [esi + 0x1c], ecx
// 00537f56  895620               mov dword ptr [esi + 0x20], edx
// 00537f59  8bbfbc000000         mov edi, dword ptr [edi + 0xbc]
// 00537f5f  85ff                 test edi, edi
// 00537f61  7416                 je 0x537f79
// 00537f63  837e2400             cmp dword ptr [esi + 0x24], 0
// 00537f67  750d                 jne 0x537f76
// 00537f69  8b4628               mov eax, dword ptr [esi + 0x28]
// 00537f6c  40                   inc eax
// 00537f6d  83e007               and eax, 7
// 00537f70  897e24               mov dword ptr [esi + 0x24], edi
// 00537f73  894628               mov dword ptr [esi + 0x28], eax
// 00537f76  ff4e24               dec dword ptr [esi + 0x24]
// 00537f79  5d                   pop ebp
// 00537f7a  5b                   pop ebx
// 00537f7b  5f                   pop edi
// 00537f7c  b001                 mov al, 1
// 00537f7e  5e                   pop esi
// 00537f7f  83c424               add esp, 0x24
// 00537f82  c3                   ret 
// 00537f83  5d                   pop ebp
// 00537f84  5b                   pop ebx
// 00537f85  5f                   pop edi
// 00537f86  32c0                 xor al, al
// 00537f88  5e                   pop esi
// 00537f89  83c424               add esp, 0x24
// 00537f8c  c3                   ret 
// library jpeg-6b/jchuff.c (function _encode_mcu_huff)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jchuff.c
