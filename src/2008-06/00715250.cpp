// roc 2008-06 00715250  unit: CXTPPropertyGridView  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00715250
//
// 00715250  53                   push ebx
// 00715251  56                   push esi
// 00715252  57                   push edi
// 00715253  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00715257  8bf1                 mov esi, ecx
// 00715259  85ff                 test edi, edi
// 0071525b  7c36                 jl 0x715293
// 0071525d  8b4620               mov eax, dword ptr [esi + 0x20]
// 00715260  8b1d142e8000         mov ebx, dword ptr [0x802e14]
// 00715266  6a00                 push 0
// 00715268  6a00                 push 0
// 0071526a  688b010000           push 0x18b
// 0071526f  50                   push eax
// 00715270  ffd3                 call ebx
// 00715272  3bf8                 cmp edi, eax
// 00715274  7d1d                 jge 0x715293
// 00715276  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00715279  6a00                 push 0
// 0071527b  57                   push edi
// 0071527c  6899010000           push 0x199
// 00715281  51                   push ecx
// 00715282  ffd3                 call ebx
// 00715284  8bc8                 mov ecx, eax
// 00715286  40                   inc eax
// 00715287  f7d8                 neg eax
// 00715289  5f                   pop edi
// 0071528a  1bc0                 sbb eax, eax
// 0071528c  5e                   pop esi
// 0071528d  23c1                 and eax, ecx
// 0071528f  5b                   pop ebx
// 00715290  c20400               ret 4
// 00715293  5f                   pop edi
// 00715294  5e                   pop esi
// 00715295  33c0                 xor eax, eax
// 00715297  5b                   pop ebx
// 00715298  c20400               ret 4
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridView.cpp (function ?GetItem@CXTPPropertyGridView@@QBEPAVCXTPPropertyGridItem@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridView.cpp
