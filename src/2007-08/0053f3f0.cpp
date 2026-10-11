// roc 2007-08 0053f3f0  unit: RBX::VInstance::?$AbstractFactoryProduct  size: 215 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0053f3f0
//
// 0053f3f0  83ec0c               sub esp, 0xc
// 0053f3f3  53                   push ebx
// 0053f3f4  55                   push ebp
// 0053f3f5  56                   push esi
// 0053f3f6  8bf1                 mov esi, ecx
// 0053f3f8  8b4e08               mov ecx, dword ptr [esi + 8]
// 0053f3fb  33d2                 xor edx, edx
// 0053f3fd  85c9                 test ecx, ecx
// 0053f3ff  57                   push edi
// 0053f400  89542410             mov dword ptr [esp + 0x10], edx
// 0053f404  7504                 jne 0x53f40a
// 0053f406  33c0                 xor eax, eax
// 0053f408  eb08                 jmp 0x53f412
// 0053f40a  8b460c               mov eax, dword ptr [esi + 0xc]
// 0053f40d  2bc1                 sub eax, ecx
// 0053f40f  c1f802               sar eax, 2
// 0053f412  85c0                 test eax, eax
// 0053f414  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 0053f417  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0053f41b  894c2418             mov dword ptr [esp + 0x18], ecx
// 0053f41f  8d4c2410             lea ecx, [esp + 0x10]
// 0053f423  89442414             mov dword ptr [esp + 0x14], eax
// 0053f427  894e14               mov dword ptr [esi + 0x14], ecx
// 0053f42a  765c                 jbe 0x53f488
// 0053f42c  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 0053f430  8b4e08               mov ecx, dword ptr [esi + 8]
// 0053f433  85c9                 test ecx, ecx
// 0053f435  8bda                 mov ebx, edx
// 0053f437  740c                 je 0x53f445
// 0053f439  8b460c               mov eax, dword ptr [esi + 0xc]
// 0053f43c  2bc1                 sub eax, ecx
// 0053f43e  c1f802               sar eax, 2
// 0053f441  3bd0                 cmp edx, eax
// 0053f443  7206                 jb 0x53f44b
// 0053f445  ff15d8e67700         call dword ptr [0x77e6d8]
// 0053f44b  8b5608               mov edx, dword ptr [esi + 8]
// 0053f44e  8b049a               mov eax, dword ptr [edx + ebx*4]
// 0053f451  50                   push eax
// 0053f452  83ec08               sub esp, 8
// 0053f455  85ff                 test edi, edi
// 0053f457  8bc4                 mov eax, esp
// 0053f459  8928                 mov dword ptr [eax], ebp
// 0053f45b  8964242c             mov dword ptr [esp + 0x2c], esp
// 0053f45f  897804               mov dword ptr [eax + 4], edi
// 0053f462  740c                 je 0x53f470
// 0053f464  8d4704               lea eax, [edi + 4]
// 0053f467  b901000000           mov ecx, 1
// 0053f46c  f00fc108             lock xadd dword ptr [eax], ecx
// 0053f470  8bce                 mov ecx, esi
// 0053f472  e809f5ffff           call 0x53e980
// 0053f477  8b542410             mov edx, dword ptr [esp + 0x10]
// 0053f47b  83c201               add edx, 1
// 0053f47e  3b542414             cmp edx, dword ptr [esp + 0x14]
// 0053f482  89542410             mov dword ptr [esp + 0x10], edx
// 0053f486  72a8                 jb 0x53f430
// 0053f488  85ff                 test edi, edi
// 0053f48a  8b542418             mov edx, dword ptr [esp + 0x18]
// 0053f48e  895614               mov dword ptr [esi + 0x14], edx
// 0053f491  742a                 je 0x53f4bd
// 0053f493  8d4704               lea eax, [edi + 4]
// 0053f496  83c9ff               or ecx, 0xffffffff
// 0053f499  f00fc108             lock xadd dword ptr [eax], ecx
// 0053f49d  751e                 jne 0x53f4bd
// 0053f49f  8b17                 mov edx, dword ptr [edi]
// 0053f4a1  8b4204               mov eax, dword ptr [edx + 4]
// 0053f4a4  8bcf                 mov ecx, edi
// 0053f4a6  ffd0                 call eax
// 0053f4a8  8d4f08               lea ecx, [edi + 8]
// 0053f4ab  83caff               or edx, 0xffffffff
// 0053f4ae  f00fc111             lock xadd dword ptr [ecx], edx
// 0053f4b2  7509                 jne 0x53f4bd
// 0053f4b4  8b07                 mov eax, dword ptr [edi]
// 0053f4b6  8b5008               mov edx, dword ptr [eax + 8]
// 0053f4b9  8bcf                 mov ecx, edi
// 0053f4bb  ffd2                 call edx
// 0053f4bd  5f                   pop edi
// 0053f4be  5e                   pop esi
// 0053f4bf  5d                   pop ebp
// 0053f4c0  5b                   pop ebx
// 0053f4c1  83c40c               add esp, 0xc
// 0053f4c4  c20800               ret 8
// library openrbx-client/App\v8tree\Instance.cpp (function ?raise@?$Notifier@VInstance@RBX@@UChildAdded@2@@RBX@@IBEXUChildAdded@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8tree/Instance.cpp
