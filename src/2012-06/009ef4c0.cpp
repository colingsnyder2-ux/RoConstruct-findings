// from server: 100% by auto
// roc 2012-06 009ef4c0  unit: CXTPPropertyGridView  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009ef4c0
//
// 009ef4c0  53                   push ebx
// 009ef4c1  56                   push esi
// 009ef4c2  57                   push edi
// 009ef4c3  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 009ef4c7  8bf1                 mov esi, ecx
// 009ef4c9  85ff                 test edi, edi
// 009ef4cb  7c36                 jl 0x9ef503
// 009ef4cd  8b4620               mov eax, dword ptr [esi + 0x20]
// 009ef4d0  8b1d043cb200         mov ebx, dword ptr [0xb23c04]
// 009ef4d6  6a00                 push 0
// 009ef4d8  6a00                 push 0
// 009ef4da  688b010000           push 0x18b
// 009ef4df  50                   push eax
// 009ef4e0  ffd3                 call ebx
// 009ef4e2  3bf8                 cmp edi, eax
// 009ef4e4  7d1d                 jge 0x9ef503
// 009ef4e6  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 009ef4e9  6a00                 push 0
// 009ef4eb  57                   push edi
// 009ef4ec  6899010000           push 0x199
// 009ef4f1  51                   push ecx
// 009ef4f2  ffd3                 call ebx
// 009ef4f4  8bc8                 mov ecx, eax
// 009ef4f6  40                   inc eax
// 009ef4f7  f7d8                 neg eax
// 009ef4f9  5f                   pop edi
// 009ef4fa  1bc0                 sbb eax, eax
// 009ef4fc  5e                   pop esi
// 009ef4fd  23c1                 and eax, ecx
// 009ef4ff  5b                   pop ebx
// 009ef500  c20400               ret 4
// 009ef503  5f                   pop edi
// 009ef504  5e                   pop esi
// 009ef505  33c0                 xor eax, eax
// 009ef507  5b                   pop ebx
// 009ef508  c20400               ret 4
// library xtp-15.2.1/Source\PropertyGrid\XTPPropertyGridView.cpp (function ?GetItem@CXTPPropertyGridView@@QBEPAVCXTPPropertyGridItem@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/PropertyGrid/XTPPropertyGridView.cpp
