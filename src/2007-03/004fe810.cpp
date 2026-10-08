// roc 2007-03 004fe810  unit: seg_004f0000  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004fe810
//
// 004fe810  dd442404             fld qword ptr [esp + 4]
// 004fe814  b801000000           mov eax, 1
// 004fe819  8405d0778b00         test byte ptr [0x8b77d0], al
// 004fe81f  d9e1                 fabs 
// 004fe821  dc05a81f7900         fadd qword ptr [0x791fa8]
// 004fe827  7513                 jne 0x4fe83c
// 004fe829  0905d0778b00         or dword ptr [0x8b77d0], eax
// 004fe82f  a128e67700           mov eax, dword ptr [0x77e628]
// 004fe834  dd00                 fld qword ptr [eax]
// 004fe836  dd1dc8778b00         fstp qword ptr [0x8b77c8]
// 004fe83c  dd05c8778b00         fld qword ptr [0x8b77c8]
// 004fe842  dde9                 fucomp st(1)
// 004fe844  dfe0                 fnstsw ax
// 004fe846  f6c444               test ah, 0x44
// 004fe849  7a09                 jp 0x4fe854
// 004fe84b  ddd8                 fstp st(0)
// 004fe84d  dd0548037a00         fld qword ptr [0x7a0348]
// 004fe853  c3                   ret 
// 004fe854  dc0d48037a00         fmul qword ptr [0x7a0348]
// 004fe85a  c3                   ret 
// library rbxgs/tool\DragUtilities.cpp (function ?eps@G3D@@YANNN@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/DragUtilities.cpp
