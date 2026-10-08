// roc 2012-06 007bd790  unit: RBX::Geometry  size: 127 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007bd790
//
// 007bd790  64a100000000         mov eax, dword ptr fs:[0]
// 007bd796  6aff                 push -1
// 007bd798  680e7bac00           push 0xac7b0e
// 007bd79d  50                   push eax
// 007bd79e  b801000000           mov eax, 1
// 007bd7a3  64892500000000       mov dword ptr fs:[0], esp
// 007bd7aa  84059cb5e400         test byte ptr [0xe4b59c], al
// 007bd7b0  754a                 jne 0x7bd7fc
// 007bd7b2  09059cb5e400         or dword ptr [0xe4b59c], eax
// 007bd7b8  d9e8                 fld1 
// 007bd7ba  83ec24               sub esp, 0x24
// 007bd7bd  d9542420             fst dword ptr [esp + 0x20]
// 007bd7c1  d9ee                 fldz 
// 007bd7c3  b978b5e400           mov ecx, 0xe4b578
// 007bd7c8  d954241c             fst dword ptr [esp + 0x1c]
// 007bd7cc  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 007bd7d4  d9542418             fst dword ptr [esp + 0x18]
// 007bd7d8  d9542414             fst dword ptr [esp + 0x14]
// 007bd7dc  d9542410             fst dword ptr [esp + 0x10]
// 007bd7e0  d905b8abb500         fld dword ptr [0xb5abb8]
// 007bd7e6  d95c240c             fstp dword ptr [esp + 0xc]
// 007bd7ea  d9542408             fst dword ptr [esp + 8]
// 007bd7ee  d9c9                 fxch st(1)
// 007bd7f0  d95c2404             fstp dword ptr [esp + 4]
// 007bd7f4  d91c24               fstp dword ptr [esp]
// 007bd7f7  e8b4fbe6ff           call 0x62d3b0
// 007bd7fc  8b0c24               mov ecx, dword ptr [esp]
// 007bd7ff  b878b5e400           mov eax, 0xe4b578
// 007bd804  64890d00000000       mov dword ptr fs:[0], ecx
// 007bd80b  83c40c               add esp, 0xc
// 007bd80e  c3                   ret 
// library rbxgs/util\Math.cpp (function ?matrixTiltZ@Math@RBX@@SAABVMatrix3@G3D@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Math.cpp
