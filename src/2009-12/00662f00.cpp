// roc 2009-12 00662f00  unit: RBX::Reflection::EnumDescriptor  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00662f00
//
// 00662f00  64a100000000         mov eax, dword ptr fs:[0]
// 00662f06  6aff                 push -1
// 00662f08  682e3c9400           push 0x943c2e
// 00662f0d  50                   push eax
// 00662f0e  b801000000           mov eax, 1
// 00662f13  64892500000000       mov dword ptr fs:[0], esp
// 00662f1a  84054c02b900         test byte ptr [0xb9024c], al
// 00662f20  7525                 jne 0x662f47
// 00662f22  09054c02b900         or dword ptr [0xb9024c], eax
// 00662f28  b93402b900           mov ecx, 0xb90234
// 00662f2d  c744240800000000     mov dword ptr [esp + 8], 0
// 00662f35  e80682f2ff           call 0x58b140
// 00662f3a  6860479800           push 0x984760
// 00662f3f  e8e5191900           call 0x7f4929
// 00662f44  83c404               add esp, 4
// 00662f47  8b0c24               mov ecx, dword ptr [esp]
// 00662f4a  b83402b900           mov eax, 0xb90234
// 00662f4f  64890d00000000       mov dword ptr fs:[0], ecx
// 00662f56  83c40c               add esp, 0xc
// 00662f59  c3                   ret 
// library rbxgs-appdraw/Fonts.cpp (function ?singleton@ContentProvider@RBX@@SAAAV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw Fonts.cpp
