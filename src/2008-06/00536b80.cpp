// from server: 100% by auto
// roc 2008-06 00536b80  unit: seg_00530000  size: 416 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00536b80
//
// 00536b80  83ec38               sub esp, 0x38
// 00536b83  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 00536b87  8b485c               mov ecx, dword ptr [eax + 0x5c]
// 00536b8a  8b9020010000         mov edx, dword ptr [eax + 0x120]
// 00536b90  55                   push ebp
// 00536b91  8b6864               mov ebp, dword ptr [eax + 0x64]
// 00536b94  56                   push esi
// 00536b95  8bb0a8010000         mov esi, dword ptr [eax + 0x1a8]
// 00536b9b  8b442450             mov eax, dword ptr [esp + 0x50]
// 00536b9f  8974240c             mov dword ptr [esp + 0xc], esi
// 00536ba3  896c2420             mov dword ptr [esp + 0x20], ebp
// 00536ba7  894c2444             mov dword ptr [esp + 0x44], ecx
// 00536bab  89542430             mov dword ptr [esp + 0x30], edx
// 00536baf  85c0                 test eax, eax
// 00536bb1  0f8e63010000         jle 0x536d1a
// 00536bb7  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 00536bbb  53                   push ebx
// 00536bbc  57                   push edi
// 00536bbd  8b7c2454             mov edi, dword ptr [esp + 0x54]
// 00536bc1  2bcf                 sub ecx, edi
// 00536bc3  897c2418             mov dword ptr [esp + 0x18], edi
// 00536bc7  894c2434             mov dword ptr [esp + 0x34], ecx
// 00536bcb  89442430             mov dword ptr [esp + 0x30], eax
// 00536bcf  90                   nop 
// 00536bd0  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 00536bd4  8b0f                 mov ecx, dword ptr [edi]
// 00536bd6  50                   push eax
// 00536bd7  51                   push ecx
// 00536bd8  e8c3effeff           call 0x525ba0
// 00536bdd  33d2                 xor edx, edx
// 00536bdf  83c408               add esp, 8
// 00536be2  8954242c             mov dword ptr [esp + 0x2c], edx
// 00536be6  85ed                 test ebp, ebp
// 00536be8  0f8e0e010000         jle 0x536cfc
// 00536bee  8d4e44               lea ecx, [esi + 0x44]
// 00536bf1  894c2410             mov dword ptr [esp + 0x10], ecx
// 00536bf5  eb0d                 jmp 0x536c04
// 00536bf7  eb07                 jmp 0x536c00
// 00536bf9  8da42400000000       lea esp, [esp]
// 00536c00  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00536c04  8b442434             mov eax, dword ptr [esp + 0x34]
// 00536c08  8b1c38               mov ebx, dword ptr [eax + edi]
// 00536c0b  8b3f                 mov edi, dword ptr [edi]
// 00536c0d  8b09                 mov ecx, dword ptr [ecx]
// 00536c0f  03da                 add ebx, edx
// 00536c11  807e5400             cmp byte ptr [esi + 0x54], 0
// 00536c15  741d                 je 0x536c34
// 00536c17  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 00536c1b  48                   dec eax
// 00536c1c  8bf0                 mov esi, eax
// 00536c1e  0faff5               imul esi, ebp
// 00536c21  03f8                 add edi, eax
// 00536c23  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 00536c27  03de                 add ebx, esi
// 00536c29  83ceff               or esi, 0xffffffff
// 00536c2c  f7dd                 neg ebp
// 00536c2e  8d4c4102             lea ecx, [ecx + eax*2 + 2]
// 00536c32  eb05                 jmp 0x536c39
// 00536c34  be01000000           mov esi, 1
// 00536c39  8b442414             mov eax, dword ptr [esp + 0x14]
// 00536c3d  896c2420             mov dword ptr [esp + 0x20], ebp
// 00536c41  8b6818               mov ebp, dword ptr [eax + 0x18]
// 00536c44  8b4010               mov eax, dword ptr [eax + 0x10]
// 00536c47  8b6c9500             mov ebp, dword ptr [ebp + edx*4]
// 00536c4b  8b0490               mov eax, dword ptr [eax + edx*4]
// 00536c4e  896c243c             mov dword ptr [esp + 0x3c], ebp
// 00536c52  8b6c244c             mov ebp, dword ptr [esp + 0x4c]
// 00536c56  89442440             mov dword ptr [esp + 0x40], eax
// 00536c5a  33c0                 xor eax, eax
// 00536c5c  89442458             mov dword ptr [esp + 0x58], eax
// 00536c60  8944241c             mov dword ptr [esp + 0x1c], eax
// 00536c64  896c2424             mov dword ptr [esp + 0x24], ebp
// 00536c68  85ed                 test ebp, ebp
// 00536c6a  766a                 jbe 0x536cd6
// 00536c6c  8d642400             lea esp, [esp]
// 00536c70  0fbf1471             movsx edx, word ptr [ecx + esi*2]
// 00536c74  8b6c2440             mov ebp, dword ptr [esp + 0x40]
// 00536c78  8d440208             lea eax, [edx + eax + 8]
// 00536c7c  0fb613               movzx edx, byte ptr [ebx]
// 00536c7f  c1f804               sar eax, 4
// 00536c82  03442438             add eax, dword ptr [esp + 0x38]
// 00536c86  035c2420             add ebx, dword ptr [esp + 0x20]
// 00536c8a  0fb60402             movzx eax, byte ptr [edx + eax]
// 00536c8e  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 00536c92  0fb61410             movzx edx, byte ptr [eax + edx]
// 00536c96  0017                 add byte ptr [edi], dl
// 00536c98  0fb6142a             movzx edx, byte ptr [edx + ebp]
// 00536c9c  8b6c2458             mov ebp, dword ptr [esp + 0x58]
// 00536ca0  2bc2                 sub eax, edx
// 00536ca2  89442444             mov dword ptr [esp + 0x44], eax
// 00536ca6  8d1400               lea edx, [eax + eax]
// 00536ca9  03c2                 add eax, edx
// 00536cab  03e8                 add ebp, eax
// 00536cad  668929               mov word ptr [ecx], bp
// 00536cb0  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 00536cb4  03c2                 add eax, edx
// 00536cb6  03e8                 add ebp, eax
// 00536cb8  896c2458             mov dword ptr [esp + 0x58], ebp
// 00536cbc  8b6c2444             mov ebp, dword ptr [esp + 0x44]
// 00536cc0  03c2                 add eax, edx
// 00536cc2  03fe                 add edi, esi
// 00536cc4  836c242401           sub dword ptr [esp + 0x24], 1
// 00536cc9  896c241c             mov dword ptr [esp + 0x1c], ebp
// 00536ccd  8d0c71               lea ecx, [ecx + esi*2]
// 00536cd0  759e                 jne 0x536c70
// 00536cd2  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00536cd6  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 00536cda  668b442458           mov ax, word ptr [esp + 0x58]
// 00536cdf  8344241004           add dword ptr [esp + 0x10], 4
// 00536ce4  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 00536ce8  8b742414             mov esi, dword ptr [esp + 0x14]
// 00536cec  42                   inc edx
// 00536ced  3bd5                 cmp edx, ebp
// 00536cef  668901               mov word ptr [ecx], ax
// 00536cf2  8954242c             mov dword ptr [esp + 0x2c], edx
// 00536cf6  0f8c04ffffff         jl 0x536c00
// 00536cfc  807e5400             cmp byte ptr [esi + 0x54], 0
// 00536d00  0f94c1               sete cl
// 00536d03  83c704               add edi, 4
// 00536d06  836c243001           sub dword ptr [esp + 0x30], 1
// 00536d0b  884e54               mov byte ptr [esi + 0x54], cl
// 00536d0e  897c2418             mov dword ptr [esp + 0x18], edi
// 00536d12  0f85b8feffff         jne 0x536bd0
// 00536d18  5f                   pop edi
// 00536d19  5b                   pop ebx
// 00536d1a  5e                   pop esi
// 00536d1b  5d                   pop ebp
// 00536d1c  83c438               add esp, 0x38
// 00536d1f  c3                   ret 
// library jpeg-6b/jquant1.c (function _quantize_fs_dither)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant1.c
