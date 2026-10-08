// roc 2009-06 005fab70  unit: RBX::ServiceProvider  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005fab70
//
// 005fab70  8b442404             mov eax, dword ptr [esp + 4]
// 005fab74  6a00                 push 0
// 005fab76  68d0d89d00           push 0x9dd8d0
// 005fab7b  6840be9d00           push 0x9dbe40
// 005fab80  6a00                 push 0
// 005fab82  50                   push eax
// 005fab83  e8f2f01100           call 0x719c7a
// 005fab88  83c414               add esp, 0x14
// 005fab8b  f7d8                 neg eax
// 005fab8d  1bc0                 sbb eax, eax
// 005fab8f  f7d8                 neg eax
// 005fab91  c20400               ret 4
// library rbxgs/v8tree\Service.cpp (function ?askAddChild@ServiceProvider@RBX@@MBE_NPBVInstance@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Service.cpp
