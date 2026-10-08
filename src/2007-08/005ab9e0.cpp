// roc 2007-08 005ab9e0  unit: RBX::World  size: 127 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005ab9e0
//
// 005ab9e0  64a100000000         mov eax, dword ptr fs:[0]
// 005ab9e6  6aff                 push -1
// 005ab9e8  689e877500           push 0x75879e
// 005ab9ed  50                   push eax
// 005ab9ee  b801000000           mov eax, 1
// 005ab9f3  64892500000000       mov dword ptr fs:[0], esp
// 005ab9fa  8405945a8c00         test byte ptr [0x8c5a94], al
// 005aba00  754a                 jne 0x5aba4c
// 005aba02  0905945a8c00         or dword ptr [0x8c5a94], eax
// 005aba08  d9e8                 fld1 
// 005aba0a  83ec24               sub esp, 0x24
// 005aba0d  d9542420             fst dword ptr [esp + 0x20]
// 005aba11  d9ee                 fldz 
// 005aba13  b9705a8c00           mov ecx, 0x8c5a70
// 005aba18  d954241c             fst dword ptr [esp + 0x1c]
// 005aba1c  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 005aba24  d9542418             fst dword ptr [esp + 0x18]
// 005aba28  d9542414             fst dword ptr [esp + 0x14]
// 005aba2c  d9542410             fst dword ptr [esp + 0x10]
// 005aba30  d9056c647900         fld dword ptr [0x79646c]
// 005aba36  d95c240c             fstp dword ptr [esp + 0xc]
// 005aba3a  d9542408             fst dword ptr [esp + 8]
// 005aba3e  d9c9                 fxch st(1)
// 005aba40  d95c2404             fstp dword ptr [esp + 4]
// 005aba44  d91c24               fstp dword ptr [esp]
// 005aba47  e8e4e6f5ff           call 0x50a130
// 005aba4c  8b0c24               mov ecx, dword ptr [esp]
// 005aba4f  b8705a8c00           mov eax, 0x8c5a70
// 005aba54  64890d00000000       mov dword ptr fs:[0], ecx
// 005aba5b  83c40c               add esp, 0xc
// 005aba5e  c3                   ret 
// library rbxgs/util\Math.cpp (function ?matrixTiltZ@Math@RBX@@SAABVMatrix3@G3D@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Math.cpp
