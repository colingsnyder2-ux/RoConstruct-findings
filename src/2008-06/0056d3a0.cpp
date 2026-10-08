// roc 2008-06 0056d3a0  unit: G3D::VColor3::?$holder  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0056d3a0
//
// 0056d3a0  56                   push esi
// 0056d3a1  6a10                 push 0x10
// 0056d3a3  8bf1                 mov esi, ecx
// 0056d3a5  e876351300           call 0x6a0920
// 0056d3aa  83c404               add esp, 4
// 0056d3ad  85c0                 test eax, eax
// 0056d3af  741a                 je 0x56d3cb
// 0056d3b1  d94604               fld dword ptr [esi + 4]
// 0056d3b4  c70094f68200         mov dword ptr [eax], 0x82f694
// 0056d3ba  d95804               fstp dword ptr [eax + 4]
// 0056d3bd  d94608               fld dword ptr [esi + 8]
// 0056d3c0  d95808               fstp dword ptr [eax + 8]
// 0056d3c3  d9460c               fld dword ptr [esi + 0xc]
// 0056d3c6  5e                   pop esi
// 0056d3c7  d9580c               fstp dword ptr [eax + 0xc]
// 0056d3ca  c3                   ret 
// 0056d3cb  33c0                 xor eax, eax
// 0056d3cd  5e                   pop esi
// 0056d3ce  c3                   ret 
// library rbxgs/v8datamodel\Lighting.cpp (function ?clone@?$holder@VVector3@G3D@@@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
