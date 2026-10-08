// roc 2010-06 006516c0  unit: RBX::Camera  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006516c0
//
// 006516c0  8b442404             mov eax, dword ptr [esp + 4]
// 006516c4  6a00                 push 0
// 006516c6  68f4acba00           push 0xbaacf4
// 006516cb  68408eb700           push 0xb78e40
// 006516d0  6a00                 push 0
// 006516d2  50                   push eax
// 006516d3  e812751500           call 0x7a8bea
// 006516d8  83c414               add esp, 0x14
// 006516db  f7d8                 neg eax
// 006516dd  1bc0                 sbb eax, eax
// 006516df  f7d8                 neg eax
// 006516e1  c20400               ret 4
// library rbxgs/v8datamodel\Camera.cpp (function ?askSetParent@Camera@RBX@@EBE_NPBVInstance@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Camera.cpp
