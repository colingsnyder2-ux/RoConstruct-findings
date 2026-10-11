// roc 2007-03 00551120  unit: seg_00550000  size: 215 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00551120
//
// 00551120  83ec0c               sub esp, 0xc
// 00551123  53                   push ebx
// 00551124  55                   push ebp
// 00551125  56                   push esi
// 00551126  8bf1                 mov esi, ecx
// 00551128  8b4e08               mov ecx, dword ptr [esi + 8]
// 0055112b  33d2                 xor edx, edx
// 0055112d  85c9                 test ecx, ecx
// 0055112f  57                   push edi
// 00551130  89542410             mov dword ptr [esp + 0x10], edx
// 00551134  7504                 jne 0x55113a
// 00551136  33c0                 xor eax, eax
// 00551138  eb08                 jmp 0x551142
// 0055113a  8b460c               mov eax, dword ptr [esi + 0xc]
// 0055113d  2bc1                 sub eax, ecx
// 0055113f  c1f802               sar eax, 2
// 00551142  85c0                 test eax, eax
// 00551144  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 00551147  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0055114b  894c2418             mov dword ptr [esp + 0x18], ecx
// 0055114f  8d4c2410             lea ecx, [esp + 0x10]
// 00551153  89442414             mov dword ptr [esp + 0x14], eax
// 00551157  894e14               mov dword ptr [esi + 0x14], ecx
// 0055115a  765c                 jbe 0x5511b8
// 0055115c  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 00551160  8b4e08               mov ecx, dword ptr [esi + 8]
// 00551163  85c9                 test ecx, ecx
// 00551165  8bda                 mov ebx, edx
// 00551167  740c                 je 0x551175
// 00551169  8b460c               mov eax, dword ptr [esi + 0xc]
// 0055116c  2bc1                 sub eax, ecx
// 0055116e  c1f802               sar eax, 2
// 00551171  3bd0                 cmp edx, eax
// 00551173  7206                 jb 0x55117b
// 00551175  ff1544e97700         call dword ptr [0x77e944]
// 0055117b  8b5608               mov edx, dword ptr [esi + 8]
// 0055117e  8b049a               mov eax, dword ptr [edx + ebx*4]
// 00551181  50                   push eax
// 00551182  83ec08               sub esp, 8
// 00551185  85ff                 test edi, edi
// 00551187  8bc4                 mov eax, esp
// 00551189  8928                 mov dword ptr [eax], ebp
// 0055118b  8964242c             mov dword ptr [esp + 0x2c], esp
// 0055118f  897804               mov dword ptr [eax + 4], edi
// 00551192  740c                 je 0x5511a0
// 00551194  8d4704               lea eax, [edi + 4]
// 00551197  b901000000           mov ecx, 1
// 0055119c  f00fc108             lock xadd dword ptr [eax], ecx
// 005511a0  8bce                 mov ecx, esi
// 005511a2  e889fdffff           call 0x550f30
// 005511a7  8b542410             mov edx, dword ptr [esp + 0x10]
// 005511ab  83c201               add edx, 1
// 005511ae  3b542414             cmp edx, dword ptr [esp + 0x14]
// 005511b2  89542410             mov dword ptr [esp + 0x10], edx
// 005511b6  72a8                 jb 0x551160
// 005511b8  85ff                 test edi, edi
// 005511ba  8b542418             mov edx, dword ptr [esp + 0x18]
// 005511be  895614               mov dword ptr [esi + 0x14], edx
// 005511c1  742a                 je 0x5511ed
// 005511c3  8d4704               lea eax, [edi + 4]
// 005511c6  83c9ff               or ecx, 0xffffffff
// 005511c9  f00fc108             lock xadd dword ptr [eax], ecx
// 005511cd  751e                 jne 0x5511ed
// 005511cf  8b17                 mov edx, dword ptr [edi]
// 005511d1  8b4204               mov eax, dword ptr [edx + 4]
// 005511d4  8bcf                 mov ecx, edi
// 005511d6  ffd0                 call eax
// 005511d8  8d4f08               lea ecx, [edi + 8]
// 005511db  83caff               or edx, 0xffffffff
// 005511de  f00fc111             lock xadd dword ptr [ecx], edx
// 005511e2  7509                 jne 0x5511ed
// 005511e4  8b07                 mov eax, dword ptr [edi]
// 005511e6  8b5008               mov edx, dword ptr [eax + 8]
// 005511e9  8bcf                 mov ecx, edi
// 005511eb  ffd2                 call edx
// 005511ed  5f                   pop edi
// 005511ee  5e                   pop esi
// 005511ef  5d                   pop ebp
// 005511f0  5b                   pop ebx
// 005511f1  83c40c               add esp, 0xc
// 005511f4  c20800               ret 8
// library openrbx-client/App\v8tree\Instance.cpp (function ?raise@?$Notifier@VInstance@RBX@@UChildAdded@2@@RBX@@IBEXUChildAdded@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8tree/Instance.cpp
