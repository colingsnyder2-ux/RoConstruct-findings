// roc 2008-06 00633090  unit: RBX::VExplosion::?$BoundPropGetSet  size: 116 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00633090
//
// 00633090  8b442404             mov eax, dword ptr [esp + 4]
// 00633094  56                   push esi
// 00633095  57                   push edi
// 00633096  8bf1                 mov esi, ecx
// 00633098  85c0                 test eax, eax
// 0063309a  7405                 je 0x6330a1
// 0063309c  8d78ec               lea edi, [eax - 0x14]
// 0063309f  eb02                 jmp 0x6330a3
// 006330a1  33ff                 xor edi, edi
// 006330a3  8b4608               mov eax, dword ptr [esi + 8]
// 006330a6  8b542410             mov edx, dword ptr [esp + 0x10]
// 006330aa  d902                 fld dword ptr [edx]
// 006330ac  8d0c38               lea ecx, [eax + edi]
// 006330af  d819                 fcomp dword ptr [ecx]
// 006330b1  dfe0                 fnstsw ax
// 006330b3  f6c444               test ah, 0x44
// 006330b6  7a1a                 jp 0x6330d2
// 006330b8  d94204               fld dword ptr [edx + 4]
// 006330bb  d85904               fcomp dword ptr [ecx + 4]
// 006330be  dfe0                 fnstsw ax
// 006330c0  f6c444               test ah, 0x44
// 006330c3  7a0d                 jp 0x6330d2
// 006330c5  d94208               fld dword ptr [edx + 8]
// 006330c8  d85908               fcomp dword ptr [ecx + 8]
// 006330cb  dfe0                 fnstsw ax
// 006330cd  f6c444               test ah, 0x44
// 006330d0  7b2d                 jnp 0x6330ff
// 006330d2  d902                 fld dword ptr [edx]
// 006330d4  d919                 fstp dword ptr [ecx]
// 006330d6  d94204               fld dword ptr [edx + 4]
// 006330d9  d95904               fstp dword ptr [ecx + 4]
// 006330dc  d94208               fld dword ptr [edx + 8]
// 006330df  d95908               fstp dword ptr [ecx + 8]
// 006330e2  8b4610               mov eax, dword ptr [esi + 0x10]
// 006330e5  85c0                 test eax, eax
// 006330e7  740b                 je 0x6330f4
// 006330e9  8b4e04               mov ecx, dword ptr [esi + 4]
// 006330ec  51                   push ecx
// 006330ed  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 006330f0  03cf                 add ecx, edi
// 006330f2  ffd0                 call eax
// 006330f4  8b5604               mov edx, dword ptr [esi + 4]
// 006330f7  52                   push edx
// 006330f8  8bcf                 mov ecx, edi
// 006330fa  e801aaddff           call 0x40db00
// 006330ff  5f                   pop edi
// 00633100  5e                   pop esi
// 00633101  c20800               ret 8
// library rbxgs/roc_unit_68d8f4cfa4d371f8.cpp (function ?setValue@?$BoundPropGetSet@VRocket@RBX@@@?$BoundProp@VVector3@G3D@@$00@Reflection@RBX@@UBEXPAVDescribedBase@34@ABVVector3@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
// roc-lib: rbxgs roc_unit_68d8f4cfa4d371f8.cpp
