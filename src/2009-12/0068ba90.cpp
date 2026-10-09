// roc 2009-12 0068ba90  unit: ArchiveBinder  size: 99 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0068ba90
//
// 0068ba90  83ec0c               sub esp, 0xc
// 0068ba93  53                   push ebx
// 0068ba94  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0068ba98  55                   push ebp
// 0068ba99  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 0068ba9d  56                   push esi
// 0068ba9e  57                   push edi
// 0068ba9f  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 0068baa3  57                   push edi
// 0068baa4  53                   push ebx
// 0068baa5  55                   push ebp
// 0068baa6  8bf1                 mov esi, ecx
// 0068baa8  e8837fdbff           call 0x443a30
// 0068baad  84c0                 test al, al
// 0068baaf  7536                 jne 0x68bae7
// 0068bab1  83c63c               add esi, 0x3c
// 0068bab4  897c2418             mov dword ptr [esp + 0x18], edi
// 0068bab8  8b7e14               mov edi, dword ptr [esi + 0x14]
// 0068babb  8b4f04               mov ecx, dword ptr [edi + 4]
// 0068babe  8d442410             lea eax, [esp + 0x10]
// 0068bac2  50                   push eax
// 0068bac3  51                   push ecx
// 0068bac4  57                   push edi
// 0068bac5  8bce                 mov ecx, esi
// 0068bac7  896c241c             mov dword ptr [esp + 0x1c], ebp
// 0068bacb  895c2420             mov dword ptr [esp + 0x20], ebx
// 0068bacf  e82cfbffff           call 0x68b600
// 0068bad4  6a01                 push 1
// 0068bad6  8bce                 mov ecx, esi
// 0068bad8  8bd8                 mov ebx, eax
// 0068bada  e871fbffff           call 0x68b650
// 0068badf  895f04               mov dword ptr [edi + 4], ebx
// 0068bae2  8b5304               mov edx, dword ptr [ebx + 4]
// 0068bae5  891a                 mov dword ptr [edx], ebx
// 0068bae7  5f                   pop edi
// 0068bae8  5e                   pop esi
// 0068bae9  5d                   pop ebp
// 0068baea  b001                 mov al, 1
// 0068baec  5b                   pop ebx
// 0068baed  83c40c               add esp, 0xc
// 0068baf0  c20c00               ret 0xc
// library rbxgs/v8xml\SerializerV2.cpp (function ?processIDREF@ArchiveBinder@@UAE_NPBVXmlNameValuePair@@PAVDescribedBase@Reflection@RBX@@PBVIIDREF@5@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/SerializerV2.cpp
