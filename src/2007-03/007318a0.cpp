// roc 2007-03 007318a0  unit: seg_00730000  size: 291 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 007318a0
//
// 007318a0  83ec40               sub esp, 0x40
// 007318a3  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 007318a7  d94004               fld dword ptr [eax + 4]
// 007318aa  83ec10               sub esp, 0x10
// 007318ad  d9ee                 fldz 
// 007318af  dcc1                 fadd st(1), st(0)
// 007318b1  d9c9                 fxch st(1)
// 007318b3  d95c246c             fstp dword ptr [esp + 0x6c]
// 007318b7  d944246c             fld dword ptr [esp + 0x6c]
// 007318bb  d95c240c             fstp dword ptr [esp + 0xc]
// 007318bf  d800                 fadd dword ptr [eax]
// 007318c1  8d442410             lea eax, [esp + 0x10]
// 007318c5  d95c246c             fstp dword ptr [esp + 0x6c]
// 007318c9  d944246c             fld dword ptr [esp + 0x6c]
// 007318cd  d95c2408             fstp dword ptr [esp + 8]
// 007318d1  d9ee                 fldz 
// 007318d3  d9542404             fst dword ptr [esp + 4]
// 007318d7  d91c24               fstp dword ptr [esp]
// 007318da  50                   push eax
// 007318db  e8a044d2ff           call 0x455d80
// 007318e0  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 007318e4  d94004               fld dword ptr [eax + 4]
// 007318e7  83c404               add esp, 4
// 007318ea  d9ee                 fldz 
// 007318ec  8d4c2420             lea ecx, [esp + 0x20]
// 007318f0  dcc1                 fadd st(1), st(0)
// 007318f2  d9c9                 fxch st(1)
// 007318f4  d95c246c             fstp dword ptr [esp + 0x6c]
// 007318f8  d944246c             fld dword ptr [esp + 0x6c]
// 007318fc  d95c240c             fstp dword ptr [esp + 0xc]
// 00731900  d800                 fadd dword ptr [eax]
// 00731902  d95c246c             fstp dword ptr [esp + 0x6c]
// 00731906  d944246c             fld dword ptr [esp + 0x6c]
// 0073190a  d95c2408             fstp dword ptr [esp + 8]
// 0073190e  d9ee                 fldz 
// 00731910  d9542404             fst dword ptr [esp + 4]
// 00731914  d91c24               fstp dword ptr [esp]
// 00731917  51                   push ecx
// 00731918  e86344d2ff           call 0x455d80
// 0073191d  8b442468             mov eax, dword ptr [esp + 0x68]
// 00731921  d94004               fld dword ptr [eax + 4]
// 00731924  83c404               add esp, 4
// 00731927  d9ee                 fldz 
// 00731929  8d542430             lea edx, [esp + 0x30]
// 0073192d  dcc1                 fadd st(1), st(0)
// 0073192f  d9c9                 fxch st(1)
// 00731931  d95c246c             fstp dword ptr [esp + 0x6c]
// 00731935  d944246c             fld dword ptr [esp + 0x6c]
// 00731939  d95c240c             fstp dword ptr [esp + 0xc]
// 0073193d  d800                 fadd dword ptr [eax]
// 0073193f  d95c246c             fstp dword ptr [esp + 0x6c]
// 00731943  d944246c             fld dword ptr [esp + 0x6c]
// 00731947  d95c2408             fstp dword ptr [esp + 8]
// 0073194b  d9ee                 fldz 
// 0073194d  d9542404             fst dword ptr [esp + 4]
// 00731951  d91c24               fstp dword ptr [esp]
// 00731954  52                   push edx
// 00731955  e82644d2ff           call 0x455d80
// 0073195a  8b442464             mov eax, dword ptr [esp + 0x64]
// 0073195e  d94004               fld dword ptr [eax + 4]
// 00731961  83c404               add esp, 4
// 00731964  d9ee                 fldz 
// 00731966  dcc1                 fadd st(1), st(0)
// 00731968  d9c9                 fxch st(1)
// 0073196a  d95c246c             fstp dword ptr [esp + 0x6c]
// 0073196e  d944246c             fld dword ptr [esp + 0x6c]
// 00731972  d95c240c             fstp dword ptr [esp + 0xc]
// 00731976  d800                 fadd dword ptr [eax]
// 00731978  8d442440             lea eax, [esp + 0x40]
// 0073197c  d95c246c             fstp dword ptr [esp + 0x6c]
// 00731980  d944246c             fld dword ptr [esp + 0x6c]
// 00731984  d95c2408             fstp dword ptr [esp + 8]
// 00731988  d9ee                 fldz 
// 0073198a  d9542404             fst dword ptr [esp + 4]
// 0073198e  d91c24               fstp dword ptr [esp]
// 00731991  50                   push eax
// 00731992  e8e943d2ff           call 0x455d80
// 00731997  8d4c2414             lea ecx, [esp + 0x14]
// 0073199b  51                   push ecx
// 0073199c  8d542428             lea edx, [esp + 0x28]
// 007319a0  52                   push edx
// 007319a1  8d44243c             lea eax, [esp + 0x3c]
// 007319a5  8b542468             mov edx, dword ptr [esp + 0x68]
// 007319a9  50                   push eax
// 007319aa  8b442468             mov eax, dword ptr [esp + 0x68]
// 007319ae  8d4c2450             lea ecx, [esp + 0x50]
// 007319b2  51                   push ecx
// 007319b3  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 007319b7  52                   push edx
// 007319b8  50                   push eax
// 007319b9  51                   push ecx
// 007319ba  e801faffff           call 0x7313c0
// 007319bf  83c470               add esp, 0x70
// 007319c2  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\Draw.cpp (function ?rect2D@Draw@G3D@@SAXABVRect2D@2@PAVRenderDevice@2@ABVColor4@2@ABVVector2@2@333@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d GLG3Dcpp/Draw.cpp
