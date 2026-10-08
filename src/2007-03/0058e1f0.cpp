// roc 2007-03 0058e1f0  unit: seg_00580000  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0058e1f0
//
// 0058e1f0  8b442404             mov eax, dword ptr [esp + 4]
// 0058e1f4  6a00                 push 0
// 0058e1f6  6814058a00           push 0x8a0514
// 0058e1fb  6864108800           push 0x881064
// 0058e200  6a00                 push 0
// 0058e202  50                   push eax
// 0058e203  e8be0f0900           call 0x61f1c6
// 0058e208  83c414               add esp, 0x14
// 0058e20b  f7d8                 neg eax
// 0058e20d  1bc0                 sbb eax, eax
// 0058e20f  f7d8                 neg eax
// 0058e211  c20400               ret 4
// library rbxgs/v8datamodel\Camera.cpp (function ?askSetParent@Camera@RBX@@EBE_NPBVInstance@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Camera.cpp
