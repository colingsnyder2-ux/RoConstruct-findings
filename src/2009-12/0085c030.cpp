// roc 2009-12 0085c030  unit: CXTPStatusBarPane  size: 155 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0085c030
//
// 0085c030  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0085c034  83ec10               sub esp, 0x10
// 0085c037  56                   push esi
// 0085c038  6a00                 push 0
// 0085c03a  8bf1                 mov esi, ecx
// 0085c03c  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0085c040  50                   push eax
// 0085c041  51                   push ecx
// 0085c042  8bce                 mov ecx, esi
// 0085c044  e8a7fcffff           call 0x85bcf0
// 0085c049  85c0                 test eax, eax
// 0085c04b  7415                 je 0x85c062
// 0085c04d  83787800             cmp dword ptr [eax + 0x78], 0
// 0085c051  740d                 je 0x85c060
// 0085c053  8b5028               mov edx, dword ptr [eax + 0x28]
// 0085c056  c1ea1a               shr edx, 0x1a
// 0085c059  f7d2                 not edx
// 0085c05b  f6c201               test dl, 1
// 0085c05e  7502                 jne 0x85c062
// 0085c060  33c0                 xor eax, eax
// 0085c062  8b8ebc000000         mov ecx, dword ptr [esi + 0xbc]
// 0085c068  3bc1                 cmp eax, ecx
// 0085c06a  7451                 je 0x85c0bd
// 0085c06c  8986bc000000         mov dword ptr [esi + 0xbc], eax
// 0085c072  85c9                 test ecx, ecx
// 0085c074  7405                 je 0x85c07b
// 0085c076  e885f8ffff           call 0x85b900
// 0085c07b  8b8ebc000000         mov ecx, dword ptr [esi + 0xbc]
// 0085c081  85c9                 test ecx, ecx
// 0085c083  7405                 je 0x85c08a
// 0085c085  e876f8ffff           call 0x85b900
// 0085c08a  83bebc00000000       cmp dword ptr [esi + 0xbc], 0
// 0085c091  742a                 je 0x85c0bd
// 0085c093  8b4620               mov eax, dword ptr [esi + 0x20]
// 0085c096  8d4c2404             lea ecx, [esp + 4]
// 0085c09a  51                   push ecx
// 0085c09b  c744240810000000     mov dword ptr [esp + 8], 0x10
// 0085c0a3  c744240c02000000     mov dword ptr [esp + 0xc], 2
// 0085c0ab  89442410             mov dword ptr [esp + 0x10], eax
// 0085c0af  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0085c0b7  ff1564b09800         call dword ptr [0x98b064]
// 0085c0bd  8bce                 mov ecx, esi
// 0085c0bf  e86c7df9ff           call 0x7f3e30
// 0085c0c4  5e                   pop esi
// 0085c0c5  83c410               add esp, 0x10
// 0085c0c8  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnMouseMove@CXTPStatusBar@@IAEXIVCPoint@@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source/CommandBars/XTPStatusBar.cpp