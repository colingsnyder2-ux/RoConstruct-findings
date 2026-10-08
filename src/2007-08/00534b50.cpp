// roc 2007-08 00534b50  unit: G3D::VVector3::?$holder  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00534b50
//
// 00534b50  56                   push esi
// 00534b51  6a10                 push 0x10
// 00534b53  8bf1                 mov esi, ecx
// 00534b55  e89cb30f00           call 0x62fef6
// 00534b5a  83c404               add esp, 4
// 00534b5d  85c0                 test eax, eax
// 00534b5f  741a                 je 0x534b7b
// 00534b61  d94604               fld dword ptr [esi + 4]
// 00534b64  c7005c577a00         mov dword ptr [eax], 0x7a575c
// 00534b6a  d95804               fstp dword ptr [eax + 4]
// 00534b6d  d94608               fld dword ptr [esi + 8]
// 00534b70  d95808               fstp dword ptr [eax + 8]
// 00534b73  d9460c               fld dword ptr [esi + 0xc]
// 00534b76  5e                   pop esi
// 00534b77  d9580c               fstp dword ptr [eax + 0xc]
// 00534b7a  c3                   ret 
// 00534b7b  33c0                 xor eax, eax
// 00534b7d  5e                   pop esi
// 00534b7e  c3                   ret 
// library rbxgs/v8datamodel\Lighting.cpp (function ?clone@?$holder@VVector3@G3D@@@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
