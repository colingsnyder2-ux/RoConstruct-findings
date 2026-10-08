// roc 2008-06 005d7640  unit: RBX::Humanoid  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d7640
//
// 005d7640  8b442404             mov eax, dword ptr [esp + 4]
// 005d7644  6a00                 push 0
// 005d7646  68402a9300           push 0x932a40
// 005d764b  687c909200           push 0x92907c
// 005d7650  6a00                 push 0
// 005d7652  50                   push eax
// 005d7653  e86ea10c00           call 0x6a17c6
// 005d7658  83c414               add esp, 0x14
// 005d765b  f7d8                 neg eax
// 005d765d  1bc0                 sbb eax, eax
// 005d765f  f7d8                 neg eax
// 005d7661  c20400               ret 4
// library rbxgs/v8datamodel\ModelInstance.cpp (function ?askSetParent@ModelInstance@RBX@@MBE_NPBVInstance@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/ModelInstance.cpp
