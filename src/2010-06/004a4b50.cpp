// roc 2010-06 004a4b50  unit: G3D::VVector3::?$holder  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004a4b50
//
// 004a4b50  56                   push esi
// 004a4b51  6a10                 push 0x10
// 004a4b53  8bf1                 mov esi, ecx
// 004a4b55  e8462e3000           call 0x7a79a0
// 004a4b5a  83c404               add esp, 4
// 004a4b5d  85c0                 test eax, eax
// 004a4b5f  741a                 je 0x4a4b7b
// 004a4b61  d94604               fld dword ptr [esi + 4]
// 004a4b64  c700747ea100         mov dword ptr [eax], 0xa17e74
// 004a4b6a  d95804               fstp dword ptr [eax + 4]
// 004a4b6d  d94608               fld dword ptr [esi + 8]
// 004a4b70  d95808               fstp dword ptr [eax + 8]
// 004a4b73  d9460c               fld dword ptr [esi + 0xc]
// 004a4b76  5e                   pop esi
// 004a4b77  d9580c               fstp dword ptr [eax + 0xc]
// 004a4b7a  c3                   ret 
// 004a4b7b  33c0                 xor eax, eax
// 004a4b7d  5e                   pop esi
// 004a4b7e  c3                   ret 
// library rbxgs/v8datamodel\Lighting.cpp (function ?clone@?$holder@VVector3@G3D@@@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
