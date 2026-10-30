// roc 2009-12 00865d40  unit: CXTPPropertyGridItemConstraint  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00865d40
//
// 00865d40  6aff                 push -1
// 00865d42  680aef9500           push 0x95ef0a
// 00865d47  64a100000000         mov eax, dword ptr fs:[0]
// 00865d4d  50                   push eax
// 00865d4e  51                   push ecx
// 00865d4f  53                   push ebx
// 00865d50  56                   push esi
// 00865d51  a10052b600           mov eax, dword ptr [0xb65200]
// 00865d56  33c4                 xor eax, esp
// 00865d58  50                   push eax
// 00865d59  8d442410             lea eax, [esp + 0x10]
// 00865d5d  64a300000000         mov dword ptr fs:[0], eax
// 00865d63  33db                 xor ebx, ebx
// 00865d65  895c240c             mov dword ptr [esp + 0xc], ebx
// 00865d69  8b442424             mov eax, dword ptr [esp + 0x24]
// 00865d6d  3bc3                 cmp eax, ebx
// 00865d6f  7c10                 jl 0x865d81
// 00865d71  3b4128               cmp eax, dword ptr [ecx + 0x28]
// 00865d74  7d0b                 jge 0x865d81
// 00865d76  8b4924               mov ecx, dword ptr [ecx + 0x24]
// 00865d79  8b0481               mov eax, dword ptr [ecx + eax*4]
// 00865d7c  83c020               add eax, 0x20
// 00865d7f  eb1c                 jmp 0x865d9d
// 00865d81  6856fd9900           push 0x99fd56
// 00865d86  8d4c2428             lea ecx, [esp + 0x28]
// 00865d8a  ff15b8de9800         call dword ptr [0x98deb8]
// 00865d90  895c2418             mov dword ptr [esp + 0x18], ebx
// 00865d94  bb01000000           mov ebx, 1
// 00865d99  895c240c             mov dword ptr [esp + 0xc], ebx
// 00865d9d  8b742420             mov esi, dword ptr [esp + 0x20]
// 00865da1  50                   push eax
// 00865da2  8bce                 mov ecx, esi
// 00865da4  ff1594de9800         call dword ptr [0x98de94]
// 00865daa  83cb02               or ebx, 2
// 00865dad  f6c301               test bl, 1
// 00865db0  740a                 je 0x865dbc
// 00865db2  8d4c2424             lea ecx, [esp + 0x24]
// 00865db6  ff15c0de9800         call dword ptr [0x98dec0]
// 00865dbc  8bc6                 mov eax, esi
// 00865dbe  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00865dc2  64890d00000000       mov dword ptr fs:[0], ecx
// 00865dc9  59                   pop ecx
// 00865dca  5e                   pop esi
// 00865dcb  5b                   pop ebx
// 00865dcc  83c410               add esp, 0x10
// 00865dcf  c20800               ret 8
// copied from an identical function in another client (function ?GetAt@CXTPPropertyGridItemConstraints@@QBE?AV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@H@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/PropertyGrid/XTPPropertyGridItem.cpp