// roc 2007-03 005257b0  unit: seg_00520000  size: 418 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005257b0
//
// 005257b0  83ec38               sub esp, 0x38
// 005257b3  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 005257b7  8b485c               mov ecx, dword ptr [eax + 0x5c]
// 005257ba  8b9020010000         mov edx, dword ptr [eax + 0x120]
// 005257c0  55                   push ebp
// 005257c1  8b6864               mov ebp, dword ptr [eax + 0x64]
// 005257c4  56                   push esi
// 005257c5  8bb0a8010000         mov esi, dword ptr [eax + 0x1a8]
// 005257cb  8b442450             mov eax, dword ptr [esp + 0x50]
// 005257cf  85c0                 test eax, eax
// 005257d1  8974240c             mov dword ptr [esp + 0xc], esi
// 005257d5  896c2420             mov dword ptr [esp + 0x20], ebp
// 005257d9  894c2444             mov dword ptr [esp + 0x44], ecx
// 005257dd  89542430             mov dword ptr [esp + 0x30], edx
// 005257e1  0f8e65010000         jle 0x52594c
// 005257e7  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 005257eb  53                   push ebx
// 005257ec  57                   push edi
// 005257ed  8b7c2454             mov edi, dword ptr [esp + 0x54]
// 005257f1  2bcf                 sub ecx, edi
// 005257f3  897c2418             mov dword ptr [esp + 0x18], edi
// 005257f7  894c2434             mov dword ptr [esp + 0x34], ecx
// 005257fb  89442430             mov dword ptr [esp + 0x30], eax
// 005257ff  90                   nop 
// 00525800  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 00525804  8b0f                 mov ecx, dword ptr [edi]
// 00525806  50                   push eax
// 00525807  51                   push ecx
// 00525808  e8a3eefeff           call 0x5146b0
// 0052580d  33d2                 xor edx, edx
// 0052580f  83c408               add esp, 8
// 00525812  85ed                 test ebp, ebp
// 00525814  8954242c             mov dword ptr [esp + 0x2c], edx
// 00525818  0f8e10010000         jle 0x52592e
// 0052581e  8d4e44               lea ecx, [esi + 0x44]
// 00525821  894c2410             mov dword ptr [esp + 0x10], ecx
// 00525825  eb0d                 jmp 0x525834
// 00525827  eb07                 jmp 0x525830
// 00525829  8da42400000000       lea esp, [esp]
// 00525830  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00525834  8b442434             mov eax, dword ptr [esp + 0x34]
// 00525838  8b1c38               mov ebx, dword ptr [eax + edi]
// 0052583b  8b3f                 mov edi, dword ptr [edi]
// 0052583d  8b09                 mov ecx, dword ptr [ecx]
// 0052583f  03da                 add ebx, edx
// 00525841  807e5400             cmp byte ptr [esi + 0x54], 0
// 00525845  741f                 je 0x525866
// 00525847  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 0052584b  83c0ff               add eax, -1
// 0052584e  8bf0                 mov esi, eax
// 00525850  0faff5               imul esi, ebp
// 00525853  03f8                 add edi, eax
// 00525855  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 00525859  03de                 add ebx, esi
// 0052585b  83ceff               or esi, 0xffffffff
// 0052585e  f7dd                 neg ebp
// 00525860  8d4c4102             lea ecx, [ecx + eax*2 + 2]
// 00525864  eb05                 jmp 0x52586b
// 00525866  be01000000           mov esi, 1
// 0052586b  8b442414             mov eax, dword ptr [esp + 0x14]
// 0052586f  896c2420             mov dword ptr [esp + 0x20], ebp
// 00525873  8b6818               mov ebp, dword ptr [eax + 0x18]
// 00525876  8b4010               mov eax, dword ptr [eax + 0x10]
// 00525879  8b6c9500             mov ebp, dword ptr [ebp + edx*4]
// 0052587d  8b0490               mov eax, dword ptr [eax + edx*4]
// 00525880  896c243c             mov dword ptr [esp + 0x3c], ebp
// 00525884  8b6c244c             mov ebp, dword ptr [esp + 0x4c]
// 00525888  89442440             mov dword ptr [esp + 0x40], eax
// 0052588c  33c0                 xor eax, eax
// 0052588e  85ed                 test ebp, ebp
// 00525890  89442458             mov dword ptr [esp + 0x58], eax
// 00525894  8944241c             mov dword ptr [esp + 0x1c], eax
// 00525898  896c2424             mov dword ptr [esp + 0x24], ebp
// 0052589c  7668                 jbe 0x525906
// 0052589e  8bff                 mov edi, edi
// 005258a0  0fbf1471             movsx edx, word ptr [ecx + esi*2]
// 005258a4  8b6c2440             mov ebp, dword ptr [esp + 0x40]
// 005258a8  8d440208             lea eax, [edx + eax + 8]
// 005258ac  0fb613               movzx edx, byte ptr [ebx]
// 005258af  c1f804               sar eax, 4
// 005258b2  03442438             add eax, dword ptr [esp + 0x38]
// 005258b6  035c2420             add ebx, dword ptr [esp + 0x20]
// 005258ba  0fb60402             movzx eax, byte ptr [edx + eax]
// 005258be  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 005258c2  0fb61410             movzx edx, byte ptr [eax + edx]
// 005258c6  0017                 add byte ptr [edi], dl
// 005258c8  0fb6142a             movzx edx, byte ptr [edx + ebp]
// 005258cc  8b6c2458             mov ebp, dword ptr [esp + 0x58]
// 005258d0  2bc2                 sub eax, edx
// 005258d2  89442444             mov dword ptr [esp + 0x44], eax
// 005258d6  8d1400               lea edx, [eax + eax]
// 005258d9  03c2                 add eax, edx
// 005258db  03e8                 add ebp, eax
// 005258dd  668929               mov word ptr [ecx], bp
// 005258e0  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 005258e4  03c2                 add eax, edx
// 005258e6  03e8                 add ebp, eax
// 005258e8  896c2458             mov dword ptr [esp + 0x58], ebp
// 005258ec  8b6c2444             mov ebp, dword ptr [esp + 0x44]
// 005258f0  03c2                 add eax, edx
// 005258f2  03fe                 add edi, esi
// 005258f4  836c242401           sub dword ptr [esp + 0x24], 1
// 005258f9  896c241c             mov dword ptr [esp + 0x1c], ebp
// 005258fd  8d0c71               lea ecx, [ecx + esi*2]
// 00525900  759e                 jne 0x5258a0
// 00525902  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00525906  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 0052590a  668b442458           mov ax, word ptr [esp + 0x58]
// 0052590f  8344241004           add dword ptr [esp + 0x10], 4
// 00525914  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 00525918  8b742414             mov esi, dword ptr [esp + 0x14]
// 0052591c  83c201               add edx, 1
// 0052591f  3bd5                 cmp edx, ebp
// 00525921  668901               mov word ptr [ecx], ax
// 00525924  8954242c             mov dword ptr [esp + 0x2c], edx
// 00525928  0f8c02ffffff         jl 0x525830
// 0052592e  807e5400             cmp byte ptr [esi + 0x54], 0
// 00525932  0f94c1               sete cl
// 00525935  83c704               add edi, 4
// 00525938  836c243001           sub dword ptr [esp + 0x30], 1
// 0052593d  884e54               mov byte ptr [esi + 0x54], cl
// 00525940  897c2418             mov dword ptr [esp + 0x18], edi
// 00525944  0f85b6feffff         jne 0x525800
// 0052594a  5f                   pop edi
// 0052594b  5b                   pop ebx
// 0052594c  5e                   pop esi
// 0052594d  5d                   pop ebp
// 0052594e  83c438               add esp, 0x38
// 00525951  c3                   ret 
// library jpeg-6b/jquant1.c (function _quantize_fs_dither)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant1.c
