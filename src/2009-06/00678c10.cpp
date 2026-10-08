// roc 2009-06 00678c10  unit: RBX::Lighting  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00678c10
//
// 00678c10  8b442404             mov eax, dword ptr [esp + 4]
// 00678c14  6a00                 push 0
// 00678c16  68c8a1a000           push 0xa0a1c8
// 00678c1b  6840be9d00           push 0x9dbe40
// 00678c20  6a00                 push 0
// 00678c22  50                   push eax
// 00678c23  e852100a00           call 0x719c7a
// 00678c28  83c414               add esp, 0x14
// 00678c2b  f7d8                 neg eax
// 00678c2d  1bc0                 sbb eax, eax
// 00678c2f  f7d8                 neg eax
// 00678c31  c20400               ret 4
// library rbxgs/v8datamodel\Lighting.cpp (function ?askAddChild@Lighting@RBX@@MBE_NPBVInstance@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
