// roc 2007-08 00534b90  unit: G3D::VColor3::?$holder  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00534b90
//
// 00534b90  56                   push esi
// 00534b91  6a10                 push 0x10
// 00534b93  8bf1                 mov esi, ecx
// 00534b95  e85cb30f00           call 0x62fef6
// 00534b9a  83c404               add esp, 4
// 00534b9d  85c0                 test eax, eax
// 00534b9f  741a                 je 0x534bbb
// 00534ba1  d94604               fld dword ptr [esi + 4]
// 00534ba4  c7006c577a00         mov dword ptr [eax], 0x7a576c
// 00534baa  d95804               fstp dword ptr [eax + 4]
// 00534bad  d94608               fld dword ptr [esi + 8]
// 00534bb0  d95808               fstp dword ptr [eax + 8]
// 00534bb3  d9460c               fld dword ptr [esi + 0xc]
// 00534bb6  5e                   pop esi
// 00534bb7  d9580c               fstp dword ptr [eax + 0xc]
// 00534bba  c3                   ret 
// 00534bbb  33c0                 xor eax, eax
// 00534bbd  5e                   pop esi
// 00534bbe  c3                   ret 
// library rbxgs/v8datamodel\Lighting.cpp (function ?clone@?$holder@VVector3@G3D@@@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
