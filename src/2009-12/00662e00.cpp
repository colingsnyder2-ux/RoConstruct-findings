// roc 2009-12 00662e00  unit: RBX::Reflection::EnumDescriptor  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00662e00
//
// 00662e00  64a100000000         mov eax, dword ptr fs:[0]
// 00662e06  6aff                 push -1
// 00662e08  68ee3b9400           push 0x943bee
// 00662e0d  50                   push eax
// 00662e0e  b801000000           mov eax, 1
// 00662e13  64892500000000       mov dword ptr fs:[0], esp
// 00662e1a  84051002b900         test byte ptr [0xb90210], al
// 00662e20  7525                 jne 0x662e47
// 00662e22  09051002b900         or dword ptr [0xb90210], eax
// 00662e28  b9f801b900           mov ecx, 0xb901f8
// 00662e2d  c744240800000000     mov dword ptr [esp + 8], 0
// 00662e35  e80683f2ff           call 0x58b140
// 00662e3a  6820479800           push 0x984720
// 00662e3f  e8e51a1900           call 0x7f4929
// 00662e44  83c404               add esp, 4
// 00662e47  8b0c24               mov ecx, dword ptr [esp]
// 00662e4a  b8f801b900           mov eax, 0xb901f8
// 00662e4f  64890d00000000       mov dword ptr fs:[0], ecx
// 00662e56  83c40c               add esp, 0xc
// 00662e59  c3                   ret 
// library rbxgs-appdraw/Fonts.cpp (function ?singleton@ContentProvider@RBX@@SAAAV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw Fonts.cpp
