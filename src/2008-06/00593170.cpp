// roc 2008-06 00593170  unit: ArchiveBinder  size: 99 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00593170
//
// 00593170  83ec0c               sub esp, 0xc
// 00593173  53                   push ebx
// 00593174  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00593178  55                   push ebp
// 00593179  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 0059317d  56                   push esi
// 0059317e  57                   push edi
// 0059317f  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 00593183  57                   push edi
// 00593184  53                   push ebx
// 00593185  55                   push ebp
// 00593186  8bf1                 mov esi, ecx
// 00593188  e8e318ebff           call 0x444a70
// 0059318d  84c0                 test al, al
// 0059318f  7536                 jne 0x5931c7
// 00593191  83c63c               add esi, 0x3c
// 00593194  897c2418             mov dword ptr [esp + 0x18], edi
// 00593198  8b7e14               mov edi, dword ptr [esi + 0x14]
// 0059319b  8b4f04               mov ecx, dword ptr [edi + 4]
// 0059319e  8d442410             lea eax, [esp + 0x10]
// 005931a2  50                   push eax
// 005931a3  51                   push ecx
// 005931a4  57                   push edi
// 005931a5  8bce                 mov ecx, esi
// 005931a7  896c241c             mov dword ptr [esp + 0x1c], ebp
// 005931ab  895c2420             mov dword ptr [esp + 0x20], ebx
// 005931af  e88c1f0000           call 0x595140
// 005931b4  6a01                 push 1
// 005931b6  8bce                 mov ecx, esi
// 005931b8  8bd8                 mov ebx, eax
// 005931ba  e8d11f0000           call 0x595190
// 005931bf  895f04               mov dword ptr [edi + 4], ebx
// 005931c2  8b5304               mov edx, dword ptr [ebx + 4]
// 005931c5  891a                 mov dword ptr [edx], ebx
// 005931c7  5f                   pop edi
// 005931c8  5e                   pop esi
// 005931c9  5d                   pop ebp
// 005931ca  b001                 mov al, 1
// 005931cc  5b                   pop ebx
// 005931cd  83c40c               add esp, 0xc
// 005931d0  c20c00               ret 0xc
// library rbxgs/v8xml\SerializerV2.cpp (function ?processIDREF@ArchiveBinder@@UAE_NPBVXmlNameValuePair@@PAVDescribedBase@Reflection@RBX@@PBVIIDREF@5@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/SerializerV2.cpp
