// roc 2007-03 0071e640  unit: seg_00710000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0071e640
//
// 0071e640  8b442404             mov eax, dword ptr [esp + 4]
// 0071e644  50                   push eax
// 0071e645  e8a659fdff           call 0x6f3ff0
// 0071e64a  f7d8                 neg eax
// 0071e64c  1bc0                 sbb eax, eax
// 0071e64e  f7d8                 neg eax
// 0071e650  c20400               ret 4
// library rbxgs/v8datamodel\Teams.cpp (function ?teamExists@Teams@RBX@@QAE_NVBrickColor@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Teams.cpp
