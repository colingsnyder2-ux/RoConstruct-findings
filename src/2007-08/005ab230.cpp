// roc 2007-08 005ab230  unit: RBX::World  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005ab230
//
// 005ab230  83ec14               sub esp, 0x14
// 005ab233  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005ab237  d94008               fld dword ptr [eax + 8]
// 005ab23a  d95c2404             fstp dword ptr [esp + 4]
// 005ab23e  d9442404             fld dword ptr [esp + 4]
// 005ab242  db5c241c             fistp dword ptr [esp + 0x1c]
// 005ab246  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005ab24a  d94004               fld dword ptr [eax + 4]
// 005ab24d  d95c2404             fstp dword ptr [esp + 4]
// 005ab251  894c2410             mov dword ptr [esp + 0x10], ecx
// 005ab255  d9442404             fld dword ptr [esp + 4]
// 005ab259  db1c24               fistp dword ptr [esp]
// 005ab25c  d900                 fld dword ptr [eax]
// 005ab25e  8b1424               mov edx, dword ptr [esp]
// 005ab261  d95c2408             fstp dword ptr [esp + 8]
// 005ab265  8954240c             mov dword ptr [esp + 0xc], edx
// 005ab269  d9442408             fld dword ptr [esp + 8]
// 005ab26d  db5c2404             fistp dword ptr [esp + 4]
// 005ab271  db442404             fild dword ptr [esp + 4]
// 005ab275  8b442418             mov eax, dword ptr [esp + 0x18]
// 005ab279  d918                 fstp dword ptr [eax]
// 005ab27b  db44240c             fild dword ptr [esp + 0xc]
// 005ab27f  d95804               fstp dword ptr [eax + 4]
// 005ab282  db442410             fild dword ptr [esp + 0x10]
// 005ab286  d95808               fstp dword ptr [eax + 8]
// 005ab289  83c414               add esp, 0x14
// 005ab28c  c3                   ret 
// library rbxgs/util\Math.cpp (function ?iRoundVector3@Math@RBX@@SA?AVVector3@G3D@@ABV34@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Math.cpp
