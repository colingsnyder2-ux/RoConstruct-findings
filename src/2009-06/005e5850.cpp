// roc 2009-06 005e5850  unit: G3D::VColor3::?$holder  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005e5850
//
// 005e5850  56                   push esi
// 005e5851  6a10                 push 0x10
// 005e5853  8bf1                 mov esi, ecx
// 005e5855  e8de311300           call 0x718a38
// 005e585a  83c404               add esp, 4
// 005e585d  85c0                 test eax, eax
// 005e585f  741a                 je 0x5e587b
// 005e5861  d94604               fld dword ptr [esi + 4]
// 005e5864  c700ac5c8d00         mov dword ptr [eax], 0x8d5cac
// 005e586a  d95804               fstp dword ptr [eax + 4]
// 005e586d  d94608               fld dword ptr [esi + 8]
// 005e5870  d95808               fstp dword ptr [eax + 8]
// 005e5873  d9460c               fld dword ptr [esi + 0xc]
// 005e5876  5e                   pop esi
// 005e5877  d9580c               fstp dword ptr [eax + 0xc]
// 005e587a  c3                   ret 
// 005e587b  33c0                 xor eax, eax
// 005e587d  5e                   pop esi
// 005e587e  c3                   ret 
// library rbxgs/v8datamodel\Lighting.cpp (function ?clone@?$holder@VVector3@G3D@@@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
