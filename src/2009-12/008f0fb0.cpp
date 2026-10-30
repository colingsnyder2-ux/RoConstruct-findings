// roc 2009-12 008f0fb0  unit: CXTPRibbonControlTab  size: 260 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008f0fb0
//
// 008f0fb0  6aff                 push -1
// 008f0fb2  6898039600           push 0x960398
// 008f0fb7  64a100000000         mov eax, dword ptr fs:[0]
// 008f0fbd  50                   push eax
// 008f0fbe  83ec10               sub esp, 0x10
// 008f0fc1  56                   push esi
// 008f0fc2  a10052b600           mov eax, dword ptr [0xb65200]
// 008f0fc7  33c4                 xor eax, esp
// 008f0fc9  50                   push eax
// 008f0fca  8d442418             lea eax, [esp + 0x18]
// 008f0fce  64a300000000         mov dword ptr fs:[0], eax
// 008f0fd4  8bf1                 mov esi, ecx
// 008f0fd6  8b46fc               mov eax, dword ptr [esi - 4]
// 008f0fd9  50                   push eax
// 008f0fda  8d4c240c             lea ecx, [esp + 0xc]
// 008f0fde  e84d2bf0ff           call 0x7f3b30
// 008f0fe3  8d4c242c             lea ecx, [esp + 0x2c]
// 008f0fe7  51                   push ecx
// 008f0fe8  8bce                 mov ecx, esi
// 008f0fea  c744242400000000     mov dword ptr [esp + 0x24], 0
// 008f0ff2  e8a9a9f4ff           call 0x83b9a0
// 008f0ff7  85c0                 test eax, eax
// 008f0ff9  756d                 jne 0x8f1068
// 008f0ffb  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 008f0fff  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 008f1003  83ec10               sub esp, 0x10
// 008f1006  8bc4                 mov eax, esp
// 008f1008  8910                 mov dword ptr [eax], edx
// 008f100a  8b542444             mov edx, dword ptr [esp + 0x44]
// 008f100e  894804               mov dword ptr [eax + 4], ecx
// 008f1011  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 008f1015  895008               mov dword ptr [eax + 8], edx
// 008f1018  8b542438             mov edx, dword ptr [esp + 0x38]
// 008f101c  89480c               mov dword ptr [eax + 0xc], ecx
// 008f101f  52                   push edx
// 008f1020  8bce                 mov ecx, esi
// 008f1022  e88964f0ff           call 0x7f74b0
// 008f1027  8bf0                 mov esi, eax
// 008f1029  8b44240c             mov eax, dword ptr [esp + 0xc]
// 008f102d  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 008f1035  85c0                 test eax, eax
// 008f1037  7407                 je 0x8f1040
// 008f1039  8b4c2408             mov ecx, dword ptr [esp + 8]
// 008f103d  894804               mov dword ptr [eax + 4], ecx
// 008f1040  837c241400           cmp dword ptr [esp + 0x14], 0
// 008f1045  740c                 je 0x8f1053
// 008f1047  8b542410             mov edx, dword ptr [esp + 0x10]
// 008f104b  52                   push edx
// 008f104c  6a00                 push 0
// 008f104e  e8d12af0ff           call 0x7f3b24
// 008f1053  8bc6                 mov eax, esi
// 008f1055  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008f1059  64890d00000000       mov dword ptr fs:[0], ecx
// 008f1060  59                   pop ecx
// 008f1061  5e                   pop esi
// 008f1062  83c41c               add esp, 0x1c
// 008f1065  c21400               ret 0x14
// 008f1068  48                   dec eax
// 008f1069  50                   push eax
// 008f106a  8d8e64010000         lea ecx, [esi + 0x164]
// 008f1070  e8cbe5fdff           call 0x8cf640
// 008f1075  8b44240c             mov eax, dword ptr [esp + 0xc]
// 008f1079  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 008f1081  85c0                 test eax, eax
// 008f1083  7407                 je 0x8f108c
// 008f1085  8b4c2408             mov ecx, dword ptr [esp + 8]
// 008f1089  894804               mov dword ptr [eax + 4], ecx
// 008f108c  837c241400           cmp dword ptr [esp + 0x14], 0
// 008f1091  740c                 je 0x8f109f
// 008f1093  8b542410             mov edx, dword ptr [esp + 0x10]
// 008f1097  52                   push edx
// 008f1098  6a00                 push 0
// 008f109a  e8852af0ff           call 0x7f3b24
// 008f109f  33c0                 xor eax, eax
// 008f10a1  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008f10a5  64890d00000000       mov dword ptr fs:[0], ecx
// 008f10ac  59                   pop ecx
// 008f10ad  5e                   pop esi
// 008f10ae  83c41c               add esp, 0x1c
// 008f10b1  c21400               ret 0x14
// copied from an identical function in another client (function ?AccessibleSelect@CXTPRibbonControlTab@@MAEJJUtagVARIANT@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\Ribbon\XTPRibbonControlTab.cpp