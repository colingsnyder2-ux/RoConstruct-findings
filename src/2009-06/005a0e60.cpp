// from server: 100% by auto
// roc 2009-06 005a0e60  unit: seg_005a0000  size: 416 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005a0e60
//
// 005a0e60  83ec38               sub esp, 0x38
// 005a0e63  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 005a0e67  8b485c               mov ecx, dword ptr [eax + 0x5c]
// 005a0e6a  8b9020010000         mov edx, dword ptr [eax + 0x120]
// 005a0e70  55                   push ebp
// 005a0e71  8b6864               mov ebp, dword ptr [eax + 0x64]
// 005a0e74  56                   push esi
// 005a0e75  8bb0a8010000         mov esi, dword ptr [eax + 0x1a8]
// 005a0e7b  8b442450             mov eax, dword ptr [esp + 0x50]
// 005a0e7f  8974240c             mov dword ptr [esp + 0xc], esi
// 005a0e83  896c2420             mov dword ptr [esp + 0x20], ebp
// 005a0e87  894c2444             mov dword ptr [esp + 0x44], ecx
// 005a0e8b  89542430             mov dword ptr [esp + 0x30], edx
// 005a0e8f  85c0                 test eax, eax
// 005a0e91  0f8e63010000         jle 0x5a0ffa
// 005a0e97  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 005a0e9b  53                   push ebx
// 005a0e9c  57                   push edi
// 005a0e9d  8b7c2454             mov edi, dword ptr [esp + 0x54]
// 005a0ea1  2bcf                 sub ecx, edi
// 005a0ea3  897c2418             mov dword ptr [esp + 0x18], edi
// 005a0ea7  894c2434             mov dword ptr [esp + 0x34], ecx
// 005a0eab  89442430             mov dword ptr [esp + 0x30], eax
// 005a0eaf  90                   nop 
// 005a0eb0  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 005a0eb4  8b0f                 mov ecx, dword ptr [edi]
// 005a0eb6  50                   push eax
// 005a0eb7  51                   push ecx
// 005a0eb8  e8f38ffeff           call 0x589eb0
// 005a0ebd  33d2                 xor edx, edx
// 005a0ebf  83c408               add esp, 8
// 005a0ec2  8954242c             mov dword ptr [esp + 0x2c], edx
// 005a0ec6  85ed                 test ebp, ebp
// 005a0ec8  0f8e0e010000         jle 0x5a0fdc
// 005a0ece  8d4e44               lea ecx, [esi + 0x44]
// 005a0ed1  894c2410             mov dword ptr [esp + 0x10], ecx
// 005a0ed5  eb0d                 jmp 0x5a0ee4
// 005a0ed7  eb07                 jmp 0x5a0ee0
// 005a0ed9  8da42400000000       lea esp, [esp]
// 005a0ee0  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005a0ee4  8b442434             mov eax, dword ptr [esp + 0x34]
// 005a0ee8  8b1c38               mov ebx, dword ptr [eax + edi]
// 005a0eeb  8b3f                 mov edi, dword ptr [edi]
// 005a0eed  8b09                 mov ecx, dword ptr [ecx]
// 005a0eef  03da                 add ebx, edx
// 005a0ef1  807e5400             cmp byte ptr [esi + 0x54], 0
// 005a0ef5  741d                 je 0x5a0f14
// 005a0ef7  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 005a0efb  48                   dec eax
// 005a0efc  8bf0                 mov esi, eax
// 005a0efe  0faff5               imul esi, ebp
// 005a0f01  03f8                 add edi, eax
// 005a0f03  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 005a0f07  03de                 add ebx, esi
// 005a0f09  83ceff               or esi, 0xffffffff
// 005a0f0c  f7dd                 neg ebp
// 005a0f0e  8d4c4102             lea ecx, [ecx + eax*2 + 2]
// 005a0f12  eb05                 jmp 0x5a0f19
// 005a0f14  be01000000           mov esi, 1
// 005a0f19  8b442414             mov eax, dword ptr [esp + 0x14]
// 005a0f1d  896c2420             mov dword ptr [esp + 0x20], ebp
// 005a0f21  8b6818               mov ebp, dword ptr [eax + 0x18]
// 005a0f24  8b4010               mov eax, dword ptr [eax + 0x10]
// 005a0f27  8b6c9500             mov ebp, dword ptr [ebp + edx*4]
// 005a0f2b  8b0490               mov eax, dword ptr [eax + edx*4]
// 005a0f2e  896c243c             mov dword ptr [esp + 0x3c], ebp
// 005a0f32  8b6c244c             mov ebp, dword ptr [esp + 0x4c]
// 005a0f36  89442440             mov dword ptr [esp + 0x40], eax
// 005a0f3a  33c0                 xor eax, eax
// 005a0f3c  89442458             mov dword ptr [esp + 0x58], eax
// 005a0f40  8944241c             mov dword ptr [esp + 0x1c], eax
// 005a0f44  896c2424             mov dword ptr [esp + 0x24], ebp
// 005a0f48  85ed                 test ebp, ebp
// 005a0f4a  766a                 jbe 0x5a0fb6
// 005a0f4c  8d642400             lea esp, [esp]
// 005a0f50  0fbf1471             movsx edx, word ptr [ecx + esi*2]
// 005a0f54  8b6c2440             mov ebp, dword ptr [esp + 0x40]
// 005a0f58  8d440208             lea eax, [edx + eax + 8]
// 005a0f5c  0fb613               movzx edx, byte ptr [ebx]
// 005a0f5f  c1f804               sar eax, 4
// 005a0f62  03442438             add eax, dword ptr [esp + 0x38]
// 005a0f66  035c2420             add ebx, dword ptr [esp + 0x20]
// 005a0f6a  0fb60402             movzx eax, byte ptr [edx + eax]
// 005a0f6e  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 005a0f72  0fb61410             movzx edx, byte ptr [eax + edx]
// 005a0f76  0017                 add byte ptr [edi], dl
// 005a0f78  0fb6142a             movzx edx, byte ptr [edx + ebp]
// 005a0f7c  8b6c2458             mov ebp, dword ptr [esp + 0x58]
// 005a0f80  2bc2                 sub eax, edx
// 005a0f82  89442444             mov dword ptr [esp + 0x44], eax
// 005a0f86  8d1400               lea edx, [eax + eax]
// 005a0f89  03c2                 add eax, edx
// 005a0f8b  03e8                 add ebp, eax
// 005a0f8d  668929               mov word ptr [ecx], bp
// 005a0f90  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 005a0f94  03c2                 add eax, edx
// 005a0f96  03e8                 add ebp, eax
// 005a0f98  896c2458             mov dword ptr [esp + 0x58], ebp
// 005a0f9c  8b6c2444             mov ebp, dword ptr [esp + 0x44]
// 005a0fa0  03c2                 add eax, edx
// 005a0fa2  03fe                 add edi, esi
// 005a0fa4  836c242401           sub dword ptr [esp + 0x24], 1
// 005a0fa9  896c241c             mov dword ptr [esp + 0x1c], ebp
// 005a0fad  8d0c71               lea ecx, [ecx + esi*2]
// 005a0fb0  759e                 jne 0x5a0f50
// 005a0fb2  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 005a0fb6  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 005a0fba  668b442458           mov ax, word ptr [esp + 0x58]
// 005a0fbf  8344241004           add dword ptr [esp + 0x10], 4
// 005a0fc4  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 005a0fc8  8b742414             mov esi, dword ptr [esp + 0x14]
// 005a0fcc  42                   inc edx
// 005a0fcd  3bd5                 cmp edx, ebp
// 005a0fcf  668901               mov word ptr [ecx], ax
// 005a0fd2  8954242c             mov dword ptr [esp + 0x2c], edx
// 005a0fd6  0f8c04ffffff         jl 0x5a0ee0
// 005a0fdc  807e5400             cmp byte ptr [esi + 0x54], 0
// 005a0fe0  0f94c1               sete cl
// 005a0fe3  83c704               add edi, 4
// 005a0fe6  836c243001           sub dword ptr [esp + 0x30], 1
// 005a0feb  884e54               mov byte ptr [esi + 0x54], cl
// 005a0fee  897c2418             mov dword ptr [esp + 0x18], edi
// 005a0ff2  0f85b8feffff         jne 0x5a0eb0
// 005a0ff8  5f                   pop edi
// 005a0ff9  5b                   pop ebx
// 005a0ffa  5e                   pop esi
// 005a0ffb  5d                   pop ebp
// 005a0ffc  83c438               add esp, 0x38
// 005a0fff  c3                   ret 
// library jpeg-6b/jquant1.c (function _quantize_fs_dither)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant1.c
