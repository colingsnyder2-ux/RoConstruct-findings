// roc 2009-06 005e5790  unit: G3D::VVector3::?$holder  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005e5790
//
// 005e5790  56                   push esi
// 005e5791  6a10                 push 0x10
// 005e5793  8bf1                 mov esi, ecx
// 005e5795  e89e321300           call 0x718a38
// 005e579a  83c404               add esp, 4
// 005e579d  85c0                 test eax, eax
// 005e579f  741a                 je 0x5e57bb
// 005e57a1  d94604               fld dword ptr [esi + 4]
// 005e57a4  c7007c5c8d00         mov dword ptr [eax], 0x8d5c7c
// 005e57aa  d95804               fstp dword ptr [eax + 4]
// 005e57ad  d94608               fld dword ptr [esi + 8]
// 005e57b0  d95808               fstp dword ptr [eax + 8]
// 005e57b3  d9460c               fld dword ptr [esi + 0xc]
// 005e57b6  5e                   pop esi
// 005e57b7  d9580c               fstp dword ptr [eax + 0xc]
// 005e57ba  c3                   ret 
// 005e57bb  33c0                 xor eax, eax
// 005e57bd  5e                   pop esi
// 005e57be  c3                   ret 
// library rbxgs/v8datamodel\Lighting.cpp (function ?clone@?$holder@VVector3@G3D@@@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
