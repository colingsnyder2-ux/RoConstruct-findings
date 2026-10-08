// roc 2011-06 00878d10  unit: CXTPPropertyGridToolTip  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00878d10
//
// 00878d10  56                   push esi
// 00878d11  8bf1                 mov esi, ecx
// 00878d13  e818e1ffff           call 0x876e30
// 00878d18  8b86dc000000         mov eax, dword ptr [esi + 0xdc]
// 00878d1e  6a01                 push 1
// 00878d20  6a01                 push 1
// 00878d22  50                   push eax
// 00878d23  8bce                 mov ecx, esi
// 00878d25  e836fcffff           call 0x878960
// 00878d2a  8bb6b0000000         mov esi, dword ptr [esi + 0xb0]
// 00878d30  85f6                 test esi, esi
// 00878d32  7414                 je 0x878d48
// 00878d34  837e2000             cmp dword ptr [esi + 0x20], 0
// 00878d38  740e                 je 0x878d48
// 00878d3a  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00878d3d  6a00                 push 0
// 00878d3f  6a00                 push 0
// 00878d41  51                   push ecx
// 00878d42  ff15ec19a400         call dword ptr [0xa419ec]
// 00878d48  5e                   pop esi
// 00878d49  c3                   ret 
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridView.cpp (function ?Refresh@CXTPPropertyGridView@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridView.cpp
