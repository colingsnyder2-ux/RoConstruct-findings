// roc 2011-06 00876f40  unit: CXTPPropertyGridView  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00876f40
//
// 00876f40  53                   push ebx
// 00876f41  56                   push esi
// 00876f42  57                   push edi
// 00876f43  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00876f47  8bf1                 mov esi, ecx
// 00876f49  85ff                 test edi, edi
// 00876f4b  7c36                 jl 0x876f83
// 00876f4d  8b4620               mov eax, dword ptr [esi + 0x20]
// 00876f50  8b1dc019a400         mov ebx, dword ptr [0xa419c0]
// 00876f56  6a00                 push 0
// 00876f58  6a00                 push 0
// 00876f5a  688b010000           push 0x18b
// 00876f5f  50                   push eax
// 00876f60  ffd3                 call ebx
// 00876f62  3bf8                 cmp edi, eax
// 00876f64  7d1d                 jge 0x876f83
// 00876f66  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00876f69  6a00                 push 0
// 00876f6b  57                   push edi
// 00876f6c  6899010000           push 0x199
// 00876f71  51                   push ecx
// 00876f72  ffd3                 call ebx
// 00876f74  8bc8                 mov ecx, eax
// 00876f76  40                   inc eax
// 00876f77  f7d8                 neg eax
// 00876f79  5f                   pop edi
// 00876f7a  1bc0                 sbb eax, eax
// 00876f7c  5e                   pop esi
// 00876f7d  23c1                 and eax, ecx
// 00876f7f  5b                   pop ebx
// 00876f80  c20400               ret 4
// 00876f83  5f                   pop edi
// 00876f84  5e                   pop esi
// 00876f85  33c0                 xor eax, eax
// 00876f87  5b                   pop ebx
// 00876f88  c20400               ret 4
// library xtp-15.2.1/Source\PropertyGrid\XTPPropertyGridView.cpp (function ?GetItem@CXTPPropertyGridView@@QBEPAVCXTPPropertyGridItem@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/PropertyGrid/XTPPropertyGridView.cpp
