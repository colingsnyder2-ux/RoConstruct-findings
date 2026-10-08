// roc 2007-03 005343d0  unit: seg_00530000  size: 115 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005343d0
//
// 005343d0  64a100000000         mov eax, dword ptr fs:[0]
// 005343d6  6aff                 push -1
// 005343d8  681e187500           push 0x75181e
// 005343dd  50                   push eax
// 005343de  b801000000           mov eax, 1
// 005343e3  64892500000000       mov dword ptr fs:[0], esp
// 005343ea  8405e0b48b00         test byte ptr [0x8bb4e0], al
// 005343f0  753e                 jne 0x534430
// 005343f2  0905e0b48b00         or dword ptr [0x8bb4e0], eax
// 005343f8  68709e7900           push 0x799e70
// 005343fd  6804b38800           push 0x88b304
// 00534402  68c09f7900           push 0x799fc0
// 00534407  b9d0b48b00           mov ecx, 0x8bb4d0
// 0053440c  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00534414  e86707f5ff           call 0x484b80
// 00534419  6810947700           push 0x779410
// 0053441e  c705d0b48b006c9e7900 mov dword ptr [0x8bb4d0], 0x799e6c
// 00534428  e886ad0e00           call 0x61f1b3
// 0053442d  83c404               add esp, 4
// 00534430  8b0c24               mov ecx, dword ptr [esp]
// 00534433  b8d0b48b00           mov eax, 0x8bb4d0
// 00534438  64890d00000000       mov dword ptr fs:[0], ecx
// 0053443f  83c40c               add esp, 0xc
// 00534442  c3                   ret 
// library rbxgs/v8datamodel\ModelInstance.cpp (function ??$singleton@PAVModelInstance@RBX@@@RefType@Reflection@RBX@@SAABV012@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/ModelInstance.cpp
