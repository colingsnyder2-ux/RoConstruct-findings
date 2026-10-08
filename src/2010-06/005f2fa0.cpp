// roc 2010-06 005f2fa0  unit: ArchiveBinder  size: 99 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005f2fa0
//
// 005f2fa0  83ec0c               sub esp, 0xc
// 005f2fa3  53                   push ebx
// 005f2fa4  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 005f2fa8  55                   push ebp
// 005f2fa9  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 005f2fad  56                   push esi
// 005f2fae  57                   push edi
// 005f2faf  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 005f2fb3  57                   push edi
// 005f2fb4  53                   push ebx
// 005f2fb5  55                   push ebp
// 005f2fb6  8bf1                 mov esi, ecx
// 005f2fb8  e8b31fe5ff           call 0x444f70
// 005f2fbd  84c0                 test al, al
// 005f2fbf  7536                 jne 0x5f2ff7
// 005f2fc1  83c63c               add esi, 0x3c
// 005f2fc4  897c2418             mov dword ptr [esp + 0x18], edi
// 005f2fc8  8b7e14               mov edi, dword ptr [esi + 0x14]
// 005f2fcb  8b4f04               mov ecx, dword ptr [edi + 4]
// 005f2fce  8d442410             lea eax, [esp + 0x10]
// 005f2fd2  50                   push eax
// 005f2fd3  51                   push ecx
// 005f2fd4  57                   push edi
// 005f2fd5  8bce                 mov ecx, esi
// 005f2fd7  896c241c             mov dword ptr [esp + 0x1c], ebp
// 005f2fdb  895c2420             mov dword ptr [esp + 0x20], ebx
// 005f2fdf  e8ccfdffff           call 0x5f2db0
// 005f2fe4  6a01                 push 1
// 005f2fe6  8bce                 mov ecx, esi
// 005f2fe8  8bd8                 mov ebx, eax
// 005f2fea  e8c1e03600           call 0x9610b0
// 005f2fef  895f04               mov dword ptr [edi + 4], ebx
// 005f2ff2  8b5304               mov edx, dword ptr [ebx + 4]
// 005f2ff5  891a                 mov dword ptr [edx], ebx
// 005f2ff7  5f                   pop edi
// 005f2ff8  5e                   pop esi
// 005f2ff9  5d                   pop ebp
// 005f2ffa  b001                 mov al, 1
// 005f2ffc  5b                   pop ebx
// 005f2ffd  83c40c               add esp, 0xc
// 005f3000  c20c00               ret 0xc
// library rbxgs/v8xml\SerializerV2.cpp (function ?processIDREF@ArchiveBinder@@UAE_NPBVXmlNameValuePair@@PAVDescribedBase@Reflection@RBX@@PBVIIDREF@5@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/SerializerV2.cpp
