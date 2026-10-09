// roc 2009-12 006ef800  unit: RBX::Primitive  size: 129 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006ef800
//
// 006ef800  64a100000000         mov eax, dword ptr fs:[0]
// 006ef806  6aff                 push -1
// 006ef808  68aebb9400           push 0x94bbae
// 006ef80d  50                   push eax
// 006ef80e  b801000000           mov eax, 1
// 006ef813  64892500000000       mov dword ptr fs:[0], esp
// 006ef81a  84059840b900         test byte ptr [0xb94098], al
// 006ef820  754c                 jne 0x6ef86e
// 006ef822  09059840b900         or dword ptr [0xb94098], eax
// 006ef828  d9ee                 fldz 
// 006ef82a  83ec24               sub esp, 0x24
// 006ef82d  d9542420             fst dword ptr [esp + 0x20]
// 006ef831  d954241c             fst dword ptr [esp + 0x1c]
// 006ef835  b97440b900           mov ecx, 0xb94074
// 006ef83a  d90504b89a00         fld dword ptr [0x9ab804]
// 006ef840  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 006ef848  d95c2418             fstp dword ptr [esp + 0x18]
// 006ef84c  d9542414             fst dword ptr [esp + 0x14]
// 006ef850  d9e8                 fld1 
// 006ef852  d9542410             fst dword ptr [esp + 0x10]
// 006ef856  d9c9                 fxch st(1)
// 006ef858  d954240c             fst dword ptr [esp + 0xc]
// 006ef85c  d9c9                 fxch st(1)
// 006ef85e  d95c2408             fstp dword ptr [esp + 8]
// 006ef862  d9542404             fst dword ptr [esp + 4]
// 006ef866  d91c24               fstp dword ptr [esp]
// 006ef869  e8024ef0ff           call 0x5f4670
// 006ef86e  8b0c24               mov ecx, dword ptr [esp]
// 006ef871  b87440b900           mov eax, 0xb94074
// 006ef876  64890d00000000       mov dword ptr fs:[0], ecx
// 006ef87d  83c40c               add esp, 0xc
// 006ef880  c3                   ret 
// library rbxgs/util\Math.cpp (function ?matrixRotateY@Math@RBX@@SAABVMatrix3@G3D@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Math.cpp
