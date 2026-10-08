// roc 2012-06 009f1670  unit: CXTPPropertyGridItem  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009f1670
//
// 009f1670  56                   push esi
// 009f1671  8bf1                 mov esi, ecx
// 009f1673  8b8ebc000000         mov ecx, dword ptr [esi + 0xbc]
// 009f1679  85c9                 test ecx, ecx
// 009f167b  7410                 je 0x9f168d
// 009f167d  e87ee1ffff           call 0x9ef800
// 009f1682  3bc6                 cmp eax, esi
// 009f1684  7507                 jne 0x9f168d
// 009f1686  b801000000           mov eax, 1
// 009f168b  5e                   pop esi
// 009f168c  c3                   ret 
// 009f168d  33c0                 xor eax, eax
// 009f168f  5e                   pop esi
// 009f1690  c3                   ret 
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridItem.cpp (function ?IsSelected@CXTPPropertyGridItem@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridItem.cpp
