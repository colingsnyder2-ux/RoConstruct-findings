// roc 2009-06 0066d0f0  unit: RBX::VHumanoid::?$EventDesc  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0066d0f0
//
// 0066d0f0  83ec14               sub esp, 0x14
// 0066d0f3  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0066d0f7  d94008               fld dword ptr [eax + 8]
// 0066d0fa  d95c2404             fstp dword ptr [esp + 4]
// 0066d0fe  d9442404             fld dword ptr [esp + 4]
// 0066d102  db5c241c             fistp dword ptr [esp + 0x1c]
// 0066d106  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0066d10a  d94004               fld dword ptr [eax + 4]
// 0066d10d  d95c2404             fstp dword ptr [esp + 4]
// 0066d111  894c2410             mov dword ptr [esp + 0x10], ecx
// 0066d115  d9442404             fld dword ptr [esp + 4]
// 0066d119  db1c24               fistp dword ptr [esp]
// 0066d11c  d900                 fld dword ptr [eax]
// 0066d11e  8b1424               mov edx, dword ptr [esp]
// 0066d121  d95c2408             fstp dword ptr [esp + 8]
// 0066d125  8954240c             mov dword ptr [esp + 0xc], edx
// 0066d129  d9442408             fld dword ptr [esp + 8]
// 0066d12d  db5c2404             fistp dword ptr [esp + 4]
// 0066d131  db442404             fild dword ptr [esp + 4]
// 0066d135  8b442418             mov eax, dword ptr [esp + 0x18]
// 0066d139  d918                 fstp dword ptr [eax]
// 0066d13b  db44240c             fild dword ptr [esp + 0xc]
// 0066d13f  d95804               fstp dword ptr [eax + 4]
// 0066d142  db442410             fild dword ptr [esp + 0x10]
// 0066d146  d95808               fstp dword ptr [eax + 8]
// 0066d149  83c414               add esp, 0x14
// 0066d14c  c3                   ret 
// library rbxgs/util\Math.cpp (function ?iRoundVector3@Math@RBX@@SA?AVVector3@G3D@@ABV34@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Math.cpp
