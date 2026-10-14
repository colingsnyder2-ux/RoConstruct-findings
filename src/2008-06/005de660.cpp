// roc 2008-06 005de660  unit: RBX::Message  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005de660
//
// 005de660  83ec10               sub esp, 0x10
// 005de663  d905608b8200         fld dword ptr [0x828b60]
// 005de669  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005de66d  6a02                 push 2
// 005de66f  d95c2404             fstp dword ptr [esp + 4]
// 005de673  8d442408             lea eax, [esp + 8]
// 005de677  50                   push eax
// 005de678  e8c34bf3ff           call 0x513240
// 005de67d  d90424               fld dword ptr [esp]
// 005de680  d9c0                 fld st(0)
// 005de682  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005de686  d808                 fmul dword ptr [eax]
// 005de688  d94004               fld dword ptr [eax + 4]
// 005de68b  d8ca                 fmul st(2)
// 005de68d  d94008               fld dword ptr [eax + 8]
// 005de690  decb                 fmulp st(3)
// 005de692  d9c9                 fxch st(1)
// 005de694  d9e0                 fchs 
// 005de696  d9ca                 fxch st(2)
// 005de698  d9e0                 fchs 
// 005de69a  d9c9                 fxch st(1)
// 005de69c  d9ca                 fxch st(2)
// 005de69e  d9c9                 fxch st(1)
// 005de6a0  d9f3                 fpatan 
// 005de6a2  d919                 fstp dword ptr [ecx]
// 005de6a4  e817370c00           call 0x6a1dc0
// 005de6a9  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 005de6ad  d91a                 fstp dword ptr [edx]
// 005de6af  83c410               add esp, 0x10
// 005de6b2  c3                   ret 
// library rbxgs-dll/util\Math.cpp (function ?getHeadingElevation@Math@RBX@@SAXABVCoordinateFrame@G3D@@AAM1@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
// roc-lib: rbxgs-dll util/Math.cpp
