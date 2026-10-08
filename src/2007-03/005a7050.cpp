// roc 2007-03 005a7050  unit: seg_005a0000  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005a7050
//
// 005a7050  83ec14               sub esp, 0x14
// 005a7053  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005a7057  d94008               fld dword ptr [eax + 8]
// 005a705a  d95c2404             fstp dword ptr [esp + 4]
// 005a705e  d9442404             fld dword ptr [esp + 4]
// 005a7062  db5c241c             fistp dword ptr [esp + 0x1c]
// 005a7066  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005a706a  d94004               fld dword ptr [eax + 4]
// 005a706d  d95c2404             fstp dword ptr [esp + 4]
// 005a7071  894c2410             mov dword ptr [esp + 0x10], ecx
// 005a7075  d9442404             fld dword ptr [esp + 4]
// 005a7079  db1c24               fistp dword ptr [esp]
// 005a707c  d900                 fld dword ptr [eax]
// 005a707e  8b1424               mov edx, dword ptr [esp]
// 005a7081  d95c2408             fstp dword ptr [esp + 8]
// 005a7085  8954240c             mov dword ptr [esp + 0xc], edx
// 005a7089  d9442408             fld dword ptr [esp + 8]
// 005a708d  db5c2404             fistp dword ptr [esp + 4]
// 005a7091  db442404             fild dword ptr [esp + 4]
// 005a7095  8b442418             mov eax, dword ptr [esp + 0x18]
// 005a7099  d918                 fstp dword ptr [eax]
// 005a709b  db44240c             fild dword ptr [esp + 0xc]
// 005a709f  d95804               fstp dword ptr [eax + 4]
// 005a70a2  db442410             fild dword ptr [esp + 0x10]
// 005a70a6  d95808               fstp dword ptr [eax + 8]
// 005a70a9  83c414               add esp, 0x14
// 005a70ac  c3                   ret 
// library rbxgs/util\Math.cpp (function ?iRoundVector3@Math@RBX@@SA?AVVector3@G3D@@ABV34@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Math.cpp
