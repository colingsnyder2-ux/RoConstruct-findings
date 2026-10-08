// roc 2007-03 00473290  unit: seg_00470000  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00473290
//
// 00473290  8b542408             mov edx, dword ptr [esp + 8]
// 00473294  d94104               fld dword ptr [ecx + 4]
// 00473297  d84a04               fmul dword ptr [edx + 4]
// 0047329a  8b442404             mov eax, dword ptr [esp + 4]
// 0047329e  d902                 fld dword ptr [edx]
// 004732a0  d809                 fmul dword ptr [ecx]
// 004732a2  dec1                 faddp st(1)
// 004732a4  d94108               fld dword ptr [ecx + 8]
// 004732a7  d84a08               fmul dword ptr [edx + 8]
// 004732aa  dec1                 faddp st(1)
// 004732ac  d84124               fadd dword ptr [ecx + 0x24]
// 004732af  d918                 fstp dword ptr [eax]
// 004732b1  d9410c               fld dword ptr [ecx + 0xc]
// 004732b4  d80a                 fmul dword ptr [edx]
// 004732b6  d94110               fld dword ptr [ecx + 0x10]
// 004732b9  d84a04               fmul dword ptr [edx + 4]
// 004732bc  dec1                 faddp st(1)
// 004732be  d94114               fld dword ptr [ecx + 0x14]
// 004732c1  d84a08               fmul dword ptr [edx + 8]
// 004732c4  dec1                 faddp st(1)
// 004732c6  d84128               fadd dword ptr [ecx + 0x28]
// 004732c9  d95804               fstp dword ptr [eax + 4]
// 004732cc  d94118               fld dword ptr [ecx + 0x18]
// 004732cf  d80a                 fmul dword ptr [edx]
// 004732d1  d9411c               fld dword ptr [ecx + 0x1c]
// 004732d4  d84a04               fmul dword ptr [edx + 4]
// 004732d7  dec1                 faddp st(1)
// 004732d9  d94120               fld dword ptr [ecx + 0x20]
// 004732dc  d84a08               fmul dword ptr [edx + 8]
// 004732df  dec1                 faddp st(1)
// 004732e1  d8412c               fadd dword ptr [ecx + 0x2c]
// 004732e4  d95808               fstp dword ptr [eax + 8]
// 004732e7  c20800               ret 8
// library rbxgs/script\LuaAtomicClasses.cpp (function ?pointToWorldSpace@CoordinateFrame@G3D@@QBE?AVVector3@2@ABV32@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
