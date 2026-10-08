// roc 2007-03 005eb790  unit: seg_005e0000  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005eb790
//
// 005eb790  8b442410             mov eax, dword ptr [esp + 0x10]
// 005eb794  8b542408             mov edx, dword ptr [esp + 8]
// 005eb798  56                   push esi
// 005eb799  50                   push eax
// 005eb79a  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005eb79e  8bf1                 mov esi, ecx
// 005eb7a0  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005eb7a4  51                   push ecx
// 005eb7a5  52                   push edx
// 005eb7a6  50                   push eax
// 005eb7a7  8bce                 mov ecx, esi
// 005eb7a9  e822fbffff           call 0x5eb2d0
// 005eb7ae  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005eb7b2  51                   push ecx
// 005eb7b3  8bce                 mov ecx, esi
// 005eb7b5  c70614fd7b00         mov dword ptr [esi], 0x7bfd14
// 005eb7bb  e870fcffff           call 0x5eb430
// 005eb7c0  8bc6                 mov eax, esi
// 005eb7c2  5e                   pop esi
// 005eb7c3  c21400               ret 0x14
// library rbxgs/v8world\MutilJoint.cpp (function ??0MultiJoint@RBX@@IAE@PAVPrimitive@1@0ABVCoordinateFrame@G3D@@1H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/MutilJoint.cpp
