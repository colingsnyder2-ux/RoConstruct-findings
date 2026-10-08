// roc 2009-06 007898f0  unit: CXTPPropertyGridItem  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007898f0
//
// 007898f0  56                   push esi
// 007898f1  8bf1                 mov esi, ecx
// 007898f3  8b8ebc000000         mov ecx, dword ptr [esi + 0xbc]
// 007898f9  85c9                 test ecx, ecx
// 007898fb  7410                 je 0x78990d
// 007898fd  e82e440000           call 0x78dd30
// 00789902  3bc6                 cmp eax, esi
// 00789904  7507                 jne 0x78990d
// 00789906  b801000000           mov eax, 1
// 0078990b  5e                   pop esi
// 0078990c  c3                   ret 
// 0078990d  33c0                 xor eax, eax
// 0078990f  5e                   pop esi
// 00789910  c3                   ret 
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridItem.cpp (function ?IsSelected@CXTPPropertyGridItem@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridItem.cpp
