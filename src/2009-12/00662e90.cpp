// roc 2009-12 00662e90  unit: RBX::Reflection::EnumDescriptor  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00662e90
//
// 00662e90  64a100000000         mov eax, dword ptr fs:[0]
// 00662e96  6aff                 push -1
// 00662e98  680e3c9400           push 0x943c0e
// 00662e9d  50                   push eax
// 00662e9e  b801000000           mov eax, 1
// 00662ea3  64892500000000       mov dword ptr fs:[0], esp
// 00662eaa  84053002b900         test byte ptr [0xb90230], al
// 00662eb0  7525                 jne 0x662ed7
// 00662eb2  09053002b900         or dword ptr [0xb90230], eax
// 00662eb8  b91802b900           mov ecx, 0xb90218
// 00662ebd  c744240800000000     mov dword ptr [esp + 8], 0
// 00662ec5  e87682f2ff           call 0x58b140
// 00662eca  68a0479800           push 0x9847a0
// 00662ecf  e8551a1900           call 0x7f4929
// 00662ed4  83c404               add esp, 4
// 00662ed7  8b0c24               mov ecx, dword ptr [esp]
// 00662eda  b81802b900           mov eax, 0xb90218
// 00662edf  64890d00000000       mov dword ptr fs:[0], ecx
// 00662ee6  83c40c               add esp, 0xc
// 00662ee9  c3                   ret 
// library rbxgs-appdraw/Fonts.cpp (function ?singleton@ContentProvider@RBX@@SAAAV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw Fonts.cpp
