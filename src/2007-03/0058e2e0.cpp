// roc 2007-03 0058e2e0  unit: seg_00580000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0058e2e0
//
// 0058e2e0  8b442404             mov eax, dword ptr [esp + 4]
// 0058e2e4  d900                 fld dword ptr [eax]
// 0058e2e6  89442404             mov dword ptr [esp + 4], eax
// 0058e2ea  d99988010000         fstp dword ptr [ecx + 0x188]
// 0058e2f0  81c134010000         add ecx, 0x134
// 0058e2f6  d94004               fld dword ptr [eax + 4]
// 0058e2f9  d95958               fstp dword ptr [ecx + 0x58]
// 0058e2fc  d94008               fld dword ptr [eax + 8]
// 0058e2ff  d9595c               fstp dword ptr [ecx + 0x5c]
// 0058e302  e91960f8ff           jmp 0x514320
// library rbxgs/v8datamodel\Camera.cpp (function ?lookAt@Camera@RBX@@QAEXABVVector3@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Camera.cpp
