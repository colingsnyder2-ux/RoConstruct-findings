// roc 2011-06 004f4bd0  unit: G3D::VColor3::?$holder  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004f4bd0
//
// 004f4bd0  56                   push esi
// 004f4bd1  6a10                 push 0x10
// 004f4bd3  8bf1                 mov esi, ecx
// 004f4bd5  e884543100           call 0x80a05e
// 004f4bda  83c404               add esp, 4
// 004f4bdd  85c0                 test eax, eax
// 004f4bdf  741a                 je 0x4f4bfb
// 004f4be1  d94604               fld dword ptr [esi + 4]
// 004f4be4  c70014b3a700         mov dword ptr [eax], 0xa7b314
// 004f4bea  d95804               fstp dword ptr [eax + 4]
// 004f4bed  d94608               fld dword ptr [esi + 8]
// 004f4bf0  d95808               fstp dword ptr [eax + 8]
// 004f4bf3  d9460c               fld dword ptr [esi + 0xc]
// 004f4bf6  5e                   pop esi
// 004f4bf7  d9580c               fstp dword ptr [eax + 0xc]
// 004f4bfa  c3                   ret 
// 004f4bfb  33c0                 xor eax, eax
// 004f4bfd  5e                   pop esi
// 004f4bfe  c3                   ret 
// library rbxgs/v8datamodel\Lighting.cpp (function ?clone@?$holder@VVector3@G3D@@@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
