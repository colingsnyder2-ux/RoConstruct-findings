// roc 2009-12 0088b580  unit: CXTPCustomizeSheet::CCustomizeEdit  size: 216 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0088b580
//
// 0088b580  6aff                 push -1
// 0088b582  68ba8b9500           push 0x958bba
// 0088b587  64a100000000         mov eax, dword ptr fs:[0]
// 0088b58d  50                   push eax
// 0088b58e  83ec08               sub esp, 8
// 0088b591  53                   push ebx
// 0088b592  55                   push ebp
// 0088b593  56                   push esi
// 0088b594  57                   push edi
// 0088b595  a10052b600           mov eax, dword ptr [0xb65200]
// 0088b59a  33c4                 xor eax, esp
// 0088b59c  50                   push eax
// 0088b59d  8d44241c             lea eax, [esp + 0x1c]
// 0088b5a1  64a300000000         mov dword ptr fs:[0], eax
// 0088b5a7  8bf1                 mov esi, ecx
// 0088b5a9  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 0088b5ad  33db                 xor ebx, ebx
// 0088b5af  895c2414             mov dword ptr [esp + 0x14], ebx
// 0088b5b3  8b8674010000         mov eax, dword ptr [esi + 0x174]
// 0088b5b9  85c0                 test eax, eax
// 0088b5bb  7437                 je 0x88b5f4
// 0088b5bd  395820               cmp dword ptr [eax + 0x20], ebx
// 0088b5c0  7432                 je 0x88b5f4
// 0088b5c2  8d442418             lea eax, [esp + 0x18]
// 0088b5c6  50                   push eax
// 0088b5c7  e854ffffff           call 0x88b520
// 0088b5cc  8bf8                 mov edi, eax
// 0088b5ce  895c2424             mov dword ptr [esp + 0x24], ebx
// 0088b5d2  bb01000000           mov ebx, 1
// 0088b5d7  8bcd                 mov ecx, ebp
// 0088b5d9  895c2414             mov dword ptr [esp + 0x14], ebx
// 0088b5dd  ff1580de9800         call dword ptr [0x98de80]
// 0088b5e3  50                   push eax
// 0088b5e4  8bcf                 mov ecx, edi
// 0088b5e6  ff1584de9800         call dword ptr [0x98de84]
// 0088b5ec  885c242c             mov byte ptr [esp + 0x2c], bl
// 0088b5f0  85c0                 test eax, eax
// 0088b5f2  7505                 jne 0x88b5f9
// 0088b5f4  c644242c00           mov byte ptr [esp + 0x2c], 0
// 0088b5f9  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 0088b601  f6c301               test bl, 1
// 0088b604  740a                 je 0x88b610
// 0088b606  8d4c2418             lea ecx, [esp + 0x18]
// 0088b60a  ff15c0de9800         call dword ptr [0x98dec0]
// 0088b610  807c242c00           cmp byte ptr [esp + 0x2c], 0
// 0088b615  7414                 je 0x88b62b
// 0088b617  8bcd                 mov ecx, ebp
// 0088b619  ff1580de9800         call dword ptr [0x98de80]
// 0088b61f  8b8e74010000         mov ecx, dword ptr [esi + 0x174]
// 0088b625  50                   push eax
// 0088b626  e875d9f6ff           call 0x7f8fa0
// 0088b62b  55                   push ebp
// 0088b62c  8d8e98010000         lea ecx, [esi + 0x198]
// 0088b632  ff1538d59800         call dword ptr [0x98d538]
// 0088b638  c7869c01000000000000 mov dword ptr [esi + 0x19c], 0
// 0088b642  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0088b646  64890d00000000       mov dword ptr fs:[0], ecx
// 0088b64d  59                   pop ecx
// 0088b64e  5f                   pop edi
// 0088b64f  5e                   pop esi
// 0088b650  5d                   pop ebp
// 0088b651  5b                   pop ebx
// 0088b652  83c414               add esp, 0x14
// 0088b655  c20400               ret 4
// copied from an identical function in another client (function ?_SetEditText@CXTPControlEdit@@IAEXABV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\CommandBars\XTPControlEdit.cpp