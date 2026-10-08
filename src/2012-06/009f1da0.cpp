// roc 2012-06 009f1da0  unit: CXTPPropertyGridItem  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009f1da0
//
// 009f1da0  56                   push esi
// 009f1da1  8bf1                 mov esi, ecx
// 009f1da3  8b86bc000000         mov eax, dword ptr [esi + 0xbc]
// 009f1da9  85c0                 test eax, eax
// 009f1dab  742d                 je 0x9f1dda
// 009f1dad  83be9400000000       cmp dword ptr [esi + 0x94], 0
// 009f1db4  7424                 je 0x9f1dda
// 009f1db6  8b8e80000000         mov ecx, dword ptr [esi + 0x80]
// 009f1dbc  8b5020               mov edx, dword ptr [eax + 0x20]
// 009f1dbf  6a00                 push 0
// 009f1dc1  51                   push ecx
// 009f1dc2  6886010000           push 0x186
// 009f1dc7  52                   push edx
// 009f1dc8  ff15043cb200         call dword ptr [0xb23c04]
// 009f1dce  8b8ebc000000         mov ecx, dword ptr [esi + 0xbc]
// 009f1dd4  5e                   pop esi
// 009f1dd5  e966dfffff           jmp 0x9efd40
// 009f1dda  5e                   pop esi
// 009f1ddb  c3                   ret 
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridItem.cpp (function ?Select@CXTPPropertyGridItem@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridItem.cpp
