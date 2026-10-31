// roc 2009-06 00407780  unit: VCApp::?$CComContainedObject  size: 642 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00407780
//
// 00407780  55                   push ebp
// 00407781  8bec                 mov ebp, esp
// 00407783  81ec40090000         sub esp, 0x940
// 00407789  53                   push ebx
// 0040778a  33db                 xor ebx, ebx
// 0040778c  56                   push esi
// 0040778d  8b7514               mov esi, dword ptr [ebp + 0x14]
// 00407790  57                   push edi
// 00407791  c745ec3cce8a00       mov dword ptr [ebp - 0x14], 0x8ace3c
// 00407798  895df0               mov dword ptr [ebp - 0x10], ebx
// 0040779b  895df4               mov dword ptr [ebp - 0xc], ebx
// 0040779e  895df8               mov dword ptr [ebp - 8], ebx
// 004077a1  3bf3                 cmp esi, ebx
// 004077a3  7423                 je 0x4077c8
// 004077a5  8b06                 mov eax, dword ptr [esi]
// 004077a7  3bc3                 cmp eax, ebx
// 004077a9  741d                 je 0x4077c8
// 004077ab  eb03                 jmp 0x4077b0
// 004077ad  8d4900               lea ecx, [ecx]
// 004077b0  8b4e04               mov ecx, dword ptr [esi + 4]
// 004077b3  51                   push ecx
// 004077b4  50                   push eax
// 004077b5  8d55ec               lea edx, [ebp - 0x14]
// 004077b8  52                   push edx
// 004077b9  e882d9ffff           call 0x405140
// 004077be  8b4608               mov eax, dword ptr [esi + 8]
// 004077c1  83c608               add esi, 8
// 004077c4  3bc3                 cmp eax, ebx
// 004077c6  75e8                 jne 0x4077b0
// 004077c8  8b4d08               mov ecx, dword ptr [ebp + 8]
// 004077cb  8b01                 mov eax, dword ptr [ecx]
// 004077cd  8b4014               mov eax, dword ptr [eax + 0x14]
// 004077d0  8d55ec               lea edx, [ebp - 0x14]
// 004077d3  52                   push edx
// 004077d4  ffd0                 call eax
// 004077d6  8bf0                 mov esi, eax
// 004077d8  3bf3                 cmp esi, ebx
// 004077da  0f8c09020000         jl 0x4079e9
// 004077e0  8b3dcc2ba500         mov edi, dword ptr [0xa52bcc]
// 004077e6  6804010000           push 0x104
// 004077eb  8d8de8feffff         lea ecx, [ebp - 0x118]
// 004077f1  51                   push ecx
// 004077f2  57                   push edi
// 004077f3  895d14               mov dword ptr [ebp + 0x14], ebx
// 004077f6  ff15b0e18900         call dword ptr [0x89e1b0]
// 004077fc  3bc3                 cmp eax, ebx
// 004077fe  750a                 jne 0x40780a
// 00407800  e88bb7ffff           call 0x402f90
// 00407805  e9d5010000           jmp 0x4079df
// 0040780a  3d04010000           cmp eax, 0x104
// 0040780f  7524                 jne 0x407835
// 00407811  8d4d14               lea ecx, [ebp + 0x14]
// 00407814  e897c3ffff           call 0x403bb0
// 00407819  8d4dec               lea ecx, [ebp - 0x14]
// 0040781c  e88fcfffff           call 0x4047b0
// 00407821  b87a000780           mov eax, 0x8007007a
// 00407826  8da5b4f6ffff         lea esp, [ebp - 0x94c]
// 0040782c  5f                   pop edi
// 0040782d  5e                   pop esi
// 0040782e  5b                   pop ebx
// 0040782f  8be5                 mov esp, ebp
// 00407831  5d                   pop ebp
// 00407832  c21000               ret 0x10
// 00407835  8d95e8feffff         lea edx, [ebp - 0x118]
// 0040783b  52                   push edx
// 0040783c  ff15e0e18900         call dword ptr [0x89e1e0]
// 00407842  40                   inc eax
// 00407843  6a02                 push 2
// 00407845  50                   push eax
// 00407846  894508               mov dword ptr [ebp + 8], eax
// 00407849  8d4508               lea eax, [ebp + 8]
// 0040784c  50                   push eax
// 0040784d  e85eb5ffff           call 0x402db0
// 00407852  83c40c               add esp, 0xc
// 00407855  85c0                 test eax, eax
// 00407857  7c44                 jl 0x40789d
// 00407859  8b7508               mov esi, dword ptr [ebp + 8]
// 0040785c  81fe00040000         cmp esi, 0x400
// 00407862  7f18                 jg 0x40787c
// 00407864  56                   push esi
// 00407865  e8c6c5ffff           call 0x403e30
// 0040786a  83c404               add esp, 4
// 0040786d  84c0                 test al, al
// 0040786f  740b                 je 0x40787c
// 00407871  8bc6                 mov eax, esi
// 00407873  e898233100           call 0x719c10
// 00407878  8bc4                 mov eax, esp
// 0040787a  eb09                 jmp 0x407885
// 0040787c  56                   push esi
// 0040787d  8d4d14               lea ecx, [ebp + 0x14]
// 00407880  e84bcbffff           call 0x4043d0
// 00407885  6a03                 push 3
// 00407887  d1ee                 shr esi, 1
// 00407889  56                   push esi
// 0040788a  8d8de8feffff         lea ecx, [ebp - 0x118]
// 00407890  51                   push ecx
// 00407891  50                   push eax
// 00407892  e869b5ffff           call 0x402e00
// 00407897  8bf0                 mov esi, eax
// 00407899  3bf3                 cmp esi, ebx
// 0040789b  7524                 jne 0x4078c1
// 0040789d  8d4d14               lea ecx, [ebp + 0x14]
// 004078a0  e80bc3ffff           call 0x403bb0
// 004078a5  8d4dec               lea ecx, [ebp - 0x14]
// 004078a8  e803cfffff           call 0x4047b0
// 004078ad  b80e000780           mov eax, 0x8007000e
// 004078b2  8da5b4f6ffff         lea esp, [ebp - 0x94c]
// 004078b8  5f                   pop edi
// 004078b9  5e                   pop esi
// 004078ba  5b                   pop ebx
// 004078bb  8be5                 mov esp, ebp
// 004078bd  5d                   pop ebp
// 004078be  c21000               ret 0x10
// 004078c1  56                   push esi
// 004078c2  8d95c0f6ffff         lea edx, [ebp - 0x940]
// 004078c8  6808020000           push 0x208
// 004078cd  52                   push edx
// 004078ce  e8ddb7ffff           call 0x4030b0
// 004078d3  83c40c               add esp, 0xc
// 004078d6  3bfb                 cmp edi, ebx
// 004078d8  7413                 je 0x4078ed
// 004078da  53                   push ebx
// 004078db  ff15e4e18900         call dword ptr [0x89e1e4]
// 004078e1  3bf8                 cmp edi, eax
// 004078e3  7408                 je 0x4078ed
// 004078e5  8d85c0f6ffff         lea eax, [ebp - 0x940]
// 004078eb  eb79                 jmp 0x407966
// 004078ed  8d85c0f6ffff         lea eax, [ebp - 0x940]
// 004078f3  50                   push eax
// 004078f4  8d8dd2faffff         lea ecx, [ebp - 0x52e]
// 004078fa  ba22000000           mov edx, 0x22
// 004078ff  680b020000           push 0x20b
// 00407904  51                   push ecx
// 00407905  668995d0faffff       mov word ptr [ebp - 0x530], dx
// 0040790c  e86fb5ffff           call 0x402e80
// 00407911  83c40c               add esp, 0xc
// 00407914  84c0                 test al, al
// 00407916  7524                 jne 0x40793c
// 00407918  8d4d14               lea ecx, [ebp + 0x14]
// 0040791b  e890c2ffff           call 0x403bb0
// 00407920  8d4dec               lea ecx, [ebp - 0x14]
// 00407923  e888ceffff           call 0x4047b0
// 00407928  b805400080           mov eax, 0x80004005
// 0040792d  8da5b4f6ffff         lea esp, [ebp - 0x94c]
// 00407933  5f                   pop edi
// 00407934  5e                   pop esi
// 00407935  5b                   pop ebx
// 00407936  8be5                 mov esp, ebp
// 00407938  5d                   pop ebp
// 00407939  c21000               ret 0x10
// 0040793c  8d95d0faffff         lea edx, [ebp - 0x530]
// 00407942  52                   push edx
// 00407943  ff1500e28900         call dword ptr [0x89e200]
// 00407949  b922000000           mov ecx, 0x22
// 0040794e  33d2                 xor edx, edx
// 00407950  66898c45d0faffff     mov word ptr [ebp + eax*2 - 0x530], cx
// 00407958  66899445d2faffff     mov word ptr [ebp + eax*2 - 0x52e], dx
// 00407960  8d85d0faffff         lea eax, [ebp - 0x530]
// 00407966  50                   push eax
// 00407967  6824d18a00           push 0x8ad124
// 0040796c  8d4dec               lea ecx, [ebp - 0x14]
// 0040796f  51                   push ecx
// 00407970  e8cbd7ffff           call 0x405140
// 00407975  8bf8                 mov edi, eax
// 00407977  3bfb                 cmp edi, ebx
// 00407979  7d21                 jge 0x40799c
// 0040797b  8d4d14               lea ecx, [ebp + 0x14]
// 0040797e  e82dc2ffff           call 0x403bb0
// 00407983  8d4dec               lea ecx, [ebp - 0x14]
// 00407986  e825ceffff           call 0x4047b0
// 0040798b  8bc7                 mov eax, edi
// 0040798d  8da5b4f6ffff         lea esp, [ebp - 0x94c]
// 00407993  5f                   pop edi
// 00407994  5e                   pop esi
// 00407995  5b                   pop ebx
// 00407996  8be5                 mov esp, ebp
// 00407998  5d                   pop ebp
// 00407999  c21000               ret 0x10
// 0040799c  8d95c0f6ffff         lea edx, [ebp - 0x940]
// 004079a2  52                   push edx
// 004079a3  680cd18a00           push 0x8ad10c
// 004079a8  8d45ec               lea eax, [ebp - 0x14]
// 004079ab  50                   push eax
// 004079ac  e88fd7ffff           call 0x405140
// 004079b1  8bf8                 mov edi, eax
// 004079b3  3bfb                 cmp edi, ebx
// 004079b5  7cc4                 jl 0x40797b
// 004079b7  68f8d08a00           push 0x8ad0f8
// 004079bc  395d10               cmp dword ptr [ebp + 0x10], ebx
// 004079bf  7410                 je 0x4079d1
// 004079c1  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 004079c4  51                   push ecx
// 004079c5  56                   push esi
// 004079c6  8d55ec               lea edx, [ebp - 0x14]
// 004079c9  52                   push edx
// 004079ca  e8b1fbffff           call 0x407580
// 004079cf  eb0e                 jmp 0x4079df
// 004079d1  8b450c               mov eax, dword ptr [ebp + 0xc]
// 004079d4  50                   push eax
// 004079d5  56                   push esi
// 004079d6  8d4dec               lea ecx, [ebp - 0x14]
// 004079d9  51                   push ecx
// 004079da  e8a1fcffff           call 0x407680
// 004079df  8d4d14               lea ecx, [ebp + 0x14]
// 004079e2  8bf0                 mov esi, eax
// 004079e4  e8c7c1ffff           call 0x403bb0
// 004079e9  8d4dec               lea ecx, [ebp - 0x14]
// 004079ec  e8bfcdffff           call 0x4047b0
// 004079f1  8bc6                 mov eax, esi
// 004079f3  8da5b4f6ffff         lea esp, [ebp - 0x94c]
// 004079f9  5f                   pop edi
// 004079fa  5e                   pop esi
// 004079fb  5b                   pop ebx
// 004079fc  8be5                 mov esp, ebp
// 004079fe  5d                   pop ebp
// 004079ff  c21000               ret 0x10
// copied from an identical function in another client (function ?roc_update_registry_from_resource_s@@YGJPAVCAtlModule@ATL@@PB_WHPAU_ATL_REGMAP_ENTRY@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: atl-9.0-rtm roc_atl_static_registry_wide_dc589bf9570d98db.cpp