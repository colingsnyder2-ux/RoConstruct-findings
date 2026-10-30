// roc 2009-06 0078f720  unit: CXTPPropertyGridToolTip  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0078f720
//
// 0078f720  56                   push esi
// 0078f721  8bf1                 mov esi, ecx
// 0078f723  e8b8e1ffff           call 0x78d8e0
// 0078f728  8b86dc000000         mov eax, dword ptr [esi + 0xdc]
// 0078f72e  6a01                 push 1
// 0078f730  6a01                 push 1
// 0078f732  50                   push eax
// 0078f733  8bce                 mov ecx, esi
// 0078f735  e836fcffff           call 0x78f370
// 0078f73a  8bb6b0000000         mov esi, dword ptr [esi + 0xb0]
// 0078f740  85f6                 test esi, esi
// 0078f742  7414                 je 0x78f758
// 0078f744  837e2000             cmp dword ptr [esi + 0x20], 0
// 0078f748  740e                 je 0x78f758
// 0078f74a  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0078f74d  6a00                 push 0
// 0078f74f  6a00                 push 0
// 0078f751  51                   push ecx
// 0078f752  ff157cee8900         call dword ptr [0x89ee7c]
// 0078f758  5e                   pop esi
// 0078f759  c3                   ret 
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridView.cpp (function ?Refresh@CXTPPropertyGridView@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridView.cpp
