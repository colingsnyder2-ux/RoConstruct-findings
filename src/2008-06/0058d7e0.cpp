// roc 2008-06 0058d7e0  unit: RBX::ChangeHistoryService  size: 115 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0058d7e0
//
// 0058d7e0  53                   push ebx
// 0058d7e1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 0058d7e5  57                   push edi
// 0058d7e6  8bf9                 mov edi, ecx
// 0058d7e8  85db                 test ebx, ebx
// 0058d7ea  7462                 je 0x58d84e
// 0058d7ec  8b07                 mov eax, dword ptr [edi]
// 0058d7ee  8b5004               mov edx, dword ptr [eax + 4]
// 0058d7f1  55                   push ebp
// 0058d7f2  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0058d7f6  56                   push esi
// 0058d7f7  55                   push ebp
// 0058d7f8  53                   push ebx
// 0058d7f9  ffd2                 call edx
// 0058d7fb  8b7304               mov esi, dword ptr [ebx + 4]
// 0058d7fe  85f6                 test esi, esi
// 0058d800  7440                 je 0x58d842
// 0058d802  45                   inc ebp
// 0058d803  8b4724               mov eax, dword ptr [edi + 0x24]
// 0058d806  6a0a                 push 0xa
// 0058d808  50                   push eax
// 0058d809  e832ceebff           call 0x44a640
// 0058d80e  83c408               add esp, 8
// 0058d811  55                   push ebp
// 0058d812  56                   push esi
// 0058d813  8bcf                 mov ecx, edi
// 0058d815  e8c6ffffff           call 0x58d7e0
// 0058d81a  8b36                 mov esi, dword ptr [esi]
// 0058d81c  85f6                 test esi, esi
// 0058d81e  75e3                 jne 0x58d803
// 0058d820  8b4f24               mov ecx, dword ptr [edi + 0x24]
// 0058d823  6a0a                 push 0xa
// 0058d825  51                   push ecx
// 0058d826  e815ceebff           call 0x44a640
// 0058d82b  8b542420             mov edx, dword ptr [esp + 0x20]
// 0058d82f  83c408               add esp, 8
// 0058d832  52                   push edx
// 0058d833  53                   push ebx
// 0058d834  8bcf                 mov ecx, edi
// 0058d836  e845ffffff           call 0x58d780
// 0058d83b  5e                   pop esi
// 0058d83c  5d                   pop ebp
// 0058d83d  5f                   pop edi
// 0058d83e  5b                   pop ebx
// 0058d83f  c20800               ret 8
// 0058d842  6a00                 push 0
// 0058d844  53                   push ebx
// 0058d845  8bcf                 mov ecx, edi
// 0058d847  e834ffffff           call 0x58d780
// 0058d84c  5e                   pop esi
// 0058d84d  5d                   pop ebp
// 0058d84e  5f                   pop edi
// 0058d84f  5b                   pop ebx
// 0058d850  c20800               ret 8
// library openrbx-client/App\v8xml\XmlSerializer.cpp (function ?serialize@TextXmlWriter@@IAEXPBVXmlElement@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8xml/XmlSerializer.cpp
