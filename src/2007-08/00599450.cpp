// roc 2007-08 00599450  unit: RBX::Camera  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00599450
//
// 00599450  8b442404             mov eax, dword ptr [esp + 4]
// 00599454  6a00                 push 0
// 00599456  688c1c8a00           push 0x8a1c8c
// 0059945b  684c1f8800           push 0x881f4c
// 00599460  6a00                 push 0
// 00599462  50                   push eax
// 00599463  e8ce780900           call 0x630d36
// 00599468  83c414               add esp, 0x14
// 0059946b  f7d8                 neg eax
// 0059946d  1bc0                 sbb eax, eax
// 0059946f  f7d8                 neg eax
// 00599471  c20400               ret 4
// library rbxgs/v8datamodel\Camera.cpp (function ?askSetParent@Camera@RBX@@EBE_NPBVInstance@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Camera.cpp
