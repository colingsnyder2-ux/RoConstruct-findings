// roc 2009-12 0088bf90  unit: CXTPCustomizeSheet::CCustomizeEdit  size: 281 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0088bf90
//
// 0088bf90  6aff                 push -1
// 0088bf92  68430e9600           push 0x960e43
// 0088bf97  64a100000000         mov eax, dword ptr fs:[0]
// 0088bf9d  50                   push eax
// 0088bf9e  83ec14               sub esp, 0x14
// 0088bfa1  53                   push ebx
// 0088bfa2  56                   push esi
// 0088bfa3  a10052b600           mov eax, dword ptr [0xb65200]
// 0088bfa8  33c4                 xor eax, esp
// 0088bfaa  50                   push eax
// 0088bfab  8d442420             lea eax, [esp + 0x20]
// 0088bfaf  64a300000000         mov dword ptr fs:[0], eax
// 0088bfb5  8bf1                 mov esi, ecx
// 0088bfb7  8d442418             lea eax, [esp + 0x18]
// 0088bfbb  50                   push eax
// 0088bfbc  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0088bfc4  e877f2ffff           call 0x88b240
// 0088bfc9  bb01000000           mov ebx, 1
// 0088bfce  8bc8                 mov ecx, eax
// 0088bfd0  c744242800000000     mov dword ptr [esp + 0x28], 0
// 0088bfd8  895c2410             mov dword ptr [esp + 0x10], ebx
// 0088bfdc  ff15bcdd9800         call dword ptr [0x98ddbc]
// 0088bfe2  84c0                 test al, al
// 0088bfe4  7532                 jne 0x88c018
// 0088bfe6  8b8674010000         mov eax, dword ptr [esi + 0x174]
// 0088bfec  85c0                 test eax, eax
// 0088bfee  7428                 je 0x88c018
// 0088bff0  83782000             cmp dword ptr [eax + 0x20], 0
// 0088bff4  7422                 je 0x88c018
// 0088bff6  8d4c2414             lea ecx, [esp + 0x14]
// 0088bffa  51                   push ecx
// 0088bffb  8bce                 mov ecx, esi
// 0088bffd  e81ef5ffff           call 0x88b520
// 0088c002  8bc8                 mov ecx, eax
// 0088c004  bb03000000           mov ebx, 3
// 0088c009  ff15bcdd9800         call dword ptr [0x98ddbc]
// 0088c00f  c644240f01           mov byte ptr [esp + 0xf], 1
// 0088c014  84c0                 test al, al
// 0088c016  7505                 jne 0x88c01d
// 0088c018  c644240f00           mov byte ptr [esp + 0xf], 0
// 0088c01d  f6c302               test bl, 2
// 0088c020  740d                 je 0x88c02f
// 0088c022  8d4c2414             lea ecx, [esp + 0x14]
// 0088c026  83e3fd               and ebx, 0xfffffffd
// 0088c029  ff15c0de9800         call dword ptr [0x98dec0]
// 0088c02f  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 0088c037  f6c301               test bl, 1
// 0088c03a  740a                 je 0x88c046
// 0088c03c  8d4c2418             lea ecx, [esp + 0x18]
// 0088c040  ff15c0de9800         call dword ptr [0x98dec0]
// 0088c046  807c240f00           cmp byte ptr [esp + 0xf], 0
// 0088c04b  742e                 je 0x88c07b
// 0088c04d  8d54241c             lea edx, [esp + 0x1c]
// 0088c051  52                   push edx
// 0088c052  8bce                 mov ecx, esi
// 0088c054  e8e7f1ffff           call 0x88b240
// 0088c059  50                   push eax
// 0088c05a  8bce                 mov ecx, esi
// 0088c05c  c744242c01000000     mov dword ptr [esp + 0x2c], 1
// 0088c064  e817f5ffff           call 0x88b580
// 0088c069  8d4c241c             lea ecx, [esp + 0x1c]
// 0088c06d  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 0088c075  ff15c0de9800         call dword ptr [0x98dec0]
// 0088c07b  8b06                 mov eax, dword ptr [esi]
// 0088c07d  8b5070               mov edx, dword ptr [eax + 0x70]
// 0088c080  6a00                 push 0
// 0088c082  8bce                 mov ecx, esi
// 0088c084  ffd2                 call edx
// 0088c086  8b8ea0010000         mov ecx, dword ptr [esi + 0x1a0]
// 0088c08c  85c9                 test ecx, ecx
// 0088c08e  7407                 je 0x88c097
// 0088c090  6a00                 push 0
// 0088c092  e8e90df7ff           call 0x7fce80
// 0088c097  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0088c09b  64890d00000000       mov dword ptr fs:[0], ecx
// 0088c0a2  59                   pop ecx
// 0088c0a3  5e                   pop esi
// 0088c0a4  5b                   pop ebx
// 0088c0a5  83c420               add esp, 0x20
// 0088c0a8  c3                   ret 
// copied from an identical function in another client (function ?OnKillFocus@CXTPControlEdit@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\CommandBars\XTPControlEdit.cpp