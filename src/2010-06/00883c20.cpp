// roc 2010-06 00883c20  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 465 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00883c20
//
// 00883c20  83ec10               sub esp, 0x10
// 00883c23  56                   push esi
// 00883c24  8bf1                 mov esi, ecx
// 00883c26  8b06                 mov eax, dword ptr [esi]
// 00883c28  8b502c               mov edx, dword ptr [eax + 0x2c]
// 00883c2b  57                   push edi
// 00883c2c  ffd2                 call edx
// 00883c2e  8bb8e0000000         mov edi, dword ptr [eax + 0xe0]
// 00883c34  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00883c38  50                   push eax
// 00883c39  e8a2aef7ff           call 0x7feae0
// 00883c3e  83c404               add esp, 4
// 00883c41  85c0                 test eax, eax
// 00883c43  0f8473010000         je 0x883dbc
// 00883c49  8b16                 mov edx, dword ptr [esi]
// 00883c4b  8b4274               mov eax, dword ptr [edx + 0x74]
// 00883c4e  8bce                 mov ecx, esi
// 00883c50  ffd0                 call eax
// 00883c52  85c0                 test eax, eax
// 00883c54  0f8562010000         jne 0x883dbc
// 00883c5a  8b16                 mov edx, dword ptr [esi]
// 00883c5c  8b422c               mov eax, dword ptr [edx + 0x2c]
// 00883c5f  8bce                 mov ecx, esi
// 00883c61  ffd0                 call eax
// 00883c63  83782000             cmp dword ptr [eax + 0x20], 0
// 00883c67  0f8493000000         je 0x883d00
// 00883c6d  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00883c71  8b542420             mov edx, dword ptr [esp + 0x20]
// 00883c75  53                   push ebx
// 00883c76  51                   push ecx
// 00883c77  52                   push edx
// 00883c78  8bce                 mov ecx, esi
// 00883c7a  e8f1fbffff           call 0x883870
// 00883c7f  8bd8                 mov ebx, eax
// 00883c81  8b4608               mov eax, dword ptr [esi + 8]
// 00883c84  3bd8                 cmp ebx, eax
// 00883c86  7477                 je 0x883cff
// 00883c88  85c0                 test eax, eax
// 00883c8a  7426                 je 0x883cb2
// 00883c8c  8b17                 mov edx, dword ptr [edi]
// 00883c8e  8b5220               mov edx, dword ptr [edx + 0x20]
// 00883c91  50                   push eax
// 00883c92  8d442410             lea eax, [esp + 0x10]
// 00883c96  50                   push eax
// 00883c97  8bcf                 mov ecx, edi
// 00883c99  ffd2                 call edx
// 00883c9b  8b06                 mov eax, dword ptr [esi]
// 00883c9d  8b5034               mov edx, dword ptr [eax + 0x34]
// 00883ca0  6a01                 push 1
// 00883ca2  8d4c2410             lea ecx, [esp + 0x10]
// 00883ca6  51                   push ecx
// 00883ca7  8bce                 mov ecx, esi
// 00883ca9  c7460800000000       mov dword ptr [esi + 8], 0
// 00883cb0  ffd2                 call edx
// 00883cb2  895e08               mov dword ptr [esi + 8], ebx
// 00883cb5  85db                 test ebx, ebx
// 00883cb7  7446                 je 0x883cff
// 00883cb9  8b07                 mov eax, dword ptr [edi]
// 00883cbb  8b5020               mov edx, dword ptr [eax + 0x20]
// 00883cbe  53                   push ebx
// 00883cbf  8d4c2410             lea ecx, [esp + 0x10]
// 00883cc3  51                   push ecx
// 00883cc4  8bcf                 mov ecx, edi
// 00883cc6  ffd2                 call edx
// 00883cc8  8b16                 mov edx, dword ptr [esi]
// 00883cca  6a00                 push 0
// 00883ccc  50                   push eax
// 00883ccd  8b4234               mov eax, dword ptr [edx + 0x34]
// 00883cd0  8bce                 mov ecx, esi
// 00883cd2  ffd0                 call eax
// 00883cd4  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00883cd8  8d54240c             lea edx, [esp + 0xc]
// 00883cdc  52                   push edx
// 00883cdd  c744241010000000     mov dword ptr [esp + 0x10], 0x10
// 00883ce5  c744241402000000     mov dword ptr [esp + 0x14], 2
// 00883ced  894c2418             mov dword ptr [esp + 0x18], ecx
// 00883cf1  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 00883cf9  ff156ca09e00         call dword ptr [0x9ea06c]
// 00883cff  5b                   pop ebx
// 00883d00  8b442424             mov eax, dword ptr [esp + 0x24]
// 00883d04  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00883d08  6a00                 push 0
// 00883d0a  6a00                 push 0
// 00883d0c  50                   push eax
// 00883d0d  51                   push ecx
// 00883d0e  8bce                 mov ecx, esi
// 00883d10  e83bfeffff           call 0x883b50
// 00883d15  8bf8                 mov edi, eax
// 00883d17  8b4610               mov eax, dword ptr [esi + 0x10]
// 00883d1a  3bf8                 cmp edi, eax
// 00883d1c  0f84c7000000         je 0x883de9
// 00883d22  85c0                 test eax, eax
// 00883d24  742c                 je 0x883d52
// 00883d26  8b5010               mov edx, dword ptr [eax + 0x10]
// 00883d29  89542408             mov dword ptr [esp + 8], edx
// 00883d2d  8b4814               mov ecx, dword ptr [eax + 0x14]
// 00883d30  894c240c             mov dword ptr [esp + 0xc], ecx
// 00883d34  8b5018               mov edx, dword ptr [eax + 0x18]
// 00883d37  89542410             mov dword ptr [esp + 0x10], edx
// 00883d3b  8b401c               mov eax, dword ptr [eax + 0x1c]
// 00883d3e  8b16                 mov edx, dword ptr [esi]
// 00883d40  8b5234               mov edx, dword ptr [edx + 0x34]
// 00883d43  89442414             mov dword ptr [esp + 0x14], eax
// 00883d47  6a01                 push 1
// 00883d49  8d44240c             lea eax, [esp + 0xc]
// 00883d4d  50                   push eax
// 00883d4e  8bce                 mov ecx, esi
// 00883d50  ffd2                 call edx
// 00883d52  897e10               mov dword ptr [esi + 0x10], edi
// 00883d55  85ff                 test edi, edi
// 00883d57  0f848c000000         je 0x883de9
// 00883d5d  8b4710               mov eax, dword ptr [edi + 0x10]
// 00883d60  89442408             mov dword ptr [esp + 8], eax
// 00883d64  8b4f14               mov ecx, dword ptr [edi + 0x14]
// 00883d67  894c240c             mov dword ptr [esp + 0xc], ecx
// 00883d6b  8b5718               mov edx, dword ptr [edi + 0x18]
// 00883d6e  89542410             mov dword ptr [esp + 0x10], edx
// 00883d72  8b471c               mov eax, dword ptr [edi + 0x1c]
// 00883d75  8b16                 mov edx, dword ptr [esi]
// 00883d77  8b5234               mov edx, dword ptr [edx + 0x34]
// 00883d7a  89442414             mov dword ptr [esp + 0x14], eax
// 00883d7e  6a00                 push 0
// 00883d80  8d44240c             lea eax, [esp + 0xc]
// 00883d84  50                   push eax
// 00883d85  8bce                 mov ecx, esi
// 00883d87  ffd2                 call edx
// 00883d89  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00883d8d  8d4c2408             lea ecx, [esp + 8]
// 00883d91  51                   push ecx
// 00883d92  c744240c10000000     mov dword ptr [esp + 0xc], 0x10
// 00883d9a  c744241002000000     mov dword ptr [esp + 0x10], 2
// 00883da2  89442414             mov dword ptr [esp + 0x14], eax
// 00883da6  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00883dae  ff156ca09e00         call dword ptr [0x9ea06c]
// 00883db4  5f                   pop edi
// 00883db5  5e                   pop esi
// 00883db6  83c410               add esp, 0x10
// 00883db9  c20c00               ret 0xc
// 00883dbc  8b4608               mov eax, dword ptr [esi + 8]
// 00883dbf  85c0                 test eax, eax
// 00883dc1  7426                 je 0x883de9
// 00883dc3  8b17                 mov edx, dword ptr [edi]
// 00883dc5  8b5220               mov edx, dword ptr [edx + 0x20]
// 00883dc8  50                   push eax
// 00883dc9  8d44240c             lea eax, [esp + 0xc]
// 00883dcd  50                   push eax
// 00883dce  8bcf                 mov ecx, edi
// 00883dd0  ffd2                 call edx
// 00883dd2  8b06                 mov eax, dword ptr [esi]
// 00883dd4  8b5034               mov edx, dword ptr [eax + 0x34]
// 00883dd7  6a01                 push 1
// 00883dd9  8d4c240c             lea ecx, [esp + 0xc]
// 00883ddd  51                   push ecx
// 00883dde  8bce                 mov ecx, esi
// 00883de0  c7460800000000       mov dword ptr [esi + 8], 0
// 00883de7  ffd2                 call edx
// 00883de9  5f                   pop edi
// 00883dea  5e                   pop esi
// 00883deb  83c410               add esp, 0x10
// 00883dee  c20c00               ret 0xc
// library xtp-11.2.2/Source\TabManager\XTPTabManager.cpp (function ?PerformMouseMove@CXTPTabManager@@QAEXPAUHWND__@@VCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabManager.cpp
