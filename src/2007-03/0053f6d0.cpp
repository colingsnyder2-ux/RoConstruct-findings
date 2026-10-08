// roc 2007-03 0053f6d0  unit: seg_00530000  size: 115 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0053f6d0
//
// 0053f6d0  64a100000000         mov eax, dword ptr fs:[0]
// 0053f6d6  6aff                 push -1
// 0053f6d8  682e217500           push 0x75212e
// 0053f6dd  50                   push eax
// 0053f6de  b801000000           mov eax, 1
// 0053f6e3  64892500000000       mov dword ptr fs:[0], esp
// 0053f6ea  840540b88b00         test byte ptr [0x8bb840], al
// 0053f6f0  753e                 jne 0x53f730
// 0053f6f2  090540b88b00         or dword ptr [0x8bb840], eax
// 0053f6f8  68709e7900           push 0x799e70
// 0053f6fd  6804b38800           push 0x88b304
// 0053f702  68c09f7900           push 0x799fc0
// 0053f707  b930b88b00           mov ecx, 0x8bb830
// 0053f70c  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0053f714  e86754f4ff           call 0x484b80
// 0053f719  6850957700           push 0x779550
// 0053f71e  c70530b88b006c9e7900 mov dword ptr [0x8bb830], 0x799e6c
// 0053f728  e886fa0d00           call 0x61f1b3
// 0053f72d  83c404               add esp, 4
// 0053f730  8b0c24               mov ecx, dword ptr [esp]
// 0053f733  b830b88b00           mov eax, 0x8bb830
// 0053f738  64890d00000000       mov dword ptr fs:[0], ecx
// 0053f73f  83c40c               add esp, 0xc
// 0053f742  c3                   ret 
// library rbxgs/v8datamodel\ModelInstance.cpp (function ??$singleton@PAVModelInstance@RBX@@@RefType@Reflection@RBX@@SAABV012@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/ModelInstance.cpp
