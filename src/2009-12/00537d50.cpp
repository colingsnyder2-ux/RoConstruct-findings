// roc 2009-12 00537d50  unit: G3D::VColor3::?$holder  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00537d50
//
// 00537d50  56                   push esi
// 00537d51  6a10                 push 0x10
// 00537d53  8bf1                 mov esi, ecx
// 00537d55  e806bb2b00           call 0x7f3860
// 00537d5a  83c404               add esp, 4
// 00537d5d  85c0                 test eax, eax
// 00537d5f  741a                 je 0x537d7b
// 00537d61  d94604               fld dword ptr [esi + 4]
// 00537d64  c700d8d19b00         mov dword ptr [eax], 0x9bd1d8
// 00537d6a  d95804               fstp dword ptr [eax + 4]
// 00537d6d  d94608               fld dword ptr [esi + 8]
// 00537d70  d95808               fstp dword ptr [eax + 8]
// 00537d73  d9460c               fld dword ptr [esi + 0xc]
// 00537d76  5e                   pop esi
// 00537d77  d9580c               fstp dword ptr [eax + 0xc]
// 00537d7a  c3                   ret 
// 00537d7b  33c0                 xor eax, eax
// 00537d7d  5e                   pop esi
// 00537d7e  c3                   ret 
// library rbxgs/v8datamodel\Lighting.cpp (function ?clone@?$holder@VVector3@G3D@@@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
