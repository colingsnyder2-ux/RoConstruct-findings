// roc 2009-12 008c6a00  unit: CXTPPropertyGridInplaceEdit  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008c6a00
//
// 008c6a00  56                   push esi
// 008c6a01  8bf1                 mov esi, ecx
// 008c6a03  8d8e8c000000         lea ecx, [esi + 0x8c]
// 008c6a09  c786a000000000000000 mov dword ptr [esi + 0xa0], 0
// 008c6a13  c7869c00000000000000 mov dword ptr [esi + 0x9c], 0
// 008c6a1d  ff1590d69800         call dword ptr [0x98d690]
// 008c6a23  8d8e90000000         lea ecx, [esi + 0x90]
// 008c6a29  e8f0d3f2ff           call 0x7f3e1e
// 008c6a2e  8b4620               mov eax, dword ptr [esi + 0x20]
// 008c6a31  50                   push eax
// 008c6a32  ff1584cc9800         call dword ptr [0x98cc84]
// 008c6a38  85c0                 test eax, eax
// 008c6a3a  7409                 je 0x8c6a45
// 008c6a3c  6a00                 push 0
// 008c6a3e  8bce                 mov ecx, esi
// 008c6a40  e803d1f2ff           call 0x7f3b48
// 008c6a45  5e                   pop esi
// 008c6a46  c3                   ret 
// copied from an identical function in another client (function ?DestroyItem@CXTPPropertyGridInplaceEdit@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source\PropertyGrid\XTPPropertyGridInplaceEdit.cpp