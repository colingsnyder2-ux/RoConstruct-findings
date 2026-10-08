// roc 2009-06 0066d8f0  unit: RBX::VHumanoid::?$EventDesc  size: 127 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0066d8f0
//
// 0066d8f0  64a100000000         mov eax, dword ptr fs:[0]
// 0066d8f6  6aff                 push -1
// 0066d8f8  68eec98600           push 0x86c9ee
// 0066d8fd  50                   push eax
// 0066d8fe  b801000000           mov eax, 1
// 0066d903  64892500000000       mov dword ptr fs:[0], esp
// 0066d90a  840584dba400         test byte ptr [0xa4db84], al
// 0066d910  754a                 jne 0x66d95c
// 0066d912  090584dba400         or dword ptr [0xa4db84], eax
// 0066d918  d9e8                 fld1 
// 0066d91a  83ec24               sub esp, 0x24
// 0066d91d  d9542420             fst dword ptr [esp + 0x20]
// 0066d921  d9ee                 fldz 
// 0066d923  b960dba400           mov ecx, 0xa4db60
// 0066d928  d954241c             fst dword ptr [esp + 0x1c]
// 0066d92c  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 0066d934  d9542418             fst dword ptr [esp + 0x18]
// 0066d938  d9542414             fst dword ptr [esp + 0x14]
// 0066d93c  d9542410             fst dword ptr [esp + 0x10]
// 0066d940  d90594758b00         fld dword ptr [0x8b7594]
// 0066d946  d95c240c             fstp dword ptr [esp + 0xc]
// 0066d94a  d9542408             fst dword ptr [esp + 8]
// 0066d94e  d9c9                 fxch st(1)
// 0066d950  d95c2404             fstp dword ptr [esp + 4]
// 0066d954  d91c24               fstp dword ptr [esp]
// 0066d957  e884abf0ff           call 0x5784e0
// 0066d95c  8b0c24               mov ecx, dword ptr [esp]
// 0066d95f  b860dba400           mov eax, 0xa4db60
// 0066d964  64890d00000000       mov dword ptr fs:[0], ecx
// 0066d96b  83c40c               add esp, 0xc
// 0066d96e  c3                   ret 
// library rbxgs/util\Math.cpp (function ?matrixTiltZ@Math@RBX@@SAABVMatrix3@G3D@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Math.cpp
