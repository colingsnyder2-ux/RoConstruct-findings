// roc 2009-12 0068af60  unit: TextXmlParser  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0068af60
//
// 0068af60  53                   push ebx
// 0068af61  8b5c2408             mov ebx, dword ptr [esp + 8]
// 0068af65  56                   push esi
// 0068af66  57                   push edi
// 0068af67  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0068af6b  57                   push edi
// 0068af6c  8d4b10               lea ecx, [ebx + 0x10]
// 0068af6f  e81cffffff           call 0x68ae90
// 0068af74  8b7320               mov esi, dword ptr [ebx + 0x20]
// 0068af77  85f6                 test esi, esi
// 0068af79  7414                 je 0x68af8f
// 0068af7b  eb03                 jmp 0x68af80
// 0068af7d  8d4900               lea ecx, [ecx]
// 0068af80  57                   push edi
// 0068af81  8d4e08               lea ecx, [esi + 8]
// 0068af84  e807ffffff           call 0x68ae90
// 0068af89  8b36                 mov esi, dword ptr [esi]
// 0068af8b  85f6                 test esi, esi
// 0068af8d  75f1                 jne 0x68af80
// 0068af8f  8b7304               mov esi, dword ptr [ebx + 4]
// 0068af92  85f6                 test esi, esi
// 0068af94  7410                 je 0x68afa6
// 0068af96  57                   push edi
// 0068af97  56                   push esi
// 0068af98  e8c3ffffff           call 0x68af60
// 0068af9d  8b36                 mov esi, dword ptr [esi]
// 0068af9f  83c408               add esp, 8
// 0068afa2  85f6                 test esi, esi
// 0068afa4  75f0                 jne 0x68af96
// 0068afa6  5f                   pop edi
// 0068afa7  5e                   pop esi
// 0068afa8  5b                   pop ebx
// 0068afa9  c3                   ret 
// library openrbx-client/App\v8xml\SerializerV2.cpp (function ?isolate@@YAXPAVXmlElement@@ABV?$map@PAVInstance@RBX@@VInstanceHandle@2@U?$less@PAVInstance@RBX@@@std@@V?$allocator@U?$pair@QAVInstance@RBX@@VInstanceHandle@2@@std@@@5@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8xml/SerializerV2.cpp
