// roc 2007-08 004888d0  unit: P8CRenderSettings::?$GetSetImpl  size: 215 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004888d0
//
// 004888d0  83ec0c               sub esp, 0xc
// 004888d3  53                   push ebx
// 004888d4  55                   push ebp
// 004888d5  56                   push esi
// 004888d6  8bf1                 mov esi, ecx
// 004888d8  8b4e08               mov ecx, dword ptr [esi + 8]
// 004888db  33d2                 xor edx, edx
// 004888dd  85c9                 test ecx, ecx
// 004888df  57                   push edi
// 004888e0  89542410             mov dword ptr [esp + 0x10], edx
// 004888e4  7504                 jne 0x4888ea
// 004888e6  33c0                 xor eax, eax
// 004888e8  eb08                 jmp 0x4888f2
// 004888ea  8b460c               mov eax, dword ptr [esi + 0xc]
// 004888ed  2bc1                 sub eax, ecx
// 004888ef  c1f802               sar eax, 2
// 004888f2  85c0                 test eax, eax
// 004888f4  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 004888f7  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 004888fb  894c2418             mov dword ptr [esp + 0x18], ecx
// 004888ff  8d4c2410             lea ecx, [esp + 0x10]
// 00488903  89442414             mov dword ptr [esp + 0x14], eax
// 00488907  894e14               mov dword ptr [esi + 0x14], ecx
// 0048890a  765c                 jbe 0x488968
// 0048890c  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 00488910  8b4e08               mov ecx, dword ptr [esi + 8]
// 00488913  85c9                 test ecx, ecx
// 00488915  8bda                 mov ebx, edx
// 00488917  740c                 je 0x488925
// 00488919  8b460c               mov eax, dword ptr [esi + 0xc]
// 0048891c  2bc1                 sub eax, ecx
// 0048891e  c1f802               sar eax, 2
// 00488921  3bd0                 cmp edx, eax
// 00488923  7206                 jb 0x48892b
// 00488925  ff15d8e67700         call dword ptr [0x77e6d8]
// 0048892b  8b5608               mov edx, dword ptr [esi + 8]
// 0048892e  8b049a               mov eax, dword ptr [edx + ebx*4]
// 00488931  50                   push eax
// 00488932  83ec08               sub esp, 8
// 00488935  85ff                 test edi, edi
// 00488937  8bc4                 mov eax, esp
// 00488939  8928                 mov dword ptr [eax], ebp
// 0048893b  8964242c             mov dword ptr [esp + 0x2c], esp
// 0048893f  897804               mov dword ptr [eax + 4], edi
// 00488942  740c                 je 0x488950
// 00488944  8d4704               lea eax, [edi + 4]
// 00488947  b901000000           mov ecx, 1
// 0048894c  f00fc108             lock xadd dword ptr [eax], ecx
// 00488950  8bce                 mov ecx, esi
// 00488952  e8a9f4ffff           call 0x487e00
// 00488957  8b542410             mov edx, dword ptr [esp + 0x10]
// 0048895b  83c201               add edx, 1
// 0048895e  3b542414             cmp edx, dword ptr [esp + 0x14]
// 00488962  89542410             mov dword ptr [esp + 0x10], edx
// 00488966  72a8                 jb 0x488910
// 00488968  85ff                 test edi, edi
// 0048896a  8b542418             mov edx, dword ptr [esp + 0x18]
// 0048896e  895614               mov dword ptr [esi + 0x14], edx
// 00488971  742a                 je 0x48899d
// 00488973  8d4704               lea eax, [edi + 4]
// 00488976  83c9ff               or ecx, 0xffffffff
// 00488979  f00fc108             lock xadd dword ptr [eax], ecx
// 0048897d  751e                 jne 0x48899d
// 0048897f  8b17                 mov edx, dword ptr [edi]
// 00488981  8b4204               mov eax, dword ptr [edx + 4]
// 00488984  8bcf                 mov ecx, edi
// 00488986  ffd0                 call eax
// 00488988  8d4f08               lea ecx, [edi + 8]
// 0048898b  83caff               or edx, 0xffffffff
// 0048898e  f00fc111             lock xadd dword ptr [ecx], edx
// 00488992  7509                 jne 0x48899d
// 00488994  8b07                 mov eax, dword ptr [edi]
// 00488996  8b5008               mov edx, dword ptr [eax + 8]
// 00488999  8bcf                 mov ecx, edi
// 0048899b  ffd2                 call edx
// 0048899d  5f                   pop edi
// 0048899e  5e                   pop esi
// 0048899f  5d                   pop ebp
// 004889a0  5b                   pop ebx
// 004889a1  83c40c               add esp, 0xc
// 004889a4  c20800               ret 8
// library openrbx-client/App\v8tree\Instance.cpp (function ?raise@?$Notifier@VInstance@RBX@@UChildAdded@2@@RBX@@IBEXUChildAdded@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8tree/Instance.cpp
