// roc 2007-08 004887f0  unit: P8CRenderSettings::?$GetSetImpl  size: 215 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004887f0
//
// 004887f0  83ec0c               sub esp, 0xc
// 004887f3  53                   push ebx
// 004887f4  55                   push ebp
// 004887f5  56                   push esi
// 004887f6  8bf1                 mov esi, ecx
// 004887f8  8b4e08               mov ecx, dword ptr [esi + 8]
// 004887fb  33d2                 xor edx, edx
// 004887fd  85c9                 test ecx, ecx
// 004887ff  57                   push edi
// 00488800  89542410             mov dword ptr [esp + 0x10], edx
// 00488804  7504                 jne 0x48880a
// 00488806  33c0                 xor eax, eax
// 00488808  eb08                 jmp 0x488812
// 0048880a  8b460c               mov eax, dword ptr [esi + 0xc]
// 0048880d  2bc1                 sub eax, ecx
// 0048880f  c1f802               sar eax, 2
// 00488812  85c0                 test eax, eax
// 00488814  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 00488817  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0048881b  894c2418             mov dword ptr [esp + 0x18], ecx
// 0048881f  8d4c2410             lea ecx, [esp + 0x10]
// 00488823  89442414             mov dword ptr [esp + 0x14], eax
// 00488827  894e14               mov dword ptr [esi + 0x14], ecx
// 0048882a  765c                 jbe 0x488888
// 0048882c  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 00488830  8b4e08               mov ecx, dword ptr [esi + 8]
// 00488833  85c9                 test ecx, ecx
// 00488835  8bda                 mov ebx, edx
// 00488837  740c                 je 0x488845
// 00488839  8b460c               mov eax, dword ptr [esi + 0xc]
// 0048883c  2bc1                 sub eax, ecx
// 0048883e  c1f802               sar eax, 2
// 00488841  3bd0                 cmp edx, eax
// 00488843  7206                 jb 0x48884b
// 00488845  ff15d8e67700         call dword ptr [0x77e6d8]
// 0048884b  8b5608               mov edx, dword ptr [esi + 8]
// 0048884e  8b049a               mov eax, dword ptr [edx + ebx*4]
// 00488851  50                   push eax
// 00488852  83ec08               sub esp, 8
// 00488855  85ff                 test edi, edi
// 00488857  8bc4                 mov eax, esp
// 00488859  8928                 mov dword ptr [eax], ebp
// 0048885b  8964242c             mov dword ptr [esp + 0x2c], esp
// 0048885f  897804               mov dword ptr [eax + 4], edi
// 00488862  740c                 je 0x488870
// 00488864  8d4704               lea eax, [edi + 4]
// 00488867  b901000000           mov ecx, 1
// 0048886c  f00fc108             lock xadd dword ptr [eax], ecx
// 00488870  8bce                 mov ecx, esi
// 00488872  e849f4ffff           call 0x487cc0
// 00488877  8b542410             mov edx, dword ptr [esp + 0x10]
// 0048887b  83c201               add edx, 1
// 0048887e  3b542414             cmp edx, dword ptr [esp + 0x14]
// 00488882  89542410             mov dword ptr [esp + 0x10], edx
// 00488886  72a8                 jb 0x488830
// 00488888  85ff                 test edi, edi
// 0048888a  8b542418             mov edx, dword ptr [esp + 0x18]
// 0048888e  895614               mov dword ptr [esi + 0x14], edx
// 00488891  742a                 je 0x4888bd
// 00488893  8d4704               lea eax, [edi + 4]
// 00488896  83c9ff               or ecx, 0xffffffff
// 00488899  f00fc108             lock xadd dword ptr [eax], ecx
// 0048889d  751e                 jne 0x4888bd
// 0048889f  8b17                 mov edx, dword ptr [edi]
// 004888a1  8b4204               mov eax, dword ptr [edx + 4]
// 004888a4  8bcf                 mov ecx, edi
// 004888a6  ffd0                 call eax
// 004888a8  8d4f08               lea ecx, [edi + 8]
// 004888ab  83caff               or edx, 0xffffffff
// 004888ae  f00fc111             lock xadd dword ptr [ecx], edx
// 004888b2  7509                 jne 0x4888bd
// 004888b4  8b07                 mov eax, dword ptr [edi]
// 004888b6  8b5008               mov edx, dword ptr [eax + 8]
// 004888b9  8bcf                 mov ecx, edi
// 004888bb  ffd2                 call edx
// 004888bd  5f                   pop edi
// 004888be  5e                   pop esi
// 004888bf  5d                   pop ebp
// 004888c0  5b                   pop ebx
// 004888c1  83c40c               add esp, 0xc
// 004888c4  c20800               ret 8
// library openrbx-client/App\v8tree\Instance.cpp (function ?raise@?$Notifier@VInstance@RBX@@UChildAdded@2@@RBX@@IBEXUChildAdded@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8tree/Instance.cpp
