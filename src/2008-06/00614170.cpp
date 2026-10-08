// roc 2008-06 00614170  unit: RBX::RevoluteLink  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00614170
//
// 00614170  d9ee                 fldz 
// 00614172  8bc1                 mov eax, ecx
// 00614174  b901000000           mov ecx, 1
// 00614179  840d50f09600         test byte ptr [0x96f050], cl
// 0061417f  7518                 jne 0x614199
// 00614181  090d50f09600         or dword ptr [0x96f050], ecx
// 00614187  d91544f09600         fst dword ptr [0x96f044]
// 0061418d  d91548f09600         fst dword ptr [0x96f048]
// 00614193  d9154cf09600         fst dword ptr [0x96f04c]
// 00614199  d90544f09600         fld dword ptr [0x96f044]
// 0061419f  d918                 fstp dword ptr [eax]
// 006141a1  d90548f09600         fld dword ptr [0x96f048]
// 006141a7  d95804               fstp dword ptr [eax + 4]
// 006141aa  d9054cf09600         fld dword ptr [0x96f04c]
// 006141b0  d95808               fstp dword ptr [eax + 8]
// 006141b3  840d50f09600         test byte ptr [0x96f050], cl
// 006141b9  751a                 jne 0x6141d5
// 006141bb  090d50f09600         or dword ptr [0x96f050], ecx
// 006141c1  d91544f09600         fst dword ptr [0x96f044]
// 006141c7  d91548f09600         fst dword ptr [0x96f048]
// 006141cd  d91d4cf09600         fstp dword ptr [0x96f04c]
// 006141d3  eb02                 jmp 0x6141d7
// 006141d5  ddd8                 fstp st(0)
// 006141d7  d90544f09600         fld dword ptr [0x96f044]
// 006141dd  d9580c               fstp dword ptr [eax + 0xc]
// 006141e0  d90548f09600         fld dword ptr [0x96f048]
// 006141e6  d95810               fstp dword ptr [eax + 0x10]
// 006141e9  d9054cf09600         fld dword ptr [0x96f04c]
// 006141ef  d95814               fstp dword ptr [eax + 0x14]
// 006141f2  c3                   ret 
// library rbxgs/v8kernel\Body.cpp (function ??0Velocity@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8kernel/Body.cpp
