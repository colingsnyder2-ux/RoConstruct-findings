// roc 2008-06 00591d30  unit: RBX::RootInstance  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00591d30
//
// 00591d30  53                   push ebx
// 00591d31  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00591d35  56                   push esi
// 00591d36  57                   push edi
// 00591d37  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00591d3b  57                   push edi
// 00591d3c  8d4b10               lea ecx, [ebx + 0x10]
// 00591d3f  e81cffffff           call 0x591c60
// 00591d44  8b7320               mov esi, dword ptr [ebx + 0x20]
// 00591d47  85f6                 test esi, esi
// 00591d49  7414                 je 0x591d5f
// 00591d4b  eb03                 jmp 0x591d50
// 00591d4d  8d4900               lea ecx, [ecx]
// 00591d50  57                   push edi
// 00591d51  8d4e08               lea ecx, [esi + 8]
// 00591d54  e807ffffff           call 0x591c60
// 00591d59  8b36                 mov esi, dword ptr [esi]
// 00591d5b  85f6                 test esi, esi
// 00591d5d  75f1                 jne 0x591d50
// 00591d5f  8b7304               mov esi, dword ptr [ebx + 4]
// 00591d62  85f6                 test esi, esi
// 00591d64  7410                 je 0x591d76
// 00591d66  57                   push edi
// 00591d67  56                   push esi
// 00591d68  e8c3ffffff           call 0x591d30
// 00591d6d  8b36                 mov esi, dword ptr [esi]
// 00591d6f  83c408               add esp, 8
// 00591d72  85f6                 test esi, esi
// 00591d74  75f0                 jne 0x591d66
// 00591d76  5f                   pop edi
// 00591d77  5e                   pop esi
// 00591d78  5b                   pop ebx
// 00591d79  c3                   ret 
// library openrbx-client/App\v8xml\SerializerV2.cpp (function ?isolate@@YAXPAVXmlElement@@ABV?$map@PAVInstance@RBX@@VInstanceHandle@2@U?$less@PAVInstance@RBX@@@std@@V?$allocator@U?$pair@QAVInstance@RBX@@VInstanceHandle@2@@std@@@5@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8xml/SerializerV2.cpp
