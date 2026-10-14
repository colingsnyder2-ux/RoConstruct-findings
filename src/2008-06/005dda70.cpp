// roc 2008-06 005dda70  unit: RBX::Message  size: 177 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005dda70
//
// 005dda70  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005dda74  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005dda78  d900                 fld dword ptr [eax]
// 005dda7a  d821                 fsub dword ptr [ecx]
// 005dda7c  83ec48               sub esp, 0x48
// 005dda7f  d94004               fld dword ptr [eax + 4]
// 005dda82  56                   push esi
// 005dda83  d86104               fsub dword ptr [ecx + 4]
// 005dda86  83ec24               sub esp, 0x24
// 005dda89  d94008               fld dword ptr [eax + 8]
// 005dda8c  d86108               fsub dword ptr [ecx + 8]
// 005dda8f  8d4c2428             lea ecx, [esp + 0x28]
// 005dda93  d9c2                 fld st(2)
// 005dda95  d8cb                 fmul st(3)
// 005dda97  d9c2                 fld st(2)
// 005dda99  d8cb                 fmul st(3)
// 005dda9b  d9c2                 fld st(2)
// 005dda9d  d8cb                 fmul st(3)
// 005dda9f  d9c4                 fld st(4)
// 005ddaa1  d8ce                 fmul st(6)
// 005ddaa3  d9c4                 fld st(4)
// 005ddaa5  decf                 fmulp st(7)
// 005ddaa7  d9cc                 fxch st(4)
// 005ddaa9  decd                 fmulp st(5)
// 005ddaab  d9cc                 fxch st(4)
// 005ddaad  d9e0                 fchs 
// 005ddaaf  d9cd                 fxch st(5)
// 005ddab1  d9e0                 fchs 
// 005ddab3  d9cb                 fxch st(3)
// 005ddab5  d9e0                 fchs 
// 005ddab7  d9c1                 fld st(1)
// 005ddab9  d8c3                 fadd st(3)
// 005ddabb  d95c2420             fstp dword ptr [esp + 0x20]
// 005ddabf  d9cd                 fxch st(5)
// 005ddac1  d954241c             fst dword ptr [esp + 0x1c]
// 005ddac5  d9cb                 fxch st(3)
// 005ddac7  d9542418             fst dword ptr [esp + 0x18]
// 005ddacb  d9cb                 fxch st(3)
// 005ddacd  d95c2414             fstp dword ptr [esp + 0x14]
// 005ddad1  d9c3                 fld st(3)
// 005ddad3  dec2                 faddp st(2)
// 005ddad5  d9c9                 fxch st(1)
// 005ddad7  d95c2410             fstp dword ptr [esp + 0x10]
// 005ddadb  d9cb                 fxch st(3)
// 005ddadd  d954240c             fst dword ptr [esp + 0xc]
// 005ddae1  d9c9                 fxch st(1)
// 005ddae3  d95c2408             fstp dword ptr [esp + 8]
// 005ddae7  d95c2404             fstp dword ptr [esp + 4]
// 005ddaeb  dec1                 faddp st(1)
// 005ddaed  d91c24               fstp dword ptr [esp]
// 005ddaf0  e87b60f3ff           call 0x513b70
// 005ddaf5  d9442460             fld dword ptr [esp + 0x60]
// 005ddaf9  50                   push eax
// 005ddafa  51                   push ecx
// 005ddafb  8d442430             lea eax, [esp + 0x30]
// 005ddaff  d91c24               fstp dword ptr [esp]
// 005ddb02  50                   push eax
// 005ddb03  e8d859f3ff           call 0x5134e0
// 005ddb08  8b74245c             mov esi, dword ptr [esp + 0x5c]
// 005ddb0c  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 005ddb10  83c40c               add esp, 0xc
// 005ddb13  50                   push eax
// 005ddb14  56                   push esi
// 005ddb15  e8d657f3ff           call 0x5132f0
// 005ddb1a  8bc6                 mov eax, esi
// 005ddb1c  5e                   pop esi
// 005ddb1d  83c448               add esp, 0x48
// 005ddb20  c3                   ret 
// library rbxgs-dll/util\Math.cpp (function ?getIWorldAtPoint@Math@RBX@@SA?AVMatrix3@G3D@@ABVVector3@4@0ABV34@M@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
// roc-lib: rbxgs-dll util/Math.cpp
