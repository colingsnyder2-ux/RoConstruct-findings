// roc 2009-06 007f4e90  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 465 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007f4e90
//
// 007f4e90  83ec10               sub esp, 0x10
// 007f4e93  56                   push esi
// 007f4e94  8bf1                 mov esi, ecx
// 007f4e96  8b06                 mov eax, dword ptr [esi]
// 007f4e98  8b502c               mov edx, dword ptr [eax + 0x2c]
// 007f4e9b  57                   push edi
// 007f4e9c  ffd2                 call edx
// 007f4e9e  8bb8e0000000         mov edi, dword ptr [eax + 0xe0]
// 007f4ea4  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 007f4ea8  50                   push eax
// 007f4ea9  e802aef7ff           call 0x76fcb0
// 007f4eae  83c404               add esp, 4
// 007f4eb1  85c0                 test eax, eax
// 007f4eb3  0f8473010000         je 0x7f502c
// 007f4eb9  8b16                 mov edx, dword ptr [esi]
// 007f4ebb  8b4274               mov eax, dword ptr [edx + 0x74]
// 007f4ebe  8bce                 mov ecx, esi
// 007f4ec0  ffd0                 call eax
// 007f4ec2  85c0                 test eax, eax
// 007f4ec4  0f8562010000         jne 0x7f502c
// 007f4eca  8b16                 mov edx, dword ptr [esi]
// 007f4ecc  8b422c               mov eax, dword ptr [edx + 0x2c]
// 007f4ecf  8bce                 mov ecx, esi
// 007f4ed1  ffd0                 call eax
// 007f4ed3  83782000             cmp dword ptr [eax + 0x20], 0
// 007f4ed7  0f8493000000         je 0x7f4f70
// 007f4edd  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 007f4ee1  8b542420             mov edx, dword ptr [esp + 0x20]
// 007f4ee5  53                   push ebx
// 007f4ee6  51                   push ecx
// 007f4ee7  52                   push edx
// 007f4ee8  8bce                 mov ecx, esi
// 007f4eea  e8f1fbffff           call 0x7f4ae0
// 007f4eef  8bd8                 mov ebx, eax
// 007f4ef1  8b4608               mov eax, dword ptr [esi + 8]
// 007f4ef4  3bd8                 cmp ebx, eax
// 007f4ef6  7477                 je 0x7f4f6f
// 007f4ef8  85c0                 test eax, eax
// 007f4efa  7426                 je 0x7f4f22
// 007f4efc  8b17                 mov edx, dword ptr [edi]
// 007f4efe  8b5220               mov edx, dword ptr [edx + 0x20]
// 007f4f01  50                   push eax
// 007f4f02  8d442410             lea eax, [esp + 0x10]
// 007f4f06  50                   push eax
// 007f4f07  8bcf                 mov ecx, edi
// 007f4f09  ffd2                 call edx
// 007f4f0b  8b06                 mov eax, dword ptr [esi]
// 007f4f0d  8b5034               mov edx, dword ptr [eax + 0x34]
// 007f4f10  6a01                 push 1
// 007f4f12  8d4c2410             lea ecx, [esp + 0x10]
// 007f4f16  51                   push ecx
// 007f4f17  8bce                 mov ecx, esi
// 007f4f19  c7460800000000       mov dword ptr [esi + 8], 0
// 007f4f20  ffd2                 call edx
// 007f4f22  895e08               mov dword ptr [esi + 8], ebx
// 007f4f25  85db                 test ebx, ebx
// 007f4f27  7446                 je 0x7f4f6f
// 007f4f29  8b07                 mov eax, dword ptr [edi]
// 007f4f2b  8b5020               mov edx, dword ptr [eax + 0x20]
// 007f4f2e  53                   push ebx
// 007f4f2f  8d4c2410             lea ecx, [esp + 0x10]
// 007f4f33  51                   push ecx
// 007f4f34  8bcf                 mov ecx, edi
// 007f4f36  ffd2                 call edx
// 007f4f38  8b16                 mov edx, dword ptr [esi]
// 007f4f3a  6a00                 push 0
// 007f4f3c  50                   push eax
// 007f4f3d  8b4234               mov eax, dword ptr [edx + 0x34]
// 007f4f40  8bce                 mov ecx, esi
// 007f4f42  ffd0                 call eax
// 007f4f44  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 007f4f48  8d54240c             lea edx, [esp + 0xc]
// 007f4f4c  52                   push edx
// 007f4f4d  c744241010000000     mov dword ptr [esp + 0x10], 0x10
// 007f4f55  c744241402000000     mov dword ptr [esp + 0x14], 2
// 007f4f5d  894c2418             mov dword ptr [esp + 0x18], ecx
// 007f4f61  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 007f4f69  ff156ce08900         call dword ptr [0x89e06c]
// 007f4f6f  5b                   pop ebx
// 007f4f70  8b442424             mov eax, dword ptr [esp + 0x24]
// 007f4f74  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 007f4f78  6a00                 push 0
// 007f4f7a  6a00                 push 0
// 007f4f7c  50                   push eax
// 007f4f7d  51                   push ecx
// 007f4f7e  8bce                 mov ecx, esi
// 007f4f80  e83bfeffff           call 0x7f4dc0
// 007f4f85  8bf8                 mov edi, eax
// 007f4f87  8b4610               mov eax, dword ptr [esi + 0x10]
// 007f4f8a  3bf8                 cmp edi, eax
// 007f4f8c  0f84c7000000         je 0x7f5059
// 007f4f92  85c0                 test eax, eax
// 007f4f94  742c                 je 0x7f4fc2
// 007f4f96  8b5010               mov edx, dword ptr [eax + 0x10]
// 007f4f99  89542408             mov dword ptr [esp + 8], edx
// 007f4f9d  8b4814               mov ecx, dword ptr [eax + 0x14]
// 007f4fa0  894c240c             mov dword ptr [esp + 0xc], ecx
// 007f4fa4  8b5018               mov edx, dword ptr [eax + 0x18]
// 007f4fa7  89542410             mov dword ptr [esp + 0x10], edx
// 007f4fab  8b401c               mov eax, dword ptr [eax + 0x1c]
// 007f4fae  8b16                 mov edx, dword ptr [esi]
// 007f4fb0  8b5234               mov edx, dword ptr [edx + 0x34]
// 007f4fb3  89442414             mov dword ptr [esp + 0x14], eax
// 007f4fb7  6a01                 push 1
// 007f4fb9  8d44240c             lea eax, [esp + 0xc]
// 007f4fbd  50                   push eax
// 007f4fbe  8bce                 mov ecx, esi
// 007f4fc0  ffd2                 call edx
// 007f4fc2  897e10               mov dword ptr [esi + 0x10], edi
// 007f4fc5  85ff                 test edi, edi
// 007f4fc7  0f848c000000         je 0x7f5059
// 007f4fcd  8b4710               mov eax, dword ptr [edi + 0x10]
// 007f4fd0  89442408             mov dword ptr [esp + 8], eax
// 007f4fd4  8b4f14               mov ecx, dword ptr [edi + 0x14]
// 007f4fd7  894c240c             mov dword ptr [esp + 0xc], ecx
// 007f4fdb  8b5718               mov edx, dword ptr [edi + 0x18]
// 007f4fde  89542410             mov dword ptr [esp + 0x10], edx
// 007f4fe2  8b471c               mov eax, dword ptr [edi + 0x1c]
// 007f4fe5  8b16                 mov edx, dword ptr [esi]
// 007f4fe7  8b5234               mov edx, dword ptr [edx + 0x34]
// 007f4fea  89442414             mov dword ptr [esp + 0x14], eax
// 007f4fee  6a00                 push 0
// 007f4ff0  8d44240c             lea eax, [esp + 0xc]
// 007f4ff4  50                   push eax
// 007f4ff5  8bce                 mov ecx, esi
// 007f4ff7  ffd2                 call edx
// 007f4ff9  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 007f4ffd  8d4c2408             lea ecx, [esp + 8]
// 007f5001  51                   push ecx
// 007f5002  c744240c10000000     mov dword ptr [esp + 0xc], 0x10
// 007f500a  c744241002000000     mov dword ptr [esp + 0x10], 2
// 007f5012  89442414             mov dword ptr [esp + 0x14], eax
// 007f5016  c744241800000000     mov dword ptr [esp + 0x18], 0
// 007f501e  ff156ce08900         call dword ptr [0x89e06c]
// 007f5024  5f                   pop edi
// 007f5025  5e                   pop esi
// 007f5026  83c410               add esp, 0x10
// 007f5029  c20c00               ret 0xc
// 007f502c  8b4608               mov eax, dword ptr [esi + 8]
// 007f502f  85c0                 test eax, eax
// 007f5031  7426                 je 0x7f5059
// 007f5033  8b17                 mov edx, dword ptr [edi]
// 007f5035  8b5220               mov edx, dword ptr [edx + 0x20]
// 007f5038  50                   push eax
// 007f5039  8d44240c             lea eax, [esp + 0xc]
// 007f503d  50                   push eax
// 007f503e  8bcf                 mov ecx, edi
// 007f5040  ffd2                 call edx
// 007f5042  8b06                 mov eax, dword ptr [esi]
// 007f5044  8b5034               mov edx, dword ptr [eax + 0x34]
// 007f5047  6a01                 push 1
// 007f5049  8d4c240c             lea ecx, [esp + 0xc]
// 007f504d  51                   push ecx
// 007f504e  8bce                 mov ecx, esi
// 007f5050  c7460800000000       mov dword ptr [esi + 8], 0
// 007f5057  ffd2                 call edx
// 007f5059  5f                   pop edi
// 007f505a  5e                   pop esi
// 007f505b  83c410               add esp, 0x10
// 007f505e  c20c00               ret 0xc
// library xtp-11.2.2/Source\TabManager\XTPTabManager.cpp (function ?PerformMouseMove@CXTPTabManager@@QAEXPAUHWND__@@VCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabManager.cpp
