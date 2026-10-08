// roc 2007-08 005b8d50  unit: RBX::VDecal::?$FactoryProduct  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b8d50
//
// 005b8d50  8b442404             mov eax, dword ptr [esp + 4]
// 005b8d54  6a00                 push 0
// 005b8d56  68284a8800           push 0x884a28
// 005b8d5b  684c1f8800           push 0x881f4c
// 005b8d60  6a00                 push 0
// 005b8d62  50                   push eax
// 005b8d63  e8ce7f0700           call 0x630d36
// 005b8d68  83c414               add esp, 0x14
// 005b8d6b  f7d8                 neg eax
// 005b8d6d  1bc0                 sbb eax, eax
// 005b8d6f  f7d8                 neg eax
// 005b8d71  c20400               ret 4
// library rbxgs/v8datamodel\FaceInstance.cpp (function ?askSetParent@FaceInstance@RBX@@MBE_NPBVInstance@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FaceInstance.cpp
