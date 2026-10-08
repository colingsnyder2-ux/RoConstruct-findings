// roc 2009-12 00454600  unit: RBX::PartInstance::W4Material::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00454600
//
// 00454600  64a100000000         mov eax, dword ptr fs:[0]
// 00454606  6aff                 push -1
// 00454608  688eb59200           push 0x92b58e
// 0045460d  50                   push eax
// 0045460e  b801000000           mov eax, 1
// 00454613  64892500000000       mov dword ptr fs:[0], esp
// 0045461a  84058cb7b700         test byte ptr [0xb7b78c], al
// 00454620  7525                 jne 0x454647
// 00454622  09058cb7b700         or dword ptr [0xb7b78c], eax
// 00454628  b9a0b6b700           mov ecx, 0xb7b6a0
// 0045462d  c744240800000000     mov dword ptr [esp + 8], 0
// 00454635  e836a92700           call 0x6cef70
// 0045463a  6860ea9700           push 0x97ea60
// 0045463f  e8e5023a00           call 0x7f4929
// 00454644  83c404               add esp, 4
// 00454647  8b0c24               mov ecx, dword ptr [esp]
// 0045464a  b8a0b6b700           mov eax, 0xb7b6a0
// 0045464f  64890d00000000       mov dword ptr fs:[0], ecx
// 00454656  83c40c               add esp, 0xc
// 00454659  c3                   ret 
// library rbxgs-appdraw/Fonts.cpp (function ?singleton@ContentProvider@RBX@@SAAAV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw Fonts.cpp
