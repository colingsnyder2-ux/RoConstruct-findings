// from server: 100% by auto
// roc 2011-06 0057bf50  unit: seg_00570000  size: 349 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0057bf50
//
// 0057bf50  83ec24               sub esp, 0x24
// 0057bf53  56                   push esi
// 0057bf54  57                   push edi
// 0057bf55  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 0057bf59  83bfbc00000000       cmp dword ptr [edi + 0xbc], 0
// 0057bf60  8bb75c010000         mov esi, dword ptr [edi + 0x15c]
// 0057bf66  8b4718               mov eax, dword ptr [edi + 0x18]
// 0057bf69  8b08                 mov ecx, dword ptr [eax]
// 0057bf6b  8b5004               mov edx, dword ptr [eax + 4]
// 0057bf6e  8b460c               mov eax, dword ptr [esi + 0xc]
// 0057bf71  894c2408             mov dword ptr [esp + 8], ecx
// 0057bf75  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0057bf78  8954240c             mov dword ptr [esp + 0xc], edx
// 0057bf7c  8b5614               mov edx, dword ptr [esi + 0x14]
// 0057bf7f  89442410             mov dword ptr [esp + 0x10], eax
// 0057bf83  8b4618               mov eax, dword ptr [esi + 0x18]
// 0057bf86  894c2414             mov dword ptr [esp + 0x14], ecx
// 0057bf8a  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 0057bf8d  89542418             mov dword ptr [esp + 0x18], edx
// 0057bf91  8b5620               mov edx, dword ptr [esi + 0x20]
// 0057bf94  8944241c             mov dword ptr [esp + 0x1c], eax
// 0057bf98  894c2420             mov dword ptr [esp + 0x20], ecx
// 0057bf9c  89542424             mov dword ptr [esp + 0x24], edx
// 0057bfa0  897c2428             mov dword ptr [esp + 0x28], edi
// 0057bfa4  7420                 je 0x57bfc6
// 0057bfa6  837e2400             cmp dword ptr [esi + 0x24], 0
// 0057bfaa  751a                 jne 0x57bfc6
// 0057bfac  8b4628               mov eax, dword ptr [esi + 0x28]
// 0057bfaf  50                   push eax
// 0057bfb0  8d44240c             lea eax, [esp + 0xc]
// 0057bfb4  e8d7feffff           call 0x57be90
// 0057bfb9  83c404               add esp, 4
// 0057bfbc  84c0                 test al, al
// 0057bfbe  7506                 jne 0x57bfc6
// 0057bfc0  5f                   pop edi
// 0057bfc1  5e                   pop esi
// 0057bfc2  83c424               add esp, 0x24
// 0057bfc5  c3                   ret 
// 0057bfc6  53                   push ebx
// 0057bfc7  33db                 xor ebx, ebx
// 0057bfc9  399f00010000         cmp dword ptr [edi + 0x100], ebx
// 0057bfcf  55                   push ebp
// 0057bfd0  7e6a                 jle 0x57c03c
// 0057bfd2  8d8f04010000         lea ecx, [edi + 0x104]
// 0057bfd8  894c2438             mov dword ptr [esp + 0x38], ecx
// 0057bfdc  8d642400             lea esp, [esp]
// 0057bfe0  8b542438             mov edx, dword ptr [esp + 0x38]
// 0057bfe4  8b02                 mov eax, dword ptr [edx]
// 0057bfe6  8b8c87e8000000       mov ecx, dword ptr [edi + eax*4 + 0xe8]
// 0057bfed  8d6c8420             lea ebp, [esp + eax*4 + 0x20]
// 0057bff1  8b4118               mov eax, dword ptr [ecx + 0x18]
// 0057bff4  8b54863c             mov edx, dword ptr [esi + eax*4 + 0x3c]
// 0057bff8  8b4114               mov eax, dword ptr [ecx + 0x14]
// 0057bffb  8b4c862c             mov ecx, dword ptr [esi + eax*4 + 0x2c]
// 0057bfff  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 0057c003  52                   push edx
// 0057c004  8b5500               mov edx, dword ptr [ebp]
// 0057c007  51                   push ecx
// 0057c008  8b0c98               mov ecx, dword ptr [eax + ebx*4]
// 0057c00b  52                   push edx
// 0057c00c  51                   push ecx
// 0057c00d  8d442420             lea eax, [esp + 0x20]
// 0057c011  e8fafcffff           call 0x57bd10
// 0057c016  83c410               add esp, 0x10
// 0057c019  84c0                 test al, al
// 0057c01b  0f8482000000         je 0x57c0a3
// 0057c021  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 0057c025  8b049a               mov eax, dword ptr [edx + ebx*4]
// 0057c028  0fbf08               movsx ecx, word ptr [eax]
// 0057c02b  8344243804           add dword ptr [esp + 0x38], 4
// 0057c030  43                   inc ebx
// 0057c031  3b9f00010000         cmp ebx, dword ptr [edi + 0x100]
// 0057c037  894d00               mov dword ptr [ebp], ecx
// 0057c03a  7ca4                 jl 0x57bfe0
// 0057c03c  8b5718               mov edx, dword ptr [edi + 0x18]
// 0057c03f  8b442410             mov eax, dword ptr [esp + 0x10]
// 0057c043  8902                 mov dword ptr [edx], eax
// 0057c045  8b4f18               mov ecx, dword ptr [edi + 0x18]
// 0057c048  8b542414             mov edx, dword ptr [esp + 0x14]
// 0057c04c  8b442418             mov eax, dword ptr [esp + 0x18]
// 0057c050  895104               mov dword ptr [ecx + 4], edx
// 0057c053  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0057c057  8b542420             mov edx, dword ptr [esp + 0x20]
// 0057c05b  89460c               mov dword ptr [esi + 0xc], eax
// 0057c05e  8b442424             mov eax, dword ptr [esp + 0x24]
// 0057c062  894e10               mov dword ptr [esi + 0x10], ecx
// 0057c065  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0057c069  895614               mov dword ptr [esi + 0x14], edx
// 0057c06c  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0057c070  894618               mov dword ptr [esi + 0x18], eax
// 0057c073  894e1c               mov dword ptr [esi + 0x1c], ecx
// 0057c076  895620               mov dword ptr [esi + 0x20], edx
// 0057c079  8bbfbc000000         mov edi, dword ptr [edi + 0xbc]
// 0057c07f  85ff                 test edi, edi
// 0057c081  7416                 je 0x57c099
// 0057c083  837e2400             cmp dword ptr [esi + 0x24], 0
// 0057c087  750d                 jne 0x57c096
// 0057c089  8b4628               mov eax, dword ptr [esi + 0x28]
// 0057c08c  40                   inc eax
// 0057c08d  83e007               and eax, 7
// 0057c090  897e24               mov dword ptr [esi + 0x24], edi
// 0057c093  894628               mov dword ptr [esi + 0x28], eax
// 0057c096  ff4e24               dec dword ptr [esi + 0x24]
// 0057c099  5d                   pop ebp
// 0057c09a  5b                   pop ebx
// 0057c09b  5f                   pop edi
// 0057c09c  b001                 mov al, 1
// 0057c09e  5e                   pop esi
// 0057c09f  83c424               add esp, 0x24
// 0057c0a2  c3                   ret 
// 0057c0a3  5d                   pop ebp
// 0057c0a4  5b                   pop ebx
// 0057c0a5  5f                   pop edi
// 0057c0a6  32c0                 xor al, al
// 0057c0a8  5e                   pop esi
// 0057c0a9  83c424               add esp, 0x24
// 0057c0ac  c3                   ret 
// library jpeg-6b/jchuff.c (function _encode_mcu_huff)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jchuff.c
