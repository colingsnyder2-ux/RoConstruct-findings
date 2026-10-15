// roc 2008-06 005e76f0  unit: RBX::Ball  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e76f0
//
// 005e76f0  83ec18               sub esp, 0x18
// 005e76f3  8b819c000000         mov eax, dword ptr [ecx + 0x9c]
// 005e76f9  d94004               fld dword ptr [eax + 4]
// 005e76fc  83c004               add eax, 4
// 005e76ff  d905ac9b8100         fld dword ptr [0x819bac]
// 005e7705  56                   push esi
// 005e7706  dcc9                 fmul st(1), st(0)
// 005e7708  8b742420             mov esi, dword ptr [esp + 0x20]
// 005e770c  d94004               fld dword ptr [eax + 4]
// 005e770f  8d4c2404             lea ecx, [esp + 4]
// 005e7713  d8c9                 fmul st(1)
// 005e7715  d94008               fld dword ptr [eax + 8]
// 005e7718  8b442424             mov eax, dword ptr [esp + 0x24]
// 005e771c  deca                 fmulp st(2)
// 005e771e  50                   push eax
// 005e771f  51                   push ecx
// 005e7720  56                   push esi
// 005e7721  d9c2                 fld st(2)
// 005e7723  d9e0                 fchs 
// 005e7725  d9c1                 fld st(1)
// 005e7727  d9e0                 fchs 
// 005e7729  d9c3                 fld st(3)
// 005e772b  d9e0                 fchs 
// 005e772d  d9ca                 fxch st(2)
// 005e772f  d95c2410             fstp dword ptr [esp + 0x10]
// 005e7733  d95c2414             fstp dword ptr [esp + 0x14]
// 005e7737  d95c2418             fstp dword ptr [esp + 0x18]
// 005e773b  d9ca                 fxch st(2)
// 005e773d  d95c241c             fstp dword ptr [esp + 0x1c]
// 005e7741  d9c9                 fxch st(1)
// 005e7743  d95c2420             fstp dword ptr [esp + 0x20]
// 005e7747  d95c2424             fstp dword ptr [esp + 0x24]
// 005e774b  e8d0210600           call 0x649920
// 005e7750  83c40c               add esp, 0xc
// 005e7753  8bc6                 mov eax, esi
// 005e7755  5e                   pop esi
// 005e7756  83c418               add esp, 0x18
// 005e7759  c20800               ret 8
// library rbxgs/roc_unit_103a89815837edbc.cpp (function ?getFaceInObject@Primitive@RBX@@QAE?AVFace@2@W4NormalId@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
// roc-lib: rbxgs roc_unit_103a89815837edbc.cpp
