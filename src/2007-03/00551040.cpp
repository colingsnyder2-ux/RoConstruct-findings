// roc 2007-03 00551040  unit: seg_00550000  size: 215 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00551040
//
// 00551040  83ec0c               sub esp, 0xc
// 00551043  53                   push ebx
// 00551044  55                   push ebp
// 00551045  56                   push esi
// 00551046  8bf1                 mov esi, ecx
// 00551048  8b4e08               mov ecx, dword ptr [esi + 8]
// 0055104b  33d2                 xor edx, edx
// 0055104d  85c9                 test ecx, ecx
// 0055104f  57                   push edi
// 00551050  89542410             mov dword ptr [esp + 0x10], edx
// 00551054  7504                 jne 0x55105a
// 00551056  33c0                 xor eax, eax
// 00551058  eb08                 jmp 0x551062
// 0055105a  8b460c               mov eax, dword ptr [esi + 0xc]
// 0055105d  2bc1                 sub eax, ecx
// 0055105f  c1f802               sar eax, 2
// 00551062  85c0                 test eax, eax
// 00551064  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 00551067  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0055106b  894c2418             mov dword ptr [esp + 0x18], ecx
// 0055106f  8d4c2410             lea ecx, [esp + 0x10]
// 00551073  89442414             mov dword ptr [esp + 0x14], eax
// 00551077  894e14               mov dword ptr [esi + 0x14], ecx
// 0055107a  765c                 jbe 0x5510d8
// 0055107c  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 00551080  8b4e08               mov ecx, dword ptr [esi + 8]
// 00551083  85c9                 test ecx, ecx
// 00551085  8bda                 mov ebx, edx
// 00551087  740c                 je 0x551095
// 00551089  8b460c               mov eax, dword ptr [esi + 0xc]
// 0055108c  2bc1                 sub eax, ecx
// 0055108e  c1f802               sar eax, 2
// 00551091  3bd0                 cmp edx, eax
// 00551093  7206                 jb 0x55109b
// 00551095  ff1544e97700         call dword ptr [0x77e944]
// 0055109b  8b5608               mov edx, dword ptr [esi + 8]
// 0055109e  8b049a               mov eax, dword ptr [edx + ebx*4]
// 005510a1  50                   push eax
// 005510a2  83ec08               sub esp, 8
// 005510a5  85ff                 test edi, edi
// 005510a7  8bc4                 mov eax, esp
// 005510a9  8928                 mov dword ptr [eax], ebp
// 005510ab  8964242c             mov dword ptr [esp + 0x2c], esp
// 005510af  897804               mov dword ptr [eax + 4], edi
// 005510b2  740c                 je 0x5510c0
// 005510b4  8d4704               lea eax, [edi + 4]
// 005510b7  b901000000           mov ecx, 1
// 005510bc  f00fc108             lock xadd dword ptr [eax], ecx
// 005510c0  8bce                 mov ecx, esi
// 005510c2  e859fdffff           call 0x550e20
// 005510c7  8b542410             mov edx, dword ptr [esp + 0x10]
// 005510cb  83c201               add edx, 1
// 005510ce  3b542414             cmp edx, dword ptr [esp + 0x14]
// 005510d2  89542410             mov dword ptr [esp + 0x10], edx
// 005510d6  72a8                 jb 0x551080
// 005510d8  85ff                 test edi, edi
// 005510da  8b542418             mov edx, dword ptr [esp + 0x18]
// 005510de  895614               mov dword ptr [esi + 0x14], edx
// 005510e1  742a                 je 0x55110d
// 005510e3  8d4704               lea eax, [edi + 4]
// 005510e6  83c9ff               or ecx, 0xffffffff
// 005510e9  f00fc108             lock xadd dword ptr [eax], ecx
// 005510ed  751e                 jne 0x55110d
// 005510ef  8b17                 mov edx, dword ptr [edi]
// 005510f1  8b4204               mov eax, dword ptr [edx + 4]
// 005510f4  8bcf                 mov ecx, edi
// 005510f6  ffd0                 call eax
// 005510f8  8d4f08               lea ecx, [edi + 8]
// 005510fb  83caff               or edx, 0xffffffff
// 005510fe  f00fc111             lock xadd dword ptr [ecx], edx
// 00551102  7509                 jne 0x55110d
// 00551104  8b07                 mov eax, dword ptr [edi]
// 00551106  8b5008               mov edx, dword ptr [eax + 8]
// 00551109  8bcf                 mov ecx, edi
// 0055110b  ffd2                 call edx
// 0055110d  5f                   pop edi
// 0055110e  5e                   pop esi
// 0055110f  5d                   pop ebp
// 00551110  5b                   pop ebx
// 00551111  83c40c               add esp, 0xc
// 00551114  c20800               ret 8
// library openrbx-client/App\v8tree\Instance.cpp (function ?raise@?$Notifier@VInstance@RBX@@UChildAdded@2@@RBX@@IBEXUChildAdded@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8tree/Instance.cpp
