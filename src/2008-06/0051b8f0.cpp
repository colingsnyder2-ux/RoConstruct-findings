// roc 2008-06 0051b8f0  unit: G3D::_internal::DialogTemplate  size: 720 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0051b8f0
//
// 0051b8f0  53                   push ebx
// 0051b8f1  55                   push ebp
// 0051b8f2  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 0051b8f6  56                   push esi
// 0051b8f7  8b742414             mov esi, dword ptr [esp + 0x14]
// 0051b8fb  57                   push edi
// 0051b8fc  56                   push esi
// 0051b8fd  55                   push ebp
// 0051b8fe  e81dfeffff           call 0x51b720
// 0051b903  83c408               add esp, 8
// 0051b906  f6460808             test byte ptr [esi + 8], 8
// 0051b90a  7414                 je 0x51b920
// 0051b90c  0fb74614             movzx eax, word ptr [esi + 0x14]
// 0051b910  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0051b913  50                   push eax
// 0051b914  51                   push ecx
// 0051b915  55                   push ebp
// 0051b916  e8b5af0000           call 0x5268d0
// 0051b91b  83c40c               add esp, 0xc
// 0051b91e  eb14                 jmp 0x51b934
// 0051b920  807e1903             cmp byte ptr [esi + 0x19], 3
// 0051b924  750e                 jne 0x51b934
// 0051b926  68908d8200           push 0x828d90
// 0051b92b  55                   push ebp
// 0051b92c  e87fe00000           call 0x5299b0
// 0051b931  83c408               add esp, 8
// 0051b934  f6460810             test byte ptr [esi + 8], 0x10
// 0051b938  7449                 je 0x51b983
// 0051b93a  f7457000000800       test dword ptr [ebp + 0x70], 0x80000
// 0051b941  7425                 je 0x51b968
// 0051b943  807e1903             cmp byte ptr [esi + 0x19], 3
// 0051b947  751f                 jne 0x51b968
// 0051b949  33d2                 xor edx, edx
// 0051b94b  33c0                 xor eax, eax
// 0051b94d  663b5616             cmp dx, word ptr [esi + 0x16]
// 0051b951  7315                 jae 0x51b968
// 0051b953  8b4e4c               mov ecx, dword ptr [esi + 0x4c]
// 0051b956  03c8                 add ecx, eax
// 0051b958  80caff               or dl, 0xff
// 0051b95b  2a11                 sub dl, byte ptr [ecx]
// 0051b95d  40                   inc eax
// 0051b95e  8811                 mov byte ptr [ecx], dl
// 0051b960  0fb74e16             movzx ecx, word ptr [esi + 0x16]
// 0051b964  3bc1                 cmp eax, ecx
// 0051b966  7ceb                 jl 0x51b953
// 0051b968  0fb65619             movzx edx, byte ptr [esi + 0x19]
// 0051b96c  0fb74616             movzx eax, word ptr [esi + 0x16]
// 0051b970  52                   push edx
// 0051b971  8b564c               mov edx, dword ptr [esi + 0x4c]
// 0051b974  50                   push eax
// 0051b975  8d4e50               lea ecx, [esi + 0x50]
// 0051b978  51                   push ecx
// 0051b979  52                   push edx
// 0051b97a  55                   push ebp
// 0051b97b  e8c0ca0000           call 0x528440
// 0051b980  83c414               add esp, 0x14
// 0051b983  f6460820             test byte ptr [esi + 8], 0x20
// 0051b987  7412                 je 0x51b99b
// 0051b989  0fb64619             movzx eax, byte ptr [esi + 0x19]
// 0051b98d  50                   push eax
// 0051b98e  8d4e5a               lea ecx, [esi + 0x5a]
// 0051b991  51                   push ecx
// 0051b992  55                   push ebp
// 0051b993  e8e8cb0000           call 0x528580
// 0051b998  83c40c               add esp, 0xc
// 0051b99b  f6460840             test byte ptr [esi + 8], 0x40
// 0051b99f  7412                 je 0x51b9b3
// 0051b9a1  0fb75614             movzx edx, word ptr [esi + 0x14]
// 0051b9a5  8b467c               mov eax, dword ptr [esi + 0x7c]
// 0051b9a8  52                   push edx
// 0051b9a9  50                   push eax
// 0051b9aa  55                   push ebp
// 0051b9ab  e810b00000           call 0x5269c0
// 0051b9b0  83c40c               add esp, 0xc
// 0051b9b3  f7460800010000       test dword ptr [esi + 8], 0x100
// 0051b9ba  7416                 je 0x51b9d2
// 0051b9bc  0fb64e6c             movzx ecx, byte ptr [esi + 0x6c]
// 0051b9c0  8b5668               mov edx, dword ptr [esi + 0x68]
// 0051b9c3  8b4664               mov eax, dword ptr [esi + 0x64]
// 0051b9c6  51                   push ecx
// 0051b9c7  52                   push edx
// 0051b9c8  50                   push eax
// 0051b9c9  55                   push ebp
// 0051b9ca  e8f1cc0000           call 0x5286c0
// 0051b9cf  83c410               add esp, 0x10
// 0051b9d2  f7460800040000       test dword ptr [esi + 8], 0x400
// 0051b9d9  743c                 je 0x51ba17
// 0051b9db  8b8eb0000000         mov ecx, dword ptr [esi + 0xb0]
// 0051b9e1  8b96ac000000         mov edx, dword ptr [esi + 0xac]
// 0051b9e7  0fb686b5000000       movzx eax, byte ptr [esi + 0xb5]
// 0051b9ee  51                   push ecx
// 0051b9ef  0fb68eb4000000       movzx ecx, byte ptr [esi + 0xb4]
// 0051b9f6  52                   push edx
// 0051b9f7  8b96a8000000         mov edx, dword ptr [esi + 0xa8]
// 0051b9fd  50                   push eax
// 0051b9fe  8b86a4000000         mov eax, dword ptr [esi + 0xa4]
// 0051ba04  51                   push ecx
// 0051ba05  8b8ea0000000         mov ecx, dword ptr [esi + 0xa0]
// 0051ba0b  52                   push edx
// 0051ba0c  50                   push eax
// 0051ba0d  51                   push ecx
// 0051ba0e  55                   push ebp
// 0051ba0f  e81cb40000           call 0x526e30
// 0051ba14  83c420               add esp, 0x20
// 0051ba17  f7460800400000       test dword ptr [esi + 8], 0x4000
// 0051ba1e  7427                 je 0x51ba47
// 0051ba20  dd86e8000000         fld qword ptr [esi + 0xe8]
// 0051ba26  0fb696dc000000       movzx edx, byte ptr [esi + 0xdc]
// 0051ba2d  83ec10               sub esp, 0x10
// 0051ba30  dd5c2408             fstp qword ptr [esp + 8]
// 0051ba34  dd86e0000000         fld qword ptr [esi + 0xe0]
// 0051ba3a  dd1c24               fstp qword ptr [esp]
// 0051ba3d  52                   push edx
// 0051ba3e  55                   push ebp
// 0051ba3f  e85cb60000           call 0x5270a0
// 0051ba44  83c418               add esp, 0x18
// 0051ba47  f6460880             test byte ptr [esi + 8], 0x80
// 0051ba4b  7416                 je 0x51ba63
// 0051ba4d  0fb64678             movzx eax, byte ptr [esi + 0x78]
// 0051ba51  8b4e74               mov ecx, dword ptr [esi + 0x74]
// 0051ba54  8b5670               mov edx, dword ptr [esi + 0x70]
// 0051ba57  50                   push eax
// 0051ba58  51                   push ecx
// 0051ba59  52                   push edx
// 0051ba5a  55                   push ebp
// 0051ba5b  e830cd0000           call 0x528790
// 0051ba60  83c410               add esp, 0x10
// 0051ba63  bf00020000           mov edi, 0x200
// 0051ba68  857e08               test dword ptr [esi + 8], edi
// 0051ba6b  7410                 je 0x51ba7d
// 0051ba6d  8d463c               lea eax, [esi + 0x3c]
// 0051ba70  50                   push eax
// 0051ba71  55                   push ebp
// 0051ba72  e8e9cd0000           call 0x528860
// 0051ba77  83c408               add esp, 8
// 0051ba7a  097d68               or dword ptr [ebp + 0x68], edi
// 0051ba7d  f7460800200000       test dword ptr [esi + 8], 0x2000
// 0051ba84  742a                 je 0x51bab0
// 0051ba86  33ff                 xor edi, edi
// 0051ba88  39bed8000000         cmp dword ptr [esi + 0xd8], edi
// 0051ba8e  7e20                 jle 0x51bab0
// 0051ba90  33db                 xor ebx, ebx
// 0051ba92  8b8ed4000000         mov ecx, dword ptr [esi + 0xd4]
// 0051ba98  03cb                 add ecx, ebx
// 0051ba9a  51                   push ecx
// 0051ba9b  55                   push ebp
// 0051ba9c  e80fc30000           call 0x527db0
// 0051baa1  47                   inc edi
// 0051baa2  83c408               add esp, 8
// 0051baa5  83c310               add ebx, 0x10
// 0051baa8  3bbed8000000         cmp edi, dword ptr [esi + 0xd8]
// 0051baae  7ce2                 jl 0x51ba92
// 0051bab0  33db                 xor ebx, ebx
// 0051bab2  395e30               cmp dword ptr [esi + 0x30], ebx
// 0051bab5  0f8e84000000         jle 0x51bb3f
// 0051babb  33ff                 xor edi, edi
// 0051babd  8d4900               lea ecx, [ecx]
// 0051bac0  8b5638               mov edx, dword ptr [esi + 0x38]
// 0051bac3  8b0417               mov eax, dword ptr [edi + edx]
// 0051bac6  85c0                 test eax, eax
// 0051bac8  7e1a                 jle 0x51bae4
// 0051baca  686c8d8200           push 0x828d6c
// 0051bacf  55                   push ebp
// 0051bad0  e87bdf0000           call 0x529a50
// 0051bad5  8b4638               mov eax, dword ptr [esi + 0x38]
// 0051bad8  83c408               add esp, 8
// 0051badb  c70407fdffffff       mov dword ptr [edi + eax], 0xfffffffd
// 0051bae2  eb52                 jmp 0x51bb36
// 0051bae4  7528                 jne 0x51bb0e
// 0051bae6  8bca                 mov ecx, edx
// 0051bae8  8b140f               mov edx, dword ptr [edi + ecx]
// 0051baeb  8d040f               lea eax, [edi + ecx]
// 0051baee  8b4808               mov ecx, dword ptr [eax + 8]
// 0051baf1  52                   push edx
// 0051baf2  8b5004               mov edx, dword ptr [eax + 4]
// 0051baf5  6a00                 push 0
// 0051baf7  51                   push ecx
// 0051baf8  52                   push edx
// 0051baf9  55                   push ebp
// 0051bafa  e821b20000           call 0x526d20
// 0051baff  8b4638               mov eax, dword ptr [esi + 0x38]
// 0051bb02  83c414               add esp, 0x14
// 0051bb05  c70407feffffff       mov dword ptr [edi + eax], 0xfffffffe
// 0051bb0c  eb28                 jmp 0x51bb36
// 0051bb0e  83f8ff               cmp eax, -1
// 0051bb11  7523                 jne 0x51bb36
// 0051bb13  8bca                 mov ecx, edx
// 0051bb15  8b540f08             mov edx, dword ptr [edi + ecx + 8]
// 0051bb19  8d040f               lea eax, [edi + ecx]
// 0051bb1c  8b4004               mov eax, dword ptr [eax + 4]
// 0051bb1f  6a00                 push 0
// 0051bb21  52                   push edx
// 0051bb22  50                   push eax
// 0051bb23  55                   push ebp
// 0051bb24  e837b10000           call 0x526c60
// 0051bb29  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 0051bb2c  83c410               add esp, 0x10
// 0051bb2f  c7040ffdffffff       mov dword ptr [edi + ecx], 0xfffffffd
// 0051bb36  43                   inc ebx
// 0051bb37  83c710               add edi, 0x10
// 0051bb3a  3b5e30               cmp ebx, dword ptr [esi + 0x30]
// 0051bb3d  7c81                 jl 0x51bac0
// 0051bb3f  8b86c0000000         mov eax, dword ptr [esi + 0xc0]
// 0051bb45  85c0                 test eax, eax
// 0051bb47  7472                 je 0x51bbbb
// 0051bb49  8bbebc000000         mov edi, dword ptr [esi + 0xbc]
// 0051bb4f  8d1480               lea edx, [eax + eax*4]
// 0051bb52  8d0497               lea eax, [edi + edx*4]
// 0051bb55  3bf8                 cmp edi, eax
// 0051bb57  7362                 jae 0x51bbbb
// 0051bb59  bb00000100           mov ebx, 0x10000
// 0051bb5e  8bff                 mov edi, edi
// 0051bb60  57                   push edi
// 0051bb61  55                   push ebp
// 0051bb62  e869260000           call 0x51e1d0
// 0051bb67  83c408               add esp, 8
// 0051bb6a  83f801               cmp eax, 1
// 0051bb6d  7433                 je 0x51bba2
// 0051bb6f  8a4f10               mov cl, byte ptr [edi + 0x10]
// 0051bb72  84c9                 test cl, cl
// 0051bb74  742c                 je 0x51bba2
// 0051bb76  f6c102               test cl, 2
// 0051bb79  7427                 je 0x51bba2
// 0051bb7b  f6c104               test cl, 4
// 0051bb7e  7522                 jne 0x51bba2
// 0051bb80  f6470320             test byte ptr [edi + 3], 0x20
// 0051bb84  750a                 jne 0x51bb90
// 0051bb86  83f803               cmp eax, 3
// 0051bb89  7405                 je 0x51bb90
// 0051bb8b  855d6c               test dword ptr [ebp + 0x6c], ebx
// 0051bb8e  7412                 je 0x51bba2
// 0051bb90  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 0051bb93  8b5708               mov edx, dword ptr [edi + 8]
// 0051bb96  51                   push ecx
// 0051bb97  52                   push edx
// 0051bb98  57                   push edi
// 0051bb99  55                   push ebp
// 0051bb9a  e811ba0000           call 0x5275b0
// 0051bb9f  83c410               add esp, 0x10
// 0051bba2  8b86c0000000         mov eax, dword ptr [esi + 0xc0]
// 0051bba8  8b8ebc000000         mov ecx, dword ptr [esi + 0xbc]
// 0051bbae  8d0480               lea eax, [eax + eax*4]
// 0051bbb1  83c714               add edi, 0x14
// 0051bbb4  8d1481               lea edx, [ecx + eax*4]
// 0051bbb7  3bfa                 cmp edi, edx
// 0051bbb9  72a5                 jb 0x51bb60
// 0051bbbb  5f                   pop edi
// 0051bbbc  5e                   pop esi
// 0051bbbd  5d                   pop ebp
// 0051bbbe  5b                   pop ebx
// 0051bbbf  c3                   ret 
// library libpng-1.2.5/pngwrite.c (function _png_write_info)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngwrite.c
