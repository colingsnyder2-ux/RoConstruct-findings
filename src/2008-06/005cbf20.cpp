// roc 2008-06 005cbf20  unit: RBX::Camera  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005cbf20
//
// 005cbf20  8b442404             mov eax, dword ptr [esp + 4]
// 005cbf24  6a00                 push 0
// 005cbf26  68b8819400           push 0x9481b8
// 005cbf2b  687c909200           push 0x92907c
// 005cbf30  6a00                 push 0
// 005cbf32  50                   push eax
// 005cbf33  e88e580d00           call 0x6a17c6
// 005cbf38  83c414               add esp, 0x14
// 005cbf3b  f7d8                 neg eax
// 005cbf3d  1bc0                 sbb eax, eax
// 005cbf3f  f7d8                 neg eax
// 005cbf41  c20400               ret 4
// library rbxgs/v8datamodel\Camera.cpp (function ?askSetParent@Camera@RBX@@EBE_NPBVInstance@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Camera.cpp
