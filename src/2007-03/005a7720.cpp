// roc 2007-03 005a7720  unit: seg_005a0000  size: 127 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005a7720
//
// 005a7720  64a100000000         mov eax, dword ptr fs:[0]
// 005a7726  6aff                 push -1
// 005a7728  68be947500           push 0x7594be
// 005a772d  50                   push eax
// 005a772e  b801000000           mov eax, 1
// 005a7733  64892500000000       mov dword ptr fs:[0], esp
// 005a773a  84058cf38b00         test byte ptr [0x8bf38c], al
// 005a7740  754a                 jne 0x5a778c
// 005a7742  09058cf38b00         or dword ptr [0x8bf38c], eax
// 005a7748  d9e8                 fld1 
// 005a774a  83ec24               sub esp, 0x24
// 005a774d  d9542420             fst dword ptr [esp + 0x20]
// 005a7751  d9ee                 fldz 
// 005a7753  b968f38b00           mov ecx, 0x8bf368
// 005a7758  d954241c             fst dword ptr [esp + 0x1c]
// 005a775c  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 005a7764  d9542418             fst dword ptr [esp + 0x18]
// 005a7768  d9542414             fst dword ptr [esp + 0x14]
// 005a776c  d9542410             fst dword ptr [esp + 0x10]
// 005a7770  d90578587900         fld dword ptr [0x795878]
// 005a7776  d95c240c             fstp dword ptr [esp + 0xc]
// 005a777a  d9542408             fst dword ptr [esp + 8]
// 005a777e  d9c9                 fxch st(1)
// 005a7780  d95c2404             fstp dword ptr [esp + 4]
// 005a7784  d91c24               fstp dword ptr [esp]
// 005a7787  e8247ff5ff           call 0x4ff6b0
// 005a778c  8b0c24               mov ecx, dword ptr [esp]
// 005a778f  b868f38b00           mov eax, 0x8bf368
// 005a7794  64890d00000000       mov dword ptr fs:[0], ecx
// 005a779b  83c40c               add esp, 0xc
// 005a779e  c3                   ret 
// library rbxgs/util\Math.cpp (function ?matrixTiltZ@Math@RBX@@SAABVMatrix3@G3D@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Math.cpp
