// roc 2011-06 006ce010  unit: RBX::Mechanism  size: 127 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006ce010
//
// 006ce010  64a100000000         mov eax, dword ptr fs:[0]
// 006ce016  6aff                 push -1
// 006ce018  68ee2d9f00           push 0x9f2dee
// 006ce01d  50                   push eax
// 006ce01e  b801000000           mov eax, 1
// 006ce023  64892500000000       mov dword ptr fs:[0], esp
// 006ce02a  84050813cd00         test byte ptr [0xcd1308], al
// 006ce030  754a                 jne 0x6ce07c
// 006ce032  09050813cd00         or dword ptr [0xcd1308], eax
// 006ce038  d9e8                 fld1 
// 006ce03a  83ec24               sub esp, 0x24
// 006ce03d  d9542420             fst dword ptr [esp + 0x20]
// 006ce041  d9ee                 fldz 
// 006ce043  b9e412cd00           mov ecx, 0xcd12e4
// 006ce048  d954241c             fst dword ptr [esp + 0x1c]
// 006ce04c  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 006ce054  d9542418             fst dword ptr [esp + 0x18]
// 006ce058  d9542414             fst dword ptr [esp + 0x14]
// 006ce05c  d9542410             fst dword ptr [esp + 0x10]
// 006ce060  d90530eca600         fld dword ptr [0xa6ec30]
// 006ce066  d95c240c             fstp dword ptr [esp + 0xc]
// 006ce06a  d9542408             fst dword ptr [esp + 8]
// 006ce06e  d9c9                 fxch st(1)
// 006ce070  d95c2404             fstp dword ptr [esp + 4]
// 006ce074  d91c24               fstp dword ptr [esp]
// 006ce077  e89430e7ff           call 0x541110
// 006ce07c  8b0c24               mov ecx, dword ptr [esp]
// 006ce07f  b8e412cd00           mov eax, 0xcd12e4
// 006ce084  64890d00000000       mov dword ptr fs:[0], ecx
// 006ce08b  83c40c               add esp, 0xc
// 006ce08e  c3                   ret 
// library rbxgs/util\Math.cpp (function ?matrixTiltZ@Math@RBX@@SAABVMatrix3@G3D@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Math.cpp
