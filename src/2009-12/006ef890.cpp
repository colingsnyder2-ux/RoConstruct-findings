// roc 2009-12 006ef890  unit: RBX::Primitive  size: 127 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006ef890
//
// 006ef890  64a100000000         mov eax, dword ptr fs:[0]
// 006ef896  6aff                 push -1
// 006ef898  68cebb9400           push 0x94bbce
// 006ef89d  50                   push eax
// 006ef89e  b801000000           mov eax, 1
// 006ef8a3  64892500000000       mov dword ptr fs:[0], esp
// 006ef8aa  8405c040b900         test byte ptr [0xb940c0], al
// 006ef8b0  754a                 jne 0x6ef8fc
// 006ef8b2  0905c040b900         or dword ptr [0xb940c0], eax
// 006ef8b8  d9e8                 fld1 
// 006ef8ba  83ec24               sub esp, 0x24
// 006ef8bd  d9542420             fst dword ptr [esp + 0x20]
// 006ef8c1  d9ee                 fldz 
// 006ef8c3  b99c40b900           mov ecx, 0xb9409c
// 006ef8c8  d954241c             fst dword ptr [esp + 0x1c]
// 006ef8cc  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 006ef8d4  d9542418             fst dword ptr [esp + 0x18]
// 006ef8d8  d9542414             fst dword ptr [esp + 0x14]
// 006ef8dc  d9542410             fst dword ptr [esp + 0x10]
// 006ef8e0  d90504b89a00         fld dword ptr [0x9ab804]
// 006ef8e6  d95c240c             fstp dword ptr [esp + 0xc]
// 006ef8ea  d9542408             fst dword ptr [esp + 8]
// 006ef8ee  d9c9                 fxch st(1)
// 006ef8f0  d95c2404             fstp dword ptr [esp + 4]
// 006ef8f4  d91c24               fstp dword ptr [esp]
// 006ef8f7  e8744df0ff           call 0x5f4670
// 006ef8fc  8b0c24               mov ecx, dword ptr [esp]
// 006ef8ff  b89c40b900           mov eax, 0xb9409c
// 006ef904  64890d00000000       mov dword ptr fs:[0], ecx
// 006ef90b  83c40c               add esp, 0xc
// 006ef90e  c3                   ret 
// library rbxgs/util\Math.cpp (function ?matrixTiltZ@Math@RBX@@SAABVMatrix3@G3D@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Math.cpp
