// roc 2007-08 005b2f40  unit: RBX::JointsService  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b2f40
//
// 005b2f40  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005b2f44  56                   push esi
// 005b2f45  e8c6140000           call 0x5b4410
// 005b2f4a  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005b2f4e  8bf0                 mov esi, eax
// 005b2f50  e8bb140000           call 0x5b4410
// 005b2f55  3bf0                 cmp esi, eax
// 005b2f57  1bc0                 sbb eax, eax
// 005b2f59  f7d8                 neg eax
// 005b2f5b  5e                   pop esi
// 005b2f5c  c3                   ret 
// library rbxgs/v8world\Assembly.cpp (function ?lessMotorHash@RBX@@YA_NPBVMotorJoint@1@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Assembly.cpp
