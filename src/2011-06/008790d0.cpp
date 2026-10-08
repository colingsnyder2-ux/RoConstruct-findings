// roc 2011-06 008790d0  unit: CXTPPropertyGridItem  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008790d0
//
// 008790d0  56                   push esi
// 008790d1  8bf1                 mov esi, ecx
// 008790d3  8b8ebc000000         mov ecx, dword ptr [esi + 0xbc]
// 008790d9  85c9                 test ecx, ecx
// 008790db  7410                 je 0x8790ed
// 008790dd  e89ee1ffff           call 0x877280
// 008790e2  3bc6                 cmp eax, esi
// 008790e4  7507                 jne 0x8790ed
// 008790e6  b801000000           mov eax, 1
// 008790eb  5e                   pop esi
// 008790ec  c3                   ret 
// 008790ed  33c0                 xor eax, eax
// 008790ef  5e                   pop esi
// 008790f0  c3                   ret 
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridItem.cpp (function ?IsSelected@CXTPPropertyGridItem@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridItem.cpp
