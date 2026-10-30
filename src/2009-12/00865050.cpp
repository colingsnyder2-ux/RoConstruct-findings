// roc 2009-12 00865050  unit: CXTPPropertyGridItem  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00865050
//
// 00865050  56                   push esi
// 00865051  8bf1                 mov esi, ecx
// 00865053  8b86bc000000         mov eax, dword ptr [esi + 0xbc]
// 00865059  85c0                 test eax, eax
// 0086505b  742d                 je 0x86508a
// 0086505d  83be9400000000       cmp dword ptr [esi + 0x94], 0
// 00865064  7424                 je 0x86508a
// 00865066  8b8e80000000         mov ecx, dword ptr [esi + 0x80]
// 0086506c  8b5020               mov edx, dword ptr [eax + 0x20]
// 0086506f  6a00                 push 0
// 00865071  51                   push ecx
// 00865072  6886010000           push 0x186
// 00865077  52                   push edx
// 00865078  ff15c4cb9800         call dword ptr [0x98cbc4]
// 0086507e  8b8ebc000000         mov ecx, dword ptr [esi + 0xbc]
// 00865084  5e                   pop esi
// 00865085  e906420000           jmp 0x869290
// 0086508a  5e                   pop esi
// 0086508b  c3                   ret 
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridItem.cpp (function ?Select@CXTPPropertyGridItem@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridItem.cpp
