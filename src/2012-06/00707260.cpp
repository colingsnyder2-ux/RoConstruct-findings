// roc 2012-06 00707260  unit: ArchiveBinder  size: 99 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00707260
//
// 00707260  83ec0c               sub esp, 0xc
// 00707263  53                   push ebx
// 00707264  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00707268  55                   push ebp
// 00707269  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 0070726d  56                   push esi
// 0070726e  57                   push edi
// 0070726f  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 00707273  57                   push edi
// 00707274  53                   push ebx
// 00707275  55                   push ebp
// 00707276  8bf1                 mov esi, ecx
// 00707278  e853c5d5ff           call 0x4637d0
// 0070727d  84c0                 test al, al
// 0070727f  7536                 jne 0x7072b7
// 00707281  83c620               add esi, 0x20
// 00707284  897c2418             mov dword ptr [esp + 0x18], edi
// 00707288  8b7e04               mov edi, dword ptr [esi + 4]
// 0070728b  8b4f04               mov ecx, dword ptr [edi + 4]
// 0070728e  8d442410             lea eax, [esp + 0x10]
// 00707292  50                   push eax
// 00707293  51                   push ecx
// 00707294  57                   push edi
// 00707295  8bce                 mov ecx, esi
// 00707297  896c241c             mov dword ptr [esp + 0x1c], ebp
// 0070729b  895c2420             mov dword ptr [esp + 0x20], ebx
// 0070729f  e8dcfdffff           call 0x707080
// 007072a4  6a01                 push 1
// 007072a6  8bce                 mov ecx, esi
// 007072a8  8bd8                 mov ebx, eax
// 007072aa  e821feffff           call 0x7070d0
// 007072af  895f04               mov dword ptr [edi + 4], ebx
// 007072b2  8b5304               mov edx, dword ptr [ebx + 4]
// 007072b5  891a                 mov dword ptr [edx], ebx
// 007072b7  5f                   pop edi
// 007072b8  5e                   pop esi
// 007072b9  5d                   pop ebp
// 007072ba  b001                 mov al, 1
// 007072bc  5b                   pop ebx
// 007072bd  83c40c               add esp, 0xc
// 007072c0  c20c00               ret 0xc
// library rbxgs/v8xml\SerializerV2.cpp (function ?processIDREF@ArchiveBinder@@UAE_NPBVXmlNameValuePair@@PAVDescribedBase@Reflection@RBX@@PBVIIDREF@5@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/SerializerV2.cpp
