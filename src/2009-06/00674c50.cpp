// roc 2009-06 00674c50  unit: RBX::Teams  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00674c50
//
// 00674c50  8b442404             mov eax, dword ptr [esp + 4]
// 00674c54  50                   push eax
// 00674c55  e816ffffff           call 0x674b70
// 00674c5a  f7d8                 neg eax
// 00674c5c  1bc0                 sbb eax, eax
// 00674c5e  f7d8                 neg eax
// 00674c60  c20400               ret 4
// library rbxgs/v8datamodel\Teams.cpp (function ?teamExists@Teams@RBX@@QAE_NVBrickColor@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Teams.cpp
