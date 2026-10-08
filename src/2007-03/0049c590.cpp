// roc 2007-03 0049c590  unit: seg_00490000  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0049c590
//
// 0049c590  d9ee                 fldz 
// 0049c592  8bc1                 mov eax, ecx
// 0049c594  b901000000           mov ecx, 1
// 0049c599  840d00788b00         test byte ptr [0x8b7800], cl
// 0049c59f  7518                 jne 0x49c5b9
// 0049c5a1  090d00788b00         or dword ptr [0x8b7800], ecx
// 0049c5a7  d915f4778b00         fst dword ptr [0x8b77f4]
// 0049c5ad  d915f8778b00         fst dword ptr [0x8b77f8]
// 0049c5b3  d915fc778b00         fst dword ptr [0x8b77fc]
// 0049c5b9  d905f4778b00         fld dword ptr [0x8b77f4]
// 0049c5bf  d918                 fstp dword ptr [eax]
// 0049c5c1  d905f8778b00         fld dword ptr [0x8b77f8]
// 0049c5c7  d95804               fstp dword ptr [eax + 4]
// 0049c5ca  d905fc778b00         fld dword ptr [0x8b77fc]
// 0049c5d0  d95808               fstp dword ptr [eax + 8]
// 0049c5d3  840d00788b00         test byte ptr [0x8b7800], cl
// 0049c5d9  751a                 jne 0x49c5f5
// 0049c5db  090d00788b00         or dword ptr [0x8b7800], ecx
// 0049c5e1  d915f4778b00         fst dword ptr [0x8b77f4]
// 0049c5e7  d915f8778b00         fst dword ptr [0x8b77f8]
// 0049c5ed  d91dfc778b00         fstp dword ptr [0x8b77fc]
// 0049c5f3  eb02                 jmp 0x49c5f7
// 0049c5f5  ddd8                 fstp st(0)
// 0049c5f7  d905f4778b00         fld dword ptr [0x8b77f4]
// 0049c5fd  d9580c               fstp dword ptr [eax + 0xc]
// 0049c600  d905f8778b00         fld dword ptr [0x8b77f8]
// 0049c606  d95810               fstp dword ptr [eax + 0x10]
// 0049c609  d905fc778b00         fld dword ptr [0x8b77fc]
// 0049c60f  d95814               fstp dword ptr [eax + 0x14]
// 0049c612  c3                   ret 
// library rbxgs/v8kernel\Body.cpp (function ??0Velocity@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8kernel/Body.cpp
