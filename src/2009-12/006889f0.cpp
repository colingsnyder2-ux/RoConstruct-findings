// roc 2009-12 006889f0  unit: RBX::ChangeHistoryService  size: 115 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006889f0
//
// 006889f0  53                   push ebx
// 006889f1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 006889f5  57                   push edi
// 006889f6  8bf9                 mov edi, ecx
// 006889f8  85db                 test ebx, ebx
// 006889fa  7462                 je 0x688a5e
// 006889fc  8b07                 mov eax, dword ptr [edi]
// 006889fe  8b5004               mov edx, dword ptr [eax + 4]
// 00688a01  55                   push ebp
// 00688a02  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00688a06  56                   push esi
// 00688a07  55                   push ebp
// 00688a08  53                   push ebx
// 00688a09  ffd2                 call edx
// 00688a0b  8b7304               mov esi, dword ptr [ebx + 4]
// 00688a0e  85f6                 test esi, esi
// 00688a10  7440                 je 0x688a52
// 00688a12  45                   inc ebp
// 00688a13  8b4724               mov eax, dword ptr [edi + 0x24]
// 00688a16  6a0a                 push 0xa
// 00688a18  50                   push eax
// 00688a19  e8f240dcff           call 0x44cb10
// 00688a1e  83c408               add esp, 8
// 00688a21  55                   push ebp
// 00688a22  56                   push esi
// 00688a23  8bcf                 mov ecx, edi
// 00688a25  e8c6ffffff           call 0x6889f0
// 00688a2a  8b36                 mov esi, dword ptr [esi]
// 00688a2c  85f6                 test esi, esi
// 00688a2e  75e3                 jne 0x688a13
// 00688a30  8b4f24               mov ecx, dword ptr [edi + 0x24]
// 00688a33  6a0a                 push 0xa
// 00688a35  51                   push ecx
// 00688a36  e8d540dcff           call 0x44cb10
// 00688a3b  8b542420             mov edx, dword ptr [esp + 0x20]
// 00688a3f  83c408               add esp, 8
// 00688a42  52                   push edx
// 00688a43  53                   push ebx
// 00688a44  8bcf                 mov ecx, edi
// 00688a46  e845ffffff           call 0x688990
// 00688a4b  5e                   pop esi
// 00688a4c  5d                   pop ebp
// 00688a4d  5f                   pop edi
// 00688a4e  5b                   pop ebx
// 00688a4f  c20800               ret 8
// 00688a52  6a00                 push 0
// 00688a54  53                   push ebx
// 00688a55  8bcf                 mov ecx, edi
// 00688a57  e834ffffff           call 0x688990
// 00688a5c  5e                   pop esi
// 00688a5d  5d                   pop ebp
// 00688a5e  5f                   pop edi
// 00688a5f  5b                   pop ebx
// 00688a60  c20800               ret 8
// library openrbx-client/App\v8xml\XmlSerializer.cpp (function ?serialize@TextXmlWriter@@IAEXPBVXmlElement@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8xml/XmlSerializer.cpp
