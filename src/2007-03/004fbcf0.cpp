// roc 2007-03 004fbcf0  unit: seg_004f0000  size: 138 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004fbcf0
//
// 004fbcf0  d9ee                 fldz 
// 004fbcf2  8bc1                 mov eax, ecx
// 004fbcf4  b901000000           mov ecx, 1
// 004fbcf9  c70044fd7900         mov dword ptr [eax], 0x79fd44
// 004fbcff  840d00788b00         test byte ptr [0x8b7800], cl
// 004fbd05  7518                 jne 0x4fbd1f
// 004fbd07  090d00788b00         or dword ptr [0x8b7800], ecx
// 004fbd0d  d915f4778b00         fst dword ptr [0x8b77f4]
// 004fbd13  d915f8778b00         fst dword ptr [0x8b77f8]
// 004fbd19  d915fc778b00         fst dword ptr [0x8b77fc]
// 004fbd1f  d905f4778b00         fld dword ptr [0x8b77f4]
// 004fbd25  d95804               fstp dword ptr [eax + 4]
// 004fbd28  d905f8778b00         fld dword ptr [0x8b77f8]
// 004fbd2e  d95808               fstp dword ptr [eax + 8]
// 004fbd31  d905fc778b00         fld dword ptr [0x8b77fc]
// 004fbd37  d9580c               fstp dword ptr [eax + 0xc]
// 004fbd3a  840d00788b00         test byte ptr [0x8b7800], cl
// 004fbd40  751a                 jne 0x4fbd5c
// 004fbd42  090d00788b00         or dword ptr [0x8b7800], ecx
// 004fbd48  d915f4778b00         fst dword ptr [0x8b77f4]
// 004fbd4e  d915f8778b00         fst dword ptr [0x8b77f8]
// 004fbd54  d91dfc778b00         fstp dword ptr [0x8b77fc]
// 004fbd5a  eb02                 jmp 0x4fbd5e
// 004fbd5c  ddd8                 fstp st(0)
// 004fbd5e  d905f4778b00         fld dword ptr [0x8b77f4]
// 004fbd64  d95810               fstp dword ptr [eax + 0x10]
// 004fbd67  d905f8778b00         fld dword ptr [0x8b77f8]
// 004fbd6d  d95814               fstp dword ptr [eax + 0x14]
// 004fbd70  d905fc778b00         fld dword ptr [0x8b77fc]
// 004fbd76  d95818               fstp dword ptr [eax + 0x18]
// 004fbd79  c3                   ret 
// library rbxgs/v8datamodel\Mouse.cpp (function ??0Ray@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Mouse.cpp
