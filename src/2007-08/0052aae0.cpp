// from server: 100% by auto
// roc 2007-08 0052aae0  unit: seg_00520000  size: 418 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0052aae0
//
// 0052aae0  83ec38               sub esp, 0x38
// 0052aae3  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 0052aae7  8b485c               mov ecx, dword ptr [eax + 0x5c]
// 0052aaea  8b9020010000         mov edx, dword ptr [eax + 0x120]
// 0052aaf0  55                   push ebp
// 0052aaf1  8b6864               mov ebp, dword ptr [eax + 0x64]
// 0052aaf4  56                   push esi
// 0052aaf5  8bb0a8010000         mov esi, dword ptr [eax + 0x1a8]
// 0052aafb  8b442450             mov eax, dword ptr [esp + 0x50]
// 0052aaff  85c0                 test eax, eax
// 0052ab01  8974240c             mov dword ptr [esp + 0xc], esi
// 0052ab05  896c2420             mov dword ptr [esp + 0x20], ebp
// 0052ab09  894c2444             mov dword ptr [esp + 0x44], ecx
// 0052ab0d  89542430             mov dword ptr [esp + 0x30], edx
// 0052ab11  0f8e65010000         jle 0x52ac7c
// 0052ab17  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0052ab1b  53                   push ebx
// 0052ab1c  57                   push edi
// 0052ab1d  8b7c2454             mov edi, dword ptr [esp + 0x54]
// 0052ab21  2bcf                 sub ecx, edi
// 0052ab23  897c2418             mov dword ptr [esp + 0x18], edi
// 0052ab27  894c2434             mov dword ptr [esp + 0x34], ecx
// 0052ab2b  89442430             mov dword ptr [esp + 0x30], eax
// 0052ab2f  90                   nop 
// 0052ab30  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 0052ab34  8b0f                 mov ecx, dword ptr [edi]
// 0052ab36  50                   push eax
// 0052ab37  51                   push ecx
// 0052ab38  e8b337ffff           call 0x51e2f0
// 0052ab3d  33d2                 xor edx, edx
// 0052ab3f  83c408               add esp, 8
// 0052ab42  85ed                 test ebp, ebp
// 0052ab44  8954242c             mov dword ptr [esp + 0x2c], edx
// 0052ab48  0f8e10010000         jle 0x52ac5e
// 0052ab4e  8d4e44               lea ecx, [esi + 0x44]
// 0052ab51  894c2410             mov dword ptr [esp + 0x10], ecx
// 0052ab55  eb0d                 jmp 0x52ab64
// 0052ab57  eb07                 jmp 0x52ab60
// 0052ab59  8da42400000000       lea esp, [esp]
// 0052ab60  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0052ab64  8b442434             mov eax, dword ptr [esp + 0x34]
// 0052ab68  8b1c38               mov ebx, dword ptr [eax + edi]
// 0052ab6b  8b3f                 mov edi, dword ptr [edi]
// 0052ab6d  8b09                 mov ecx, dword ptr [ecx]
// 0052ab6f  03da                 add ebx, edx
// 0052ab71  807e5400             cmp byte ptr [esi + 0x54], 0
// 0052ab75  741f                 je 0x52ab96
// 0052ab77  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 0052ab7b  83c0ff               add eax, -1
// 0052ab7e  8bf0                 mov esi, eax
// 0052ab80  0faff5               imul esi, ebp
// 0052ab83  03f8                 add edi, eax
// 0052ab85  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 0052ab89  03de                 add ebx, esi
// 0052ab8b  83ceff               or esi, 0xffffffff
// 0052ab8e  f7dd                 neg ebp
// 0052ab90  8d4c4102             lea ecx, [ecx + eax*2 + 2]
// 0052ab94  eb05                 jmp 0x52ab9b
// 0052ab96  be01000000           mov esi, 1
// 0052ab9b  8b442414             mov eax, dword ptr [esp + 0x14]
// 0052ab9f  896c2420             mov dword ptr [esp + 0x20], ebp
// 0052aba3  8b6818               mov ebp, dword ptr [eax + 0x18]
// 0052aba6  8b4010               mov eax, dword ptr [eax + 0x10]
// 0052aba9  8b6c9500             mov ebp, dword ptr [ebp + edx*4]
// 0052abad  8b0490               mov eax, dword ptr [eax + edx*4]
// 0052abb0  896c243c             mov dword ptr [esp + 0x3c], ebp
// 0052abb4  8b6c244c             mov ebp, dword ptr [esp + 0x4c]
// 0052abb8  89442440             mov dword ptr [esp + 0x40], eax
// 0052abbc  33c0                 xor eax, eax
// 0052abbe  85ed                 test ebp, ebp
// 0052abc0  89442458             mov dword ptr [esp + 0x58], eax
// 0052abc4  8944241c             mov dword ptr [esp + 0x1c], eax
// 0052abc8  896c2424             mov dword ptr [esp + 0x24], ebp
// 0052abcc  7668                 jbe 0x52ac36
// 0052abce  8bff                 mov edi, edi
// 0052abd0  0fbf1471             movsx edx, word ptr [ecx + esi*2]
// 0052abd4  8b6c2440             mov ebp, dword ptr [esp + 0x40]
// 0052abd8  8d440208             lea eax, [edx + eax + 8]
// 0052abdc  0fb613               movzx edx, byte ptr [ebx]
// 0052abdf  c1f804               sar eax, 4
// 0052abe2  03442438             add eax, dword ptr [esp + 0x38]
// 0052abe6  035c2420             add ebx, dword ptr [esp + 0x20]
// 0052abea  0fb60402             movzx eax, byte ptr [edx + eax]
// 0052abee  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 0052abf2  0fb61410             movzx edx, byte ptr [eax + edx]
// 0052abf6  0017                 add byte ptr [edi], dl
// 0052abf8  0fb6142a             movzx edx, byte ptr [edx + ebp]
// 0052abfc  8b6c2458             mov ebp, dword ptr [esp + 0x58]
// 0052ac00  2bc2                 sub eax, edx
// 0052ac02  89442444             mov dword ptr [esp + 0x44], eax
// 0052ac06  8d1400               lea edx, [eax + eax]
// 0052ac09  03c2                 add eax, edx
// 0052ac0b  03e8                 add ebp, eax
// 0052ac0d  668929               mov word ptr [ecx], bp
// 0052ac10  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 0052ac14  03c2                 add eax, edx
// 0052ac16  03e8                 add ebp, eax
// 0052ac18  896c2458             mov dword ptr [esp + 0x58], ebp
// 0052ac1c  8b6c2444             mov ebp, dword ptr [esp + 0x44]
// 0052ac20  03c2                 add eax, edx
// 0052ac22  03fe                 add edi, esi
// 0052ac24  836c242401           sub dword ptr [esp + 0x24], 1
// 0052ac29  896c241c             mov dword ptr [esp + 0x1c], ebp
// 0052ac2d  8d0c71               lea ecx, [ecx + esi*2]
// 0052ac30  759e                 jne 0x52abd0
// 0052ac32  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0052ac36  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 0052ac3a  668b442458           mov ax, word ptr [esp + 0x58]
// 0052ac3f  8344241004           add dword ptr [esp + 0x10], 4
// 0052ac44  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0052ac48  8b742414             mov esi, dword ptr [esp + 0x14]
// 0052ac4c  83c201               add edx, 1
// 0052ac4f  3bd5                 cmp edx, ebp
// 0052ac51  668901               mov word ptr [ecx], ax
// 0052ac54  8954242c             mov dword ptr [esp + 0x2c], edx
// 0052ac58  0f8c02ffffff         jl 0x52ab60
// 0052ac5e  807e5400             cmp byte ptr [esi + 0x54], 0
// 0052ac62  0f94c1               sete cl
// 0052ac65  83c704               add edi, 4
// 0052ac68  836c243001           sub dword ptr [esp + 0x30], 1
// 0052ac6d  884e54               mov byte ptr [esi + 0x54], cl
// 0052ac70  897c2418             mov dword ptr [esp + 0x18], edi
// 0052ac74  0f85b6feffff         jne 0x52ab30
// 0052ac7a  5f                   pop edi
// 0052ac7b  5b                   pop ebx
// 0052ac7c  5e                   pop esi
// 0052ac7d  5d                   pop ebp
// 0052ac7e  83c438               add esp, 0x38
// 0052ac81  c3                   ret 
// library jpeg-6b/jquant1.c (function _quantize_fs_dither)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant1.c
