// roc 2011-06 0062d2c0  unit: RBX::StarterGear  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0062d2c0
//
// 0062d2c0  8b442404             mov eax, dword ptr [esp + 4]
// 0062d2c4  6a00                 push 0
// 0062d2c6  687cd9c400           push 0xc4d97c
// 0062d2cb  68f871c000           push 0xc071f8
// 0062d2d0  6a00                 push 0
// 0062d2d2  50                   push eax
// 0062d2d3  e812e01d00           call 0x80b2ea
// 0062d2d8  83c414               add esp, 0x14
// 0062d2db  f7d8                 neg eax
// 0062d2dd  1bc0                 sbb eax, eax
// 0062d2df  f7d8                 neg eax
// 0062d2e1  c20400               ret 4
// library rbxgs/v8datamodel\Hopper.cpp (function ?askAddChild@Hopper@RBX@@MBE_NPBVInstance@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Hopper.cpp
