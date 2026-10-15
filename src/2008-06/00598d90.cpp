// roc 2008-06 00598d90  unit: RBX::PartInstance  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00598d90
//
// 00598d90  8b81c4020000         mov eax, dword ptr [ecx + 0x2c4]
// 00598d96  d94004               fld dword ptr [eax + 4]
// 00598d99  83c004               add eax, 4
// 00598d9c  d905ac9b8100         fld dword ptr [0x819bac]
// 00598da2  dcc9                 fmul st(1), st(0)
// 00598da4  d94004               fld dword ptr [eax + 4]
// 00598da7  d8c9                 fmul st(1)
// 00598da9  d94008               fld dword ptr [eax + 8]
// 00598dac  8b442404             mov eax, dword ptr [esp + 4]
// 00598db0  deca                 fmulp st(2)
// 00598db2  d9c2                 fld st(2)
// 00598db4  d9e0                 fchs 
// 00598db6  d9c1                 fld st(1)
// 00598db8  d9e0                 fchs 
// 00598dba  d9c3                 fld st(3)
// 00598dbc  d9e0                 fchs 
// 00598dbe  d9ca                 fxch st(2)
// 00598dc0  d918                 fstp dword ptr [eax]
// 00598dc2  d95804               fstp dword ptr [eax + 4]
// 00598dc5  d95808               fstp dword ptr [eax + 8]
// 00598dc8  d9ca                 fxch st(2)
// 00598dca  d9580c               fstp dword ptr [eax + 0xc]
// 00598dcd  d9c9                 fxch st(1)
// 00598dcf  d95810               fstp dword ptr [eax + 0x10]
// 00598dd2  d95814               fstp dword ptr [eax + 0x14]
// 00598dd5  c20400               ret 4
// library rbxgs/roc_unit_4f842e31c2d089ba.cpp (function ?getExtentsLocal@PartInstance@RBX@@UBE?AVExtents@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
// roc-lib: rbxgs roc_unit_4f842e31c2d089ba.cpp
