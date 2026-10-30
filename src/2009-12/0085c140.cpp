// roc 2009-12 0085c140  unit: CXTPStatusBar::CStatusCmdUI  size: 216 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0085c140
//
// 0085c140  6aff                 push -1
// 0085c142  6803e49500           push 0x95e403
// 0085c147  64a100000000         mov eax, dword ptr fs:[0]
// 0085c14d  50                   push eax
// 0085c14e  81ec88000000         sub esp, 0x88
// 0085c154  a10052b600           mov eax, dword ptr [0xb65200]
// 0085c159  33c4                 xor eax, esp
// 0085c15b  89842484000000       mov dword ptr [esp + 0x84], eax
// 0085c162  56                   push esi
// 0085c163  a10052b600           mov eax, dword ptr [0xb65200]
// 0085c168  33c4                 xor eax, esp
// 0085c16a  50                   push eax
// 0085c16b  8d842490000000       lea eax, [esp + 0x90]
// 0085c172  64a300000000         mov dword ptr fs:[0], eax
// 0085c178  6a01                 push 1
// 0085c17a  6a00                 push 0
// 0085c17c  8bf1                 mov esi, ecx
// 0085c17e  e81dfcffff           call 0x85bda0
// 0085c183  8bce                 mov ecx, esi
// 0085c185  e816e8ffff           call 0x85a9a0
// 0085c18a  85c0                 test eax, eax
// 0085c18c  7509                 jne 0x85c197
// 0085c18e  8bce                 mov ecx, esi
// 0085c190  e89b7cf9ff           call 0x7f3e30
// 0085c195  eb5c                 jmp 0x85c1f3
// 0085c197  56                   push esi
// 0085c198  8d4c243c             lea ecx, [esp + 0x3c]
// 0085c19c  e84f80f9ff           call 0x7f41f0
// 0085c1a1  8d442438             lea eax, [esp + 0x38]
// 0085c1a5  50                   push eax
// 0085c1a6  8d4c240c             lea ecx, [esp + 0xc]
// 0085c1aa  c784249c00000000000000 mov dword ptr [esp + 0x9c], 0
// 0085c1b5  e846f2feff           call 0x84b400
// 0085c1ba  8d4c2408             lea ecx, [esp + 8]
// 0085c1be  51                   push ecx
// 0085c1bf  8bce                 mov ecx, esi
// 0085c1c1  c684249c00000001     mov byte ptr [esp + 0x9c], 1
// 0085c1c9  e812f9ffff           call 0x85bae0
// 0085c1ce  8d4c2408             lea ecx, [esp + 8]
// 0085c1d2  c684249800000000     mov byte ptr [esp + 0x98], 0
// 0085c1da  e861f3feff           call 0x84b540
// 0085c1df  8d4c2438             lea ecx, [esp + 0x38]
// 0085c1e3  c7842498000000ffffffff mov dword ptr [esp + 0x98], 0xffffffff
// 0085c1ee  e8f77ff9ff           call 0x7f41ea
// 0085c1f3  8b8c2490000000       mov ecx, dword ptr [esp + 0x90]
// 0085c1fa  64890d00000000       mov dword ptr fs:[0], ecx
// 0085c201  59                   pop ecx
// 0085c202  5e                   pop esi
// 0085c203  8b8c2484000000       mov ecx, dword ptr [esp + 0x84]
// 0085c20a  33cc                 xor ecx, esp
// 0085c20c  e88991f9ff           call 0x7f539a
// 0085c211  81c494000000         add esp, 0x94
// 0085c217  c3                   ret 
// copied from an identical function in another client (function ?OnPaint@CXTPStatusBar@@QAEXXZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source/CommandBars/XTPStatusBar.cpp