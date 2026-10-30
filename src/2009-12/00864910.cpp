// roc 2009-12 00864910  unit: CXTPPropertyGridItem  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00864910
//
// 00864910  56                   push esi
// 00864911  8bf1                 mov esi, ecx
// 00864913  8b8ebc000000         mov ecx, dword ptr [esi + 0xbc]
// 00864919  85c9                 test ecx, ecx
// 0086491b  7410                 je 0x86492d
// 0086491d  e81e440000           call 0x868d40
// 00864922  3bc6                 cmp eax, esi
// 00864924  7507                 jne 0x86492d
// 00864926  b801000000           mov eax, 1
// 0086492b  5e                   pop esi
// 0086492c  c3                   ret 
// 0086492d  33c0                 xor eax, eax
// 0086492f  5e                   pop esi
// 00864930  c3                   ret 
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridItem.cpp (function ?IsSelected@CXTPPropertyGridItem@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridItem.cpp
