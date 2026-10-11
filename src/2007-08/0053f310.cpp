// roc 2007-08 0053f310  unit: RBX::VInstance::?$AbstractFactoryProduct  size: 215 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0053f310
//
// 0053f310  83ec0c               sub esp, 0xc
// 0053f313  53                   push ebx
// 0053f314  55                   push ebp
// 0053f315  56                   push esi
// 0053f316  8bf1                 mov esi, ecx
// 0053f318  8b4e08               mov ecx, dword ptr [esi + 8]
// 0053f31b  33d2                 xor edx, edx
// 0053f31d  85c9                 test ecx, ecx
// 0053f31f  57                   push edi
// 0053f320  89542410             mov dword ptr [esp + 0x10], edx
// 0053f324  7504                 jne 0x53f32a
// 0053f326  33c0                 xor eax, eax
// 0053f328  eb08                 jmp 0x53f332
// 0053f32a  8b460c               mov eax, dword ptr [esi + 0xc]
// 0053f32d  2bc1                 sub eax, ecx
// 0053f32f  c1f802               sar eax, 2
// 0053f332  85c0                 test eax, eax
// 0053f334  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 0053f337  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0053f33b  894c2418             mov dword ptr [esp + 0x18], ecx
// 0053f33f  8d4c2410             lea ecx, [esp + 0x10]
// 0053f343  89442414             mov dword ptr [esp + 0x14], eax
// 0053f347  894e14               mov dword ptr [esi + 0x14], ecx
// 0053f34a  765c                 jbe 0x53f3a8
// 0053f34c  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 0053f350  8b4e08               mov ecx, dword ptr [esi + 8]
// 0053f353  85c9                 test ecx, ecx
// 0053f355  8bda                 mov ebx, edx
// 0053f357  740c                 je 0x53f365
// 0053f359  8b460c               mov eax, dword ptr [esi + 0xc]
// 0053f35c  2bc1                 sub eax, ecx
// 0053f35e  c1f802               sar eax, 2
// 0053f361  3bd0                 cmp edx, eax
// 0053f363  7206                 jb 0x53f36b
// 0053f365  ff15d8e67700         call dword ptr [0x77e6d8]
// 0053f36b  8b5608               mov edx, dword ptr [esi + 8]
// 0053f36e  8b049a               mov eax, dword ptr [edx + ebx*4]
// 0053f371  50                   push eax
// 0053f372  83ec08               sub esp, 8
// 0053f375  85ff                 test edi, edi
// 0053f377  8bc4                 mov eax, esp
// 0053f379  8928                 mov dword ptr [eax], ebp
// 0053f37b  8964242c             mov dword ptr [esp + 0x2c], esp
// 0053f37f  897804               mov dword ptr [eax + 4], edi
// 0053f382  740c                 je 0x53f390
// 0053f384  8d4704               lea eax, [edi + 4]
// 0053f387  b901000000           mov ecx, 1
// 0053f38c  f00fc108             lock xadd dword ptr [eax], ecx
// 0053f390  8bce                 mov ecx, esi
// 0053f392  e8c9f4ffff           call 0x53e860
// 0053f397  8b542410             mov edx, dword ptr [esp + 0x10]
// 0053f39b  83c201               add edx, 1
// 0053f39e  3b542414             cmp edx, dword ptr [esp + 0x14]
// 0053f3a2  89542410             mov dword ptr [esp + 0x10], edx
// 0053f3a6  72a8                 jb 0x53f350
// 0053f3a8  85ff                 test edi, edi
// 0053f3aa  8b542418             mov edx, dword ptr [esp + 0x18]
// 0053f3ae  895614               mov dword ptr [esi + 0x14], edx
// 0053f3b1  742a                 je 0x53f3dd
// 0053f3b3  8d4704               lea eax, [edi + 4]
// 0053f3b6  83c9ff               or ecx, 0xffffffff
// 0053f3b9  f00fc108             lock xadd dword ptr [eax], ecx
// 0053f3bd  751e                 jne 0x53f3dd
// 0053f3bf  8b17                 mov edx, dword ptr [edi]
// 0053f3c1  8b4204               mov eax, dword ptr [edx + 4]
// 0053f3c4  8bcf                 mov ecx, edi
// 0053f3c6  ffd0                 call eax
// 0053f3c8  8d4f08               lea ecx, [edi + 8]
// 0053f3cb  83caff               or edx, 0xffffffff
// 0053f3ce  f00fc111             lock xadd dword ptr [ecx], edx
// 0053f3d2  7509                 jne 0x53f3dd
// 0053f3d4  8b07                 mov eax, dword ptr [edi]
// 0053f3d6  8b5008               mov edx, dword ptr [eax + 8]
// 0053f3d9  8bcf                 mov ecx, edi
// 0053f3db  ffd2                 call edx
// 0053f3dd  5f                   pop edi
// 0053f3de  5e                   pop esi
// 0053f3df  5d                   pop ebp
// 0053f3e0  5b                   pop ebx
// 0053f3e1  83c40c               add esp, 0xc
// 0053f3e4  c20800               ret 8
// library openrbx-client/App\v8tree\Instance.cpp (function ?raise@?$Notifier@VInstance@RBX@@UChildAdded@2@@RBX@@IBEXUChildAdded@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8tree/Instance.cpp
