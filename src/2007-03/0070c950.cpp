// roc 2007-03 0070c950  unit: seg_00700000  size: 389 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0070c950
//
// 0070c950  8b442418             mov eax, dword ptr [esp + 0x18]
// 0070c954  53                   push ebx
// 0070c955  55                   push ebp
// 0070c956  56                   push esi
// 0070c957  57                   push edi
// 0070c958  8b7860               mov edi, dword ptr [eax + 0x60]
// 0070c95b  394704               cmp dword ptr [edi + 4], eax
// 0070c95e  8bf1                 mov esi, ecx
// 0070c960  0f84ad000000         je 0x70ca13
// 0070c966  8b07                 mov eax, dword ptr [edi]
// 0070c968  8b5048               mov edx, dword ptr [eax + 0x48]
// 0070c96b  8bcf                 mov ecx, edi
// 0070c96d  ffd2                 call edx
// 0070c96f  83f802               cmp eax, 2
// 0070c972  740d                 je 0x70c981
// 0070c974  8b07                 mov eax, dword ptr [edi]
// 0070c976  8b5048               mov edx, dword ptr [eax + 0x48]
// 0070c979  8bcf                 mov ecx, edi
// 0070c97b  ffd2                 call edx
// 0070c97d  85c0                 test eax, eax
// 0070c97f  7549                 jne 0x70c9ca
// 0070c981  e81a86f4ff           call 0x654fa0
// 0070c986  6a14                 push 0x14
// 0070c988  8bc8                 mov ecx, eax
// 0070c98a  e8217ef4ff           call 0x6547b0
// 0070c98f  8bf0                 mov esi, eax
// 0070c991  e80a86f4ff           call 0x654fa0
// 0070c996  6a10                 push 0x10
// 0070c998  8bc8                 mov ecx, eax
// 0070c99a  e8117ef4ff           call 0x6547b0
// 0070c99f  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0070c9a3  8b542420             mov edx, dword ptr [esp + 0x20]
// 0070c9a7  56                   push esi
// 0070c9a8  50                   push eax
// 0070c9a9  8b442424             mov eax, dword ptr [esp + 0x24]
// 0070c9ad  2bc8                 sub ecx, eax
// 0070c9af  83e904               sub ecx, 4
// 0070c9b2  51                   push ecx
// 0070c9b3  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0070c9b7  6a02                 push 2
// 0070c9b9  83c002               add eax, 2
// 0070c9bc  50                   push eax
// 0070c9bd  52                   push edx
// 0070c9be  e875e90200           call 0x73b338
// 0070c9c3  5f                   pop edi
// 0070c9c4  5e                   pop esi
// 0070c9c5  5d                   pop ebp
// 0070c9c6  5b                   pop ebx
// 0070c9c7  c21800               ret 0x18
// 0070c9ca  e8d185f4ff           call 0x654fa0
// 0070c9cf  6a14                 push 0x14
// 0070c9d1  8bc8                 mov ecx, eax
// 0070c9d3  e8d87df4ff           call 0x6547b0
// 0070c9d8  8bf0                 mov esi, eax
// 0070c9da  e8c185f4ff           call 0x654fa0
// 0070c9df  6a10                 push 0x10
// 0070c9e1  8bc8                 mov ecx, eax
// 0070c9e3  e8c87df4ff           call 0x6547b0
// 0070c9e8  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0070c9ec  8b542424             mov edx, dword ptr [esp + 0x24]
// 0070c9f0  56                   push esi
// 0070c9f1  50                   push eax
// 0070c9f2  8b442420             mov eax, dword ptr [esp + 0x20]
// 0070c9f6  2bc8                 sub ecx, eax
// 0070c9f8  6a02                 push 2
// 0070c9fa  83e904               sub ecx, 4
// 0070c9fd  51                   push ecx
// 0070c9fe  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0070ca02  52                   push edx
// 0070ca03  83c002               add eax, 2
// 0070ca06  50                   push eax
// 0070ca07  e82ce90200           call 0x73b338
// 0070ca0c  5f                   pop edi
// 0070ca0d  5e                   pop esi
// 0070ca0e  5d                   pop ebp
// 0070ca0f  5b                   pop ebx
// 0070ca10  c21800               ret 0x18
// 0070ca13  8b8e04020000         mov ecx, dword ptr [esi + 0x204]
// 0070ca19  83793400             cmp dword ptr [ecx + 0x34], 0
// 0070ca1d  741d                 je 0x70ca3c
// 0070ca1f  8b16                 mov edx, dword ptr [esi]
// 0070ca21  50                   push eax
// 0070ca22  8b4224               mov eax, dword ptr [edx + 0x24]
// 0070ca25  8bce                 mov ecx, esi
// 0070ca27  ffd0                 call eax
// 0070ca29  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0070ca2d  50                   push eax
// 0070ca2e  8d4c241c             lea ecx, [esp + 0x1c]
// 0070ca32  51                   push ecx
// 0070ca33  8bcf                 mov ecx, edi
// 0070ca35  e8e022f1ff           call 0x61ed1a
// 0070ca3a  eb5e                 jmp 0x70ca9a
// 0070ca3c  8b86f8000000         mov eax, dword ptr [esi + 0xf8]
// 0070ca42  83f8ff               cmp eax, -1
// 0070ca45  7508                 jne 0x70ca4f
// 0070ca47  8baef4000000         mov ebp, dword ptr [esi + 0xf4]
// 0070ca4d  eb02                 jmp 0x70ca51
// 0070ca4f  8be8                 mov ebp, eax
// 0070ca51  8b9eec000000         mov ebx, dword ptr [esi + 0xec]
// 0070ca57  83fbff               cmp ebx, -1
// 0070ca5a  7506                 jne 0x70ca62
// 0070ca5c  8b9ee8000000         mov ebx, dword ptr [esi + 0xe8]
// 0070ca62  8b17                 mov edx, dword ptr [edi]
// 0070ca64  8b4248               mov eax, dword ptr [edx + 0x48]
// 0070ca67  8bcf                 mov ecx, edi
// 0070ca69  ffd0                 call eax
// 0070ca6b  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0070ca6f  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0070ca73  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0070ca77  50                   push eax
// 0070ca78  55                   push ebp
// 0070ca79  53                   push ebx
// 0070ca7a  83ec10               sub esp, 0x10
// 0070ca7d  8bc4                 mov eax, esp
// 0070ca7f  8908                 mov dword ptr [eax], ecx
// 0070ca81  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0070ca85  895004               mov dword ptr [eax + 4], edx
// 0070ca88  8b542440             mov edx, dword ptr [esp + 0x40]
// 0070ca8c  894808               mov dword ptr [eax + 8], ecx
// 0070ca8f  57                   push edi
// 0070ca90  8bce                 mov ecx, esi
// 0070ca92  89500c               mov dword ptr [eax + 0xc], edx
// 0070ca95  e896fbffff           call 0x70c630
// 0070ca9a  8b8618010000         mov eax, dword ptr [esi + 0x118]
// 0070caa0  83f8ff               cmp eax, -1
// 0070caa3  7508                 jne 0x70caad
// 0070caa5  8b8e14010000         mov ecx, dword ptr [esi + 0x114]
// 0070caab  eb02                 jmp 0x70caaf
// 0070caad  8bc8                 mov ecx, eax
// 0070caaf  8b860c010000         mov eax, dword ptr [esi + 0x10c]
// 0070cab5  83f8ff               cmp eax, -1
// 0070cab8  7506                 jne 0x70cac0
// 0070caba  8b8608010000         mov eax, dword ptr [esi + 0x108]
// 0070cac0  51                   push ecx
// 0070cac1  50                   push eax
// 0070cac2  8d442420             lea eax, [esp + 0x20]
// 0070cac6  50                   push eax
// 0070cac7  8bcf                 mov ecx, edi
// 0070cac9  e84622f1ff           call 0x61ed14
// 0070cace  5f                   pop edi
// 0070cacf  5e                   pop esi
// 0070cad0  5d                   pop ebp
// 0070cad1  5b                   pop ebx
// 0070cad2  c21800               ret 0x18
// library xtp-11.2.2-vc8/Source\TabManager\XTPTabPaintManagerColors.cpp (function ?FillStateButton@CColorSet@CXTPTabPaintManager@@UAEXPAVCDC@@VCRect@@PAVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/TabManager/XTPTabPaintManagerColors.cpp
