// roc 2009-12 008f3b30  unit: CXTShadowHook  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008f3b30
//
// 008f3b30  56                   push esi
// 008f3b31  8bf1                 mov esi, ecx
// 008f3b33  8b4604               mov eax, dword ptr [esi + 4]
// 008f3b36  c7063cfaa000         mov dword ptr [esi], 0xa0fa3c
// 008f3b3c  85c0                 test eax, eax
// 008f3b3e  7414                 je 0x8f3b54
// 008f3b40  50                   push eax
// 008f3b41  ff1584cc9800         call dword ptr [0x98cc84]
// 008f3b47  85c0                 test eax, eax
// 008f3b49  7409                 je 0x8f3b54
// 008f3b4b  6a00                 push 0
// 008f3b4d  8bce                 mov ecx, esi
// 008f3b4f  e88cffffff           call 0x8f3ae0
// 008f3b54  5e                   pop esi
// 008f3b55  c3                   ret 
// copied from an identical function in another client (function ??1CXTWndHook@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTWndHook.cpp