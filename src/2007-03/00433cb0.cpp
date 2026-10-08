// roc 2007-03 00433cb0  unit: seg_00430000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00433cb0
//
// 00433cb0  8b442404             mov eax, dword ptr [esp + 4]
// 00433cb4  50                   push eax
// 00433cb5  e8ccad1e00           call 0x61ea86
// 00433cba  f7d8                 neg eax
// 00433cbc  1bc0                 sbb eax, eax
// 00433cbe  f7d8                 neg eax
// 00433cc0  c20400               ret 4
// library rbxgs/v8datamodel\Teams.cpp (function ?teamExists@Teams@RBX@@QAE_NVBrickColor@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Teams.cpp
