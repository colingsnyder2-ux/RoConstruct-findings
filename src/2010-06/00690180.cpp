// roc 2010-06 00690180  unit: RBX::Mechanism  size: 129 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00690180
//
// 00690180  64a100000000         mov eax, dword ptr fs:[0]
// 00690186  6aff                 push -1
// 00690188  681e189a00           push 0x9a181e
// 0069018d  50                   push eax
// 0069018e  b801000000           mov eax, 1
// 00690193  64892500000000       mov dword ptr fs:[0], esp
// 0069019a  8405e8e2c100         test byte ptr [0xc1e2e8], al
// 006901a0  754c                 jne 0x6901ee
// 006901a2  0905e8e2c100         or dword ptr [0xc1e2e8], eax
// 006901a8  d9ee                 fldz 
// 006901aa  83ec24               sub esp, 0x24
// 006901ad  d9542420             fst dword ptr [esp + 0x20]
// 006901b1  d954241c             fst dword ptr [esp + 0x1c]
// 006901b5  b9c4e2c100           mov ecx, 0xc1e2c4
// 006901ba  d90510c6a000         fld dword ptr [0xa0c610]
// 006901c0  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 006901c8  d95c2418             fstp dword ptr [esp + 0x18]
// 006901cc  d9542414             fst dword ptr [esp + 0x14]
// 006901d0  d9e8                 fld1 
// 006901d2  d9542410             fst dword ptr [esp + 0x10]
// 006901d6  d9c9                 fxch st(1)
// 006901d8  d954240c             fst dword ptr [esp + 0xc]
// 006901dc  d9c9                 fxch st(1)
// 006901de  d95c2408             fstp dword ptr [esp + 8]
// 006901e2  d9542404             fst dword ptr [esp + 4]
// 006901e6  d91c24               fstp dword ptr [esp]
// 006901e9  e8f26decff           call 0x556fe0
// 006901ee  8b0c24               mov ecx, dword ptr [esp]
// 006901f1  b8c4e2c100           mov eax, 0xc1e2c4
// 006901f6  64890d00000000       mov dword ptr fs:[0], ecx
// 006901fd  83c40c               add esp, 0xc
// 00690200  c3                   ret 
// library rbxgs/util\Math.cpp (function ?matrixRotateY@Math@RBX@@SAABVMatrix3@G3D@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Math.cpp
