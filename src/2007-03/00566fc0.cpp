// roc 2007-03 00566fc0  unit: seg_00560000  size: 117 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00566fc0
//
// 00566fc0  53                   push ebx
// 00566fc1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00566fc5  85db                 test ebx, ebx
// 00566fc7  57                   push edi
// 00566fc8  8bf9                 mov edi, ecx
// 00566fca  7464                 je 0x567030
// 00566fcc  8b07                 mov eax, dword ptr [edi]
// 00566fce  8b5004               mov edx, dword ptr [eax + 4]
// 00566fd1  55                   push ebp
// 00566fd2  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00566fd6  56                   push esi
// 00566fd7  55                   push ebp
// 00566fd8  53                   push ebx
// 00566fd9  ffd2                 call edx
// 00566fdb  8b7304               mov esi, dword ptr [ebx + 4]
// 00566fde  85f6                 test esi, esi
// 00566fe0  7442                 je 0x567024
// 00566fe2  83c501               add ebp, 1
// 00566fe5  8b4710               mov eax, dword ptr [edi + 0x10]
// 00566fe8  6a0a                 push 0xa
// 00566fea  50                   push eax
// 00566feb  e860e0fdff           call 0x545050
// 00566ff0  83c408               add esp, 8
// 00566ff3  55                   push ebp
// 00566ff4  56                   push esi
// 00566ff5  8bcf                 mov ecx, edi
// 00566ff7  e8c4ffffff           call 0x566fc0
// 00566ffc  8b36                 mov esi, dword ptr [esi]
// 00566ffe  85f6                 test esi, esi
// 00567000  75e3                 jne 0x566fe5
// 00567002  8b4f10               mov ecx, dword ptr [edi + 0x10]
// 00567005  6a0a                 push 0xa
// 00567007  51                   push ecx
// 00567008  e843e0fdff           call 0x545050
// 0056700d  8b542420             mov edx, dword ptr [esp + 0x20]
// 00567011  83c408               add esp, 8
// 00567014  52                   push edx
// 00567015  53                   push ebx
// 00567016  8bcf                 mov ecx, edi
// 00567018  e843ffffff           call 0x566f60
// 0056701d  5e                   pop esi
// 0056701e  5d                   pop ebp
// 0056701f  5f                   pop edi
// 00567020  5b                   pop ebx
// 00567021  c20800               ret 8
// 00567024  6a00                 push 0
// 00567026  53                   push ebx
// 00567027  8bcf                 mov ecx, edi
// 00567029  e832ffffff           call 0x566f60
// 0056702e  5e                   pop esi
// 0056702f  5d                   pop ebp
// 00567030  5f                   pop edi
// 00567031  5b                   pop ebx
// 00567032  c20800               ret 8
// library openrbx-client/App\v8xml\XmlSerializer.cpp (function ?serialize@TextXmlWriter@@IAEXPBVXmlElement@@H@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8xml/XmlSerializer.cpp
