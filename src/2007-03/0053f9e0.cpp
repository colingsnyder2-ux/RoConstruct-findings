// roc 2007-03 0053f9e0  unit: seg_00530000  size: 215 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0053f9e0
//
// 0053f9e0  83ec0c               sub esp, 0xc
// 0053f9e3  53                   push ebx
// 0053f9e4  55                   push ebp
// 0053f9e5  56                   push esi
// 0053f9e6  8bf1                 mov esi, ecx
// 0053f9e8  8b4e08               mov ecx, dword ptr [esi + 8]
// 0053f9eb  33d2                 xor edx, edx
// 0053f9ed  85c9                 test ecx, ecx
// 0053f9ef  57                   push edi
// 0053f9f0  89542410             mov dword ptr [esp + 0x10], edx
// 0053f9f4  7504                 jne 0x53f9fa
// 0053f9f6  33c0                 xor eax, eax
// 0053f9f8  eb08                 jmp 0x53fa02
// 0053f9fa  8b460c               mov eax, dword ptr [esi + 0xc]
// 0053f9fd  2bc1                 sub eax, ecx
// 0053f9ff  c1f802               sar eax, 2
// 0053fa02  85c0                 test eax, eax
// 0053fa04  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 0053fa07  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0053fa0b  894c2418             mov dword ptr [esp + 0x18], ecx
// 0053fa0f  8d4c2410             lea ecx, [esp + 0x10]
// 0053fa13  89442414             mov dword ptr [esp + 0x14], eax
// 0053fa17  894e14               mov dword ptr [esi + 0x14], ecx
// 0053fa1a  765c                 jbe 0x53fa78
// 0053fa1c  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 0053fa20  8b4e08               mov ecx, dword ptr [esi + 8]
// 0053fa23  85c9                 test ecx, ecx
// 0053fa25  8bda                 mov ebx, edx
// 0053fa27  740c                 je 0x53fa35
// 0053fa29  8b460c               mov eax, dword ptr [esi + 0xc]
// 0053fa2c  2bc1                 sub eax, ecx
// 0053fa2e  c1f802               sar eax, 2
// 0053fa31  3bd0                 cmp edx, eax
// 0053fa33  7206                 jb 0x53fa3b
// 0053fa35  ff1544e97700         call dword ptr [0x77e944]
// 0053fa3b  8b5608               mov edx, dword ptr [esi + 8]
// 0053fa3e  8b049a               mov eax, dword ptr [edx + ebx*4]
// 0053fa41  50                   push eax
// 0053fa42  83ec08               sub esp, 8
// 0053fa45  85ff                 test edi, edi
// 0053fa47  8bc4                 mov eax, esp
// 0053fa49  8928                 mov dword ptr [eax], ebp
// 0053fa4b  8964242c             mov dword ptr [esp + 0x2c], esp
// 0053fa4f  897804               mov dword ptr [eax + 4], edi
// 0053fa52  740c                 je 0x53fa60
// 0053fa54  8d4704               lea eax, [edi + 4]
// 0053fa57  b901000000           mov ecx, 1
// 0053fa5c  f00fc108             lock xadd dword ptr [eax], ecx
// 0053fa60  8bce                 mov ecx, esi
// 0053fa62  e869f8ffff           call 0x53f2d0
// 0053fa67  8b542410             mov edx, dword ptr [esp + 0x10]
// 0053fa6b  83c201               add edx, 1
// 0053fa6e  3b542414             cmp edx, dword ptr [esp + 0x14]
// 0053fa72  89542410             mov dword ptr [esp + 0x10], edx
// 0053fa76  72a8                 jb 0x53fa20
// 0053fa78  85ff                 test edi, edi
// 0053fa7a  8b542418             mov edx, dword ptr [esp + 0x18]
// 0053fa7e  895614               mov dword ptr [esi + 0x14], edx
// 0053fa81  742a                 je 0x53faad
// 0053fa83  8d4704               lea eax, [edi + 4]
// 0053fa86  83c9ff               or ecx, 0xffffffff
// 0053fa89  f00fc108             lock xadd dword ptr [eax], ecx
// 0053fa8d  751e                 jne 0x53faad
// 0053fa8f  8b17                 mov edx, dword ptr [edi]
// 0053fa91  8b4204               mov eax, dword ptr [edx + 4]
// 0053fa94  8bcf                 mov ecx, edi
// 0053fa96  ffd0                 call eax
// 0053fa98  8d4f08               lea ecx, [edi + 8]
// 0053fa9b  83caff               or edx, 0xffffffff
// 0053fa9e  f00fc111             lock xadd dword ptr [ecx], edx
// 0053faa2  7509                 jne 0x53faad
// 0053faa4  8b07                 mov eax, dword ptr [edi]
// 0053faa6  8b5008               mov edx, dword ptr [eax + 8]
// 0053faa9  8bcf                 mov ecx, edi
// 0053faab  ffd2                 call edx
// 0053faad  5f                   pop edi
// 0053faae  5e                   pop esi
// 0053faaf  5d                   pop ebp
// 0053fab0  5b                   pop ebx
// 0053fab1  83c40c               add esp, 0xc
// 0053fab4  c20800               ret 8
// library openrbx-client/App\v8tree\Instance.cpp (function ?raise@?$Notifier@VInstance@RBX@@UChildAdded@2@@RBX@@IBEXUChildAdded@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8tree/Instance.cpp
