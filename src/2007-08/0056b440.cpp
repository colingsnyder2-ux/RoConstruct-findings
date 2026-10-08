// roc 2007-08 0056b440  unit: ArchiveBinder  size: 99 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0056b440
//
// 0056b440  83ec0c               sub esp, 0xc
// 0056b443  53                   push ebx
// 0056b444  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0056b448  55                   push ebp
// 0056b449  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 0056b44d  56                   push esi
// 0056b44e  57                   push edi
// 0056b44f  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 0056b453  57                   push edi
// 0056b454  53                   push ebx
// 0056b455  55                   push ebp
// 0056b456  8bf1                 mov esi, ecx
// 0056b458  e8238fedff           call 0x444380
// 0056b45d  84c0                 test al, al
// 0056b45f  7536                 jne 0x56b497
// 0056b461  83c620               add esi, 0x20
// 0056b464  897c2418             mov dword ptr [esp + 0x18], edi
// 0056b468  8b7e04               mov edi, dword ptr [esi + 4]
// 0056b46b  8b4f04               mov ecx, dword ptr [edi + 4]
// 0056b46e  8d442410             lea eax, [esp + 0x10]
// 0056b472  50                   push eax
// 0056b473  51                   push ecx
// 0056b474  57                   push edi
// 0056b475  8bce                 mov ecx, esi
// 0056b477  896c241c             mov dword ptr [esp + 0x1c], ebp
// 0056b47b  895c2420             mov dword ptr [esp + 0x20], ebx
// 0056b47f  e8eccd1b00           call 0x728270
// 0056b484  6a01                 push 1
// 0056b486  8bce                 mov ecx, esi
// 0056b488  8bd8                 mov ebx, eax
// 0056b48a  e891f7ffff           call 0x56ac20
// 0056b48f  895f04               mov dword ptr [edi + 4], ebx
// 0056b492  8b5304               mov edx, dword ptr [ebx + 4]
// 0056b495  891a                 mov dword ptr [edx], ebx
// 0056b497  5f                   pop edi
// 0056b498  5e                   pop esi
// 0056b499  5d                   pop ebp
// 0056b49a  b001                 mov al, 1
// 0056b49c  5b                   pop ebx
// 0056b49d  83c40c               add esp, 0xc
// 0056b4a0  c20c00               ret 0xc
// library rbxgs/v8xml\SerializerV2.cpp (function ?processIDREF@ArchiveBinder@@UAE_NPBVXmlNameValuePair@@PAVDescribedBase@Reflection@RBX@@PBVIIDREF@5@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/SerializerV2.cpp
