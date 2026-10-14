// roc 2008-06 005b62e0  unit: RBX::VHat::?$FactoryProduct  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005b62e0
//
// 005b62e0  d944240c             fld dword ptr [esp + 0xc]
// 005b62e4  83ec10               sub esp, 0x10
// 005b62e7  d9442420             fld dword ptr [esp + 0x20]
// 005b62eb  56                   push esi
// 005b62ec  d944241c             fld dword ptr [esp + 0x1c]
// 005b62f0  8b742418             mov esi, dword ptr [esp + 0x18]
// 005b62f4  83ec10               sub esp, 0x10
// 005b62f7  8bc4                 mov eax, esp
// 005b62f9  d918                 fstp dword ptr [eax]
// 005b62fb  56                   push esi
// 005b62fc  d9c9                 fxch st(1)
// 005b62fe  d95804               fstp dword ptr [eax + 4]
// 005b6301  d95808               fstp dword ptr [eax + 8]
// 005b6304  d9442424             fld dword ptr [esp + 0x24]
// 005b6308  d9580c               fstp dword ptr [eax + 0xc]
// 005b630b  e820fcffff           call 0x5b5f30
// 005b6310  83c414               add esp, 0x14
// 005b6313  8bc6                 mov eax, esi
// 005b6315  5e                   pop esi
// 005b6316  83c410               add esp, 0x10
// 005b6319  c3                   ret 
// library rbxgs-dll/v8datamodel\BrickColor.cpp (function ?closest@BrickColor@RBX@@SA?AV12@VColor3@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
// roc-lib: rbxgs-dll v8datamodel/BrickColor.cpp
