// roc 2010-06 005cc330  unit: RBX::ServiceProvider  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005cc330
//
// 005cc330  8b442404             mov eax, dword ptr [esp + 4]
// 005cc334  6a00                 push 0
// 005cc336  6898a9b700           push 0xb7a998
// 005cc33b  68408eb700           push 0xb78e40
// 005cc340  6a00                 push 0
// 005cc342  50                   push eax
// 005cc343  e8a2c81d00           call 0x7a8bea
// 005cc348  83c414               add esp, 0x14
// 005cc34b  f7d8                 neg eax
// 005cc34d  1bc0                 sbb eax, eax
// 005cc34f  f7d8                 neg eax
// 005cc351  c20400               ret 4
// library rbxgs/v8tree\Service.cpp (function ?askAddChild@ServiceProvider@RBX@@MBE_NPBVInstance@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Service.cpp
