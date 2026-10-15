// roc 2008-06 005e8500  unit: RBX::Primitive  size: 166 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e8500
//
// 005e8500  83ec3c               sub esp, 0x3c
// 005e8503  56                   push esi
// 005e8504  8bf1                 mov esi, ecx
// 005e8506  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 005e850c  d94004               fld dword ptr [eax + 4]
// 005e850f  83c004               add eax, 4
// 005e8512  d905ac9b8100         fld dword ptr [0x819bac]
// 005e8518  8d4c2410             lea ecx, [esp + 0x10]
// 005e851c  dcc9                 fmul st(1), st(0)
// 005e851e  d94004               fld dword ptr [eax + 4]
// 005e8521  d8c9                 fmul st(1)
// 005e8523  d94008               fld dword ptr [eax + 8]
// 005e8526  8b442444             mov eax, dword ptr [esp + 0x44]
// 005e852a  deca                 fmulp st(2)
// 005e852c  50                   push eax
// 005e852d  d94004               fld dword ptr [eax + 4]
// 005e8530  d8c9                 fmul st(1)
// 005e8532  d94008               fld dword ptr [eax + 8]
// 005e8535  d8cb                 fmul st(3)
// 005e8537  dec1                 faddp st(1)
// 005e8539  d900                 fld dword ptr [eax]
// 005e853b  d8cc                 fmul st(4)
// 005e853d  dec1                 faddp st(1)
// 005e853f  d84024               fadd dword ptr [eax + 0x24]
// 005e8542  d95c2408             fstp dword ptr [esp + 8]
// 005e8546  d9400c               fld dword ptr [eax + 0xc]
// 005e8549  d8cb                 fmul st(3)
// 005e854b  d94010               fld dword ptr [eax + 0x10]
// 005e854e  d8ca                 fmul st(2)
// 005e8550  dec1                 faddp st(1)
// 005e8552  d94014               fld dword ptr [eax + 0x14]
// 005e8555  d8cb                 fmul st(3)
// 005e8557  dec1                 faddp st(1)
// 005e8559  d84028               fadd dword ptr [eax + 0x28]
// 005e855c  d95c240c             fstp dword ptr [esp + 0xc]
// 005e8560  d94018               fld dword ptr [eax + 0x18]
// 005e8563  decb                 fmulp st(3)
// 005e8565  d8481c               fmul dword ptr [eax + 0x1c]
// 005e8568  dec2                 faddp st(2)
// 005e856a  d84820               fmul dword ptr [eax + 0x20]
// 005e856d  dec1                 faddp st(1)
// 005e856f  d8402c               fadd dword ptr [eax + 0x2c]
// 005e8572  d95c2410             fstp dword ptr [esp + 0x10]
// 005e8576  e8a5acf2ff           call 0x513220
// 005e857b  d9442404             fld dword ptr [esp + 4]
// 005e857f  8d442410             lea eax, [esp + 0x10]
// 005e8583  d95c2434             fstp dword ptr [esp + 0x34]
// 005e8587  50                   push eax
// 005e8588  d944240c             fld dword ptr [esp + 0xc]
// 005e858c  8bce                 mov ecx, esi
// 005e858e  d95c243c             fstp dword ptr [esp + 0x3c]
// 005e8592  d9442410             fld dword ptr [esp + 0x10]
// 005e8596  d95c2440             fstp dword ptr [esp + 0x40]
// 005e859a  e861fcffff           call 0x5e8200
// 005e859f  5e                   pop esi
// 005e85a0  83c43c               add esp, 0x3c
// 005e85a3  c20400               ret 4
// library rbxgs/roc_unit_103a89815837edbc.cpp (function ?setGridCorner@Primitive@RBX@@QAEXABVCoordinateFrame@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
// roc-lib: rbxgs roc_unit_103a89815837edbc.cpp
