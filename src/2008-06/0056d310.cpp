// roc 2008-06 0056d310  unit: G3D::VVector3::?$holder  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0056d310
//
// 0056d310  56                   push esi
// 0056d311  6a10                 push 0x10
// 0056d313  8bf1                 mov esi, ecx
// 0056d315  e806361300           call 0x6a0920
// 0056d31a  83c404               add esp, 4
// 0056d31d  85c0                 test eax, eax
// 0056d31f  741a                 je 0x56d33b
// 0056d321  d94604               fld dword ptr [esi + 4]
// 0056d324  c70074f68200         mov dword ptr [eax], 0x82f674
// 0056d32a  d95804               fstp dword ptr [eax + 4]
// 0056d32d  d94608               fld dword ptr [esi + 8]
// 0056d330  d95808               fstp dword ptr [eax + 8]
// 0056d333  d9460c               fld dword ptr [esi + 0xc]
// 0056d336  5e                   pop esi
// 0056d337  d9580c               fstp dword ptr [eax + 0xc]
// 0056d33a  c3                   ret 
// 0056d33b  33c0                 xor eax, eax
// 0056d33d  5e                   pop esi
// 0056d33e  c3                   ret 
// library rbxgs/v8datamodel\Lighting.cpp (function ?clone@?$holder@VVector3@G3D@@@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
