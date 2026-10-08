// roc 2007-08 005ec980  unit: RBX::VExplosion::?$BoundPropGetSet  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005ec980
//
// 005ec980  8b442408             mov eax, dword ptr [esp + 8]
// 005ec984  85c0                 test eax, eax
// 005ec986  7405                 je 0x5ec98d
// 005ec988  83c0fc               add eax, -4
// 005ec98b  eb02                 jmp 0x5ec98f
// 005ec98d  33c0                 xor eax, eax
// 005ec98f  8b4908               mov ecx, dword ptr [ecx + 8]
// 005ec992  d90401               fld dword ptr [ecx + eax]
// 005ec995  03c8                 add ecx, eax
// 005ec997  8b442404             mov eax, dword ptr [esp + 4]
// 005ec99b  d918                 fstp dword ptr [eax]
// 005ec99d  d94104               fld dword ptr [ecx + 4]
// 005ec9a0  d95804               fstp dword ptr [eax + 4]
// 005ec9a3  d94108               fld dword ptr [ecx + 8]
// 005ec9a6  d95808               fstp dword ptr [eax + 8]
// 005ec9a9  c20800               ret 8
// library rbxgs/v8datamodel\Explosion.cpp (function ?getValue@?$BoundPropGetSet@VExplosion@RBX@@@?$BoundProp@VVector3@G3D@@$00@Reflection@RBX@@UBE?AVVector3@G3D@@PBVDescribedBase@34@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Explosion.cpp
