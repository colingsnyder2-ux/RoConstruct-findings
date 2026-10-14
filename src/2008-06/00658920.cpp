// roc 2008-06 00658920  unit: RBX::ArrowButton  size: 213 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00658920
//
// 00658920  83ec48               sub esp, 0x48
// 00658923  8b442450             mov eax, dword ptr [esp + 0x50]
// 00658927  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 0065892b  d900                 fld dword ptr [eax]
// 0065892d  d809                 fmul dword ptr [ecx]
// 0065892f  8d1424               lea edx, [esp]
// 00658932  d91c24               fstp dword ptr [esp]
// 00658935  d94004               fld dword ptr [eax + 4]
// 00658938  d84904               fmul dword ptr [ecx + 4]
// 0065893b  d95c2404             fstp dword ptr [esp + 4]
// 0065893f  d94008               fld dword ptr [eax + 8]
// 00658942  d84908               fmul dword ptr [ecx + 8]
// 00658945  d95c2408             fstp dword ptr [esp + 8]
// 00658949  d9400c               fld dword ptr [eax + 0xc]
// 0065894c  d809                 fmul dword ptr [ecx]
// 0065894e  d95c240c             fstp dword ptr [esp + 0xc]
// 00658952  d94010               fld dword ptr [eax + 0x10]
// 00658955  d84904               fmul dword ptr [ecx + 4]
// 00658958  d95c2410             fstp dword ptr [esp + 0x10]
// 0065895c  d94014               fld dword ptr [eax + 0x14]
// 0065895f  d84908               fmul dword ptr [ecx + 8]
// 00658962  d95c2414             fstp dword ptr [esp + 0x14]
// 00658966  d94018               fld dword ptr [eax + 0x18]
// 00658969  d809                 fmul dword ptr [ecx]
// 0065896b  d95c2418             fstp dword ptr [esp + 0x18]
// 0065896f  d9401c               fld dword ptr [eax + 0x1c]
// 00658972  d84904               fmul dword ptr [ecx + 4]
// 00658975  d95c241c             fstp dword ptr [esp + 0x1c]
// 00658979  d94020               fld dword ptr [eax + 0x20]
// 0065897c  d84908               fmul dword ptr [ecx + 8]
// 0065897f  8d4c2424             lea ecx, [esp + 0x24]
// 00658983  51                   push ecx
// 00658984  50                   push eax
// 00658985  52                   push edx
// 00658986  d95c242c             fstp dword ptr [esp + 0x2c]
// 0065898a  e811ffffff           call 0x6588a0
// 0065898f  d9ee                 fldz 
// 00658991  8b442458             mov eax, dword ptr [esp + 0x58]
// 00658995  d910                 fst dword ptr [eax]
// 00658997  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 0065899b  d95004               fst dword ptr [eax + 4]
// 0065899e  d95808               fstp dword ptr [eax + 8]
// 006589a1  d9442434             fld dword ptr [esp + 0x34]
// 006589a5  d84904               fmul dword ptr [ecx + 4]
// 006589a8  d9442430             fld dword ptr [esp + 0x30]
// 006589ac  d809                 fmul dword ptr [ecx]
// 006589ae  dec1                 faddp st(1)
// 006589b0  d94108               fld dword ptr [ecx + 8]
// 006589b3  d84c2438             fmul dword ptr [esp + 0x38]
// 006589b7  dec1                 faddp st(1)
// 006589b9  d918                 fstp dword ptr [eax]
// 006589bb  d9442440             fld dword ptr [esp + 0x40]
// 006589bf  d84904               fmul dword ptr [ecx + 4]
// 006589c2  d944243c             fld dword ptr [esp + 0x3c]
// 006589c6  d809                 fmul dword ptr [ecx]
// 006589c8  dec1                 faddp st(1)
// 006589ca  d94108               fld dword ptr [ecx + 8]
// 006589cd  d84c2444             fmul dword ptr [esp + 0x44]
// 006589d1  dec1                 faddp st(1)
// 006589d3  d95804               fstp dword ptr [eax + 4]
// 006589d6  d944244c             fld dword ptr [esp + 0x4c]
// 006589da  d84904               fmul dword ptr [ecx + 4]
// 006589dd  d9442448             fld dword ptr [esp + 0x48]
// 006589e1  d809                 fmul dword ptr [ecx]
// 006589e3  dec1                 faddp st(1)
// 006589e5  d94108               fld dword ptr [ecx + 8]
// 006589e8  d84c2450             fmul dword ptr [esp + 0x50]
// 006589ec  dec1                 faddp st(1)
// 006589ee  d95808               fstp dword ptr [eax + 8]
// 006589f1  83c454               add esp, 0x54
// 006589f4  c3                   ret 
// library rbxgs-dll/v8kernel\SimBody.cpp (function ?computeRotVel@RBX@@YA?AVVector3@G3D@@ABVMatrix3@3@ABV23@1@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
// roc-lib: rbxgs-dll v8kernel/SimBody.cpp
