// roc 2008-06 005de890  unit: RBX::Message  size: 127 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005de890
//
// 005de890  64a100000000         mov eax, dword ptr fs:[0]
// 005de896  6aff                 push -1
// 005de898  68ae617d00           push 0x7d61ae
// 005de89d  50                   push eax
// 005de89e  b801000000           mov eax, 1
// 005de8a3  64892500000000       mov dword ptr fs:[0], esp
// 005de8aa  840500a79700         test byte ptr [0x97a700], al
// 005de8b0  754a                 jne 0x5de8fc
// 005de8b2  090500a79700         or dword ptr [0x97a700], eax
// 005de8b8  d9e8                 fld1 
// 005de8ba  83ec24               sub esp, 0x24
// 005de8bd  d9542420             fst dword ptr [esp + 0x20]
// 005de8c1  d9ee                 fldz 
// 005de8c3  b9dca69700           mov ecx, 0x97a6dc
// 005de8c8  d954241c             fst dword ptr [esp + 0x1c]
// 005de8cc  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 005de8d4  d9542418             fst dword ptr [esp + 0x18]
// 005de8d8  d9542414             fst dword ptr [esp + 0x14]
// 005de8dc  d9542410             fst dword ptr [esp + 0x10]
// 005de8e0  d905b8c38100         fld dword ptr [0x81c3b8]
// 005de8e6  d95c240c             fstp dword ptr [esp + 0xc]
// 005de8ea  d9542408             fst dword ptr [esp + 8]
// 005de8ee  d9c9                 fxch st(1)
// 005de8f0  d95c2404             fstp dword ptr [esp + 4]
// 005de8f4  d91c24               fstp dword ptr [esp]
// 005de8f7  e87452f3ff           call 0x513b70
// 005de8fc  8b0c24               mov ecx, dword ptr [esp]
// 005de8ff  b8dca69700           mov eax, 0x97a6dc
// 005de904  64890d00000000       mov dword ptr fs:[0], ecx
// 005de90b  83c40c               add esp, 0xc
// 005de90e  c3                   ret 
// library rbxgs/util\Math.cpp (function ?matrixTiltZ@Math@RBX@@SAABVMatrix3@G3D@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Math.cpp
