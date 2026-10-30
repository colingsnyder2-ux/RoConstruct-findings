// roc 2010-06 008188d0  unit: CXTPPropertyGridItem  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008188d0
//
// 008188d0  56                   push esi
// 008188d1  8bf1                 mov esi, ecx
// 008188d3  8b8ebc000000         mov ecx, dword ptr [esi + 0xbc]
// 008188d9  85c9                 test ecx, ecx
// 008188db  7410                 je 0x8188ed
// 008188dd  e86e440000           call 0x81cd50
// 008188e2  3bc6                 cmp eax, esi
// 008188e4  7507                 jne 0x8188ed
// 008188e6  b801000000           mov eax, 1
// 008188eb  5e                   pop esi
// 008188ec  c3                   ret 
// 008188ed  33c0                 xor eax, eax
// 008188ef  5e                   pop esi
// 008188f0  c3                   ret 
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridItem.cpp (function ?IsSelected@CXTPPropertyGridItem@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridItem.cpp
