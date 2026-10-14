// roc 2008-06 00641280  unit: RBX::AxisMoveTool  size: 155 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00641280
//
// 00641280  83ec3c               sub esp, 0x3c
// 00641283  8b442448             mov eax, dword ptr [esp + 0x48]
// 00641287  8b542444             mov edx, dword ptr [esp + 0x44]
// 0064128b  56                   push esi
// 0064128c  50                   push eax
// 0064128d  52                   push edx
// 0064128e  8d442418             lea eax, [esp + 0x18]
// 00641292  50                   push eax
// 00641293  e8a8ffffff           call 0x641240
// 00641298  d905608b8200         fld dword ptr [0x828b60]
// 0064129e  6a02                 push 2
// 006412a0  d95c2450             fstp dword ptr [esp + 0x50]
// 006412a4  8d4c2408             lea ecx, [esp + 8]
// 006412a8  51                   push ecx
// 006412a9  8d4c2418             lea ecx, [esp + 0x18]
// 006412ad  e88e1fedff           call 0x513240
// 006412b2  d900                 fld dword ptr [eax]
// 006412b4  d944244c             fld dword ptr [esp + 0x4c]
// 006412b8  dcc9                 fmul st(1), st(0)
// 006412ba  d94004               fld dword ptr [eax + 4]
// 006412bd  d8c9                 fmul st(1)
// 006412bf  d94008               fld dword ptr [eax + 8]
// 006412c2  deca                 fmulp st(2)
// 006412c4  d9442450             fld dword ptr [esp + 0x50]
// 006412c8  dccb                 fmul st(3), st(0)
// 006412ca  dcc9                 fmul st(1), st(0)
// 006412cc  deca                 fmulp st(2)
// 006412ce  d9ca                 fxch st(2)
// 006412d0  d8442434             fadd dword ptr [esp + 0x34]
// 006412d4  d95c2404             fstp dword ptr [esp + 4]
// 006412d8  d9442438             fld dword ptr [esp + 0x38]
// 006412dc  dec2                 faddp st(2)
// 006412de  d9c9                 fxch st(1)
// 006412e0  d95c2408             fstp dword ptr [esp + 8]
// 006412e4  d844243c             fadd dword ptr [esp + 0x3c]
// 006412e8  d95c240c             fstp dword ptr [esp + 0xc]
// 006412ec  e82f2bedff           call 0x513e20
// 006412f1  8b742444             mov esi, dword ptr [esp + 0x44]
// 006412f5  50                   push eax
// 006412f6  8bce                 mov ecx, esi
// 006412f8  e8231fedff           call 0x513220
// 006412fd  d9442404             fld dword ptr [esp + 4]
// 00641301  d95e24               fstp dword ptr [esi + 0x24]
// 00641304  8bc6                 mov eax, esi
// 00641306  d9442408             fld dword ptr [esp + 8]
// 0064130a  d95e28               fstp dword ptr [esi + 0x28]
// 0064130d  d944240c             fld dword ptr [esp + 0xc]
// 00641311  d95e2c               fstp dword ptr [esi + 0x2c]
// 00641314  5e                   pop esi
// 00641315  83c43c               add esp, 0x3c
// 00641318  c21000               ret 0x10
// library rbxgs-dll/v8datamodel\ICharacterSubject.cpp (function ?goalFromDistance@ICharacterSubject@RBX@@AAE?AVCoordinateFrame@G3D@@ABV34@0M@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
// roc-lib: rbxgs-dll v8datamodel/ICharacterSubject.cpp
