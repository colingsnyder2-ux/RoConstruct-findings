// roc 2008-06 005584c0  unit: RBX::VInstance::?$AbstractFactoryProduct  size: 205 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005584c0
//
// 005584c0  83ec10               sub esp, 0x10
// 005584c3  53                   push ebx
// 005584c4  56                   push esi
// 005584c5  8bf1                 mov esi, ecx
// 005584c7  8b4614               mov eax, dword ptr [esi + 0x14]
// 005584ca  2b4610               sub eax, dword ptr [esi + 0x10]
// 005584cd  8b561c               mov edx, dword ptr [esi + 0x1c]
// 005584d0  c1f802               sar eax, 2
// 005584d3  33c9                 xor ecx, ecx
// 005584d5  89542414             mov dword ptr [esp + 0x14], edx
// 005584d9  8d54240c             lea edx, [esp + 0xc]
// 005584dd  57                   push edi
// 005584de  894c2410             mov dword ptr [esp + 0x10], ecx
// 005584e2  89442414             mov dword ptr [esp + 0x14], eax
// 005584e6  89561c               mov dword ptr [esi + 0x1c], edx
// 005584e9  85c0                 test eax, eax
// 005584eb  765e                 jbe 0x55854b
// 005584ed  8b1d90288000         mov ebx, dword ptr [0x802890]
// 005584f3  8b4614               mov eax, dword ptr [esi + 0x14]
// 005584f6  2b4610               sub eax, dword ptr [esi + 0x10]
// 005584f9  8bf9                 mov edi, ecx
// 005584fb  c1f802               sar eax, 2
// 005584fe  3bc8                 cmp ecx, eax
// 00558500  7202                 jb 0x558504
// 00558502  ffd3                 call ebx
// 00558504  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00558507  8b04b9               mov eax, dword ptr [ecx + edi*4]
// 0055850a  8b542420             mov edx, dword ptr [esp + 0x20]
// 0055850e  50                   push eax
// 0055850f  83ec08               sub esp, 8
// 00558512  8bc4                 mov eax, esp
// 00558514  8910                 mov dword ptr [eax], edx
// 00558516  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0055851a  894804               mov dword ptr [eax + 4], ecx
// 0055851d  8b442430             mov eax, dword ptr [esp + 0x30]
// 00558521  89642418             mov dword ptr [esp + 0x18], esp
// 00558525  85c0                 test eax, eax
// 00558527  740c                 je 0x558535
// 00558529  83c004               add eax, 4
// 0055852c  ba01000000           mov edx, 1
// 00558531  f00fc110             lock xadd dword ptr [eax], edx
// 00558535  8bce                 mov ecx, esi
// 00558537  e8c4f4ffff           call 0x557a00
// 0055853c  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00558540  41                   inc ecx
// 00558541  894c2410             mov dword ptr [esp + 0x10], ecx
// 00558545  3b4c2414             cmp ecx, dword ptr [esp + 0x14]
// 00558549  72a8                 jb 0x5584f3
// 0055854b  8b442418             mov eax, dword ptr [esp + 0x18]
// 0055854f  89461c               mov dword ptr [esi + 0x1c], eax
// 00558552  8b742424             mov esi, dword ptr [esp + 0x24]
// 00558556  85f6                 test esi, esi
// 00558558  742a                 je 0x558584
// 0055855a  8d4e04               lea ecx, [esi + 4]
// 0055855d  83caff               or edx, 0xffffffff
// 00558560  f00fc111             lock xadd dword ptr [ecx], edx
// 00558564  751e                 jne 0x558584
// 00558566  8b06                 mov eax, dword ptr [esi]
// 00558568  8b5004               mov edx, dword ptr [eax + 4]
// 0055856b  8bce                 mov ecx, esi
// 0055856d  ffd2                 call edx
// 0055856f  8d4608               lea eax, [esi + 8]
// 00558572  83c9ff               or ecx, 0xffffffff
// 00558575  f00fc108             lock xadd dword ptr [eax], ecx
// 00558579  7509                 jne 0x558584
// 0055857b  8b16                 mov edx, dword ptr [esi]
// 0055857d  8b4208               mov eax, dword ptr [edx + 8]
// 00558580  8bce                 mov ecx, esi
// 00558582  ffd0                 call eax
// 00558584  5f                   pop edi
// 00558585  5e                   pop esi
// 00558586  5b                   pop ebx
// 00558587  83c410               add esp, 0x10
// 0055858a  c20800               ret 8
// library openrbx-client/App\v8tree\Service.cpp (function ?raise@?$Notifier@VServiceProvider@RBX@@UServiceAdded@2@@RBX@@IBEXUServiceAdded@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8tree/Service.cpp
