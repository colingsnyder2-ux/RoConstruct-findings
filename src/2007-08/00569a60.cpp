// roc 2007-08 00569a60  unit: RBX::ModelInstance  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00569a60
//
// 00569a60  53                   push ebx
// 00569a61  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00569a65  56                   push esi
// 00569a66  57                   push edi
// 00569a67  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00569a6b  57                   push edi
// 00569a6c  8d4b0c               lea ecx, [ebx + 0xc]
// 00569a6f  e82cffffff           call 0x5699a0
// 00569a74  8b7318               mov esi, dword ptr [ebx + 0x18]
// 00569a77  85f6                 test esi, esi
// 00569a79  7414                 je 0x569a8f
// 00569a7b  eb03                 jmp 0x569a80
// 00569a7d  8d4900               lea ecx, [ecx]
// 00569a80  57                   push edi
// 00569a81  8d4e04               lea ecx, [esi + 4]
// 00569a84  e817ffffff           call 0x5699a0
// 00569a89  8b36                 mov esi, dword ptr [esi]
// 00569a8b  85f6                 test esi, esi
// 00569a8d  75f1                 jne 0x569a80
// 00569a8f  8b7304               mov esi, dword ptr [ebx + 4]
// 00569a92  85f6                 test esi, esi
// 00569a94  7410                 je 0x569aa6
// 00569a96  57                   push edi
// 00569a97  56                   push esi
// 00569a98  e8c3ffffff           call 0x569a60
// 00569a9d  8b36                 mov esi, dword ptr [esi]
// 00569a9f  83c408               add esp, 8
// 00569aa2  85f6                 test esi, esi
// 00569aa4  75f0                 jne 0x569a96
// 00569aa6  5f                   pop edi
// 00569aa7  5e                   pop esi
// 00569aa8  5b                   pop ebx
// 00569aa9  c3                   ret 
// library rbxgs/v8xml\SerializerV2.cpp (function ?isolate@@YAXPAVXmlElement@@ABV?$map@PAVInstance@RBX@@VInstanceHandle@2@U?$less@PAVInstance@RBX@@@std@@V?$allocator@U?$pair@QAVInstance@RBX@@VInstanceHandle@2@@std@@@5@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/SerializerV2.cpp
