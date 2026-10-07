// roc 2007-08 006febf0  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 465 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006febf0
//
// 006febf0  83ec10               sub esp, 0x10
// 006febf3  56                   push esi
// 006febf4  8bf1                 mov esi, ecx
// 006febf6  8b06                 mov eax, dword ptr [esi]
// 006febf8  8b502c               mov edx, dword ptr [eax + 0x2c]
// 006febfb  57                   push edi
// 006febfc  ffd2                 call edx
// 006febfe  8bb8e0000000         mov edi, dword ptr [eax + 0xe0]
// 006fec04  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 006fec08  50                   push eax
// 006fec09  e8720cf8ff           call 0x67f880
// 006fec0e  83c404               add esp, 4
// 006fec11  85c0                 test eax, eax
// 006fec13  0f8473010000         je 0x6fed8c
// 006fec19  8b16                 mov edx, dword ptr [esi]
// 006fec1b  8b4274               mov eax, dword ptr [edx + 0x74]
// 006fec1e  8bce                 mov ecx, esi
// 006fec20  ffd0                 call eax
// 006fec22  85c0                 test eax, eax
// 006fec24  0f8562010000         jne 0x6fed8c
// 006fec2a  8b16                 mov edx, dword ptr [esi]
// 006fec2c  8b422c               mov eax, dword ptr [edx + 0x2c]
// 006fec2f  8bce                 mov ecx, esi
// 006fec31  ffd0                 call eax
// 006fec33  83782000             cmp dword ptr [eax + 0x20], 0
// 006fec37  0f8493000000         je 0x6fecd0
// 006fec3d  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 006fec41  8b542420             mov edx, dword ptr [esp + 0x20]
// 006fec45  53                   push ebx
// 006fec46  51                   push ecx
// 006fec47  52                   push edx
// 006fec48  8bce                 mov ecx, esi
// 006fec4a  e811fcffff           call 0x6fe860
// 006fec4f  8bd8                 mov ebx, eax
// 006fec51  8b4608               mov eax, dword ptr [esi + 8]
// 006fec54  3bd8                 cmp ebx, eax
// 006fec56  7477                 je 0x6feccf
// 006fec58  85c0                 test eax, eax
// 006fec5a  7426                 je 0x6fec82
// 006fec5c  8b17                 mov edx, dword ptr [edi]
// 006fec5e  8b5220               mov edx, dword ptr [edx + 0x20]
// 006fec61  50                   push eax
// 006fec62  8d442410             lea eax, [esp + 0x10]
// 006fec66  50                   push eax
// 006fec67  8bcf                 mov ecx, edi
// 006fec69  ffd2                 call edx
// 006fec6b  8b06                 mov eax, dword ptr [esi]
// 006fec6d  8b5034               mov edx, dword ptr [eax + 0x34]
// 006fec70  6a01                 push 1
// 006fec72  8d4c2410             lea ecx, [esp + 0x10]
// 006fec76  51                   push ecx
// 006fec77  8bce                 mov ecx, esi
// 006fec79  c7460800000000       mov dword ptr [esi + 8], 0
// 006fec80  ffd2                 call edx
// 006fec82  85db                 test ebx, ebx
// 006fec84  895e08               mov dword ptr [esi + 8], ebx
// 006fec87  7446                 je 0x6feccf
// 006fec89  8b07                 mov eax, dword ptr [edi]
// 006fec8b  8b5020               mov edx, dword ptr [eax + 0x20]
// 006fec8e  53                   push ebx
// 006fec8f  8d4c2410             lea ecx, [esp + 0x10]
// 006fec93  51                   push ecx
// 006fec94  8bcf                 mov ecx, edi
// 006fec96  ffd2                 call edx
// 006fec98  8b16                 mov edx, dword ptr [esi]
// 006fec9a  6a00                 push 0
// 006fec9c  50                   push eax
// 006fec9d  8b4234               mov eax, dword ptr [edx + 0x34]
// 006feca0  8bce                 mov ecx, esi
// 006feca2  ffd0                 call eax
// 006feca4  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 006feca8  8d54240c             lea edx, [esp + 0xc]
// 006fecac  52                   push edx
// 006fecad  c744241010000000     mov dword ptr [esp + 0x10], 0x10
// 006fecb5  c744241402000000     mov dword ptr [esp + 0x14], 2
// 006fecbd  894c2418             mov dword ptr [esp + 0x18], ecx
// 006fecc1  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 006fecc9  ff1544d07700         call dword ptr [0x77d044]
// 006feccf  5b                   pop ebx
// 006fecd0  8b442424             mov eax, dword ptr [esp + 0x24]
// 006fecd4  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 006fecd8  6a00                 push 0
// 006fecda  6a00                 push 0
// 006fecdc  50                   push eax
// 006fecdd  51                   push ecx
// 006fecde  8bce                 mov ecx, esi
// 006fece0  e84bfeffff           call 0x6feb30
// 006fece5  8bf8                 mov edi, eax
// 006fece7  8b4610               mov eax, dword ptr [esi + 0x10]
// 006fecea  3bf8                 cmp edi, eax
// 006fecec  0f84c7000000         je 0x6fedb9
// 006fecf2  85c0                 test eax, eax
// 006fecf4  742c                 je 0x6fed22
// 006fecf6  8b5010               mov edx, dword ptr [eax + 0x10]
// 006fecf9  89542408             mov dword ptr [esp + 8], edx
// 006fecfd  8b4814               mov ecx, dword ptr [eax + 0x14]
// 006fed00  894c240c             mov dword ptr [esp + 0xc], ecx
// 006fed04  8b5018               mov edx, dword ptr [eax + 0x18]
// 006fed07  89542410             mov dword ptr [esp + 0x10], edx
// 006fed0b  8b401c               mov eax, dword ptr [eax + 0x1c]
// 006fed0e  8b16                 mov edx, dword ptr [esi]
// 006fed10  8b5234               mov edx, dword ptr [edx + 0x34]
// 006fed13  89442414             mov dword ptr [esp + 0x14], eax
// 006fed17  6a01                 push 1
// 006fed19  8d44240c             lea eax, [esp + 0xc]
// 006fed1d  50                   push eax
// 006fed1e  8bce                 mov ecx, esi
// 006fed20  ffd2                 call edx
// 006fed22  85ff                 test edi, edi
// 006fed24  897e10               mov dword ptr [esi + 0x10], edi
// 006fed27  0f848c000000         je 0x6fedb9
// 006fed2d  8b4710               mov eax, dword ptr [edi + 0x10]
// 006fed30  89442408             mov dword ptr [esp + 8], eax
// 006fed34  8b4f14               mov ecx, dword ptr [edi + 0x14]
// 006fed37  894c240c             mov dword ptr [esp + 0xc], ecx
// 006fed3b  8b5718               mov edx, dword ptr [edi + 0x18]
// 006fed3e  89542410             mov dword ptr [esp + 0x10], edx
// 006fed42  8b471c               mov eax, dword ptr [edi + 0x1c]
// 006fed45  8b16                 mov edx, dword ptr [esi]
// 006fed47  8b5234               mov edx, dword ptr [edx + 0x34]
// 006fed4a  89442414             mov dword ptr [esp + 0x14], eax
// 006fed4e  6a00                 push 0
// 006fed50  8d44240c             lea eax, [esp + 0xc]
// 006fed54  50                   push eax
// 006fed55  8bce                 mov ecx, esi
// 006fed57  ffd2                 call edx
// 006fed59  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 006fed5d  8d4c2408             lea ecx, [esp + 8]
// 006fed61  51                   push ecx
// 006fed62  c744240c10000000     mov dword ptr [esp + 0xc], 0x10
// 006fed6a  c744241002000000     mov dword ptr [esp + 0x10], 2
// 006fed72  89442414             mov dword ptr [esp + 0x14], eax
// 006fed76  c744241800000000     mov dword ptr [esp + 0x18], 0
// 006fed7e  ff1544d07700         call dword ptr [0x77d044]
// 006fed84  5f                   pop edi
// 006fed85  5e                   pop esi
// 006fed86  83c410               add esp, 0x10
// 006fed89  c20c00               ret 0xc
// 006fed8c  8b4608               mov eax, dword ptr [esi + 8]
// 006fed8f  85c0                 test eax, eax
// 006fed91  7426                 je 0x6fedb9
// 006fed93  8b17                 mov edx, dword ptr [edi]
// 006fed95  8b5220               mov edx, dword ptr [edx + 0x20]
// 006fed98  50                   push eax
// 006fed99  8d44240c             lea eax, [esp + 0xc]
// 006fed9d  50                   push eax
// 006fed9e  8bcf                 mov ecx, edi
// 006feda0  ffd2                 call edx
// 006feda2  8b06                 mov eax, dword ptr [esi]
// 006feda4  8b5034               mov edx, dword ptr [eax + 0x34]
// 006feda7  6a01                 push 1
// 006feda9  8d4c240c             lea ecx, [esp + 0xc]
// 006fedad  51                   push ecx
// 006fedae  8bce                 mov ecx, esi
// 006fedb0  c7460800000000       mov dword ptr [esi + 8], 0
// 006fedb7  ffd2                 call edx
// 006fedb9  5f                   pop edi
// 006fedba  5e                   pop esi
// 006fedbb  83c410               add esp, 0x10
// 006fedbe  c20c00               ret 0xc
// library xtp-11.2.2-vc8/Source\TabManager\XTPTabManager.cpp (function ?PerformMouseMove@CXTPTabManager@@QAEXPAUHWND__@@VCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/TabManager/XTPTabManager.cpp
