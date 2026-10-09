// roc 2010-06 005efc90  unit: RBX::ChangeHistoryService  size: 115 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005efc90
//
// 005efc90  53                   push ebx
// 005efc91  8b5c2408             mov ebx, dword ptr [esp + 8]
// 005efc95  57                   push edi
// 005efc96  8bf9                 mov edi, ecx
// 005efc98  85db                 test ebx, ebx
// 005efc9a  7462                 je 0x5efcfe
// 005efc9c  8b07                 mov eax, dword ptr [edi]
// 005efc9e  8b5004               mov edx, dword ptr [eax + 4]
// 005efca1  55                   push ebp
// 005efca2  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 005efca6  56                   push esi
// 005efca7  55                   push ebp
// 005efca8  53                   push ebx
// 005efca9  ffd2                 call edx
// 005efcab  8b7304               mov esi, dword ptr [ebx + 4]
// 005efcae  85f6                 test esi, esi
// 005efcb0  7440                 je 0x5efcf2
// 005efcb2  45                   inc ebp
// 005efcb3  8b4724               mov eax, dword ptr [edi + 0x24]
// 005efcb6  6a0a                 push 0xa
// 005efcb8  50                   push eax
// 005efcb9  e852e4e5ff           call 0x44e110
// 005efcbe  83c408               add esp, 8
// 005efcc1  55                   push ebp
// 005efcc2  56                   push esi
// 005efcc3  8bcf                 mov ecx, edi
// 005efcc5  e8c6ffffff           call 0x5efc90
// 005efcca  8b36                 mov esi, dword ptr [esi]
// 005efccc  85f6                 test esi, esi
// 005efcce  75e3                 jne 0x5efcb3
// 005efcd0  8b4f24               mov ecx, dword ptr [edi + 0x24]
// 005efcd3  6a0a                 push 0xa
// 005efcd5  51                   push ecx
// 005efcd6  e835e4e5ff           call 0x44e110
// 005efcdb  8b542420             mov edx, dword ptr [esp + 0x20]
// 005efcdf  83c408               add esp, 8
// 005efce2  52                   push edx
// 005efce3  53                   push ebx
// 005efce4  8bcf                 mov ecx, edi
// 005efce6  e845ffffff           call 0x5efc30
// 005efceb  5e                   pop esi
// 005efcec  5d                   pop ebp
// 005efced  5f                   pop edi
// 005efcee  5b                   pop ebx
// 005efcef  c20800               ret 8
// 005efcf2  6a00                 push 0
// 005efcf4  53                   push ebx
// 005efcf5  8bcf                 mov ecx, edi
// 005efcf7  e834ffffff           call 0x5efc30
// 005efcfc  5e                   pop esi
// 005efcfd  5d                   pop ebp
// 005efcfe  5f                   pop edi
// 005efcff  5b                   pop ebx
// 005efd00  c20800               ret 8
// library openrbx-client/App\v8xml\XmlSerializer.cpp (function ?serialize@TextXmlWriter@@IAEXPBVXmlElement@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8xml/XmlSerializer.cpp
