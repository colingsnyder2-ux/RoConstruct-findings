// roc 2010-06 005f55d0  unit: RBX::StarterGear  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005f55d0
//
// 005f55d0  8b442404             mov eax, dword ptr [esp + 4]
// 005f55d4  6a00                 push 0
// 005f55d6  6888bcba00           push 0xbabc88
// 005f55db  68408eb700           push 0xb78e40
// 005f55e0  6a00                 push 0
// 005f55e2  50                   push eax
// 005f55e3  e802361b00           call 0x7a8bea
// 005f55e8  83c414               add esp, 0x14
// 005f55eb  f7d8                 neg eax
// 005f55ed  1bc0                 sbb eax, eax
// 005f55ef  f7d8                 neg eax
// 005f55f1  c20400               ret 4
// library rbxgs/v8datamodel\Hopper.cpp (function ?askAddChild@Hopper@RBX@@MBE_NPBVInstance@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Hopper.cpp
