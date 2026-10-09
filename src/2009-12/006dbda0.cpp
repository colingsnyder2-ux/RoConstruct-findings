// roc 2009-12 006dbda0  unit: RBX::Camera  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006dbda0
//
// 006dbda0  8b442404             mov eax, dword ptr [esp + 4]
// 006dbda4  6a00                 push 0
// 006dbda6  68dc52b300           push 0xb352dc
// 006dbdab  6840feaf00           push 0xaffe40
// 006dbdb0  6a00                 push 0
// 006dbdb2  50                   push eax
// 006dbdb3  e8f28c1100           call 0x7f4aaa
// 006dbdb8  83c414               add esp, 0x14
// 006dbdbb  f7d8                 neg eax
// 006dbdbd  1bc0                 sbb eax, eax
// 006dbdbf  f7d8                 neg eax
// 006dbdc1  c20400               ret 4
// library rbxgs/v8datamodel\Camera.cpp (function ?askSetParent@Camera@RBX@@EBE_NPBVInstance@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Camera.cpp
