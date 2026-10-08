// roc 2009-06 00659450  unit: RBX::Camera  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00659450
//
// 00659450  8b442404             mov eax, dword ptr [esp + 4]
// 00659454  6a00                 push 0
// 00659456  68a481a000           push 0xa081a4
// 0065945b  6840be9d00           push 0x9dbe40
// 00659460  6a00                 push 0
// 00659462  50                   push eax
// 00659463  e812080c00           call 0x719c7a
// 00659468  83c414               add esp, 0x14
// 0065946b  f7d8                 neg eax
// 0065946d  1bc0                 sbb eax, eax
// 0065946f  f7d8                 neg eax
// 00659471  c20400               ret 4
// library rbxgs/v8datamodel\Camera.cpp (function ?askSetParent@Camera@RBX@@EBE_NPBVInstance@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Camera.cpp
