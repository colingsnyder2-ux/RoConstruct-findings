// roc 2012-06 009f1290  unit: CXTPPropertyGridToolTip  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009f1290
//
// 009f1290  56                   push esi
// 009f1291  8bf1                 mov esi, ecx
// 009f1293  e818e1ffff           call 0x9ef3b0
// 009f1298  8b86dc000000         mov eax, dword ptr [esi + 0xdc]
// 009f129e  6a01                 push 1
// 009f12a0  6a01                 push 1
// 009f12a2  50                   push eax
// 009f12a3  8bce                 mov ecx, esi
// 009f12a5  e836fcffff           call 0x9f0ee0
// 009f12aa  8bb6b0000000         mov esi, dword ptr [esi + 0xb0]
// 009f12b0  85f6                 test esi, esi
// 009f12b2  7414                 je 0x9f12c8
// 009f12b4  837e2000             cmp dword ptr [esi + 0x20], 0
// 009f12b8  740e                 je 0x9f12c8
// 009f12ba  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 009f12bd  6a00                 push 0
// 009f12bf  6a00                 push 0
// 009f12c1  51                   push ecx
// 009f12c2  ff15ec3bb200         call dword ptr [0xb23bec]
// 009f12c8  5e                   pop esi
// 009f12c9  c3                   ret 
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridView.cpp (function ?Refresh@CXTPPropertyGridView@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridView.cpp
