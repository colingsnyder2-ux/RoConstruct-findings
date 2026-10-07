// roc 2008-06 00716f80  unit: CXTPPropertyGridToolTip  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00716f80
//
// 00716f80  56                   push esi
// 00716f81  8bf1                 mov esi, ecx
// 00716f83  e8b8e1ffff           call 0x715140
// 00716f88  8b86dc000000         mov eax, dword ptr [esi + 0xdc]
// 00716f8e  6a01                 push 1
// 00716f90  6a01                 push 1
// 00716f92  50                   push eax
// 00716f93  8bce                 mov ecx, esi
// 00716f95  e836fcffff           call 0x716bd0
// 00716f9a  8bb6b0000000         mov esi, dword ptr [esi + 0xb0]
// 00716fa0  85f6                 test esi, esi
// 00716fa2  7414                 je 0x716fb8
// 00716fa4  837e2000             cmp dword ptr [esi + 0x20], 0
// 00716fa8  740e                 je 0x716fb8
// 00716faa  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00716fad  6a00                 push 0
// 00716faf  6a00                 push 0
// 00716fb1  51                   push ecx
// 00716fb2  ff15182e8000         call dword ptr [0x802e18]
// 00716fb8  5e                   pop esi
// 00716fb9  c3                   ret 
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridView.cpp (function ?Refresh@CXTPPropertyGridView@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridView.cpp
