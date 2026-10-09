// roc 2009-12 006ffe60  unit: RBX::Teams  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006ffe60
//
// 006ffe60  8b442404             mov eax, dword ptr [esp + 4]
// 006ffe64  50                   push eax
// 006ffe65  e816ffffff           call 0x6ffd80
// 006ffe6a  f7d8                 neg eax
// 006ffe6c  1bc0                 sbb eax, eax
// 006ffe6e  f7d8                 neg eax
// 006ffe70  c20400               ret 4
// library rbxgs/v8datamodel\Teams.cpp (function ?teamExists@Teams@RBX@@QAE_NVBrickColor@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Teams.cpp
