// roc 2009-06 0078a040  unit: CXTPPropertyGridItem  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0078a040
//
// 0078a040  56                   push esi
// 0078a041  8bf1                 mov esi, ecx
// 0078a043  8b86bc000000         mov eax, dword ptr [esi + 0xbc]
// 0078a049  85c0                 test eax, eax
// 0078a04b  742d                 je 0x78a07a
// 0078a04d  83be9400000000       cmp dword ptr [esi + 0x94], 0
// 0078a054  7424                 je 0x78a07a
// 0078a056  8b8e80000000         mov ecx, dword ptr [esi + 0x80]
// 0078a05c  8b5020               mov edx, dword ptr [eax + 0x20]
// 0078a05f  6a00                 push 0
// 0078a061  51                   push ecx
// 0078a062  6886010000           push 0x186
// 0078a067  52                   push edx
// 0078a068  ff1590ee8900         call dword ptr [0x89ee90]
// 0078a06e  8b8ebc000000         mov ecx, dword ptr [esi + 0xbc]
// 0078a074  5e                   pop esi
// 0078a075  e9f6410000           jmp 0x78e270
// 0078a07a  5e                   pop esi
// 0078a07b  c3                   ret 
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridItem.cpp (function ?Select@CXTPPropertyGridItem@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridItem.cpp
