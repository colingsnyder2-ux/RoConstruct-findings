// roc 2010-06 004e6150  unit: G3D::VColor3::?$holder  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004e6150
//
// 004e6150  56                   push esi
// 004e6151  6a10                 push 0x10
// 004e6153  8bf1                 mov esi, ecx
// 004e6155  e846182c00           call 0x7a79a0
// 004e615a  83c404               add esp, 4
// 004e615d  85c0                 test eax, eax
// 004e615f  741a                 je 0x4e617b
// 004e6161  d94604               fld dword ptr [esi + 4]
// 004e6164  c700b8b0a100         mov dword ptr [eax], 0xa1b0b8
// 004e616a  d95804               fstp dword ptr [eax + 4]
// 004e616d  d94608               fld dword ptr [esi + 8]
// 004e6170  d95808               fstp dword ptr [eax + 8]
// 004e6173  d9460c               fld dword ptr [esi + 0xc]
// 004e6176  5e                   pop esi
// 004e6177  d9580c               fstp dword ptr [eax + 0xc]
// 004e617a  c3                   ret 
// 004e617b  33c0                 xor eax, eax
// 004e617d  5e                   pop esi
// 004e617e  c3                   ret 
// library rbxgs/v8datamodel\Lighting.cpp (function ?clone@?$holder@VVector3@G3D@@@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
