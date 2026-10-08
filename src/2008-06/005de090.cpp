// roc 2008-06 005de090  unit: RBX::Message  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005de090
//
// 005de090  83ec14               sub esp, 0x14
// 005de093  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005de097  d94008               fld dword ptr [eax + 8]
// 005de09a  d95c2404             fstp dword ptr [esp + 4]
// 005de09e  d9442404             fld dword ptr [esp + 4]
// 005de0a2  db5c241c             fistp dword ptr [esp + 0x1c]
// 005de0a6  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005de0aa  d94004               fld dword ptr [eax + 4]
// 005de0ad  d95c2404             fstp dword ptr [esp + 4]
// 005de0b1  894c2410             mov dword ptr [esp + 0x10], ecx
// 005de0b5  d9442404             fld dword ptr [esp + 4]
// 005de0b9  db1c24               fistp dword ptr [esp]
// 005de0bc  d900                 fld dword ptr [eax]
// 005de0be  8b1424               mov edx, dword ptr [esp]
// 005de0c1  d95c2408             fstp dword ptr [esp + 8]
// 005de0c5  8954240c             mov dword ptr [esp + 0xc], edx
// 005de0c9  d9442408             fld dword ptr [esp + 8]
// 005de0cd  db5c2404             fistp dword ptr [esp + 4]
// 005de0d1  db442404             fild dword ptr [esp + 4]
// 005de0d5  8b442418             mov eax, dword ptr [esp + 0x18]
// 005de0d9  d918                 fstp dword ptr [eax]
// 005de0db  db44240c             fild dword ptr [esp + 0xc]
// 005de0df  d95804               fstp dword ptr [eax + 4]
// 005de0e2  db442410             fild dword ptr [esp + 0x10]
// 005de0e6  d95808               fstp dword ptr [eax + 8]
// 005de0e9  83c414               add esp, 0x14
// 005de0ec  c3                   ret 
// library rbxgs/util\Math.cpp (function ?iRoundVector3@Math@RBX@@SA?AVVector3@G3D@@ABV34@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Math.cpp
