// roc 2009-06 00623c00  unit: ArchiveBinder  size: 99 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00623c00
//
// 00623c00  83ec0c               sub esp, 0xc
// 00623c03  53                   push ebx
// 00623c04  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00623c08  55                   push ebp
// 00623c09  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 00623c0d  56                   push esi
// 00623c0e  57                   push edi
// 00623c0f  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 00623c13  57                   push edi
// 00623c14  53                   push ebx
// 00623c15  55                   push ebp
// 00623c16  8bf1                 mov esi, ecx
// 00623c18  e823b8e1ff           call 0x43f440
// 00623c1d  84c0                 test al, al
// 00623c1f  7536                 jne 0x623c57
// 00623c21  83c63c               add esi, 0x3c
// 00623c24  897c2418             mov dword ptr [esp + 0x18], edi
// 00623c28  8b7e14               mov edi, dword ptr [esi + 0x14]
// 00623c2b  8b4f04               mov ecx, dword ptr [edi + 4]
// 00623c2e  8d442410             lea eax, [esp + 0x10]
// 00623c32  50                   push eax
// 00623c33  51                   push ecx
// 00623c34  57                   push edi
// 00623c35  8bce                 mov ecx, esi
// 00623c37  896c241c             mov dword ptr [esp + 0x1c], ebp
// 00623c3b  895c2420             mov dword ptr [esp + 0x20], ebx
// 00623c3f  e8fcf7ffff           call 0x623440
// 00623c44  6a01                 push 1
// 00623c46  8bce                 mov ecx, esi
// 00623c48  8bd8                 mov ebx, eax
// 00623c4a  e841f8ffff           call 0x623490
// 00623c4f  895f04               mov dword ptr [edi + 4], ebx
// 00623c52  8b5304               mov edx, dword ptr [ebx + 4]
// 00623c55  891a                 mov dword ptr [edx], ebx
// 00623c57  5f                   pop edi
// 00623c58  5e                   pop esi
// 00623c59  5d                   pop ebp
// 00623c5a  b001                 mov al, 1
// 00623c5c  5b                   pop ebx
// 00623c5d  83c40c               add esp, 0xc
// 00623c60  c20c00               ret 0xc
// library rbxgs/v8xml\SerializerV2.cpp (function ?processIDREF@ArchiveBinder@@UAE_NPBVXmlNameValuePair@@PAVDescribedBase@Reflection@RBX@@PBVIIDREF@5@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/SerializerV2.cpp
