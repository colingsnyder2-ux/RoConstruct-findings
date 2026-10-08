// roc 2007-08 005659f0  unit: RBX::Verb  size: 117 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005659f0
//
// 005659f0  53                   push ebx
// 005659f1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 005659f5  85db                 test ebx, ebx
// 005659f7  57                   push edi
// 005659f8  8bf9                 mov edi, ecx
// 005659fa  7464                 je 0x565a60
// 005659fc  8b07                 mov eax, dword ptr [edi]
// 005659fe  8b5004               mov edx, dword ptr [eax + 4]
// 00565a01  55                   push ebp
// 00565a02  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00565a06  56                   push esi
// 00565a07  55                   push ebp
// 00565a08  53                   push ebx
// 00565a09  ffd2                 call edx
// 00565a0b  8b7304               mov esi, dword ptr [ebx + 4]
// 00565a0e  85f6                 test esi, esi
// 00565a10  7442                 je 0x565a54
// 00565a12  83c501               add ebp, 1
// 00565a15  8b4710               mov eax, dword ptr [edi + 0x10]
// 00565a18  6a0a                 push 0xa
// 00565a1a  50                   push eax
// 00565a1b  e82000feff           call 0x545a40
// 00565a20  83c408               add esp, 8
// 00565a23  55                   push ebp
// 00565a24  56                   push esi
// 00565a25  8bcf                 mov ecx, edi
// 00565a27  e8c4ffffff           call 0x5659f0
// 00565a2c  8b36                 mov esi, dword ptr [esi]
// 00565a2e  85f6                 test esi, esi
// 00565a30  75e3                 jne 0x565a15
// 00565a32  8b4f10               mov ecx, dword ptr [edi + 0x10]
// 00565a35  6a0a                 push 0xa
// 00565a37  51                   push ecx
// 00565a38  e80300feff           call 0x545a40
// 00565a3d  8b542420             mov edx, dword ptr [esp + 0x20]
// 00565a41  83c408               add esp, 8
// 00565a44  52                   push edx
// 00565a45  53                   push ebx
// 00565a46  8bcf                 mov ecx, edi
// 00565a48  e843ffffff           call 0x565990
// 00565a4d  5e                   pop esi
// 00565a4e  5d                   pop ebp
// 00565a4f  5f                   pop edi
// 00565a50  5b                   pop ebx
// 00565a51  c20800               ret 8
// 00565a54  6a00                 push 0
// 00565a56  53                   push ebx
// 00565a57  8bcf                 mov ecx, edi
// 00565a59  e832ffffff           call 0x565990
// 00565a5e  5e                   pop esi
// 00565a5f  5d                   pop ebp
// 00565a60  5f                   pop edi
// 00565a61  5b                   pop ebx
// 00565a62  c20800               ret 8
// library openrbx-client/App\v8xml\XmlSerializer.cpp (function ?serialize@TextXmlWriter@@IAEXPBVXmlElement@@H@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8xml/XmlSerializer.cpp
