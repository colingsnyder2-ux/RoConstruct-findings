// roc 2011-06 006cdf80  unit: RBX::Mechanism  size: 129 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006cdf80
//
// 006cdf80  64a100000000         mov eax, dword ptr fs:[0]
// 006cdf86  6aff                 push -1
// 006cdf88  68ce2d9f00           push 0x9f2dce
// 006cdf8d  50                   push eax
// 006cdf8e  b801000000           mov eax, 1
// 006cdf93  64892500000000       mov dword ptr fs:[0], esp
// 006cdf9a  8405e012cd00         test byte ptr [0xcd12e0], al
// 006cdfa0  754c                 jne 0x6cdfee
// 006cdfa2  0905e012cd00         or dword ptr [0xcd12e0], eax
// 006cdfa8  d9ee                 fldz 
// 006cdfaa  83ec24               sub esp, 0x24
// 006cdfad  d9542420             fst dword ptr [esp + 0x20]
// 006cdfb1  d954241c             fst dword ptr [esp + 0x1c]
// 006cdfb5  b9bc12cd00           mov ecx, 0xcd12bc
// 006cdfba  d90530eca600         fld dword ptr [0xa6ec30]
// 006cdfc0  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 006cdfc8  d95c2418             fstp dword ptr [esp + 0x18]
// 006cdfcc  d9542414             fst dword ptr [esp + 0x14]
// 006cdfd0  d9e8                 fld1 
// 006cdfd2  d9542410             fst dword ptr [esp + 0x10]
// 006cdfd6  d9c9                 fxch st(1)
// 006cdfd8  d954240c             fst dword ptr [esp + 0xc]
// 006cdfdc  d9c9                 fxch st(1)
// 006cdfde  d95c2408             fstp dword ptr [esp + 8]
// 006cdfe2  d9542404             fst dword ptr [esp + 4]
// 006cdfe6  d91c24               fstp dword ptr [esp]
// 006cdfe9  e82231e7ff           call 0x541110
// 006cdfee  8b0c24               mov ecx, dword ptr [esp]
// 006cdff1  b8bc12cd00           mov eax, 0xcd12bc
// 006cdff6  64890d00000000       mov dword ptr fs:[0], ecx
// 006cdffd  83c40c               add esp, 0xc
// 006ce000  c3                   ret 
// library rbxgs/util\Math.cpp (function ?matrixRotateY@Math@RBX@@SAABVMatrix3@G3D@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Math.cpp
