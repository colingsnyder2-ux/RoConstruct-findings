// roc 2007-03 004ff0d0  unit: seg_004f0000  size: 275 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004ff0d0
//
// 004ff0d0  83ec14               sub esp, 0x14
// 004ff0d3  d9442420             fld dword ptr [esp + 0x20]
// 004ff0d7  e82a071200           call 0x61f806
// 004ff0dc  d91c24               fstp dword ptr [esp]
// 004ff0df  d90424               fld dword ptr [esp]
// 004ff0e2  d91c24               fstp dword ptr [esp]
// 004ff0e5  d9442420             fld dword ptr [esp + 0x20]
// 004ff0e9  e81e071200           call 0x61f80c
// 004ff0ee  d95c2420             fstp dword ptr [esp + 0x20]
// 004ff0f2  d9442420             fld dword ptr [esp + 0x20]
// 004ff0f6  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 004ff0fa  d95c2404             fstp dword ptr [esp + 4]
// 004ff0fe  8b442418             mov eax, dword ptr [esp + 0x18]
// 004ff102  d90424               fld dword ptr [esp]
// 004ff105  d9c0                 fld st(0)
// 004ff107  d9e8                 fld1 
// 004ff109  dee1                 fsubrp st(1)
// 004ff10b  d95c2420             fstp dword ptr [esp + 0x20]
// 004ff10f  d901                 fld dword ptr [ecx]
// 004ff111  d84904               fmul dword ptr [ecx + 4]
// 004ff114  d9442420             fld dword ptr [esp + 0x20]
// 004ff118  d9c0                 fld st(0)
// 004ff11a  deca                 fmulp st(2)
// 004ff11c  d9c9                 fxch st(1)
// 004ff11e  d95c241c             fstp dword ptr [esp + 0x1c]
// 004ff122  d94108               fld dword ptr [ecx + 8]
// 004ff125  d809                 fmul dword ptr [ecx]
// 004ff127  d8c9                 fmul st(1)
// 004ff129  d95c2408             fstp dword ptr [esp + 8]
// 004ff12d  d94108               fld dword ptr [ecx + 8]
// 004ff130  d84904               fmul dword ptr [ecx + 4]
// 004ff133  d8c9                 fmul st(1)
// 004ff135  d95c240c             fstp dword ptr [esp + 0xc]
// 004ff139  d901                 fld dword ptr [ecx]
// 004ff13b  d9442404             fld dword ptr [esp + 4]
// 004ff13f  d9c0                 fld st(0)
// 004ff141  deca                 fmulp st(2)
// 004ff143  d9c9                 fxch st(1)
// 004ff145  d95c2410             fstp dword ptr [esp + 0x10]
// 004ff149  d9c0                 fld st(0)
// 004ff14b  d84904               fmul dword ptr [ecx + 4]
// 004ff14e  d91c24               fstp dword ptr [esp]
// 004ff151  d84908               fmul dword ptr [ecx + 8]
// 004ff154  d95c2404             fstp dword ptr [esp + 4]
// 004ff158  d901                 fld dword ptr [ecx]
// 004ff15a  dcc8                 fmul st(0), st(0)
// 004ff15c  d95c2420             fstp dword ptr [esp + 0x20]
// 004ff160  d9442420             fld dword ptr [esp + 0x20]
// 004ff164  d8c9                 fmul st(1)
// 004ff166  d8c2                 fadd st(2)
// 004ff168  d918                 fstp dword ptr [eax]
// 004ff16a  d944241c             fld dword ptr [esp + 0x1c]
// 004ff16e  d9c0                 fld st(0)
// 004ff170  d9442404             fld dword ptr [esp + 4]
// 004ff174  d9c0                 fld st(0)
// 004ff176  deea                 fsubp st(2)
// 004ff178  d9c9                 fxch st(1)
// 004ff17a  d95804               fstp dword ptr [eax + 4]
// 004ff17d  d90424               fld dword ptr [esp]
// 004ff180  d9c0                 fld st(0)
// 004ff182  d9442408             fld dword ptr [esp + 8]
// 004ff186  d9c0                 fld st(0)
// 004ff188  dec2                 faddp st(2)
// 004ff18a  d9c9                 fxch st(1)
// 004ff18c  d95808               fstp dword ptr [eax + 8]
// 004ff18f  d9ca                 fxch st(2)
// 004ff191  dec3                 faddp st(3)
// 004ff193  d9ca                 fxch st(2)
// 004ff195  d9580c               fstp dword ptr [eax + 0xc]
// 004ff198  d94104               fld dword ptr [ecx + 4]
// 004ff19b  dcc8                 fmul st(0), st(0)
// 004ff19d  d95c2420             fstp dword ptr [esp + 0x20]
// 004ff1a1  d9442420             fld dword ptr [esp + 0x20]
// 004ff1a5  d8cb                 fmul st(3)
// 004ff1a7  d8c4                 fadd st(4)
// 004ff1a9  d95810               fstp dword ptr [eax + 0x10]
// 004ff1ac  d944240c             fld dword ptr [esp + 0xc]
// 004ff1b0  d9c0                 fld st(0)
// 004ff1b2  d9442410             fld dword ptr [esp + 0x10]
// 004ff1b6  d9c0                 fld st(0)
// 004ff1b8  deea                 fsubp st(2)
// 004ff1ba  d9c9                 fxch st(1)
// 004ff1bc  d95814               fstp dword ptr [eax + 0x14]
// 004ff1bf  d9ca                 fxch st(2)
// 004ff1c1  dee3                 fsubrp st(3)
// 004ff1c3  d9ca                 fxch st(2)
// 004ff1c5  d95818               fstp dword ptr [eax + 0x18]
// 004ff1c8  dec1                 faddp st(1)
// 004ff1ca  d9581c               fstp dword ptr [eax + 0x1c]
// 004ff1cd  d94108               fld dword ptr [ecx + 8]
// 004ff1d0  dcc8                 fmul st(0), st(0)
// 004ff1d2  d95c2420             fstp dword ptr [esp + 0x20]
// 004ff1d6  d84c2420             fmul dword ptr [esp + 0x20]
// 004ff1da  dec1                 faddp st(1)
// 004ff1dc  d95820               fstp dword ptr [eax + 0x20]
// 004ff1df  83c414               add esp, 0x14
// 004ff1e2  c3                   ret 
// library rbxgs-g3d/G3Dcpp\Matrix3.cpp (function ?fromAxisAngle@Matrix3@G3D@@SA?AV12@ABVVector3@2@M@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d G3Dcpp/Matrix3.cpp
