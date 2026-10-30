// roc 2009-12 008e6540  unit: CXTCaptionButton  size: 168 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008e6540
//
// 008e6540  6aff                 push -1
// 008e6542  68bd619600           push 0x9661bd
// 008e6547  64a100000000         mov eax, dword ptr fs:[0]
// 008e654d  50                   push eax
// 008e654e  51                   push ecx
// 008e654f  56                   push esi
// 008e6550  a10052b600           mov eax, dword ptr [0xb65200]
// 008e6555  33c4                 xor eax, esp
// 008e6557  50                   push eax
// 008e6558  8d44240c             lea eax, [esp + 0xc]
// 008e655c  64a300000000         mov dword ptr fs:[0], eax
// 008e6562  8bf1                 mov esi, ecx
// 008e6564  89742408             mov dword ptr [esp + 8], esi
// 008e6568  c706c4c9a000         mov dword ptr [esi], 0xa0c9c4
// 008e656e  8b4620               mov eax, dword ptr [esi + 0x20]
// 008e6571  50                   push eax
// 008e6572  c744241804000000     mov dword ptr [esp + 0x18], 4
// 008e657a  ff1584cc9800         call dword ptr [0x98cc84]
// 008e6580  85c0                 test eax, eax
// 008e6582  7407                 je 0x8e658b
// 008e6584  8bce                 mov ecx, esi
// 008e6586  e853d3f0ff           call 0x7f38de
// 008e658b  8d8ea8020000         lea ecx, [esi + 0x2a8]
// 008e6591  c644241403           mov byte ptr [esp + 0x14], 3
// 008e6596  e8b5f30000           call 0x8f5950
// 008e659b  8d8ea0020000         lea ecx, [esi + 0x2a0]
// 008e65a1  c644241402           mov byte ptr [esp + 0x14], 2
// 008e65a6  e8a5f30000           call 0x8f5950
// 008e65ab  8d8ef0010000         lea ecx, [esi + 0x1f0]
// 008e65b1  c644241401           mov byte ptr [esp + 0x14], 1
// 008e65b6  e895f3ffff           call 0x8e5950
// 008e65bb  8d4e60               lea ecx, [esi + 0x60]
// 008e65be  c644241400           mov byte ptr [esp + 0x14], 0
// 008e65c3  e8d85bf8ff           call 0x86c1a0
// 008e65c8  8bce                 mov ecx, esi
// 008e65ca  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 008e65d2  e83fddf0ff           call 0x7f4316
// 008e65d7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008e65db  64890d00000000       mov dword ptr fs:[0], ecx
// 008e65e2  59                   pop ecx
// 008e65e3  5e                   pop esi
// 008e65e4  83c410               add esp, 0x10
// 008e65e7  c3                   ret 
// copied from an identical function in another client (function ??1CXTCaptionPopupWnd@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTCaptionPopupWnd.cpp