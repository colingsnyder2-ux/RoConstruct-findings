// roc 2009-12 007f81e0  unit: CXTPControl  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007f81e0
//
// 007f81e0  6aff                 push -1
// 007f81e2  6899869500           push 0x958699
// 007f81e7  64a100000000         mov eax, dword ptr fs:[0]
// 007f81ed  50                   push eax
// 007f81ee  51                   push ecx
// 007f81ef  56                   push esi
// 007f81f0  a10052b600           mov eax, dword ptr [0xb65200]
// 007f81f5  33c4                 xor eax, esp
// 007f81f7  50                   push eax
// 007f81f8  8d44240c             lea eax, [esp + 0xc]
// 007f81fc  64a300000000         mov dword ptr fs:[0], eax
// 007f8202  8bf1                 mov esi, ecx
// 007f8204  8d4c2408             lea ecx, [esp + 8]
// 007f8208  ff1574de9800         call dword ptr [0x98de74]
// 007f820e  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 007f8212  50                   push eax
// 007f8213  8d4c240c             lea ecx, [esp + 0xc]
// 007f8217  c744241800000000     mov dword ptr [esp + 0x18], 0
// 007f821f  ff1560cf9800         call dword ptr [0x98cf60]
// 007f8225  85c0                 test eax, eax
// 007f8227  7412                 je 0x7f823b
// 007f8229  8d4c2408             lea ecx, [esp + 8]
// 007f822d  ff1580de9800         call dword ptr [0x98de80]
// 007f8233  50                   push eax
// 007f8234  8bce                 mov ecx, esi
// 007f8236  e8f5e4ffff           call 0x7f6730
// 007f823b  8d4c2408             lea ecx, [esp + 8]
// 007f823f  ff15c0de9800         call dword ptr [0x98dec0]
// 007f8245  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007f8249  64890d00000000       mov dword ptr fs:[0], ecx
// 007f8250  59                   pop ecx
// 007f8251  5e                   pop esi
// 007f8252  83c410               add esp, 0x10
// 007f8255  c20400               ret 4
// copied from an identical function in another client (function ?SetCaption@CXTPControl@@QAEXI@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPControl.cpp