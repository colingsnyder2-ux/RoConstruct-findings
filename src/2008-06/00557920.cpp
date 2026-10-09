// roc 2008-06 00557920  unit: RBX::VInstance::?$NonFactoryProduct  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00557920
//
// 00557920  8b442404             mov eax, dword ptr [esp + 4]
// 00557924  56                   push esi
// 00557925  8b7004               mov esi, dword ptr [eax + 4]
// 00557928  57                   push edi
// 00557929  8bf9                 mov edi, ecx
// 0055792b  85f6                 test esi, esi
// 0055792d  7417                 je 0x557946
// 0055792f  53                   push ebx
// 00557930  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 00557934  8b17                 mov edx, dword ptr [edi]
// 00557936  8b422c               mov eax, dword ptr [edx + 0x2c]
// 00557939  53                   push ebx
// 0055793a  56                   push esi
// 0055793b  8bcf                 mov ecx, edi
// 0055793d  ffd0                 call eax
// 0055793f  8b36                 mov esi, dword ptr [esi]
// 00557941  85f6                 test esi, esi
// 00557943  75ef                 jne 0x557934
// 00557945  5b                   pop ebx
// 00557946  5f                   pop edi
// 00557947  5e                   pop esi
// 00557948  c20800               ret 8
// library openrbx-client/App\v8tree\Instance.cpp (function ?readProperties@Instance@RBX@@QAEXPBVXmlElement@@AAVIReferenceBinder@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8tree/Instance.cpp
