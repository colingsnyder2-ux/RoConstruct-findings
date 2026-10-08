// roc 2012-06 00a4ce60  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 465 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a4ce60
//
// 00a4ce60  83ec10               sub esp, 0x10
// 00a4ce63  56                   push esi
// 00a4ce64  8bf1                 mov esi, ecx
// 00a4ce66  8b06                 mov eax, dword ptr [esi]
// 00a4ce68  8b502c               mov edx, dword ptr [eax + 0x2c]
// 00a4ce6b  57                   push edi
// 00a4ce6c  ffd2                 call edx
// 00a4ce6e  8bb8e0000000         mov edi, dword ptr [eax + 0xe0]
// 00a4ce74  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00a4ce78  50                   push eax
// 00a4ce79  e8027bf8ff           call 0x9d4980
// 00a4ce7e  83c404               add esp, 4
// 00a4ce81  85c0                 test eax, eax
// 00a4ce83  0f8473010000         je 0xa4cffc
// 00a4ce89  8b16                 mov edx, dword ptr [esi]
// 00a4ce8b  8b4274               mov eax, dword ptr [edx + 0x74]
// 00a4ce8e  8bce                 mov ecx, esi
// 00a4ce90  ffd0                 call eax
// 00a4ce92  85c0                 test eax, eax
// 00a4ce94  0f8562010000         jne 0xa4cffc
// 00a4ce9a  8b16                 mov edx, dword ptr [esi]
// 00a4ce9c  8b422c               mov eax, dword ptr [edx + 0x2c]
// 00a4ce9f  8bce                 mov ecx, esi
// 00a4cea1  ffd0                 call eax
// 00a4cea3  83782000             cmp dword ptr [eax + 0x20], 0
// 00a4cea7  0f8493000000         je 0xa4cf40
// 00a4cead  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00a4ceb1  8b542420             mov edx, dword ptr [esp + 0x20]
// 00a4ceb5  53                   push ebx
// 00a4ceb6  51                   push ecx
// 00a4ceb7  52                   push edx
// 00a4ceb8  8bce                 mov ecx, esi
// 00a4ceba  e8f1fbffff           call 0xa4cab0
// 00a4cebf  8bd8                 mov ebx, eax
// 00a4cec1  8b4608               mov eax, dword ptr [esi + 8]
// 00a4cec4  3bd8                 cmp ebx, eax
// 00a4cec6  7477                 je 0xa4cf3f
// 00a4cec8  85c0                 test eax, eax
// 00a4ceca  7426                 je 0xa4cef2
// 00a4cecc  8b17                 mov edx, dword ptr [edi]
// 00a4cece  8b5220               mov edx, dword ptr [edx + 0x20]
// 00a4ced1  50                   push eax
// 00a4ced2  8d442410             lea eax, [esp + 0x10]
// 00a4ced6  50                   push eax
// 00a4ced7  8bcf                 mov ecx, edi
// 00a4ced9  ffd2                 call edx
// 00a4cedb  8b06                 mov eax, dword ptr [esi]
// 00a4cedd  8b5034               mov edx, dword ptr [eax + 0x34]
// 00a4cee0  6a01                 push 1
// 00a4cee2  8d4c2410             lea ecx, [esp + 0x10]
// 00a4cee6  51                   push ecx
// 00a4cee7  8bce                 mov ecx, esi
// 00a4cee9  c7460800000000       mov dword ptr [esi + 8], 0
// 00a4cef0  ffd2                 call edx
// 00a4cef2  895e08               mov dword ptr [esi + 8], ebx
// 00a4cef5  85db                 test ebx, ebx
// 00a4cef7  7446                 je 0xa4cf3f
// 00a4cef9  8b07                 mov eax, dword ptr [edi]
// 00a4cefb  8b5020               mov edx, dword ptr [eax + 0x20]
// 00a4cefe  53                   push ebx
// 00a4ceff  8d4c2410             lea ecx, [esp + 0x10]
// 00a4cf03  51                   push ecx
// 00a4cf04  8bcf                 mov ecx, edi
// 00a4cf06  ffd2                 call edx
// 00a4cf08  8b16                 mov edx, dword ptr [esi]
// 00a4cf0a  6a00                 push 0
// 00a4cf0c  50                   push eax
// 00a4cf0d  8b4234               mov eax, dword ptr [edx + 0x34]
// 00a4cf10  8bce                 mov ecx, esi
// 00a4cf12  ffd0                 call eax
// 00a4cf14  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00a4cf18  8d54240c             lea edx, [esp + 0xc]
// 00a4cf1c  52                   push edx
// 00a4cf1d  c744241010000000     mov dword ptr [esp + 0x10], 0x10
// 00a4cf25  c744241402000000     mov dword ptr [esp + 0x14], 2
// 00a4cf2d  894c2418             mov dword ptr [esp + 0x18], ecx
// 00a4cf31  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 00a4cf39  ff156420b200         call dword ptr [0xb22064]
// 00a4cf3f  5b                   pop ebx
// 00a4cf40  8b442424             mov eax, dword ptr [esp + 0x24]
// 00a4cf44  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00a4cf48  6a00                 push 0
// 00a4cf4a  6a00                 push 0
// 00a4cf4c  50                   push eax
// 00a4cf4d  51                   push ecx
// 00a4cf4e  8bce                 mov ecx, esi
// 00a4cf50  e83bfeffff           call 0xa4cd90
// 00a4cf55  8bf8                 mov edi, eax
// 00a4cf57  8b4610               mov eax, dword ptr [esi + 0x10]
// 00a4cf5a  3bf8                 cmp edi, eax
// 00a4cf5c  0f84c7000000         je 0xa4d029
// 00a4cf62  85c0                 test eax, eax
// 00a4cf64  742c                 je 0xa4cf92
// 00a4cf66  8b5010               mov edx, dword ptr [eax + 0x10]
// 00a4cf69  89542408             mov dword ptr [esp + 8], edx
// 00a4cf6d  8b4814               mov ecx, dword ptr [eax + 0x14]
// 00a4cf70  894c240c             mov dword ptr [esp + 0xc], ecx
// 00a4cf74  8b5018               mov edx, dword ptr [eax + 0x18]
// 00a4cf77  89542410             mov dword ptr [esp + 0x10], edx
// 00a4cf7b  8b401c               mov eax, dword ptr [eax + 0x1c]
// 00a4cf7e  8b16                 mov edx, dword ptr [esi]
// 00a4cf80  8b5234               mov edx, dword ptr [edx + 0x34]
// 00a4cf83  89442414             mov dword ptr [esp + 0x14], eax
// 00a4cf87  6a01                 push 1
// 00a4cf89  8d44240c             lea eax, [esp + 0xc]
// 00a4cf8d  50                   push eax
// 00a4cf8e  8bce                 mov ecx, esi
// 00a4cf90  ffd2                 call edx
// 00a4cf92  897e10               mov dword ptr [esi + 0x10], edi
// 00a4cf95  85ff                 test edi, edi
// 00a4cf97  0f848c000000         je 0xa4d029
// 00a4cf9d  8b4710               mov eax, dword ptr [edi + 0x10]
// 00a4cfa0  89442408             mov dword ptr [esp + 8], eax
// 00a4cfa4  8b4f14               mov ecx, dword ptr [edi + 0x14]
// 00a4cfa7  894c240c             mov dword ptr [esp + 0xc], ecx
// 00a4cfab  8b5718               mov edx, dword ptr [edi + 0x18]
// 00a4cfae  89542410             mov dword ptr [esp + 0x10], edx
// 00a4cfb2  8b471c               mov eax, dword ptr [edi + 0x1c]
// 00a4cfb5  8b16                 mov edx, dword ptr [esi]
// 00a4cfb7  8b5234               mov edx, dword ptr [edx + 0x34]
// 00a4cfba  89442414             mov dword ptr [esp + 0x14], eax
// 00a4cfbe  6a00                 push 0
// 00a4cfc0  8d44240c             lea eax, [esp + 0xc]
// 00a4cfc4  50                   push eax
// 00a4cfc5  8bce                 mov ecx, esi
// 00a4cfc7  ffd2                 call edx
// 00a4cfc9  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00a4cfcd  8d4c2408             lea ecx, [esp + 8]
// 00a4cfd1  51                   push ecx
// 00a4cfd2  c744240c10000000     mov dword ptr [esp + 0xc], 0x10
// 00a4cfda  c744241002000000     mov dword ptr [esp + 0x10], 2
// 00a4cfe2  89442414             mov dword ptr [esp + 0x14], eax
// 00a4cfe6  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00a4cfee  ff156420b200         call dword ptr [0xb22064]
// 00a4cff4  5f                   pop edi
// 00a4cff5  5e                   pop esi
// 00a4cff6  83c410               add esp, 0x10
// 00a4cff9  c20c00               ret 0xc
// 00a4cffc  8b4608               mov eax, dword ptr [esi + 8]
// 00a4cfff  85c0                 test eax, eax
// 00a4d001  7426                 je 0xa4d029
// 00a4d003  8b17                 mov edx, dword ptr [edi]
// 00a4d005  8b5220               mov edx, dword ptr [edx + 0x20]
// 00a4d008  50                   push eax
// 00a4d009  8d44240c             lea eax, [esp + 0xc]
// 00a4d00d  50                   push eax
// 00a4d00e  8bcf                 mov ecx, edi
// 00a4d010  ffd2                 call edx
// 00a4d012  8b06                 mov eax, dword ptr [esi]
// 00a4d014  8b5034               mov edx, dword ptr [eax + 0x34]
// 00a4d017  6a01                 push 1
// 00a4d019  8d4c240c             lea ecx, [esp + 0xc]
// 00a4d01d  51                   push ecx
// 00a4d01e  8bce                 mov ecx, esi
// 00a4d020  c7460800000000       mov dword ptr [esi + 8], 0
// 00a4d027  ffd2                 call edx
// 00a4d029  5f                   pop edi
// 00a4d02a  5e                   pop esi
// 00a4d02b  83c410               add esp, 0x10
// 00a4d02e  c20c00               ret 0xc
// library xtp-11.2.2/Source\TabManager\XTPTabManager.cpp (function ?PerformMouseMove@CXTPTabManager@@QAEXPAUHWND__@@VCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabManager.cpp
