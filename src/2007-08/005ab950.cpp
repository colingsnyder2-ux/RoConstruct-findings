// roc 2007-08 005ab950  unit: RBX::World  size: 129 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005ab950
//
// 005ab950  64a100000000         mov eax, dword ptr fs:[0]
// 005ab956  6aff                 push -1
// 005ab958  687e877500           push 0x75877e
// 005ab95d  50                   push eax
// 005ab95e  b801000000           mov eax, 1
// 005ab963  64892500000000       mov dword ptr fs:[0], esp
// 005ab96a  84056c5a8c00         test byte ptr [0x8c5a6c], al
// 005ab970  754c                 jne 0x5ab9be
// 005ab972  09056c5a8c00         or dword ptr [0x8c5a6c], eax
// 005ab978  d9ee                 fldz 
// 005ab97a  83ec24               sub esp, 0x24
// 005ab97d  d9542420             fst dword ptr [esp + 0x20]
// 005ab981  d954241c             fst dword ptr [esp + 0x1c]
// 005ab985  b9485a8c00           mov ecx, 0x8c5a48
// 005ab98a  d9056c647900         fld dword ptr [0x79646c]
// 005ab990  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 005ab998  d95c2418             fstp dword ptr [esp + 0x18]
// 005ab99c  d9542414             fst dword ptr [esp + 0x14]
// 005ab9a0  d9e8                 fld1 
// 005ab9a2  d9542410             fst dword ptr [esp + 0x10]
// 005ab9a6  d9c9                 fxch st(1)
// 005ab9a8  d954240c             fst dword ptr [esp + 0xc]
// 005ab9ac  d9c9                 fxch st(1)
// 005ab9ae  d95c2408             fstp dword ptr [esp + 8]
// 005ab9b2  d9542404             fst dword ptr [esp + 4]
// 005ab9b6  d91c24               fstp dword ptr [esp]
// 005ab9b9  e872e7f5ff           call 0x50a130
// 005ab9be  8b0c24               mov ecx, dword ptr [esp]
// 005ab9c1  b8485a8c00           mov eax, 0x8c5a48
// 005ab9c6  64890d00000000       mov dword ptr fs:[0], ecx
// 005ab9cd  83c40c               add esp, 0xc
// 005ab9d0  c3                   ret 
// library rbxgs/util\Math.cpp (function ?matrixRotateY@Math@RBX@@SAABVMatrix3@G3D@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Math.cpp
