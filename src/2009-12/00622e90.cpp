// roc 2009-12 00622e90  unit: seg_00620000  size: 416 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00622e90
//
// 00622e90  83ec38               sub esp, 0x38
// 00622e93  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 00622e97  8b485c               mov ecx, dword ptr [eax + 0x5c]
// 00622e9a  8b9020010000         mov edx, dword ptr [eax + 0x120]
// 00622ea0  55                   push ebp
// 00622ea1  8b6864               mov ebp, dword ptr [eax + 0x64]
// 00622ea4  56                   push esi
// 00622ea5  8bb0a8010000         mov esi, dword ptr [eax + 0x1a8]
// 00622eab  8b442450             mov eax, dword ptr [esp + 0x50]
// 00622eaf  8974240c             mov dword ptr [esp + 0xc], esi
// 00622eb3  896c2420             mov dword ptr [esp + 0x20], ebp
// 00622eb7  894c2444             mov dword ptr [esp + 0x44], ecx
// 00622ebb  89542430             mov dword ptr [esp + 0x30], edx
// 00622ebf  85c0                 test eax, eax
// 00622ec1  0f8e63010000         jle 0x62302a
// 00622ec7  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 00622ecb  53                   push ebx
// 00622ecc  57                   push edi
// 00622ecd  8b7c2454             mov edi, dword ptr [esp + 0x54]
// 00622ed1  2bcf                 sub ecx, edi
// 00622ed3  897c2418             mov dword ptr [esp + 0x18], edi
// 00622ed7  894c2434             mov dword ptr [esp + 0x34], ecx
// 00622edb  89442430             mov dword ptr [esp + 0x30], eax
// 00622edf  90                   nop 
// 00622ee0  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 00622ee4  8b0f                 mov ecx, dword ptr [edi]
// 00622ee6  50                   push eax
// 00622ee7  51                   push ecx
// 00622ee8  e8138efeff           call 0x60bd00
// 00622eed  33d2                 xor edx, edx
// 00622eef  83c408               add esp, 8
// 00622ef2  8954242c             mov dword ptr [esp + 0x2c], edx
// 00622ef6  85ed                 test ebp, ebp
// 00622ef8  0f8e0e010000         jle 0x62300c
// 00622efe  8d4e44               lea ecx, [esi + 0x44]
// 00622f01  894c2410             mov dword ptr [esp + 0x10], ecx
// 00622f05  eb0d                 jmp 0x622f14
// 00622f07  eb07                 jmp 0x622f10
// 00622f09  8da42400000000       lea esp, [esp]
// 00622f10  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00622f14  8b442434             mov eax, dword ptr [esp + 0x34]
// 00622f18  8b1c38               mov ebx, dword ptr [eax + edi]
// 00622f1b  8b3f                 mov edi, dword ptr [edi]
// 00622f1d  8b09                 mov ecx, dword ptr [ecx]
// 00622f1f  03da                 add ebx, edx
// 00622f21  807e5400             cmp byte ptr [esi + 0x54], 0
// 00622f25  741d                 je 0x622f44
// 00622f27  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 00622f2b  48                   dec eax
// 00622f2c  8bf0                 mov esi, eax
// 00622f2e  0faff5               imul esi, ebp
// 00622f31  03f8                 add edi, eax
// 00622f33  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 00622f37  03de                 add ebx, esi
// 00622f39  83ceff               or esi, 0xffffffff
// 00622f3c  f7dd                 neg ebp
// 00622f3e  8d4c4102             lea ecx, [ecx + eax*2 + 2]
// 00622f42  eb05                 jmp 0x622f49
// 00622f44  be01000000           mov esi, 1
// 00622f49  8b442414             mov eax, dword ptr [esp + 0x14]
// 00622f4d  896c2420             mov dword ptr [esp + 0x20], ebp
// 00622f51  8b6818               mov ebp, dword ptr [eax + 0x18]
// 00622f54  8b4010               mov eax, dword ptr [eax + 0x10]
// 00622f57  8b6c9500             mov ebp, dword ptr [ebp + edx*4]
// 00622f5b  8b0490               mov eax, dword ptr [eax + edx*4]
// 00622f5e  896c243c             mov dword ptr [esp + 0x3c], ebp
// 00622f62  8b6c244c             mov ebp, dword ptr [esp + 0x4c]
// 00622f66  89442440             mov dword ptr [esp + 0x40], eax
// 00622f6a  33c0                 xor eax, eax
// 00622f6c  89442458             mov dword ptr [esp + 0x58], eax
// 00622f70  8944241c             mov dword ptr [esp + 0x1c], eax
// 00622f74  896c2424             mov dword ptr [esp + 0x24], ebp
// 00622f78  85ed                 test ebp, ebp
// 00622f7a  766a                 jbe 0x622fe6
// 00622f7c  8d642400             lea esp, [esp]
// 00622f80  0fbf1471             movsx edx, word ptr [ecx + esi*2]
// 00622f84  8b6c2440             mov ebp, dword ptr [esp + 0x40]
// 00622f88  8d440208             lea eax, [edx + eax + 8]
// 00622f8c  0fb613               movzx edx, byte ptr [ebx]
// 00622f8f  c1f804               sar eax, 4
// 00622f92  03442438             add eax, dword ptr [esp + 0x38]
// 00622f96  035c2420             add ebx, dword ptr [esp + 0x20]
// 00622f9a  0fb60402             movzx eax, byte ptr [edx + eax]
// 00622f9e  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 00622fa2  0fb61410             movzx edx, byte ptr [eax + edx]
// 00622fa6  0017                 add byte ptr [edi], dl
// 00622fa8  0fb6142a             movzx edx, byte ptr [edx + ebp]
// 00622fac  8b6c2458             mov ebp, dword ptr [esp + 0x58]
// 00622fb0  2bc2                 sub eax, edx
// 00622fb2  89442444             mov dword ptr [esp + 0x44], eax
// 00622fb6  8d1400               lea edx, [eax + eax]
// 00622fb9  03c2                 add eax, edx
// 00622fbb  03e8                 add ebp, eax
// 00622fbd  668929               mov word ptr [ecx], bp
// 00622fc0  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 00622fc4  03c2                 add eax, edx
// 00622fc6  03e8                 add ebp, eax
// 00622fc8  896c2458             mov dword ptr [esp + 0x58], ebp
// 00622fcc  8b6c2444             mov ebp, dword ptr [esp + 0x44]
// 00622fd0  03c2                 add eax, edx
// 00622fd2  03fe                 add edi, esi
// 00622fd4  836c242401           sub dword ptr [esp + 0x24], 1
// 00622fd9  896c241c             mov dword ptr [esp + 0x1c], ebp
// 00622fdd  8d0c71               lea ecx, [ecx + esi*2]
// 00622fe0  759e                 jne 0x622f80
// 00622fe2  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00622fe6  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 00622fea  668b442458           mov ax, word ptr [esp + 0x58]
// 00622fef  8344241004           add dword ptr [esp + 0x10], 4
// 00622ff4  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 00622ff8  8b742414             mov esi, dword ptr [esp + 0x14]
// 00622ffc  42                   inc edx
// 00622ffd  3bd5                 cmp edx, ebp
// 00622fff  668901               mov word ptr [ecx], ax
// 00623002  8954242c             mov dword ptr [esp + 0x2c], edx
// 00623006  0f8c04ffffff         jl 0x622f10
// 0062300c  807e5400             cmp byte ptr [esi + 0x54], 0
// 00623010  0f94c1               sete cl
// 00623013  83c704               add edi, 4
// 00623016  836c243001           sub dword ptr [esp + 0x30], 1
// 0062301b  884e54               mov byte ptr [esi + 0x54], cl
// 0062301e  897c2418             mov dword ptr [esp + 0x18], edi
// 00623022  0f85b8feffff         jne 0x622ee0
// 00623028  5f                   pop edi
// 00623029  5b                   pop ebx
// 0062302a  5e                   pop esi
// 0062302b  5d                   pop ebp
// 0062302c  83c438               add esp, 0x38
// 0062302f  c3                   ret 
// library jpeg-6b/jquant1.c (function _quantize_fs_dither)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant1.c
