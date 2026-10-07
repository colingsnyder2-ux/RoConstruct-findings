// roc 2008-06 007110f0  unit: CXTPPropertyGridItem  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007110f0
//
// 007110f0  56                   push esi
// 007110f1  8bf1                 mov esi, ecx
// 007110f3  8b8ebc000000         mov ecx, dword ptr [esi + 0xbc]
// 007110f9  85c9                 test ecx, ecx
// 007110fb  7410                 je 0x71110d
// 007110fd  e88e440000           call 0x715590
// 00711102  3bc6                 cmp eax, esi
// 00711104  7507                 jne 0x71110d
// 00711106  b801000000           mov eax, 1
// 0071110b  5e                   pop esi
// 0071110c  c3                   ret 
// 0071110d  33c0                 xor eax, eax
// 0071110f  5e                   pop esi
// 00711110  c3                   ret 
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridItem.cpp (function ?IsSelected@CXTPPropertyGridItem@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridItem.cpp
