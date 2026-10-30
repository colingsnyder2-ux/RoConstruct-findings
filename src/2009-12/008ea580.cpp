// roc 2009-12 008ea580  unit: CXTPRibbonTab  size: 158 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008ea580
//
// 008ea580  6aff                 push -1
// 008ea582  6855659600           push 0x966555
// 008ea587  64a100000000         mov eax, dword ptr fs:[0]
// 008ea58d  50                   push eax
// 008ea58e  51                   push ecx
// 008ea58f  53                   push ebx
// 008ea590  56                   push esi
// 008ea591  57                   push edi
// 008ea592  a10052b600           mov eax, dword ptr [0xb65200]
// 008ea597  33c4                 xor eax, esp
// 008ea599  50                   push eax
// 008ea59a  8d442414             lea eax, [esp + 0x14]
// 008ea59e  64a300000000         mov dword ptr fs:[0], eax
// 008ea5a4  8bf1                 mov esi, ecx
// 008ea5a6  89742410             mov dword ptr [esp + 0x10], esi
// 008ea5aa  8d5e08               lea ebx, [esi + 8]
// 008ea5ad  8bcb                 mov ecx, ebx
// 008ea5af  ff1574de9800         call dword ptr [0x98de74]
// 008ea5b5  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 008ea5b9  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 008ea5c1  85ff                 test edi, edi
// 008ea5c3  7442                 je 0x8ea607
// 008ea5c5  893e                 mov dword ptr [esi], edi
// 008ea5c7  897e04               mov dword ptr [esi + 4], edi
// 008ea5ca  8b8794000000         mov eax, dword ptr [edi + 0x94]
// 008ea5d0  89460c               mov dword ptr [esi + 0xc], eax
// 008ea5d3  8d442424             lea eax, [esp + 0x24]
// 008ea5d7  50                   push eax
// 008ea5d8  8bcf                 mov ecx, edi
// 008ea5da  e861a3faff           call 0x894940
// 008ea5df  50                   push eax
// 008ea5e0  8bcb                 mov ecx, ebx
// 008ea5e2  c644242001           mov byte ptr [esp + 0x20], 1
// 008ea5e7  ff1538d59800         call dword ptr [0x98d538]
// 008ea5ed  8d4c2424             lea ecx, [esp + 0x24]
// 008ea5f1  ff15c0de9800         call dword ptr [0x98dec0]
// 008ea5f7  8d4e10               lea ecx, [esi + 0x10]
// 008ea5fa  51                   push ecx
// 008ea5fb  ff159cca9800         call dword ptr [0x98ca9c]
// 008ea601  89b79c000000         mov dword ptr [edi + 0x9c], esi
// 008ea607  8bc6                 mov eax, esi
// 008ea609  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008ea60d  64890d00000000       mov dword ptr fs:[0], ecx
// 008ea614  59                   pop ecx
// 008ea615  5f                   pop edi
// 008ea616  5e                   pop esi
// 008ea617  5b                   pop ebx
// 008ea618  83c410               add esp, 0x10
// 008ea61b  c20400               ret 4
// copied from an identical function in another client (function ??0CXTPRibbonTabContextHeader@@QAE@PAVCXTPRibbonTab@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Ribbon\XTPRibbonTab.cpp