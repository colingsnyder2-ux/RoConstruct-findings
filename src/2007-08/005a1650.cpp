// roc 2007-08 005a1650  unit: RBX::Humanoid  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005a1650
//
// 005a1650  8b442404             mov eax, dword ptr [esp + 4]
// 005a1654  6a00                 push 0
// 005a1656  68b8c68800           push 0x88c6b8
// 005a165b  684c1f8800           push 0x881f4c
// 005a1660  6a00                 push 0
// 005a1662  50                   push eax
// 005a1663  e8cef60800           call 0x630d36
// 005a1668  83c414               add esp, 0x14
// 005a166b  f7d8                 neg eax
// 005a166d  1bc0                 sbb eax, eax
// 005a166f  f7d8                 neg eax
// 005a1671  c20400               ret 4
// library rbxgs/v8datamodel\ModelInstance.cpp (function ?askSetParent@ModelInstance@RBX@@MBE_NPBVInstance@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/ModelInstance.cpp
