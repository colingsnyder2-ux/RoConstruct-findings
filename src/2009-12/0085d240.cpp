// roc 2009-12 0085d240  unit: CXTPDockingPane  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0085d240
//
// 0085d240  56                   push esi
// 0085d241  8bf1                 mov esi, ecx
// 0085d243  8b86b4000000         mov eax, dword ptr [esi + 0xb4]
// 0085d249  85c0                 test eax, eax
// 0085d24b  7436                 je 0x85d283
// 0085d24d  6a00                 push 0
// 0085d24f  50                   push eax
// 0085d250  ff1598ca9800         call dword ptr [0x98ca98]
// 0085d256  8d4e20               lea ecx, [esi + 0x20]
// 0085d259  e8e2350500           call 0x8b0840
// 0085d25e  8b80cc000000         mov eax, dword ptr [eax + 0xcc]
// 0085d264  85c0                 test eax, eax
// 0085d266  7403                 je 0x85d26b
// 0085d268  8b4020               mov eax, dword ptr [eax + 0x20]
// 0085d26b  50                   push eax
// 0085d26c  8b86b4000000         mov eax, dword ptr [esi + 0xb4]
// 0085d272  50                   push eax
// 0085d273  ff1538cb9800         call dword ptr [0x98cb38]
// 0085d279  c786b400000000000000 mov dword ptr [esi + 0xb4], 0
// 0085d283  8d4e20               lea ecx, [esi + 0x20]
// 0085d286  e8b5350500           call 0x8b0840
// 0085d28b  8bc8                 mov ecx, eax
// 0085d28d  5e                   pop esi
// 0085d28e  e9bdc9fdff           jmp 0x839c50
// library xtp-11.2.2/Source\DockingPane\XTPDockingPane.cpp (function ?Detach@CXTPDockingPane@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPane.cpp
