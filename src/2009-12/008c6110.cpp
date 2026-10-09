// roc 2009-12 008c6110  unit: CXTPControlCustom  size: 259 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008c6110
//
// 008c6110  53                   push ebx
// 008c6111  56                   push esi
// 008c6112  57                   push edi
// 008c6113  8bf1                 mov esi, ecx
// 008c6115  8d442410             lea eax, [esp + 0x10]
// 008c6119  50                   push eax
// 008c611a  8dbec0000000         lea edi, [esi + 0xc0]
// 008c6120  57                   push edi
// 008c6121  ff15bcca9800         call dword ptr [0x98cabc]
// 008c6127  85c0                 test eax, eax
// 008c6129  742e                 je 0x8c6159
// 008c612b  8b8e7c010000         mov ecx, dword ptr [esi + 0x17c]
// 008c6131  85c9                 test ecx, ecx
// 008c6133  0f84d4000000         je 0x8c620d
// 008c6139  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 008c613f  85c0                 test eax, eax
// 008c6141  7504                 jne 0x8c6147
// 008c6143  33db                 xor ebx, ebx
// 008c6145  eb03                 jmp 0x8c614a
// 008c6147  8b5820               mov ebx, dword ptr [eax + 0x20]
// 008c614a  51                   push ecx
// 008c614b  ff15bccb9800         call dword ptr [0x98cbbc]
// 008c6151  3bc3                 cmp eax, ebx
// 008c6153  0f84b4000000         je 0x8c620d
// 008c6159  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008c615d  8b542414             mov edx, dword ptr [esp + 0x14]
// 008c6161  8b442418             mov eax, dword ptr [esp + 0x18]
// 008c6165  890f                 mov dword ptr [edi], ecx
// 008c6167  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008c616b  895704               mov dword ptr [edi + 4], edx
// 008c616e  8b967c010000         mov edx, dword ptr [esi + 0x17c]
// 008c6174  894708               mov dword ptr [edi + 8], eax
// 008c6177  52                   push edx
// 008c6178  894f0c               mov dword ptr [edi + 0xc], ecx
// 008c617b  e8aad9f2ff           call 0x7f3b2a
// 008c6180  8bf8                 mov edi, eax
// 008c6182  85ff                 test edi, edi
// 008c6184  0f8483000000         je 0x8c620d
// 008c618a  8b4720               mov eax, dword ptr [edi + 0x20]
// 008c618d  85c0                 test eax, eax
// 008c618f  747c                 je 0x8c620d
// 008c6191  50                   push eax
// 008c6192  ff1584cc9800         call dword ptr [0x98cc84]
// 008c6198  85c0                 test eax, eax
// 008c619a  7471                 je 0x8c620d
// 008c619c  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 008c61a2  50                   push eax
// 008c61a3  8bcf                 mov ecx, edi
// 008c61a5  e816f1f6ff           call 0x8352c0
// 008c61aa  6a00                 push 0
// 008c61ac  6800000040           push 0x40000000
// 008c61b1  6800000080           push 0x80000000
// 008c61b6  8bcf                 mov ecx, edi
// 008c61b8  e81ddef2ff           call 0x7f3fda
// 008c61bd  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008c61c1  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 008c61c5  2b8e8c010000         sub ecx, dword ptr [esi + 0x18c]
// 008c61cb  039e84010000         add ebx, dword ptr [esi + 0x184]
// 008c61d1  8b442418             mov eax, dword ptr [esp + 0x18]
// 008c61d5  8b542410             mov edx, dword ptr [esp + 0x10]
// 008c61d9  039680010000         add edx, dword ptr [esi + 0x180]
// 008c61df  2b8688010000         sub eax, dword ptr [esi + 0x188]
// 008c61e5  6a01                 push 1
// 008c61e7  894c2420             mov dword ptr [esp + 0x20], ecx
// 008c61eb  2bcb                 sub ecx, ebx
// 008c61ed  51                   push ecx
// 008c61ee  89442420             mov dword ptr [esp + 0x20], eax
// 008c61f2  2bc2                 sub eax, edx
// 008c61f4  50                   push eax
// 008c61f5  53                   push ebx
// 008c61f6  52                   push edx
// 008c61f7  8bcf                 mov ecx, edi
// 008c61f9  89542424             mov dword ptr [esp + 0x24], edx
// 008c61fd  895c2428             mov dword ptr [esp + 0x28], ebx
// 008c6201  e82cdaf2ff           call 0x7f3c32
// 008c6206  8bce                 mov ecx, esi
// 008c6208  e8c3fbffff           call 0x8c5dd0
// 008c620d  5f                   pop edi
// 008c620e  5e                   pop esi
// 008c620f  5b                   pop ebx
// 008c6210  c21000               ret 0x10
// library xtp-11.2.2/Source\CommandBars\XTPControlCustom.cpp (function ?SetRect@CXTPControlCustom@@MAEXVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlCustom.cpp
