// roc 2007-03 0053f900  unit: seg_00530000  size: 215 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0053f900
//
// 0053f900  83ec0c               sub esp, 0xc
// 0053f903  53                   push ebx
// 0053f904  55                   push ebp
// 0053f905  56                   push esi
// 0053f906  8bf1                 mov esi, ecx
// 0053f908  8b4e08               mov ecx, dword ptr [esi + 8]
// 0053f90b  33d2                 xor edx, edx
// 0053f90d  85c9                 test ecx, ecx
// 0053f90f  57                   push edi
// 0053f910  89542410             mov dword ptr [esp + 0x10], edx
// 0053f914  7504                 jne 0x53f91a
// 0053f916  33c0                 xor eax, eax
// 0053f918  eb08                 jmp 0x53f922
// 0053f91a  8b460c               mov eax, dword ptr [esi + 0xc]
// 0053f91d  2bc1                 sub eax, ecx
// 0053f91f  c1f802               sar eax, 2
// 0053f922  85c0                 test eax, eax
// 0053f924  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 0053f927  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0053f92b  894c2418             mov dword ptr [esp + 0x18], ecx
// 0053f92f  8d4c2410             lea ecx, [esp + 0x10]
// 0053f933  89442414             mov dword ptr [esp + 0x14], eax
// 0053f937  894e14               mov dword ptr [esi + 0x14], ecx
// 0053f93a  765c                 jbe 0x53f998
// 0053f93c  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 0053f940  8b4e08               mov ecx, dword ptr [esi + 8]
// 0053f943  85c9                 test ecx, ecx
// 0053f945  8bda                 mov ebx, edx
// 0053f947  740c                 je 0x53f955
// 0053f949  8b460c               mov eax, dword ptr [esi + 0xc]
// 0053f94c  2bc1                 sub eax, ecx
// 0053f94e  c1f802               sar eax, 2
// 0053f951  3bd0                 cmp edx, eax
// 0053f953  7206                 jb 0x53f95b
// 0053f955  ff1544e97700         call dword ptr [0x77e944]
// 0053f95b  8b5608               mov edx, dword ptr [esi + 8]
// 0053f95e  8b049a               mov eax, dword ptr [edx + ebx*4]
// 0053f961  50                   push eax
// 0053f962  83ec08               sub esp, 8
// 0053f965  85ff                 test edi, edi
// 0053f967  8bc4                 mov eax, esp
// 0053f969  8928                 mov dword ptr [eax], ebp
// 0053f96b  8964242c             mov dword ptr [esp + 0x2c], esp
// 0053f96f  897804               mov dword ptr [eax + 4], edi
// 0053f972  740c                 je 0x53f980
// 0053f974  8d4704               lea eax, [edi + 4]
// 0053f977  b901000000           mov ecx, 1
// 0053f97c  f00fc108             lock xadd dword ptr [eax], ecx
// 0053f980  8bce                 mov ecx, esi
// 0053f982  e849f8ffff           call 0x53f1d0
// 0053f987  8b542410             mov edx, dword ptr [esp + 0x10]
// 0053f98b  83c201               add edx, 1
// 0053f98e  3b542414             cmp edx, dword ptr [esp + 0x14]
// 0053f992  89542410             mov dword ptr [esp + 0x10], edx
// 0053f996  72a8                 jb 0x53f940
// 0053f998  85ff                 test edi, edi
// 0053f99a  8b542418             mov edx, dword ptr [esp + 0x18]
// 0053f99e  895614               mov dword ptr [esi + 0x14], edx
// 0053f9a1  742a                 je 0x53f9cd
// 0053f9a3  8d4704               lea eax, [edi + 4]
// 0053f9a6  83c9ff               or ecx, 0xffffffff
// 0053f9a9  f00fc108             lock xadd dword ptr [eax], ecx
// 0053f9ad  751e                 jne 0x53f9cd
// 0053f9af  8b17                 mov edx, dword ptr [edi]
// 0053f9b1  8b4204               mov eax, dword ptr [edx + 4]
// 0053f9b4  8bcf                 mov ecx, edi
// 0053f9b6  ffd0                 call eax
// 0053f9b8  8d4f08               lea ecx, [edi + 8]
// 0053f9bb  83caff               or edx, 0xffffffff
// 0053f9be  f00fc111             lock xadd dword ptr [ecx], edx
// 0053f9c2  7509                 jne 0x53f9cd
// 0053f9c4  8b07                 mov eax, dword ptr [edi]
// 0053f9c6  8b5008               mov edx, dword ptr [eax + 8]
// 0053f9c9  8bcf                 mov ecx, edi
// 0053f9cb  ffd2                 call edx
// 0053f9cd  5f                   pop edi
// 0053f9ce  5e                   pop esi
// 0053f9cf  5d                   pop ebp
// 0053f9d0  5b                   pop ebx
// 0053f9d1  83c40c               add esp, 0xc
// 0053f9d4  c20800               ret 8
// library openrbx-client/App\v8tree\Instance.cpp (function ?raise@?$Notifier@VInstance@RBX@@UChildAdded@2@@RBX@@IBEXUChildAdded@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8tree/Instance.cpp
