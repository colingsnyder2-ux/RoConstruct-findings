// roc 2011-06 00663f00  unit: RBX::Camera  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00663f00
//
// 00663f00  8b442404             mov eax, dword ptr [esp + 4]
// 00663f04  6a00                 push 0
// 00663f06  682c91c400           push 0xc4912c
// 00663f0b  68f871c000           push 0xc071f8
// 00663f10  6a00                 push 0
// 00663f12  50                   push eax
// 00663f13  e8d2731a00           call 0x80b2ea
// 00663f18  83c414               add esp, 0x14
// 00663f1b  f7d8                 neg eax
// 00663f1d  1bc0                 sbb eax, eax
// 00663f1f  f7d8                 neg eax
// 00663f21  c20400               ret 4
// library rbxgs/v8datamodel\Camera.cpp (function ?askSetParent@Camera@RBX@@EBE_NPBVInstance@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Camera.cpp
