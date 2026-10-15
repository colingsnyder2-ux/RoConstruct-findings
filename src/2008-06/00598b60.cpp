// roc 2008-06 00598b60  unit: RBX::NullController  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00598b60
//
// 00598b60  83ec18               sub esp, 0x18
// 00598b63  8b819c000000         mov eax, dword ptr [ecx + 0x9c]
// 00598b69  d94004               fld dword ptr [eax + 4]
// 00598b6c  83c004               add eax, 4
// 00598b6f  d905ac9b8100         fld dword ptr [0x819bac]
// 00598b75  56                   push esi
// 00598b76  dcc9                 fmul st(1), st(0)
// 00598b78  d94004               fld dword ptr [eax + 4]
// 00598b7b  d8c9                 fmul st(1)
// 00598b7d  d94008               fld dword ptr [eax + 8]
// 00598b80  deca                 fmulp st(2)
// 00598b82  d9c2                 fld st(2)
// 00598b84  d9e0                 fchs 
// 00598b86  d9c1                 fld st(1)
// 00598b88  d9e0                 fchs 
// 00598b8a  d9c3                 fld st(3)
// 00598b8c  d9e0                 fchs 
// 00598b8e  d9ca                 fxch st(2)
// 00598b90  d95c2404             fstp dword ptr [esp + 4]
// 00598b94  d95c2408             fstp dword ptr [esp + 8]
// 00598b98  d95c240c             fstp dword ptr [esp + 0xc]
// 00598b9c  d9ca                 fxch st(2)
// 00598b9e  d95c2410             fstp dword ptr [esp + 0x10]
// 00598ba2  d9c9                 fxch st(1)
// 00598ba4  d95c2414             fstp dword ptr [esp + 0x14]
// 00598ba8  d95c2418             fstp dword ptr [esp + 0x18]
// 00598bac  e80ff70400           call 0x5e82c0
// 00598bb1  8b742420             mov esi, dword ptr [esp + 0x20]
// 00598bb5  50                   push eax
// 00598bb6  56                   push esi
// 00598bb7  8d4c240c             lea ecx, [esp + 0xc]
// 00598bbb  e860700700           call 0x60fc20
// 00598bc0  8bc6                 mov eax, esi
// 00598bc2  5e                   pop esi
// 00598bc3  83c418               add esp, 0x18
// 00598bc6  c20400               ret 4
// library rbxgs/roc_unit_4f842e31c2d089ba.cpp (function ?getExtentsWorld@Primitive@RBX@@QBE?AVExtents@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
// roc-lib: rbxgs roc_unit_4f842e31c2d089ba.cpp
