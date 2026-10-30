// roc 2009-12 0083a030  unit: CXTPDockingPaneManager  size: 236 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0083a030
//
// 0083a030  6aff                 push -1
// 0083a032  6866c69500           push 0x95c666
// 0083a037  64a100000000         mov eax, dword ptr fs:[0]
// 0083a03d  50                   push eax
// 0083a03e  81ec10010000         sub esp, 0x110
// 0083a044  56                   push esi
// 0083a045  57                   push edi
// 0083a046  a10052b600           mov eax, dword ptr [0xb65200]
// 0083a04b  33c4                 xor eax, esp
// 0083a04d  50                   push eax
// 0083a04e  8d84241c010000       lea eax, [esp + 0x11c]
// 0083a055  64a300000000         mov dword ptr fs:[0], eax
// 0083a05b  8bf1                 mov esi, ecx
// 0083a05d  8bbc242c010000       mov edi, dword ptr [esp + 0x12c]
// 0083a064  837f2800             cmp dword ptr [edi + 0x28], 0
// 0083a068  56                   push esi
// 0083a069  753c                 jne 0x83a0a7
// 0083a06b  8d8c2498000000       lea ecx, [esp + 0x98]
// 0083a072  e8f9e30600           call 0x8a8470
// 0083a077  8d842494000000       lea eax, [esp + 0x94]
// 0083a07e  50                   push eax
// 0083a07f  8bce                 mov ecx, esi
// 0083a081  c784242801000000000000 mov dword ptr [esp + 0x128], 0
// 0083a08c  e88fe5ffff           call 0x838620
// 0083a091  57                   push edi
// 0083a092  8d8c2498000000       lea ecx, [esp + 0x98]
// 0083a099  e8b2f00600           call 0x8a9150
// 0083a09e  8d8c2494000000       lea ecx, [esp + 0x94]
// 0083a0a5  eb46                 jmp 0x83a0ed
// 0083a0a7  8d4c2410             lea ecx, [esp + 0x10]
// 0083a0ab  e8c0e30600           call 0x8a8470
// 0083a0b0  57                   push edi
// 0083a0b1  8d4c2410             lea ecx, [esp + 0x10]
// 0083a0b5  c784242801000001000000 mov dword ptr [esp + 0x128], 1
// 0083a0c0  e88bf00600           call 0x8a9150
// 0083a0c5  8d4c240c             lea ecx, [esp + 0xc]
// 0083a0c9  85c0                 test eax, eax
// 0083a0cb  7514                 jne 0x83a0e1
// 0083a0cd  c7842424010000ffffffff mov dword ptr [esp + 0x124], 0xffffffff
// 0083a0d8  e8e3e70600           call 0x8a88c0
// 0083a0dd  33c0                 xor eax, eax
// 0083a0df  eb21                 jmp 0x83a102
// 0083a0e1  51                   push ecx
// 0083a0e2  8bce                 mov ecx, esi
// 0083a0e4  e8a7feffff           call 0x839f90
// 0083a0e9  8d4c240c             lea ecx, [esp + 0xc]
// 0083a0ed  c7842424010000ffffffff mov dword ptr [esp + 0x124], 0xffffffff
// 0083a0f8  e8c3e70600           call 0x8a88c0
// 0083a0fd  b801000000           mov eax, 1
// 0083a102  8b8c241c010000       mov ecx, dword ptr [esp + 0x11c]
// 0083a109  64890d00000000       mov dword ptr fs:[0], ecx
// 0083a110  59                   pop ecx
// 0083a111  5f                   pop edi
// 0083a112  5e                   pop esi
// 0083a113  81c41c010000         add esp, 0x11c
// 0083a119  c20400               ret 4
// copied from an identical function in another client (function ?DoPropExchange@CXTPDockingPaneManager@@QAEHPAVCXTPPropExchange@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\DockingPane\XTPDockingPaneManager.cpp