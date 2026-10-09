// roc 2009-12 004f6a70  unit: G3D::VVector3::?$holder  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004f6a70
//
// 004f6a70  56                   push esi
// 004f6a71  6a10                 push 0x10
// 004f6a73  8bf1                 mov esi, ecx
// 004f6a75  e8e6cd2f00           call 0x7f3860
// 004f6a7a  83c404               add esp, 4
// 004f6a7d  85c0                 test eax, eax
// 004f6a7f  741a                 je 0x4f6a9b
// 004f6a81  d94604               fld dword ptr [esi + 4]
// 004f6a84  c700c4a19b00         mov dword ptr [eax], 0x9ba1c4
// 004f6a8a  d95804               fstp dword ptr [eax + 4]
// 004f6a8d  d94608               fld dword ptr [esi + 8]
// 004f6a90  d95808               fstp dword ptr [eax + 8]
// 004f6a93  d9460c               fld dword ptr [esi + 0xc]
// 004f6a96  5e                   pop esi
// 004f6a97  d9580c               fstp dword ptr [eax + 0xc]
// 004f6a9a  c3                   ret 
// 004f6a9b  33c0                 xor eax, eax
// 004f6a9d  5e                   pop esi
// 004f6a9e  c3                   ret 
// library rbxgs/v8datamodel\Lighting.cpp (function ?clone@?$holder@VVector3@G3D@@@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
