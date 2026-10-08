// roc 2007-03 00423110  unit: seg_00420000  size: 218 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00423110
//
// 00423110  83ec0c               sub esp, 0xc
// 00423113  53                   push ebx
// 00423114  55                   push ebp
// 00423115  56                   push esi
// 00423116  8be9                 mov ebp, ecx
// 00423118  8b5d0c               mov ebx, dword ptr [ebp + 0xc]
// 0042311b  395d08               cmp dword ptr [ebp + 8], ebx
// 0042311e  57                   push edi
// 0042311f  8d7d04               lea edi, [ebp + 4]
// 00423122  896c2410             mov dword ptr [esp + 0x10], ebp
// 00423126  7606                 jbe 0x42312e
// 00423128  ff1544e97700         call dword ptr [0x77e944]
// 0042312e  8b7704               mov esi, dword ptr [edi + 4]
// 00423131  3b7708               cmp esi, dword ptr [edi + 8]
// 00423134  7606                 jbe 0x42313c
// 00423136  ff1544e97700         call dword ptr [0x77e944]
// 0042313c  3bf3                 cmp esi, ebx
// 0042313e  8b442420             mov eax, dword ptr [esp + 0x20]
// 00423142  89742418             mov dword ptr [esp + 0x18], esi
// 00423146  740b                 je 0x423153
// 00423148  3906                 cmp dword ptr [esi], eax
// 0042314a  7407                 je 0x423153
// 0042314c  83c604               add esi, 4
// 0042314f  3bf3                 cmp esi, ebx
// 00423151  75f5                 jne 0x423148
// 00423153  8b5f08               mov ebx, dword ptr [edi + 8]
// 00423156  395f04               cmp dword ptr [edi + 4], ebx
// 00423159  7606                 jbe 0x423161
// 0042315b  ff1544e97700         call dword ptr [0x77e944]
// 00423161  85ff                 test edi, edi
// 00423163  7404                 je 0x423169
// 00423165  3bff                 cmp edi, edi
// 00423167  740a                 je 0x423173
// 00423169  ff1544e97700         call dword ptr [0x77e944]
// 0042316f  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 00423173  3bf3                 cmp esi, ebx
// 00423175  7469                 je 0x4231e0
// 00423177  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0042317b  8b4500               mov eax, dword ptr [ebp]
// 0042317e  8b5008               mov edx, dword ptr [eax + 8]
// 00423181  51                   push ecx
// 00423182  8bcd                 mov ecx, ebp
// 00423184  ffd2                 call edx
// 00423186  837d1400             cmp dword ptr [ebp + 0x14], 0
// 0042318a  7430                 je 0x4231bc
// 0042318c  8b5f04               mov ebx, dword ptr [edi + 4]
// 0042318f  3b5f08               cmp ebx, dword ptr [edi + 8]
// 00423192  760a                 jbe 0x42319e
// 00423194  ff1544e97700         call dword ptr [0x77e944]
// 0042319a  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0042319e  85ff                 test edi, edi
// 004231a0  7404                 je 0x4231a6
// 004231a2  3bff                 cmp edi, edi
// 004231a4  7406                 je 0x4231ac
// 004231a6  ff1544e97700         call dword ptr [0x77e944]
// 004231ac  8b4d14               mov ecx, dword ptr [ebp + 0x14]
// 004231af  8bc6                 mov eax, esi
// 004231b1  2bc3                 sub eax, ebx
// 004231b3  c1f802               sar eax, 2
// 004231b6  50                   push eax
// 004231b7  e8f4b1ffff           call 0x41e3b0
// 004231bc  8b4708               mov eax, dword ptr [edi + 8]
// 004231bf  8d4e04               lea ecx, [esi + 4]
// 004231c2  2bc1                 sub eax, ecx
// 004231c4  c1f802               sar eax, 2
// 004231c7  85c0                 test eax, eax
// 004231c9  7e11                 jle 0x4231dc
// 004231cb  03c0                 add eax, eax
// 004231cd  03c0                 add eax, eax
// 004231cf  50                   push eax
// 004231d0  51                   push ecx
// 004231d1  50                   push eax
// 004231d2  56                   push esi
// 004231d3  ff1578e97700         call dword ptr [0x77e978]
// 004231d9  83c410               add esp, 0x10
// 004231dc  834708fc             add dword ptr [edi + 8], -4
// 004231e0  5f                   pop edi
// 004231e1  5e                   pop esi
// 004231e2  5d                   pop ebp
// 004231e3  5b                   pop ebx
// 004231e4  83c40c               add esp, 0xc
// 004231e7  c20400               ret 4
// library rbxgs/v8datamodel\DataModel.cpp (function ?removeListener@?$Notifier@VRunService@RBX@@VRunTransition@2@@RBX@@QBEXPAV?$Listener@VRunService@RBX@@VRunTransition@2@@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
