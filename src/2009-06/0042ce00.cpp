// roc 2009-06 0042ce00  unit: CObjectBrowser  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0042ce00
//
// 0042ce00  8b442404             mov eax, dword ptr [esp + 4]
// 0042ce04  50                   push eax
// 0042ce05  e882c52e00           call 0x71938c
// 0042ce0a  f7d8                 neg eax
// 0042ce0c  1bc0                 sbb eax, eax
// 0042ce0e  f7d8                 neg eax
// 0042ce10  c20400               ret 4
// library rbxgs/v8datamodel\Teams.cpp (function ?teamExists@Teams@RBX@@QAE_NVBrickColor@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Teams.cpp
