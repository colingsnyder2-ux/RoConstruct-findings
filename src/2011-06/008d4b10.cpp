// roc 2011-06 008d4b10  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 465 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008d4b10
//
// 008d4b10  83ec10               sub esp, 0x10
// 008d4b13  56                   push esi
// 008d4b14  8bf1                 mov esi, ecx
// 008d4b16  8b06                 mov eax, dword ptr [esi]
// 008d4b18  8b502c               mov edx, dword ptr [eax + 0x2c]
// 008d4b1b  57                   push edi
// 008d4b1c  ffd2                 call edx
// 008d4b1e  8bb8e0000000         mov edi, dword ptr [eax + 0xe0]
// 008d4b24  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008d4b28  50                   push eax
// 008d4b29  e8327af8ff           call 0x85c560
// 008d4b2e  83c404               add esp, 4
// 008d4b31  85c0                 test eax, eax
// 008d4b33  0f8473010000         je 0x8d4cac
// 008d4b39  8b16                 mov edx, dword ptr [esi]
// 008d4b3b  8b4274               mov eax, dword ptr [edx + 0x74]
// 008d4b3e  8bce                 mov ecx, esi
// 008d4b40  ffd0                 call eax
// 008d4b42  85c0                 test eax, eax
// 008d4b44  0f8562010000         jne 0x8d4cac
// 008d4b4a  8b16                 mov edx, dword ptr [esi]
// 008d4b4c  8b422c               mov eax, dword ptr [edx + 0x2c]
// 008d4b4f  8bce                 mov ecx, esi
// 008d4b51  ffd0                 call eax
// 008d4b53  83782000             cmp dword ptr [eax + 0x20], 0
// 008d4b57  0f8493000000         je 0x8d4bf0
// 008d4b5d  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008d4b61  8b542420             mov edx, dword ptr [esp + 0x20]
// 008d4b65  53                   push ebx
// 008d4b66  51                   push ecx
// 008d4b67  52                   push edx
// 008d4b68  8bce                 mov ecx, esi
// 008d4b6a  e8f1fbffff           call 0x8d4760
// 008d4b6f  8bd8                 mov ebx, eax
// 008d4b71  8b4608               mov eax, dword ptr [esi + 8]
// 008d4b74  3bd8                 cmp ebx, eax
// 008d4b76  7477                 je 0x8d4bef
// 008d4b78  85c0                 test eax, eax
// 008d4b7a  7426                 je 0x8d4ba2
// 008d4b7c  8b17                 mov edx, dword ptr [edi]
// 008d4b7e  8b5220               mov edx, dword ptr [edx + 0x20]
// 008d4b81  50                   push eax
// 008d4b82  8d442410             lea eax, [esp + 0x10]
// 008d4b86  50                   push eax
// 008d4b87  8bcf                 mov ecx, edi
// 008d4b89  ffd2                 call edx
// 008d4b8b  8b06                 mov eax, dword ptr [esi]
// 008d4b8d  8b5034               mov edx, dword ptr [eax + 0x34]
// 008d4b90  6a01                 push 1
// 008d4b92  8d4c2410             lea ecx, [esp + 0x10]
// 008d4b96  51                   push ecx
// 008d4b97  8bce                 mov ecx, esi
// 008d4b99  c7460800000000       mov dword ptr [esi + 8], 0
// 008d4ba0  ffd2                 call edx
// 008d4ba2  895e08               mov dword ptr [esi + 8], ebx
// 008d4ba5  85db                 test ebx, ebx
// 008d4ba7  7446                 je 0x8d4bef
// 008d4ba9  8b07                 mov eax, dword ptr [edi]
// 008d4bab  8b5020               mov edx, dword ptr [eax + 0x20]
// 008d4bae  53                   push ebx
// 008d4baf  8d4c2410             lea ecx, [esp + 0x10]
// 008d4bb3  51                   push ecx
// 008d4bb4  8bcf                 mov ecx, edi
// 008d4bb6  ffd2                 call edx
// 008d4bb8  8b16                 mov edx, dword ptr [esi]
// 008d4bba  6a00                 push 0
// 008d4bbc  50                   push eax
// 008d4bbd  8b4234               mov eax, dword ptr [edx + 0x34]
// 008d4bc0  8bce                 mov ecx, esi
// 008d4bc2  ffd0                 call eax
// 008d4bc4  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008d4bc8  8d54240c             lea edx, [esp + 0xc]
// 008d4bcc  52                   push edx
// 008d4bcd  c744241010000000     mov dword ptr [esp + 0x10], 0x10
// 008d4bd5  c744241402000000     mov dword ptr [esp + 0x14], 2
// 008d4bdd  894c2418             mov dword ptr [esp + 0x18], ecx
// 008d4be1  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 008d4be9  ff156000a400         call dword ptr [0xa40060]
// 008d4bef  5b                   pop ebx
// 008d4bf0  8b442424             mov eax, dword ptr [esp + 0x24]
// 008d4bf4  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008d4bf8  6a00                 push 0
// 008d4bfa  6a00                 push 0
// 008d4bfc  50                   push eax
// 008d4bfd  51                   push ecx
// 008d4bfe  8bce                 mov ecx, esi
// 008d4c00  e83bfeffff           call 0x8d4a40
// 008d4c05  8bf8                 mov edi, eax
// 008d4c07  8b4610               mov eax, dword ptr [esi + 0x10]
// 008d4c0a  3bf8                 cmp edi, eax
// 008d4c0c  0f84c7000000         je 0x8d4cd9
// 008d4c12  85c0                 test eax, eax
// 008d4c14  742c                 je 0x8d4c42
// 008d4c16  8b5010               mov edx, dword ptr [eax + 0x10]
// 008d4c19  89542408             mov dword ptr [esp + 8], edx
// 008d4c1d  8b4814               mov ecx, dword ptr [eax + 0x14]
// 008d4c20  894c240c             mov dword ptr [esp + 0xc], ecx
// 008d4c24  8b5018               mov edx, dword ptr [eax + 0x18]
// 008d4c27  89542410             mov dword ptr [esp + 0x10], edx
// 008d4c2b  8b401c               mov eax, dword ptr [eax + 0x1c]
// 008d4c2e  8b16                 mov edx, dword ptr [esi]
// 008d4c30  8b5234               mov edx, dword ptr [edx + 0x34]
// 008d4c33  89442414             mov dword ptr [esp + 0x14], eax
// 008d4c37  6a01                 push 1
// 008d4c39  8d44240c             lea eax, [esp + 0xc]
// 008d4c3d  50                   push eax
// 008d4c3e  8bce                 mov ecx, esi
// 008d4c40  ffd2                 call edx
// 008d4c42  897e10               mov dword ptr [esi + 0x10], edi
// 008d4c45  85ff                 test edi, edi
// 008d4c47  0f848c000000         je 0x8d4cd9
// 008d4c4d  8b4710               mov eax, dword ptr [edi + 0x10]
// 008d4c50  89442408             mov dword ptr [esp + 8], eax
// 008d4c54  8b4f14               mov ecx, dword ptr [edi + 0x14]
// 008d4c57  894c240c             mov dword ptr [esp + 0xc], ecx
// 008d4c5b  8b5718               mov edx, dword ptr [edi + 0x18]
// 008d4c5e  89542410             mov dword ptr [esp + 0x10], edx
// 008d4c62  8b471c               mov eax, dword ptr [edi + 0x1c]
// 008d4c65  8b16                 mov edx, dword ptr [esi]
// 008d4c67  8b5234               mov edx, dword ptr [edx + 0x34]
// 008d4c6a  89442414             mov dword ptr [esp + 0x14], eax
// 008d4c6e  6a00                 push 0
// 008d4c70  8d44240c             lea eax, [esp + 0xc]
// 008d4c74  50                   push eax
// 008d4c75  8bce                 mov ecx, esi
// 008d4c77  ffd2                 call edx
// 008d4c79  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008d4c7d  8d4c2408             lea ecx, [esp + 8]
// 008d4c81  51                   push ecx
// 008d4c82  c744240c10000000     mov dword ptr [esp + 0xc], 0x10
// 008d4c8a  c744241002000000     mov dword ptr [esp + 0x10], 2
// 008d4c92  89442414             mov dword ptr [esp + 0x14], eax
// 008d4c96  c744241800000000     mov dword ptr [esp + 0x18], 0
// 008d4c9e  ff156000a400         call dword ptr [0xa40060]
// 008d4ca4  5f                   pop edi
// 008d4ca5  5e                   pop esi
// 008d4ca6  83c410               add esp, 0x10
// 008d4ca9  c20c00               ret 0xc
// 008d4cac  8b4608               mov eax, dword ptr [esi + 8]
// 008d4caf  85c0                 test eax, eax
// 008d4cb1  7426                 je 0x8d4cd9
// 008d4cb3  8b17                 mov edx, dword ptr [edi]
// 008d4cb5  8b5220               mov edx, dword ptr [edx + 0x20]
// 008d4cb8  50                   push eax
// 008d4cb9  8d44240c             lea eax, [esp + 0xc]
// 008d4cbd  50                   push eax
// 008d4cbe  8bcf                 mov ecx, edi
// 008d4cc0  ffd2                 call edx
// 008d4cc2  8b06                 mov eax, dword ptr [esi]
// 008d4cc4  8b5034               mov edx, dword ptr [eax + 0x34]
// 008d4cc7  6a01                 push 1
// 008d4cc9  8d4c240c             lea ecx, [esp + 0xc]
// 008d4ccd  51                   push ecx
// 008d4cce  8bce                 mov ecx, esi
// 008d4cd0  c7460800000000       mov dword ptr [esi + 8], 0
// 008d4cd7  ffd2                 call edx
// 008d4cd9  5f                   pop edi
// 008d4cda  5e                   pop esi
// 008d4cdb  83c410               add esp, 0x10
// 008d4cde  c20c00               ret 0xc
// library xtp-11.2.2/Source\TabManager\XTPTabManager.cpp (function ?PerformMouseMove@CXTPTabManager@@QAEXPAUHWND__@@VCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabManager.cpp
