// roc 2009-06 007eb580  unit: CXTPControlCustom  size: 259 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007eb580
//
// 007eb580  53                   push ebx
// 007eb581  56                   push esi
// 007eb582  57                   push edi
// 007eb583  8bf1                 mov esi, ecx
// 007eb585  8d442410             lea eax, [esp + 0x10]
// 007eb589  50                   push eax
// 007eb58a  8dbec0000000         lea edi, [esi + 0xc0]
// 007eb590  57                   push edi
// 007eb591  ff15acee8900         call dword ptr [0x89eeac]
// 007eb597  85c0                 test eax, eax
// 007eb599  742e                 je 0x7eb5c9
// 007eb59b  8b8e7c010000         mov ecx, dword ptr [esi + 0x17c]
// 007eb5a1  85c9                 test ecx, ecx
// 007eb5a3  0f84d4000000         je 0x7eb67d
// 007eb5a9  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 007eb5af  85c0                 test eax, eax
// 007eb5b1  7504                 jne 0x7eb5b7
// 007eb5b3  33db                 xor ebx, ebx
// 007eb5b5  eb03                 jmp 0x7eb5ba
// 007eb5b7  8b5820               mov ebx, dword ptr [eax + 0x20]
// 007eb5ba  51                   push ecx
// 007eb5bb  ff1598ee8900         call dword ptr [0x89ee98]
// 007eb5c1  3bc3                 cmp eax, ebx
// 007eb5c3  0f84b4000000         je 0x7eb67d
// 007eb5c9  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007eb5cd  8b542414             mov edx, dword ptr [esp + 0x14]
// 007eb5d1  8b442418             mov eax, dword ptr [esp + 0x18]
// 007eb5d5  890f                 mov dword ptr [edi], ecx
// 007eb5d7  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 007eb5db  895704               mov dword ptr [edi + 4], edx
// 007eb5de  8b967c010000         mov edx, dword ptr [esi + 0x17c]
// 007eb5e4  894708               mov dword ptr [edi + 8], eax
// 007eb5e7  52                   push edx
// 007eb5e8  894f0c               mov dword ptr [edi + 0xc], ecx
// 007eb5eb  e812d7f2ff           call 0x718d02
// 007eb5f0  8bf8                 mov edi, eax
// 007eb5f2  85ff                 test edi, edi
// 007eb5f4  0f8483000000         je 0x7eb67d
// 007eb5fa  8b4720               mov eax, dword ptr [edi + 0x20]
// 007eb5fd  85c0                 test eax, eax
// 007eb5ff  747c                 je 0x7eb67d
// 007eb601  50                   push eax
// 007eb602  ff15e0ed8900         call dword ptr [0x89ede0]
// 007eb608  85c0                 test eax, eax
// 007eb60a  7471                 je 0x7eb67d
// 007eb60c  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 007eb612  50                   push eax
// 007eb613  8bcf                 mov ecx, edi
// 007eb615  e886eef6ff           call 0x75a4a0
// 007eb61a  6a00                 push 0
// 007eb61c  6800000040           push 0x40000000
// 007eb621  6800000080           push 0x80000000
// 007eb626  8bcf                 mov ecx, edi
// 007eb628  e885dbf2ff           call 0x7191b2
// 007eb62d  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 007eb631  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 007eb635  2b8e8c010000         sub ecx, dword ptr [esi + 0x18c]
// 007eb63b  039e84010000         add ebx, dword ptr [esi + 0x184]
// 007eb641  8b442418             mov eax, dword ptr [esp + 0x18]
// 007eb645  8b542410             mov edx, dword ptr [esp + 0x10]
// 007eb649  039680010000         add edx, dword ptr [esi + 0x180]
// 007eb64f  2b8688010000         sub eax, dword ptr [esi + 0x188]
// 007eb655  6a01                 push 1
// 007eb657  894c2420             mov dword ptr [esp + 0x20], ecx
// 007eb65b  2bcb                 sub ecx, ebx
// 007eb65d  51                   push ecx
// 007eb65e  89442420             mov dword ptr [esp + 0x20], eax
// 007eb662  2bc2                 sub eax, edx
// 007eb664  50                   push eax
// 007eb665  53                   push ebx
// 007eb666  52                   push edx
// 007eb667  8bcf                 mov ecx, edi
// 007eb669  89542424             mov dword ptr [esp + 0x24], edx
// 007eb66d  895c2428             mov dword ptr [esp + 0x28], ebx
// 007eb671  e894d7f2ff           call 0x718e0a
// 007eb676  8bce                 mov ecx, esi
// 007eb678  e8c3fbffff           call 0x7eb240
// 007eb67d  5f                   pop edi
// 007eb67e  5e                   pop esi
// 007eb67f  5b                   pop ebx
// 007eb680  c21000               ret 0x10
// library xtp-11.2.2/Source\CommandBars\XTPControlCustom.cpp (function ?SetRect@CXTPControlCustom@@MAEXVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlCustom.cpp
