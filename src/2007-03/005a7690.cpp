// roc 2007-03 005a7690  unit: seg_005a0000  size: 129 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005a7690
//
// 005a7690  64a100000000         mov eax, dword ptr fs:[0]
// 005a7696  6aff                 push -1
// 005a7698  689e947500           push 0x75949e
// 005a769d  50                   push eax
// 005a769e  b801000000           mov eax, 1
// 005a76a3  64892500000000       mov dword ptr fs:[0], esp
// 005a76aa  840564f38b00         test byte ptr [0x8bf364], al
// 005a76b0  754c                 jne 0x5a76fe
// 005a76b2  090564f38b00         or dword ptr [0x8bf364], eax
// 005a76b8  d9ee                 fldz 
// 005a76ba  83ec24               sub esp, 0x24
// 005a76bd  d9542420             fst dword ptr [esp + 0x20]
// 005a76c1  d954241c             fst dword ptr [esp + 0x1c]
// 005a76c5  b940f38b00           mov ecx, 0x8bf340
// 005a76ca  d90578587900         fld dword ptr [0x795878]
// 005a76d0  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 005a76d8  d95c2418             fstp dword ptr [esp + 0x18]
// 005a76dc  d9542414             fst dword ptr [esp + 0x14]
// 005a76e0  d9e8                 fld1 
// 005a76e2  d9542410             fst dword ptr [esp + 0x10]
// 005a76e6  d9c9                 fxch st(1)
// 005a76e8  d954240c             fst dword ptr [esp + 0xc]
// 005a76ec  d9c9                 fxch st(1)
// 005a76ee  d95c2408             fstp dword ptr [esp + 8]
// 005a76f2  d9542404             fst dword ptr [esp + 4]
// 005a76f6  d91c24               fstp dword ptr [esp]
// 005a76f9  e8b27ff5ff           call 0x4ff6b0
// 005a76fe  8b0c24               mov ecx, dword ptr [esp]
// 005a7701  b840f38b00           mov eax, 0x8bf340
// 005a7706  64890d00000000       mov dword ptr fs:[0], ecx
// 005a770d  83c40c               add esp, 0xc
// 005a7710  c3                   ret 
// library rbxgs/util\Math.cpp (function ?matrixRotateY@Math@RBX@@SAABVMatrix3@G3D@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Math.cpp
