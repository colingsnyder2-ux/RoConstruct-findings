// roc 2007-03 005abc60  unit: seg_005a0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005abc60
//
// 005abc60  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005abc64  56                   push esi
// 005abc65  e8b6280000           call 0x5ae520
// 005abc6a  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005abc6e  8bf0                 mov esi, eax
// 005abc70  e8ab280000           call 0x5ae520
// 005abc75  3bf0                 cmp esi, eax
// 005abc77  1bc0                 sbb eax, eax
// 005abc79  f7d8                 neg eax
// 005abc7b  5e                   pop esi
// 005abc7c  c3                   ret 
// library rbxgs/v8world\Assembly.cpp (function ?lessMotorHash@RBX@@YA_NPBVMotorJoint@1@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Assembly.cpp
