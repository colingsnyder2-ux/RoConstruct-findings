// roc 2009-12 004495a0  unit: RBX::Reflection::M::?$TypedPropertyDescriptor  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004495a0
//
// 004495a0  64a100000000         mov eax, dword ptr fs:[0]
// 004495a6  6aff                 push -1
// 004495a8  684eac9200           push 0x92ac4e
// 004495ad  50                   push eax
// 004495ae  b801000000           mov eax, 1
// 004495b3  64892500000000       mov dword ptr fs:[0], esp
// 004495ba  84050caeb700         test byte ptr [0xb7ae0c], al
// 004495c0  7525                 jne 0x4495e7
// 004495c2  09050caeb700         or dword ptr [0xb7ae0c], eax
// 004495c8  b920adb700           mov ecx, 0xb7ad20
// 004495cd  c744240800000000     mov dword ptr [esp + 8], 0
// 004495d5  e856f7ffff           call 0x448d30
// 004495da  68a0e59700           push 0x97e5a0
// 004495df  e845b33a00           call 0x7f4929
// 004495e4  83c404               add esp, 4
// 004495e7  8b0c24               mov ecx, dword ptr [esp]
// 004495ea  b820adb700           mov eax, 0xb7ad20
// 004495ef  64890d00000000       mov dword ptr fs:[0], ecx
// 004495f6  83c40c               add esp, 0xc
// 004495f9  c3                   ret 
// library rbxgs-appdraw/Fonts.cpp (function ?singleton@ContentProvider@RBX@@SAAAV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw Fonts.cpp
