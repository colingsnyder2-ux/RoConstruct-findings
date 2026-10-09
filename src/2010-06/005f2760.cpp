// roc 2010-06 005f2760  unit: TextXmlParser  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005f2760
//
// 005f2760  53                   push ebx
// 005f2761  8b5c2408             mov ebx, dword ptr [esp + 8]
// 005f2765  56                   push esi
// 005f2766  57                   push edi
// 005f2767  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 005f276b  57                   push edi
// 005f276c  8d4b10               lea ecx, [ebx + 0x10]
// 005f276f  e81cffffff           call 0x5f2690
// 005f2774  8b7320               mov esi, dword ptr [ebx + 0x20]
// 005f2777  85f6                 test esi, esi
// 005f2779  7414                 je 0x5f278f
// 005f277b  eb03                 jmp 0x5f2780
// 005f277d  8d4900               lea ecx, [ecx]
// 005f2780  57                   push edi
// 005f2781  8d4e08               lea ecx, [esi + 8]
// 005f2784  e807ffffff           call 0x5f2690
// 005f2789  8b36                 mov esi, dword ptr [esi]
// 005f278b  85f6                 test esi, esi
// 005f278d  75f1                 jne 0x5f2780
// 005f278f  8b7304               mov esi, dword ptr [ebx + 4]
// 005f2792  85f6                 test esi, esi
// 005f2794  7410                 je 0x5f27a6
// 005f2796  57                   push edi
// 005f2797  56                   push esi
// 005f2798  e8c3ffffff           call 0x5f2760
// 005f279d  8b36                 mov esi, dword ptr [esi]
// 005f279f  83c408               add esp, 8
// 005f27a2  85f6                 test esi, esi
// 005f27a4  75f0                 jne 0x5f2796
// 005f27a6  5f                   pop edi
// 005f27a7  5e                   pop esi
// 005f27a8  5b                   pop ebx
// 005f27a9  c3                   ret 
// library openrbx-client/App\v8xml\SerializerV2.cpp (function ?isolate@@YAXPAVXmlElement@@ABV?$map@PAVInstance@RBX@@VInstanceHandle@2@U?$less@PAVInstance@RBX@@@std@@V?$allocator@U?$pair@QAVInstance@RBX@@VInstanceHandle@2@@std@@@5@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8xml/SerializerV2.cpp
