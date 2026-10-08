// roc 2007-03 004344d0  unit: seg_00430000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004344d0
//
// 004344d0  8b442404             mov eax, dword ptr [esp + 4]
// 004344d4  50                   push eax
// 004344d5  e8fca31e00           call 0x61e8d6
// 004344da  f7d8                 neg eax
// 004344dc  1bc0                 sbb eax, eax
// 004344de  f7d8                 neg eax
// 004344e0  c20400               ret 4
// library rbxgs/v8datamodel\Teams.cpp (function ?teamExists@Teams@RBX@@QAE_NVBrickColor@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Teams.cpp
