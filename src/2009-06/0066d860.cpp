// roc 2009-06 0066d860  unit: RBX::VHumanoid::?$EventDesc  size: 129 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0066d860
//
// 0066d860  64a100000000         mov eax, dword ptr fs:[0]
// 0066d866  6aff                 push -1
// 0066d868  68cec98600           push 0x86c9ce
// 0066d86d  50                   push eax
// 0066d86e  b801000000           mov eax, 1
// 0066d873  64892500000000       mov dword ptr fs:[0], esp
// 0066d87a  84055cdba400         test byte ptr [0xa4db5c], al
// 0066d880  754c                 jne 0x66d8ce
// 0066d882  09055cdba400         or dword ptr [0xa4db5c], eax
// 0066d888  d9ee                 fldz 
// 0066d88a  83ec24               sub esp, 0x24
// 0066d88d  d9542420             fst dword ptr [esp + 0x20]
// 0066d891  d954241c             fst dword ptr [esp + 0x1c]
// 0066d895  b938dba400           mov ecx, 0xa4db38
// 0066d89a  d90594758b00         fld dword ptr [0x8b7594]
// 0066d8a0  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 0066d8a8  d95c2418             fstp dword ptr [esp + 0x18]
// 0066d8ac  d9542414             fst dword ptr [esp + 0x14]
// 0066d8b0  d9e8                 fld1 
// 0066d8b2  d9542410             fst dword ptr [esp + 0x10]
// 0066d8b6  d9c9                 fxch st(1)
// 0066d8b8  d954240c             fst dword ptr [esp + 0xc]
// 0066d8bc  d9c9                 fxch st(1)
// 0066d8be  d95c2408             fstp dword ptr [esp + 8]
// 0066d8c2  d9542404             fst dword ptr [esp + 4]
// 0066d8c6  d91c24               fstp dword ptr [esp]
// 0066d8c9  e812acf0ff           call 0x5784e0
// 0066d8ce  8b0c24               mov ecx, dword ptr [esp]
// 0066d8d1  b838dba400           mov eax, 0xa4db38
// 0066d8d6  64890d00000000       mov dword ptr fs:[0], ecx
// 0066d8dd  83c40c               add esp, 0xc
// 0066d8e0  c3                   ret 
// library rbxgs/util\Math.cpp (function ?matrixRotateY@Math@RBX@@SAABVMatrix3@G3D@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Math.cpp
