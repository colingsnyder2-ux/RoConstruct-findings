// roc 2007-03 00536ec0  unit: seg_00530000  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00536ec0
//
// 00536ec0  56                   push esi
// 00536ec1  6a10                 push 0x10
// 00536ec3  8bf1                 mov esi, ecx
// 00536ec5  e83e720e00           call 0x61e108
// 00536eca  83c404               add esp, 4
// 00536ecd  85c0                 test eax, eax
// 00536ecf  741a                 je 0x536eeb
// 00536ed1  d94604               fld dword ptr [esi + 4]
// 00536ed4  c700ac577a00         mov dword ptr [eax], 0x7a57ac
// 00536eda  d95804               fstp dword ptr [eax + 4]
// 00536edd  d94608               fld dword ptr [esi + 8]
// 00536ee0  d95808               fstp dword ptr [eax + 8]
// 00536ee3  d9460c               fld dword ptr [esi + 0xc]
// 00536ee6  5e                   pop esi
// 00536ee7  d9580c               fstp dword ptr [eax + 0xc]
// 00536eea  c3                   ret 
// 00536eeb  33c0                 xor eax, eax
// 00536eed  5e                   pop esi
// 00536eee  c3                   ret 
// library rbxgs/v8datamodel\Lighting.cpp (function ?clone@?$holder@VVector3@G3D@@@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
