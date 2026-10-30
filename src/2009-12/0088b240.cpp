// roc 2009-12 0088b240  unit: CXTPCustomizeSheet::CCustomizeEdit  size: 203 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0088b240
//
// 0088b240  6aff                 push -1
// 0088b242  68d40d9600           push 0x960dd4
// 0088b247  64a100000000         mov eax, dword ptr fs:[0]
// 0088b24d  50                   push eax
// 0088b24e  83ec0c               sub esp, 0xc
// 0088b251  53                   push ebx
// 0088b252  56                   push esi
// 0088b253  57                   push edi
// 0088b254  a10052b600           mov eax, dword ptr [0xb65200]
// 0088b259  33c4                 xor eax, esp
// 0088b25b  50                   push eax
// 0088b25c  8d44241c             lea eax, [esp + 0x1c]
// 0088b260  64a300000000         mov dword ptr fs:[0], eax
// 0088b266  8bf1                 mov esi, ecx
// 0088b268  8dbe8c010000         lea edi, [esi + 0x18c]
// 0088b26e  33db                 xor ebx, ebx
// 0088b270  8bcf                 mov ecx, edi
// 0088b272  895c2410             mov dword ptr [esp + 0x10], ebx
// 0088b276  ff15bcdd9800         call dword ptr [0x98ddbc]
// 0088b27c  84c0                 test al, al
// 0088b27e  7504                 jne 0x88b284
// 0088b280  8bc7                 mov eax, edi
// 0088b282  eb3f                 jmp 0x88b2c3
// 0088b284  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 0088b28a  3bcb                 cmp ecx, ebx
// 0088b28c  7415                 je 0x88b2a3
// 0088b28e  8d442418             lea eax, [esp + 0x18]
// 0088b292  50                   push eax
// 0088b293  e898dbf6ff           call 0x7f8e30
// 0088b298  895c2424             mov dword ptr [esp + 0x24], ebx
// 0088b29c  bb01000000           mov ebx, 1
// 0088b2a1  eb1c                 jmp 0x88b2bf
// 0088b2a3  6856fd9900           push 0x99fd56
// 0088b2a8  8d4c2418             lea ecx, [esp + 0x18]
// 0088b2ac  ff15b8de9800         call dword ptr [0x98deb8]
// 0088b2b2  c744242401000000     mov dword ptr [esp + 0x24], 1
// 0088b2ba  bb02000000           mov ebx, 2
// 0088b2bf  895c2410             mov dword ptr [esp + 0x10], ebx
// 0088b2c3  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 0088b2c7  50                   push eax
// 0088b2c8  8bce                 mov ecx, esi
// 0088b2ca  ff1594de9800         call dword ptr [0x98de94]
// 0088b2d0  83cb04               or ebx, 4
// 0088b2d3  f6c302               test bl, 2
// 0088b2d6  740d                 je 0x88b2e5
// 0088b2d8  8d4c2414             lea ecx, [esp + 0x14]
// 0088b2dc  83e3fd               and ebx, 0xfffffffd
// 0088b2df  ff15c0de9800         call dword ptr [0x98dec0]
// 0088b2e5  f6c301               test bl, 1
// 0088b2e8  740a                 je 0x88b2f4
// 0088b2ea  8d4c2418             lea ecx, [esp + 0x18]
// 0088b2ee  ff15c0de9800         call dword ptr [0x98dec0]
// 0088b2f4  8bc6                 mov eax, esi
// 0088b2f6  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0088b2fa  64890d00000000       mov dword ptr fs:[0], ecx
// 0088b301  59                   pop ecx
// 0088b302  5f                   pop edi
// 0088b303  5e                   pop esi
// 0088b304  5b                   pop ebx
// 0088b305  83c418               add esp, 0x18
// 0088b308  c20400               ret 4
// copied from an identical function in another client (function ?GetEditHint@CXTPControlEdit@@QBE?AV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\CommandBars\XTPControlEdit.cpp