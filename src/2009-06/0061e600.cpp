// roc 2009-06 0061e600  unit: RBX::ChangeHistoryService  size: 115 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0061e600
//
// 0061e600  53                   push ebx
// 0061e601  8b5c2408             mov ebx, dword ptr [esp + 8]
// 0061e605  57                   push edi
// 0061e606  8bf9                 mov edi, ecx
// 0061e608  85db                 test ebx, ebx
// 0061e60a  7462                 je 0x61e66e
// 0061e60c  8b07                 mov eax, dword ptr [edi]
// 0061e60e  8b5004               mov edx, dword ptr [eax + 4]
// 0061e611  55                   push ebp
// 0061e612  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0061e616  56                   push esi
// 0061e617  55                   push ebp
// 0061e618  53                   push ebx
// 0061e619  ffd2                 call edx
// 0061e61b  8b7304               mov esi, dword ptr [ebx + 4]
// 0061e61e  85f6                 test esi, esi
// 0061e620  7440                 je 0x61e662
// 0061e622  45                   inc ebp
// 0061e623  8b4724               mov eax, dword ptr [edi + 0x24]
// 0061e626  6a0a                 push 0xa
// 0061e628  50                   push eax
// 0061e629  e8d282e2ff           call 0x446900
// 0061e62e  83c408               add esp, 8
// 0061e631  55                   push ebp
// 0061e632  56                   push esi
// 0061e633  8bcf                 mov ecx, edi
// 0061e635  e8c6ffffff           call 0x61e600
// 0061e63a  8b36                 mov esi, dword ptr [esi]
// 0061e63c  85f6                 test esi, esi
// 0061e63e  75e3                 jne 0x61e623
// 0061e640  8b4f24               mov ecx, dword ptr [edi + 0x24]
// 0061e643  6a0a                 push 0xa
// 0061e645  51                   push ecx
// 0061e646  e8b582e2ff           call 0x446900
// 0061e64b  8b542420             mov edx, dword ptr [esp + 0x20]
// 0061e64f  83c408               add esp, 8
// 0061e652  52                   push edx
// 0061e653  53                   push ebx
// 0061e654  8bcf                 mov ecx, edi
// 0061e656  e845ffffff           call 0x61e5a0
// 0061e65b  5e                   pop esi
// 0061e65c  5d                   pop ebp
// 0061e65d  5f                   pop edi
// 0061e65e  5b                   pop ebx
// 0061e65f  c20800               ret 8
// 0061e662  6a00                 push 0
// 0061e664  53                   push ebx
// 0061e665  8bcf                 mov ecx, edi
// 0061e667  e834ffffff           call 0x61e5a0
// 0061e66c  5e                   pop esi
// 0061e66d  5d                   pop ebp
// 0061e66e  5f                   pop edi
// 0061e66f  5b                   pop ebx
// 0061e670  c20800               ret 8
// library openrbx-client/App\v8xml\XmlSerializer.cpp (function ?serialize@TextXmlWriter@@IAEXPBVXmlElement@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8xml/XmlSerializer.cpp
