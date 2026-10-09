// roc 2007-03 0053f790  unit: seg_00530000  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0053f790
//
// 0053f790  8b442404             mov eax, dword ptr [esp + 4]
// 0053f794  56                   push esi
// 0053f795  8b7004               mov esi, dword ptr [eax + 4]
// 0053f798  85f6                 test esi, esi
// 0053f79a  57                   push edi
// 0053f79b  8bf9                 mov edi, ecx
// 0053f79d  7417                 je 0x53f7b6
// 0053f79f  53                   push ebx
// 0053f7a0  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 0053f7a4  8b17                 mov edx, dword ptr [edi]
// 0053f7a6  8b422c               mov eax, dword ptr [edx + 0x2c]
// 0053f7a9  53                   push ebx
// 0053f7aa  56                   push esi
// 0053f7ab  8bcf                 mov ecx, edi
// 0053f7ad  ffd0                 call eax
// 0053f7af  8b36                 mov esi, dword ptr [esi]
// 0053f7b1  85f6                 test esi, esi
// 0053f7b3  75ef                 jne 0x53f7a4
// 0053f7b5  5b                   pop ebx
// 0053f7b6  5f                   pop edi
// 0053f7b7  5e                   pop esi
// 0053f7b8  c20800               ret 8
// library openrbx-client/App\v8tree\Instance.cpp (function ?readProperties@Instance@RBX@@QAEXPBVXmlElement@@AAVIReferenceBinder@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8tree/Instance.cpp
