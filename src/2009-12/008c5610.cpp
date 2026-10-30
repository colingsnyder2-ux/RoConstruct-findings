// roc 2009-12 008c5610  unit: CXTPCustomizeToolbarsPage  size: 223 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008c5610
//
// 008c5610  6aff                 push -1
// 008c5612  689b449600           push 0x96449b
// 008c5617  64a100000000         mov eax, dword ptr fs:[0]
// 008c561d  50                   push eax
// 008c561e  81ec84000000         sub esp, 0x84
// 008c5624  53                   push ebx
// 008c5625  56                   push esi
// 008c5626  57                   push edi
// 008c5627  a10052b600           mov eax, dword ptr [0xb65200]
// 008c562c  33c4                 xor eax, esp
// 008c562e  50                   push eax
// 008c562f  8d842494000000       lea eax, [esp + 0x94]
// 008c5636  64a300000000         mov dword ptr fs:[0], eax
// 008c563c  8bf9                 mov edi, ecx
// 008c563e  8b8788000000         mov eax, dword ptr [edi + 0x88]
// 008c5644  8bb0b8000000         mov esi, dword ptr [eax + 0xb8]
// 008c564a  6a00                 push 0
// 008c564c  56                   push esi
// 008c564d  50                   push eax
// 008c564e  8d4c241c             lea ecx, [esp + 0x1c]
// 008c5652  e8a9a1faff           call 0x86f800
// 008c5657  8d4c2410             lea ecx, [esp + 0x10]
// 008c565b  c784249c00000000000000 mov dword ptr [esp + 0x9c], 0
// 008c5666  e8bde3f2ff           call 0x7f3a28
// 008c566b  83f801               cmp eax, 1
// 008c566e  7545                 jne 0x8c56b5
// 008c5670  8b842484000000       mov eax, dword ptr [esp + 0x84]
// 008c5677  8b1e                 mov ebx, dword ptr [esi]
// 008c5679  6a00                 push 0
// 008c567b  50                   push eax
// 008c567c  8d8c2490000000       lea ecx, [esp + 0x90]
// 008c5683  ff1580de9800         call dword ptr [0x98de80]
// 008c5689  8b9384000000         mov edx, dword ptr [ebx + 0x84]
// 008c568f  50                   push eax
// 008c5690  8bce                 mov ecx, esi
// 008c5692  ffd2                 call edx
// 008c5694  8bcf                 mov ecx, edi
// 008c5696  8bd8                 mov ebx, eax
// 008c5698  e833fdffff           call 0x8c53d0
// 008c569d  8bb6a0000000         mov esi, dword ptr [esi + 0xa0]
// 008c56a3  8b4620               mov eax, dword ptr [esi + 0x20]
// 008c56a6  53                   push ebx
// 008c56a7  6a00                 push 0
// 008c56a9  6865280000           push 0x2865
// 008c56ae  50                   push eax
// 008c56af  ff15c4cb9800         call dword ptr [0x98cbc4]
// 008c56b5  8d8c2488000000       lea ecx, [esp + 0x88]
// 008c56bc  c784249c000000ffffffff mov dword ptr [esp + 0x9c], 0xffffffff
// 008c56c7  ff15c0de9800         call dword ptr [0x98dec0]
// 008c56cd  8d4c2410             lea ecx, [esp + 0x10]
// 008c56d1  e8baeaf2ff           call 0x7f4190
// 008c56d6  8b8c2494000000       mov ecx, dword ptr [esp + 0x94]
// 008c56dd  64890d00000000       mov dword ptr fs:[0], ecx
// 008c56e4  59                   pop ecx
// 008c56e5  5f                   pop edi
// 008c56e6  5e                   pop esi
// 008c56e7  5b                   pop ebx
// 008c56e8  81c490000000         add esp, 0x90
// 008c56ee  c3                   ret 
// copied from an identical function in another client (function ?OnNewToolbar@CXTPCustomizeToolbarsPage@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\CommandBars\XTPCustomizeToolbarsPage.cpp