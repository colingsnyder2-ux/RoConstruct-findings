// roc 2008-06 005e82e0  unit: RBX::Primitive  size: 184 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e82e0
//
// 005e82e0  83ec0c               sub esp, 0xc
// 005e82e3  56                   push esi
// 005e82e4  8bf1                 mov esi, ecx
// 005e82e6  57                   push edi
// 005e82e7  8bbea0000000         mov edi, dword ptr [esi + 0xa0]
// 005e82ed  8bcf                 mov ecx, edi
// 005e82ef  e86c10fbff           call 0x599360
// 005e82f4  8b8e9c000000         mov ecx, dword ptr [esi + 0x9c]
// 005e82fa  d94104               fld dword ptr [ecx + 4]
// 005e82fd  83c104               add ecx, 4
// 005e8300  d905ac9b8100         fld dword ptr [0x819bac]
// 005e8306  8d8794000000         lea eax, [edi + 0x94]
// 005e830c  dcc9                 fmul st(1), st(0)
// 005e830e  8b742418             mov esi, dword ptr [esp + 0x18]
// 005e8312  d94104               fld dword ptr [ecx + 4]
// 005e8315  50                   push eax
// 005e8316  d8c9                 fmul st(1)
// 005e8318  d94108               fld dword ptr [ecx + 8]
// 005e831b  8bce                 mov ecx, esi
// 005e831d  deca                 fmulp st(2)
// 005e831f  d9ca                 fxch st(2)
// 005e8321  d9e0                 fchs 
// 005e8323  d9ca                 fxch st(2)
// 005e8325  d9e0                 fchs 
// 005e8327  d9c9                 fxch st(1)
// 005e8329  d9e0                 fchs 
// 005e832b  d94008               fld dword ptr [eax + 8]
// 005e832e  d8c9                 fmul st(1)
// 005e8330  d94004               fld dword ptr [eax + 4]
// 005e8333  d8cb                 fmul st(3)
// 005e8335  dec1                 faddp st(1)
// 005e8337  d900                 fld dword ptr [eax]
// 005e8339  d8cc                 fmul st(4)
// 005e833b  dec1                 faddp st(1)
// 005e833d  d84024               fadd dword ptr [eax + 0x24]
// 005e8340  d95c240c             fstp dword ptr [esp + 0xc]
// 005e8344  d94014               fld dword ptr [eax + 0x14]
// 005e8347  d8c9                 fmul st(1)
// 005e8349  d9400c               fld dword ptr [eax + 0xc]
// 005e834c  d8cc                 fmul st(4)
// 005e834e  dec1                 faddp st(1)
// 005e8350  d94010               fld dword ptr [eax + 0x10]
// 005e8353  d8cb                 fmul st(3)
// 005e8355  dec1                 faddp st(1)
// 005e8357  d84028               fadd dword ptr [eax + 0x28]
// 005e835a  d95c2410             fstp dword ptr [esp + 0x10]
// 005e835e  d84820               fmul dword ptr [eax + 0x20]
// 005e8361  d94018               fld dword ptr [eax + 0x18]
// 005e8364  decb                 fmulp st(3)
// 005e8366  dec2                 faddp st(2)
// 005e8368  d8481c               fmul dword ptr [eax + 0x1c]
// 005e836b  dec1                 faddp st(1)
// 005e836d  d8402c               fadd dword ptr [eax + 0x2c]
// 005e8370  d95c2414             fstp dword ptr [esp + 0x14]
// 005e8374  e8a7aef2ff           call 0x513220
// 005e8379  d9442408             fld dword ptr [esp + 8]
// 005e837d  5f                   pop edi
// 005e837e  d95e24               fstp dword ptr [esi + 0x24]
// 005e8381  8bc6                 mov eax, esi
// 005e8383  d9442408             fld dword ptr [esp + 8]
// 005e8387  d95e28               fstp dword ptr [esi + 0x28]
// 005e838a  d944240c             fld dword ptr [esp + 0xc]
// 005e838e  d95e2c               fstp dword ptr [esi + 0x2c]
// 005e8391  5e                   pop esi
// 005e8392  83c40c               add esp, 0xc
// 005e8395  c20400               ret 4
// library rbxgs/roc_unit_103a89815837edbc.cpp (function ?getGridCorner@Primitive@RBX@@QBE?AVCoordinateFrame@G3D@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
// roc-lib: rbxgs roc_unit_103a89815837edbc.cpp
