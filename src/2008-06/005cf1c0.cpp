// roc 2008-06 005cf1c0  unit: RBX::VStarterPackService::?$FactoryProduct  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005cf1c0
//
// 005cf1c0  8b442404             mov eax, dword ptr [esp + 4]
// 005cf1c4  6a00                 push 0
// 005cf1c6  6850199500           push 0x951950
// 005cf1cb  687c909200           push 0x92907c
// 005cf1d0  6a00                 push 0
// 005cf1d2  50                   push eax
// 005cf1d3  e8ee250d00           call 0x6a17c6
// 005cf1d8  83c414               add esp, 0x14
// 005cf1db  f7d8                 neg eax
// 005cf1dd  1bc0                 sbb eax, eax
// 005cf1df  f7d8                 neg eax
// 005cf1e1  c20400               ret 4
// library rbxgs/v8datamodel\Hopper.cpp (function ?askAddChild@Hopper@RBX@@MBE_NPBVInstance@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Hopper.cpp
