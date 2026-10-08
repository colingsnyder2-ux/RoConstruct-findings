// roc 2008-06 005de800  unit: RBX::Message  size: 129 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005de800
//
// 005de800  64a100000000         mov eax, dword ptr fs:[0]
// 005de806  6aff                 push -1
// 005de808  688e617d00           push 0x7d618e
// 005de80d  50                   push eax
// 005de80e  b801000000           mov eax, 1
// 005de813  64892500000000       mov dword ptr fs:[0], esp
// 005de81a  8405d8a69700         test byte ptr [0x97a6d8], al
// 005de820  754c                 jne 0x5de86e
// 005de822  0905d8a69700         or dword ptr [0x97a6d8], eax
// 005de828  d9ee                 fldz 
// 005de82a  83ec24               sub esp, 0x24
// 005de82d  d9542420             fst dword ptr [esp + 0x20]
// 005de831  d954241c             fst dword ptr [esp + 0x1c]
// 005de835  b9b4a69700           mov ecx, 0x97a6b4
// 005de83a  d905b8c38100         fld dword ptr [0x81c3b8]
// 005de840  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 005de848  d95c2418             fstp dword ptr [esp + 0x18]
// 005de84c  d9542414             fst dword ptr [esp + 0x14]
// 005de850  d9e8                 fld1 
// 005de852  d9542410             fst dword ptr [esp + 0x10]
// 005de856  d9c9                 fxch st(1)
// 005de858  d954240c             fst dword ptr [esp + 0xc]
// 005de85c  d9c9                 fxch st(1)
// 005de85e  d95c2408             fstp dword ptr [esp + 8]
// 005de862  d9542404             fst dword ptr [esp + 4]
// 005de866  d91c24               fstp dword ptr [esp]
// 005de869  e80253f3ff           call 0x513b70
// 005de86e  8b0c24               mov ecx, dword ptr [esp]
// 005de871  b8b4a69700           mov eax, 0x97a6b4
// 005de876  64890d00000000       mov dword ptr fs:[0], ecx
// 005de87d  83c40c               add esp, 0xc
// 005de880  c3                   ret 
// library rbxgs/util\Math.cpp (function ?matrixRotateY@Math@RBX@@SAABVMatrix3@G3D@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Math.cpp
