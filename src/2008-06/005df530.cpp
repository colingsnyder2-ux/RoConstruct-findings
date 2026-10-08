// roc 2008-06 005df530  unit: RBX::Lighting  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005df530
//
// 005df530  8b442404             mov eax, dword ptr [esp + 4]
// 005df534  6a00                 push 0
// 005df536  68f4969400           push 0x9496f4
// 005df53b  687c909200           push 0x92907c
// 005df540  6a00                 push 0
// 005df542  50                   push eax
// 005df543  e87e220c00           call 0x6a17c6
// 005df548  83c414               add esp, 0x14
// 005df54b  f7d8                 neg eax
// 005df54d  1bc0                 sbb eax, eax
// 005df54f  f7d8                 neg eax
// 005df551  c20400               ret 4
// library rbxgs/v8datamodel\Lighting.cpp (function ?askAddChild@Lighting@RBX@@MBE_NPBVInstance@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
