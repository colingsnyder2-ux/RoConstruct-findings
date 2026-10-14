// roc 2008-06 005dec60  unit: RBX::Message  size: 121 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005dec60
//
// 005dec60  83ec10               sub esp, 0x10
// 005dec63  d905608b8200         fld dword ptr [0x828b60]
// 005dec69  56                   push esi
// 005dec6a  57                   push edi
// 005dec6b  d95c2408             fstp dword ptr [esp + 8]
// 005dec6f  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 005dec73  6a02                 push 2
// 005dec75  8d442410             lea eax, [esp + 0x10]
// 005dec79  50                   push eax
// 005dec7a  8bcf                 mov ecx, edi
// 005dec7c  e8bf45f3ff           call 0x513240
// 005dec81  d900                 fld dword ptr [eax]
// 005dec83  d9442408             fld dword ptr [esp + 8]
// 005dec87  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 005dec8b  dcc9                 fmul st(1), st(0)
// 005dec8d  57                   push edi
// 005dec8e  d84808               fmul dword ptr [eax + 8]
// 005dec91  8bce                 mov ecx, esi
// 005dec93  d9c9                 fxch st(1)
// 005dec95  d9e0                 fchs 
// 005dec97  d9c9                 fxch st(1)
// 005dec99  d9e0                 fchs 
// 005dec9b  d9f3                 fpatan 
// 005dec9d  d95c2424             fstp dword ptr [esp + 0x24]
// 005deca1  e87a45f3ff           call 0x513220
// 005deca6  d94724               fld dword ptr [edi + 0x24]
// 005deca9  d95e24               fstp dword ptr [esi + 0x24]
// 005decac  83ec08               sub esp, 8
// 005decaf  d94728               fld dword ptr [edi + 0x28]
// 005decb2  d95e28               fstp dword ptr [esi + 0x28]
// 005decb5  d9472c               fld dword ptr [edi + 0x2c]
// 005decb8  d95e2c               fstp dword ptr [esi + 0x2c]
// 005decbb  d9ee                 fldz 
// 005decbd  d95c2404             fstp dword ptr [esp + 4]
// 005decc1  d9442428             fld dword ptr [esp + 0x28]
// 005decc5  d91c24               fstp dword ptr [esp]
// 005decc8  56                   push esi
// 005decc9  e8f2f9ffff           call 0x5de6c0
// 005decce  83c40c               add esp, 0xc
// 005decd1  5f                   pop edi
// 005decd2  8bc6                 mov eax, esi
// 005decd4  5e                   pop esi
// 005decd5  83c410               add esp, 0x10
// 005decd8  c3                   ret 
// library rbxgs-dll/util\Math.cpp (function ?getFocusSpace@Math@RBX@@SA?AVCoordinateFrame@G3D@@ABV34@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
// roc-lib: rbxgs-dll util/Math.cpp
