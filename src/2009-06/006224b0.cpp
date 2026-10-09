// roc 2009-06 006224b0  unit: RBX::RootInstance  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006224b0
//
// 006224b0  53                   push ebx
// 006224b1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 006224b5  56                   push esi
// 006224b6  57                   push edi
// 006224b7  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 006224bb  57                   push edi
// 006224bc  8d4b10               lea ecx, [ebx + 0x10]
// 006224bf  e81cffffff           call 0x6223e0
// 006224c4  8b7320               mov esi, dword ptr [ebx + 0x20]
// 006224c7  85f6                 test esi, esi
// 006224c9  7414                 je 0x6224df
// 006224cb  eb03                 jmp 0x6224d0
// 006224cd  8d4900               lea ecx, [ecx]
// 006224d0  57                   push edi
// 006224d1  8d4e08               lea ecx, [esi + 8]
// 006224d4  e807ffffff           call 0x6223e0
// 006224d9  8b36                 mov esi, dword ptr [esi]
// 006224db  85f6                 test esi, esi
// 006224dd  75f1                 jne 0x6224d0
// 006224df  8b7304               mov esi, dword ptr [ebx + 4]
// 006224e2  85f6                 test esi, esi
// 006224e4  7410                 je 0x6224f6
// 006224e6  57                   push edi
// 006224e7  56                   push esi
// 006224e8  e8c3ffffff           call 0x6224b0
// 006224ed  8b36                 mov esi, dword ptr [esi]
// 006224ef  83c408               add esp, 8
// 006224f2  85f6                 test esi, esi
// 006224f4  75f0                 jne 0x6224e6
// 006224f6  5f                   pop edi
// 006224f7  5e                   pop esi
// 006224f8  5b                   pop ebx
// 006224f9  c3                   ret 
// library openrbx-client/App\v8xml\SerializerV2.cpp (function ?isolate@@YAXPAVXmlElement@@ABV?$map@PAVInstance@RBX@@VInstanceHandle@2@U?$less@PAVInstance@RBX@@@std@@V?$allocator@U?$pair@QAVInstance@RBX@@VInstanceHandle@2@@std@@@5@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8xml/SerializerV2.cpp
