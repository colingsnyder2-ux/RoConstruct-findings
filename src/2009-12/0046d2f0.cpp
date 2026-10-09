// roc 2009-12 0046d2f0  unit: CObjectBrowser  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0046d2f0
//
// 0046d2f0  8b442404             mov eax, dword ptr [esp + 4]
// 0046d2f4  50                   push eax
// 0046d2f5  e8ba6e3800           call 0x7f41b4
// 0046d2fa  f7d8                 neg eax
// 0046d2fc  1bc0                 sbb eax, eax
// 0046d2fe  f7d8                 neg eax
// 0046d300  c20400               ret 4
// library rbxgs/v8datamodel\Teams.cpp (function ?teamExists@Teams@RBX@@QAE_NVBrickColor@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Teams.cpp
