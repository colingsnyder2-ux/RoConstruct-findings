// roc 2007-08 00554b50  unit: RBX::ServiceProvider  size: 215 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00554b50
//
// 00554b50  83ec0c               sub esp, 0xc
// 00554b53  53                   push ebx
// 00554b54  55                   push ebp
// 00554b55  56                   push esi
// 00554b56  8bf1                 mov esi, ecx
// 00554b58  8b4e08               mov ecx, dword ptr [esi + 8]
// 00554b5b  33d2                 xor edx, edx
// 00554b5d  85c9                 test ecx, ecx
// 00554b5f  57                   push edi
// 00554b60  89542410             mov dword ptr [esp + 0x10], edx
// 00554b64  7504                 jne 0x554b6a
// 00554b66  33c0                 xor eax, eax
// 00554b68  eb08                 jmp 0x554b72
// 00554b6a  8b460c               mov eax, dword ptr [esi + 0xc]
// 00554b6d  2bc1                 sub eax, ecx
// 00554b6f  c1f802               sar eax, 2
// 00554b72  85c0                 test eax, eax
// 00554b74  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 00554b77  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00554b7b  894c2418             mov dword ptr [esp + 0x18], ecx
// 00554b7f  8d4c2410             lea ecx, [esp + 0x10]
// 00554b83  89442414             mov dword ptr [esp + 0x14], eax
// 00554b87  894e14               mov dword ptr [esi + 0x14], ecx
// 00554b8a  765c                 jbe 0x554be8
// 00554b8c  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 00554b90  8b4e08               mov ecx, dword ptr [esi + 8]
// 00554b93  85c9                 test ecx, ecx
// 00554b95  8bda                 mov ebx, edx
// 00554b97  740c                 je 0x554ba5
// 00554b99  8b460c               mov eax, dword ptr [esi + 0xc]
// 00554b9c  2bc1                 sub eax, ecx
// 00554b9e  c1f802               sar eax, 2
// 00554ba1  3bd0                 cmp edx, eax
// 00554ba3  7206                 jb 0x554bab
// 00554ba5  ff15d8e67700         call dword ptr [0x77e6d8]
// 00554bab  8b5608               mov edx, dword ptr [esi + 8]
// 00554bae  8b049a               mov eax, dword ptr [edx + ebx*4]
// 00554bb1  50                   push eax
// 00554bb2  83ec08               sub esp, 8
// 00554bb5  85ff                 test edi, edi
// 00554bb7  8bc4                 mov eax, esp
// 00554bb9  8928                 mov dword ptr [eax], ebp
// 00554bbb  8964242c             mov dword ptr [esp + 0x2c], esp
// 00554bbf  897804               mov dword ptr [eax + 4], edi
// 00554bc2  740c                 je 0x554bd0
// 00554bc4  8d4704               lea eax, [edi + 4]
// 00554bc7  b901000000           mov ecx, 1
// 00554bcc  f00fc108             lock xadd dword ptr [eax], ecx
// 00554bd0  8bce                 mov ecx, esi
// 00554bd2  e809fdffff           call 0x5548e0
// 00554bd7  8b542410             mov edx, dword ptr [esp + 0x10]
// 00554bdb  83c201               add edx, 1
// 00554bde  3b542414             cmp edx, dword ptr [esp + 0x14]
// 00554be2  89542410             mov dword ptr [esp + 0x10], edx
// 00554be6  72a8                 jb 0x554b90
// 00554be8  85ff                 test edi, edi
// 00554bea  8b542418             mov edx, dword ptr [esp + 0x18]
// 00554bee  895614               mov dword ptr [esi + 0x14], edx
// 00554bf1  742a                 je 0x554c1d
// 00554bf3  8d4704               lea eax, [edi + 4]
// 00554bf6  83c9ff               or ecx, 0xffffffff
// 00554bf9  f00fc108             lock xadd dword ptr [eax], ecx
// 00554bfd  751e                 jne 0x554c1d
// 00554bff  8b17                 mov edx, dword ptr [edi]
// 00554c01  8b4204               mov eax, dword ptr [edx + 4]
// 00554c04  8bcf                 mov ecx, edi
// 00554c06  ffd0                 call eax
// 00554c08  8d4f08               lea ecx, [edi + 8]
// 00554c0b  83caff               or edx, 0xffffffff
// 00554c0e  f00fc111             lock xadd dword ptr [ecx], edx
// 00554c12  7509                 jne 0x554c1d
// 00554c14  8b07                 mov eax, dword ptr [edi]
// 00554c16  8b5008               mov edx, dword ptr [eax + 8]
// 00554c19  8bcf                 mov ecx, edi
// 00554c1b  ffd2                 call edx
// 00554c1d  5f                   pop edi
// 00554c1e  5e                   pop esi
// 00554c1f  5d                   pop ebp
// 00554c20  5b                   pop ebx
// 00554c21  83c40c               add esp, 0xc
// 00554c24  c20800               ret 8
// library openrbx-client/App\v8tree\Instance.cpp (function ?raise@?$Notifier@VInstance@RBX@@UChildAdded@2@@RBX@@IBEXUChildAdded@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8tree/Instance.cpp
