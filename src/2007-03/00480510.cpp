// roc 2007-03 00480510  unit: seg_00480000  size: 211 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00480510
//
// 00480510  83ec24               sub esp, 0x24
// 00480513  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00480517  d9420c               fld dword ptr [edx + 0xc]
// 0048051a  8b442428             mov eax, dword ptr [esp + 0x28]
// 0048051e  d95c242c             fstp dword ptr [esp + 0x2c]
// 00480522  d944242c             fld dword ptr [esp + 0x2c]
// 00480526  d94124               fld dword ptr [ecx + 0x24]
// 00480529  d8c9                 fmul st(1)
// 0048052b  d95c240c             fstp dword ptr [esp + 0xc]
// 0048052f  d94128               fld dword ptr [ecx + 0x28]
// 00480532  d8c9                 fmul st(1)
// 00480534  d95c2410             fstp dword ptr [esp + 0x10]
// 00480538  d8492c               fmul dword ptr [ecx + 0x2c]
// 0048053b  d95c2414             fstp dword ptr [esp + 0x14]
// 0048053f  d902                 fld dword ptr [edx]
// 00480541  d91c24               fstp dword ptr [esp]
// 00480544  d94204               fld dword ptr [edx + 4]
// 00480547  d95c2404             fstp dword ptr [esp + 4]
// 0048054b  d94208               fld dword ptr [edx + 8]
// 0048054e  d95c2408             fstp dword ptr [esp + 8]
// 00480552  d9442404             fld dword ptr [esp + 4]
// 00480556  d90424               fld dword ptr [esp]
// 00480559  d9442408             fld dword ptr [esp + 8]
// 0048055d  d94104               fld dword ptr [ecx + 4]
// 00480560  d8cb                 fmul st(3)
// 00480562  d901                 fld dword ptr [ecx]
// 00480564  d8cb                 fmul st(3)
// 00480566  dec1                 faddp st(1)
// 00480568  d94108               fld dword ptr [ecx + 8]
// 0048056b  d8ca                 fmul st(2)
// 0048056d  dec1                 faddp st(1)
// 0048056f  d91c24               fstp dword ptr [esp]
// 00480572  d9410c               fld dword ptr [ecx + 0xc]
// 00480575  d8ca                 fmul st(2)
// 00480577  d94110               fld dword ptr [ecx + 0x10]
// 0048057a  d8cc                 fmul st(4)
// 0048057c  dec1                 faddp st(1)
// 0048057e  d94114               fld dword ptr [ecx + 0x14]
// 00480581  d8ca                 fmul st(2)
// 00480583  dec1                 faddp st(1)
// 00480585  d95c2404             fstp dword ptr [esp + 4]
// 00480589  d94118               fld dword ptr [ecx + 0x18]
// 0048058c  deca                 fmulp st(2)
// 0048058e  d9411c               fld dword ptr [ecx + 0x1c]
// 00480591  decb                 fmulp st(3)
// 00480593  d9c9                 fxch st(1)
// 00480595  dec2                 faddp st(2)
// 00480597  d84920               fmul dword ptr [ecx + 0x20]
// 0048059a  dec1                 faddp st(1)
// 0048059c  d95c2408             fstp dword ptr [esp + 8]
// 004805a0  d90424               fld dword ptr [esp]
// 004805a3  d844240c             fadd dword ptr [esp + 0xc]
// 004805a7  d95c2418             fstp dword ptr [esp + 0x18]
// 004805ab  d9442404             fld dword ptr [esp + 4]
// 004805af  d8442410             fadd dword ptr [esp + 0x10]
// 004805b3  d95c241c             fstp dword ptr [esp + 0x1c]
// 004805b7  d9442408             fld dword ptr [esp + 8]
// 004805bb  d8442414             fadd dword ptr [esp + 0x14]
// 004805bf  d95c2420             fstp dword ptr [esp + 0x20]
// 004805c3  d9442418             fld dword ptr [esp + 0x18]
// 004805c7  d918                 fstp dword ptr [eax]
// 004805c9  d944241c             fld dword ptr [esp + 0x1c]
// 004805cd  d95804               fstp dword ptr [eax + 4]
// 004805d0  d9442420             fld dword ptr [esp + 0x20]
// 004805d4  d95808               fstp dword ptr [eax + 8]
// 004805d7  d9420c               fld dword ptr [edx + 0xc]
// 004805da  d9580c               fstp dword ptr [eax + 0xc]
// 004805dd  83c424               add esp, 0x24
// 004805e0  c20800               ret 8
// library rbxgs/script\LuaAtomicClasses.cpp (function ?toWorldSpace@CoordinateFrame@G3D@@QBE?AVVector4@2@ABV32@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
