// roc 2012-06 009f16a0  unit: CXTPPropertyGridItem  size: 152 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009f16a0
//
// 009f16a0  6aff                 push -1
// 009f16a2  68b94dae00           push 0xae4db9
// 009f16a7  64a100000000         mov eax, dword ptr fs:[0]
// 009f16ad  50                   push eax
// 009f16ae  51                   push ecx
// 009f16af  56                   push esi
// 009f16b0  a1d027e000           mov eax, dword ptr [0xe027d0]
// 009f16b5  33c4                 xor eax, esp
// 009f16b7  50                   push eax
// 009f16b8  8d44240c             lea eax, [esp + 0xc]
// 009f16bc  64a300000000         mov dword ptr fs:[0], eax
// 009f16c2  8bf1                 mov esi, ecx
// 009f16c4  8d442408             lea eax, [esp + 8]
// 009f16c8  50                   push eax
// 009f16c9  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 009f16d1  e86a2fa6ff           call 0x454640
// 009f16d6  83bef400000000       cmp dword ptr [esi + 0xf4], 0
// 009f16dd  c744241400000000     mov dword ptr [esp + 0x14], 0
// 009f16e5  7421                 je 0x9f1708
// 009f16e7  8d4c2408             lea ecx, [esp + 8]
// 009f16eb  ff155846b200         call dword ptr [0xb24658]
// 009f16f1  0fb68ef0000000       movzx ecx, byte ptr [esi + 0xf0]
// 009f16f8  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 009f16fc  50                   push eax
// 009f16fd  51                   push ecx
// 009f16fe  8bce                 mov ecx, esi
// 009f1700  ff15c84ab200         call dword ptr [0xb24ac8]
// 009f1706  eb11                 jmp 0x9f1719
// 009f1708  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 009f170c  8d542408             lea edx, [esp + 8]
// 009f1710  52                   push edx
// 009f1711  8bce                 mov ecx, esi
// 009f1713  ff158047b200         call dword ptr [0xb24780]
// 009f1719  8d4c2408             lea ecx, [esp + 8]
// 009f171d  ff15d047b200         call dword ptr [0xb247d0]
// 009f1723  8bc6                 mov eax, esi
// 009f1725  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 009f1729  64890d00000000       mov dword ptr fs:[0], ecx
// 009f1730  59                   pop ecx
// 009f1731  5e                   pop esi
// 009f1732  83c410               add esp, 0x10
// 009f1735  c20400               ret 4
// copied from an identical function in another client (function ?GetViewValue@CXTPPropertyGridItem@@UAE?AV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\PropertyGrid\XTPPropertyGridItem.cpp