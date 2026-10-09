// roc 2009-12 0086a740  unit: CXTPPropertyGridToolTip  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0086a740
//
// 0086a740  56                   push esi
// 0086a741  8bf1                 mov esi, ecx
// 0086a743  e8a8e1ffff           call 0x8688f0
// 0086a748  8b86dc000000         mov eax, dword ptr [esi + 0xdc]
// 0086a74e  6a01                 push 1
// 0086a750  6a01                 push 1
// 0086a752  50                   push eax
// 0086a753  8bce                 mov ecx, esi
// 0086a755  e836fcffff           call 0x86a390
// 0086a75a  8bb6b0000000         mov esi, dword ptr [esi + 0xb0]
// 0086a760  85f6                 test esi, esi
// 0086a762  7414                 je 0x86a778
// 0086a764  837e2000             cmp dword ptr [esi + 0x20], 0
// 0086a768  740e                 je 0x86a778
// 0086a76a  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0086a76d  6a00                 push 0
// 0086a76f  6a00                 push 0
// 0086a771  51                   push ecx
// 0086a772  ff15e8cb9800         call dword ptr [0x98cbe8]
// 0086a778  5e                   pop esi
// 0086a779  c3                   ret 
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridView.cpp (function ?Refresh@CXTPPropertyGridView@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridView.cpp
