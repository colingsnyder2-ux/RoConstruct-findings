// from server: 100% by auto
// roc 2008-06 0077c7d0  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 465 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0077c7d0
//
// 0077c7d0  83ec10               sub esp, 0x10
// 0077c7d3  56                   push esi
// 0077c7d4  8bf1                 mov esi, ecx
// 0077c7d6  8b06                 mov eax, dword ptr [esi]
// 0077c7d8  8b502c               mov edx, dword ptr [eax + 0x2c]
// 0077c7db  57                   push edi
// 0077c7dc  ffd2                 call edx
// 0077c7de  8bb8e0000000         mov edi, dword ptr [eax + 0xe0]
// 0077c7e4  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0077c7e8  50                   push eax
// 0077c7e9  e822abf7ff           call 0x6f7310
// 0077c7ee  83c404               add esp, 4
// 0077c7f1  85c0                 test eax, eax
// 0077c7f3  0f8473010000         je 0x77c96c
// 0077c7f9  8b16                 mov edx, dword ptr [esi]
// 0077c7fb  8b4274               mov eax, dword ptr [edx + 0x74]
// 0077c7fe  8bce                 mov ecx, esi
// 0077c800  ffd0                 call eax
// 0077c802  85c0                 test eax, eax
// 0077c804  0f8562010000         jne 0x77c96c
// 0077c80a  8b16                 mov edx, dword ptr [esi]
// 0077c80c  8b422c               mov eax, dword ptr [edx + 0x2c]
// 0077c80f  8bce                 mov ecx, esi
// 0077c811  ffd0                 call eax
// 0077c813  83782000             cmp dword ptr [eax + 0x20], 0
// 0077c817  0f8493000000         je 0x77c8b0
// 0077c81d  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0077c821  8b542420             mov edx, dword ptr [esp + 0x20]
// 0077c825  53                   push ebx
// 0077c826  51                   push ecx
// 0077c827  52                   push edx
// 0077c828  8bce                 mov ecx, esi
// 0077c82a  e8f1fbffff           call 0x77c420
// 0077c82f  8bd8                 mov ebx, eax
// 0077c831  8b4608               mov eax, dword ptr [esi + 8]
// 0077c834  3bd8                 cmp ebx, eax
// 0077c836  7477                 je 0x77c8af
// 0077c838  85c0                 test eax, eax
// 0077c83a  7426                 je 0x77c862
// 0077c83c  8b17                 mov edx, dword ptr [edi]
// 0077c83e  8b5220               mov edx, dword ptr [edx + 0x20]
// 0077c841  50                   push eax
// 0077c842  8d442410             lea eax, [esp + 0x10]
// 0077c846  50                   push eax
// 0077c847  8bcf                 mov ecx, edi
// 0077c849  ffd2                 call edx
// 0077c84b  8b06                 mov eax, dword ptr [esi]
// 0077c84d  8b5034               mov edx, dword ptr [eax + 0x34]
// 0077c850  6a01                 push 1
// 0077c852  8d4c2410             lea ecx, [esp + 0x10]
// 0077c856  51                   push ecx
// 0077c857  8bce                 mov ecx, esi
// 0077c859  c7460800000000       mov dword ptr [esi + 8], 0
// 0077c860  ffd2                 call edx
// 0077c862  895e08               mov dword ptr [esi + 8], ebx
// 0077c865  85db                 test ebx, ebx
// 0077c867  7446                 je 0x77c8af
// 0077c869  8b07                 mov eax, dword ptr [edi]
// 0077c86b  8b5020               mov edx, dword ptr [eax + 0x20]
// 0077c86e  53                   push ebx
// 0077c86f  8d4c2410             lea ecx, [esp + 0x10]
// 0077c873  51                   push ecx
// 0077c874  8bcf                 mov ecx, edi
// 0077c876  ffd2                 call edx
// 0077c878  8b16                 mov edx, dword ptr [esi]
// 0077c87a  6a00                 push 0
// 0077c87c  50                   push eax
// 0077c87d  8b4234               mov eax, dword ptr [edx + 0x34]
// 0077c880  8bce                 mov ecx, esi
// 0077c882  ffd0                 call eax
// 0077c884  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0077c888  8d54240c             lea edx, [esp + 0xc]
// 0077c88c  52                   push edx
// 0077c88d  c744241010000000     mov dword ptr [esp + 0x10], 0x10
// 0077c895  c744241402000000     mov dword ptr [esp + 0x14], 2
// 0077c89d  894c2418             mov dword ptr [esp + 0x18], ecx
// 0077c8a1  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0077c8a9  ff155c208000         call dword ptr [0x80205c]
// 0077c8af  5b                   pop ebx
// 0077c8b0  8b442424             mov eax, dword ptr [esp + 0x24]
// 0077c8b4  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0077c8b8  6a00                 push 0
// 0077c8ba  6a00                 push 0
// 0077c8bc  50                   push eax
// 0077c8bd  51                   push ecx
// 0077c8be  8bce                 mov ecx, esi
// 0077c8c0  e83bfeffff           call 0x77c700
// 0077c8c5  8bf8                 mov edi, eax
// 0077c8c7  8b4610               mov eax, dword ptr [esi + 0x10]
// 0077c8ca  3bf8                 cmp edi, eax
// 0077c8cc  0f84c7000000         je 0x77c999
// 0077c8d2  85c0                 test eax, eax
// 0077c8d4  742c                 je 0x77c902
// 0077c8d6  8b5010               mov edx, dword ptr [eax + 0x10]
// 0077c8d9  89542408             mov dword ptr [esp + 8], edx
// 0077c8dd  8b4814               mov ecx, dword ptr [eax + 0x14]
// 0077c8e0  894c240c             mov dword ptr [esp + 0xc], ecx
// 0077c8e4  8b5018               mov edx, dword ptr [eax + 0x18]
// 0077c8e7  89542410             mov dword ptr [esp + 0x10], edx
// 0077c8eb  8b401c               mov eax, dword ptr [eax + 0x1c]
// 0077c8ee  8b16                 mov edx, dword ptr [esi]
// 0077c8f0  8b5234               mov edx, dword ptr [edx + 0x34]
// 0077c8f3  89442414             mov dword ptr [esp + 0x14], eax
// 0077c8f7  6a01                 push 1
// 0077c8f9  8d44240c             lea eax, [esp + 0xc]
// 0077c8fd  50                   push eax
// 0077c8fe  8bce                 mov ecx, esi
// 0077c900  ffd2                 call edx
// 0077c902  897e10               mov dword ptr [esi + 0x10], edi
// 0077c905  85ff                 test edi, edi
// 0077c907  0f848c000000         je 0x77c999
// 0077c90d  8b4710               mov eax, dword ptr [edi + 0x10]
// 0077c910  89442408             mov dword ptr [esp + 8], eax
// 0077c914  8b4f14               mov ecx, dword ptr [edi + 0x14]
// 0077c917  894c240c             mov dword ptr [esp + 0xc], ecx
// 0077c91b  8b5718               mov edx, dword ptr [edi + 0x18]
// 0077c91e  89542410             mov dword ptr [esp + 0x10], edx
// 0077c922  8b471c               mov eax, dword ptr [edi + 0x1c]
// 0077c925  8b16                 mov edx, dword ptr [esi]
// 0077c927  8b5234               mov edx, dword ptr [edx + 0x34]
// 0077c92a  89442414             mov dword ptr [esp + 0x14], eax
// 0077c92e  6a00                 push 0
// 0077c930  8d44240c             lea eax, [esp + 0xc]
// 0077c934  50                   push eax
// 0077c935  8bce                 mov ecx, esi
// 0077c937  ffd2                 call edx
// 0077c939  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0077c93d  8d4c2408             lea ecx, [esp + 8]
// 0077c941  51                   push ecx
// 0077c942  c744240c10000000     mov dword ptr [esp + 0xc], 0x10
// 0077c94a  c744241002000000     mov dword ptr [esp + 0x10], 2
// 0077c952  89442414             mov dword ptr [esp + 0x14], eax
// 0077c956  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0077c95e  ff155c208000         call dword ptr [0x80205c]
// 0077c964  5f                   pop edi
// 0077c965  5e                   pop esi
// 0077c966  83c410               add esp, 0x10
// 0077c969  c20c00               ret 0xc
// 0077c96c  8b4608               mov eax, dword ptr [esi + 8]
// 0077c96f  85c0                 test eax, eax
// 0077c971  7426                 je 0x77c999
// 0077c973  8b17                 mov edx, dword ptr [edi]
// 0077c975  8b5220               mov edx, dword ptr [edx + 0x20]
// 0077c978  50                   push eax
// 0077c979  8d44240c             lea eax, [esp + 0xc]
// 0077c97d  50                   push eax
// 0077c97e  8bcf                 mov ecx, edi
// 0077c980  ffd2                 call edx
// 0077c982  8b06                 mov eax, dword ptr [esi]
// 0077c984  8b5034               mov edx, dword ptr [eax + 0x34]
// 0077c987  6a01                 push 1
// 0077c989  8d4c240c             lea ecx, [esp + 0xc]
// 0077c98d  51                   push ecx
// 0077c98e  8bce                 mov ecx, esi
// 0077c990  c7460800000000       mov dword ptr [esi + 8], 0
// 0077c997  ffd2                 call edx
// 0077c999  5f                   pop edi
// 0077c99a  5e                   pop esi
// 0077c99b  83c410               add esp, 0x10
// 0077c99e  c20c00               ret 0xc
// library xtp-11.2.2/Source\TabManager\XTPTabManager.cpp (function ?PerformMouseMove@CXTPTabManager@@QAEXPAUHWND__@@VCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabManager.cpp
