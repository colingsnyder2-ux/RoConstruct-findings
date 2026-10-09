// roc 2009-12 008cfa40  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 465 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008cfa40
//
// 008cfa40  83ec10               sub esp, 0x10
// 008cfa43  56                   push esi
// 008cfa44  8bf1                 mov esi, ecx
// 008cfa46  8b06                 mov eax, dword ptr [esi]
// 008cfa48  8b502c               mov edx, dword ptr [eax + 0x2c]
// 008cfa4b  57                   push edi
// 008cfa4c  ffd2                 call edx
// 008cfa4e  8bb8e0000000         mov edi, dword ptr [eax + 0xe0]
// 008cfa54  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008cfa58  50                   push eax
// 008cfa59  e852b0f7ff           call 0x84aab0
// 008cfa5e  83c404               add esp, 4
// 008cfa61  85c0                 test eax, eax
// 008cfa63  0f8473010000         je 0x8cfbdc
// 008cfa69  8b16                 mov edx, dword ptr [esi]
// 008cfa6b  8b4274               mov eax, dword ptr [edx + 0x74]
// 008cfa6e  8bce                 mov ecx, esi
// 008cfa70  ffd0                 call eax
// 008cfa72  85c0                 test eax, eax
// 008cfa74  0f8562010000         jne 0x8cfbdc
// 008cfa7a  8b16                 mov edx, dword ptr [esi]
// 008cfa7c  8b422c               mov eax, dword ptr [edx + 0x2c]
// 008cfa7f  8bce                 mov ecx, esi
// 008cfa81  ffd0                 call eax
// 008cfa83  83782000             cmp dword ptr [eax + 0x20], 0
// 008cfa87  0f8493000000         je 0x8cfb20
// 008cfa8d  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008cfa91  8b542420             mov edx, dword ptr [esp + 0x20]
// 008cfa95  53                   push ebx
// 008cfa96  51                   push ecx
// 008cfa97  52                   push edx
// 008cfa98  8bce                 mov ecx, esi
// 008cfa9a  e8f1fbffff           call 0x8cf690
// 008cfa9f  8bd8                 mov ebx, eax
// 008cfaa1  8b4608               mov eax, dword ptr [esi + 8]
// 008cfaa4  3bd8                 cmp ebx, eax
// 008cfaa6  7477                 je 0x8cfb1f
// 008cfaa8  85c0                 test eax, eax
// 008cfaaa  7426                 je 0x8cfad2
// 008cfaac  8b17                 mov edx, dword ptr [edi]
// 008cfaae  8b5220               mov edx, dword ptr [edx + 0x20]
// 008cfab1  50                   push eax
// 008cfab2  8d442410             lea eax, [esp + 0x10]
// 008cfab6  50                   push eax
// 008cfab7  8bcf                 mov ecx, edi
// 008cfab9  ffd2                 call edx
// 008cfabb  8b06                 mov eax, dword ptr [esi]
// 008cfabd  8b5034               mov edx, dword ptr [eax + 0x34]
// 008cfac0  6a01                 push 1
// 008cfac2  8d4c2410             lea ecx, [esp + 0x10]
// 008cfac6  51                   push ecx
// 008cfac7  8bce                 mov ecx, esi
// 008cfac9  c7460800000000       mov dword ptr [esi + 8], 0
// 008cfad0  ffd2                 call edx
// 008cfad2  895e08               mov dword ptr [esi + 8], ebx
// 008cfad5  85db                 test ebx, ebx
// 008cfad7  7446                 je 0x8cfb1f
// 008cfad9  8b07                 mov eax, dword ptr [edi]
// 008cfadb  8b5020               mov edx, dword ptr [eax + 0x20]
// 008cfade  53                   push ebx
// 008cfadf  8d4c2410             lea ecx, [esp + 0x10]
// 008cfae3  51                   push ecx
// 008cfae4  8bcf                 mov ecx, edi
// 008cfae6  ffd2                 call edx
// 008cfae8  8b16                 mov edx, dword ptr [esi]
// 008cfaea  6a00                 push 0
// 008cfaec  50                   push eax
// 008cfaed  8b4234               mov eax, dword ptr [edx + 0x34]
// 008cfaf0  8bce                 mov ecx, esi
// 008cfaf2  ffd0                 call eax
// 008cfaf4  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008cfaf8  8d54240c             lea edx, [esp + 0xc]
// 008cfafc  52                   push edx
// 008cfafd  c744241010000000     mov dword ptr [esp + 0x10], 0x10
// 008cfb05  c744241402000000     mov dword ptr [esp + 0x14], 2
// 008cfb0d  894c2418             mov dword ptr [esp + 0x18], ecx
// 008cfb11  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 008cfb19  ff1564b09800         call dword ptr [0x98b064]
// 008cfb1f  5b                   pop ebx
// 008cfb20  8b442424             mov eax, dword ptr [esp + 0x24]
// 008cfb24  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008cfb28  6a00                 push 0
// 008cfb2a  6a00                 push 0
// 008cfb2c  50                   push eax
// 008cfb2d  51                   push ecx
// 008cfb2e  8bce                 mov ecx, esi
// 008cfb30  e83bfeffff           call 0x8cf970
// 008cfb35  8bf8                 mov edi, eax
// 008cfb37  8b4610               mov eax, dword ptr [esi + 0x10]
// 008cfb3a  3bf8                 cmp edi, eax
// 008cfb3c  0f84c7000000         je 0x8cfc09
// 008cfb42  85c0                 test eax, eax
// 008cfb44  742c                 je 0x8cfb72
// 008cfb46  8b5010               mov edx, dword ptr [eax + 0x10]
// 008cfb49  89542408             mov dword ptr [esp + 8], edx
// 008cfb4d  8b4814               mov ecx, dword ptr [eax + 0x14]
// 008cfb50  894c240c             mov dword ptr [esp + 0xc], ecx
// 008cfb54  8b5018               mov edx, dword ptr [eax + 0x18]
// 008cfb57  89542410             mov dword ptr [esp + 0x10], edx
// 008cfb5b  8b401c               mov eax, dword ptr [eax + 0x1c]
// 008cfb5e  8b16                 mov edx, dword ptr [esi]
// 008cfb60  8b5234               mov edx, dword ptr [edx + 0x34]
// 008cfb63  89442414             mov dword ptr [esp + 0x14], eax
// 008cfb67  6a01                 push 1
// 008cfb69  8d44240c             lea eax, [esp + 0xc]
// 008cfb6d  50                   push eax
// 008cfb6e  8bce                 mov ecx, esi
// 008cfb70  ffd2                 call edx
// 008cfb72  897e10               mov dword ptr [esi + 0x10], edi
// 008cfb75  85ff                 test edi, edi
// 008cfb77  0f848c000000         je 0x8cfc09
// 008cfb7d  8b4710               mov eax, dword ptr [edi + 0x10]
// 008cfb80  89442408             mov dword ptr [esp + 8], eax
// 008cfb84  8b4f14               mov ecx, dword ptr [edi + 0x14]
// 008cfb87  894c240c             mov dword ptr [esp + 0xc], ecx
// 008cfb8b  8b5718               mov edx, dword ptr [edi + 0x18]
// 008cfb8e  89542410             mov dword ptr [esp + 0x10], edx
// 008cfb92  8b471c               mov eax, dword ptr [edi + 0x1c]
// 008cfb95  8b16                 mov edx, dword ptr [esi]
// 008cfb97  8b5234               mov edx, dword ptr [edx + 0x34]
// 008cfb9a  89442414             mov dword ptr [esp + 0x14], eax
// 008cfb9e  6a00                 push 0
// 008cfba0  8d44240c             lea eax, [esp + 0xc]
// 008cfba4  50                   push eax
// 008cfba5  8bce                 mov ecx, esi
// 008cfba7  ffd2                 call edx
// 008cfba9  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008cfbad  8d4c2408             lea ecx, [esp + 8]
// 008cfbb1  51                   push ecx
// 008cfbb2  c744240c10000000     mov dword ptr [esp + 0xc], 0x10
// 008cfbba  c744241002000000     mov dword ptr [esp + 0x10], 2
// 008cfbc2  89442414             mov dword ptr [esp + 0x14], eax
// 008cfbc6  c744241800000000     mov dword ptr [esp + 0x18], 0
// 008cfbce  ff1564b09800         call dword ptr [0x98b064]
// 008cfbd4  5f                   pop edi
// 008cfbd5  5e                   pop esi
// 008cfbd6  83c410               add esp, 0x10
// 008cfbd9  c20c00               ret 0xc
// 008cfbdc  8b4608               mov eax, dword ptr [esi + 8]
// 008cfbdf  85c0                 test eax, eax
// 008cfbe1  7426                 je 0x8cfc09
// 008cfbe3  8b17                 mov edx, dword ptr [edi]
// 008cfbe5  8b5220               mov edx, dword ptr [edx + 0x20]
// 008cfbe8  50                   push eax
// 008cfbe9  8d44240c             lea eax, [esp + 0xc]
// 008cfbed  50                   push eax
// 008cfbee  8bcf                 mov ecx, edi
// 008cfbf0  ffd2                 call edx
// 008cfbf2  8b06                 mov eax, dword ptr [esi]
// 008cfbf4  8b5034               mov edx, dword ptr [eax + 0x34]
// 008cfbf7  6a01                 push 1
// 008cfbf9  8d4c240c             lea ecx, [esp + 0xc]
// 008cfbfd  51                   push ecx
// 008cfbfe  8bce                 mov ecx, esi
// 008cfc00  c7460800000000       mov dword ptr [esi + 8], 0
// 008cfc07  ffd2                 call edx
// 008cfc09  5f                   pop edi
// 008cfc0a  5e                   pop esi
// 008cfc0b  83c410               add esp, 0x10
// 008cfc0e  c20c00               ret 0xc
// library xtp-11.2.2/Source\TabManager\XTPTabManager.cpp (function ?PerformMouseMove@CXTPTabManager@@QAEXPAUHWND__@@VCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabManager.cpp
