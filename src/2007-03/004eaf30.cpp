// roc 2007-03 004eaf30  unit: seg_004e0000  size: 130 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004eaf30
//
// 004eaf30  83ec0c               sub esp, 0xc
// 004eaf33  8b442414             mov eax, dword ptr [esp + 0x14]
// 004eaf37  d900                 fld dword ptr [eax]
// 004eaf39  d86124               fsub dword ptr [ecx + 0x24]
// 004eaf3c  d91c24               fstp dword ptr [esp]
// 004eaf3f  d94004               fld dword ptr [eax + 4]
// 004eaf42  d86128               fsub dword ptr [ecx + 0x28]
// 004eaf45  d95c2404             fstp dword ptr [esp + 4]
// 004eaf49  d94008               fld dword ptr [eax + 8]
// 004eaf4c  8b442410             mov eax, dword ptr [esp + 0x10]
// 004eaf50  d8612c               fsub dword ptr [ecx + 0x2c]
// 004eaf53  d95c2408             fstp dword ptr [esp + 8]
// 004eaf57  d9410c               fld dword ptr [ecx + 0xc]
// 004eaf5a  d9442404             fld dword ptr [esp + 4]
// 004eaf5e  d9c0                 fld st(0)
// 004eaf60  deca                 fmulp st(2)
// 004eaf62  d901                 fld dword ptr [ecx]
// 004eaf64  d90424               fld dword ptr [esp]
// 004eaf67  d9c0                 fld st(0)
// 004eaf69  deca                 fmulp st(2)
// 004eaf6b  d9cb                 fxch st(3)
// 004eaf6d  dec1                 faddp st(1)
// 004eaf6f  d94118               fld dword ptr [ecx + 0x18]
// 004eaf72  d9442408             fld dword ptr [esp + 8]
// 004eaf76  d9c0                 fld st(0)
// 004eaf78  deca                 fmulp st(2)
// 004eaf7a  d9ca                 fxch st(2)
// 004eaf7c  dec1                 faddp st(1)
// 004eaf7e  d918                 fstp dword ptr [eax]
// 004eaf80  d94110               fld dword ptr [ecx + 0x10]
// 004eaf83  d8ca                 fmul st(2)
// 004eaf85  d94104               fld dword ptr [ecx + 4]
// 004eaf88  d8cc                 fmul st(4)
// 004eaf8a  dec1                 faddp st(1)
// 004eaf8c  d9411c               fld dword ptr [ecx + 0x1c]
// 004eaf8f  d8ca                 fmul st(2)
// 004eaf91  dec1                 faddp st(1)
// 004eaf93  d95804               fstp dword ptr [eax + 4]
// 004eaf96  d94114               fld dword ptr [ecx + 0x14]
// 004eaf99  deca                 fmulp st(2)
// 004eaf9b  d94108               fld dword ptr [ecx + 8]
// 004eaf9e  decb                 fmulp st(3)
// 004eafa0  d9c9                 fxch st(1)
// 004eafa2  dec2                 faddp st(2)
// 004eafa4  d84920               fmul dword ptr [ecx + 0x20]
// 004eafa7  dec1                 faddp st(1)
// 004eafa9  d95808               fstp dword ptr [eax + 8]
// 004eafac  83c40c               add esp, 0xc
// 004eafaf  c20800               ret 8
// library rbxgs/script\LuaAtomicClasses.cpp (function ?pointToObjectSpace@CoordinateFrame@G3D@@QBE?AVVector3@2@ABV32@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
