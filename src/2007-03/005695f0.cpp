// roc 2007-03 005695f0  unit: seg_00560000  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005695f0
//
// 005695f0  53                   push ebx
// 005695f1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 005695f5  56                   push esi
// 005695f6  57                   push edi
// 005695f7  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 005695fb  57                   push edi
// 005695fc  8d4b0c               lea ecx, [ebx + 0xc]
// 005695ff  e85cffffff           call 0x569560
// 00569604  8b7318               mov esi, dword ptr [ebx + 0x18]
// 00569607  85f6                 test esi, esi
// 00569609  7414                 je 0x56961f
// 0056960b  eb03                 jmp 0x569610
// 0056960d  8d4900               lea ecx, [ecx]
// 00569610  57                   push edi
// 00569611  8d4e04               lea ecx, [esi + 4]
// 00569614  e847ffffff           call 0x569560
// 00569619  8b36                 mov esi, dword ptr [esi]
// 0056961b  85f6                 test esi, esi
// 0056961d  75f1                 jne 0x569610
// 0056961f  8b7304               mov esi, dword ptr [ebx + 4]
// 00569622  85f6                 test esi, esi
// 00569624  7410                 je 0x569636
// 00569626  57                   push edi
// 00569627  56                   push esi
// 00569628  e8c3ffffff           call 0x5695f0
// 0056962d  8b36                 mov esi, dword ptr [esi]
// 0056962f  83c408               add esp, 8
// 00569632  85f6                 test esi, esi
// 00569634  75f0                 jne 0x569626
// 00569636  5f                   pop edi
// 00569637  5e                   pop esi
// 00569638  5b                   pop ebx
// 00569639  c3                   ret 
// library rbxgs/v8xml\SerializerV2.cpp (function ?isolate@@YAXPAVXmlElement@@ABV?$map@PAVInstance@RBX@@VInstanceHandle@2@U?$less@PAVInstance@RBX@@@std@@V?$allocator@U?$pair@QAVInstance@RBX@@VInstanceHandle@2@@std@@@5@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/SerializerV2.cpp
