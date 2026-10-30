// roc 2009-12 008688f0  unit: CXTPPropertyGridView  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008688f0
//
// 008688f0  53                   push ebx
// 008688f1  8bd9                 mov ebx, ecx
// 008688f3  8b4320               mov eax, dword ptr [ebx + 0x20]
// 008688f6  85c0                 test eax, eax
// 008688f8  745a                 je 0x868954
// 008688fa  56                   push esi
// 008688fb  57                   push edi
// 008688fc  8b3dc4cb9800         mov edi, dword ptr [0x98cbc4]
// 00868902  33f6                 xor esi, esi
// 00868904  56                   push esi
// 00868905  56                   push esi
// 00868906  688b010000           push 0x18b
// 0086890b  50                   push eax
// 0086890c  ffd7                 call edi
// 0086890e  85c0                 test eax, eax
// 00868910  7e40                 jle 0x868952
// 00868912  8b4320               mov eax, dword ptr [ebx + 0x20]
// 00868915  6a00                 push 0
// 00868917  56                   push esi
// 00868918  6899010000           push 0x199
// 0086891d  50                   push eax
// 0086891e  ffd7                 call edi
// 00868920  85c0                 test eax, eax
// 00868922  741a                 je 0x86893e
// 00868924  39b080000000         cmp dword ptr [eax + 0x80], esi
// 0086892a  7412                 je 0x86893e
// 0086892c  8b10                 mov edx, dword ptr [eax]
// 0086892e  89b080000000         mov dword ptr [eax + 0x80], esi
// 00868934  8bc8                 mov ecx, eax
// 00868936  8b82a8000000         mov eax, dword ptr [edx + 0xa8]
// 0086893c  ffd0                 call eax
// 0086893e  8b4b20               mov ecx, dword ptr [ebx + 0x20]
// 00868941  6a00                 push 0
// 00868943  6a00                 push 0
// 00868945  688b010000           push 0x18b
// 0086894a  51                   push ecx
// 0086894b  46                   inc esi
// 0086894c  ffd7                 call edi
// 0086894e  3bf0                 cmp esi, eax
// 00868950  7cc0                 jl 0x868912
// 00868952  5f                   pop edi
// 00868953  5e                   pop esi
// 00868954  5b                   pop ebx
// 00868955  c3                   ret 
// copied from an identical function in another client (function ?_RefreshIndexes@CXTPPropertyGridView@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/PropertyGrid/XTPPropertyGridView.cpp