// roc 2008-06 0060a260  unit: RBX::VelocityMotor  size: 115 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0060a260
//
// 0060a260  64a100000000         mov eax, dword ptr fs:[0]
// 0060a266  6aff                 push -1
// 0060a268  68ee897d00           push 0x7d89ee
// 0060a26d  50                   push eax
// 0060a26e  b801000000           mov eax, 1
// 0060a273  64892500000000       mov dword ptr fs:[0], esp
// 0060a27a  840508ba9700         test byte ptr [0x97ba08], al
// 0060a280  753e                 jne 0x60a2c0
// 0060a282  090508ba9700         or dword ptr [0x97ba08], eax
// 0060a288  6850148200           push 0x821450
// 0060a28d  68404d9300           push 0x934d40
// 0060a292  6834168200           push 0x821634
// 0060a297  b9f8b99700           mov ecx, 0x97b9f8
// 0060a29c  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0060a2a4  e8f7f4e7ff           call 0x4897a0
// 0060a2a9  68c0018000           push 0x8001c0
// 0060a2ae  c705f8b997004c148200 mov dword ptr [0x97b9f8], 0x82144c
// 0060a2b8  e8f2740900           call 0x6a17af
// 0060a2bd  83c404               add esp, 4
// 0060a2c0  8b0c24               mov ecx, dword ptr [esp]
// 0060a2c3  b8f8b99700           mov eax, 0x97b9f8
// 0060a2c8  64890d00000000       mov dword ptr fs:[0], ecx
// 0060a2cf  83c40c               add esp, 0xc
// 0060a2d2  c3                   ret 
// library rbxgs/v8datamodel\ModelInstance.cpp (function ??$singleton@PAVModelInstance@RBX@@@RefType@Reflection@RBX@@SAABV012@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/ModelInstance.cpp
