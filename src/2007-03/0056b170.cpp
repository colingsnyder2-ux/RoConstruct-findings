// roc 2007-03 0056b170  unit: seg_00560000  size: 99 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0056b170
//
// 0056b170  83ec0c               sub esp, 0xc
// 0056b173  53                   push ebx
// 0056b174  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0056b178  55                   push ebp
// 0056b179  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 0056b17d  56                   push esi
// 0056b17e  57                   push edi
// 0056b17f  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 0056b183  57                   push edi
// 0056b184  53                   push ebx
// 0056b185  55                   push ebp
// 0056b186  8bf1                 mov esi, ecx
// 0056b188  e8038bedff           call 0x443c90
// 0056b18d  84c0                 test al, al
// 0056b18f  7536                 jne 0x56b1c7
// 0056b191  83c620               add esi, 0x20
// 0056b194  897c2418             mov dword ptr [esp + 0x18], edi
// 0056b198  8b7e04               mov edi, dword ptr [esi + 4]
// 0056b19b  8b4f04               mov ecx, dword ptr [edi + 4]
// 0056b19e  8d442410             lea eax, [esp + 0x10]
// 0056b1a2  50                   push eax
// 0056b1a3  51                   push ecx
// 0056b1a4  57                   push edi
// 0056b1a5  8bce                 mov ecx, esi
// 0056b1a7  896c241c             mov dword ptr [esp + 0x1c], ebp
// 0056b1ab  895c2420             mov dword ptr [esp + 0x20], ebx
// 0056b1af  e8acf7ffff           call 0x56a960
// 0056b1b4  6a01                 push 1
// 0056b1b6  8bce                 mov ecx, esi
// 0056b1b8  8bd8                 mov ebx, eax
// 0056b1ba  e8f1f7ffff           call 0x56a9b0
// 0056b1bf  895f04               mov dword ptr [edi + 4], ebx
// 0056b1c2  8b5304               mov edx, dword ptr [ebx + 4]
// 0056b1c5  891a                 mov dword ptr [edx], ebx
// 0056b1c7  5f                   pop edi
// 0056b1c8  5e                   pop esi
// 0056b1c9  5d                   pop ebp
// 0056b1ca  b001                 mov al, 1
// 0056b1cc  5b                   pop ebx
// 0056b1cd  83c40c               add esp, 0xc
// 0056b1d0  c20c00               ret 0xc
// library rbxgs/v8xml\SerializerV2.cpp (function ?processIDREF@ArchiveBinder@@UAE_NPBVXmlNameValuePair@@PAVDescribedBase@Reflection@RBX@@PBVIIDREF@5@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/SerializerV2.cpp
