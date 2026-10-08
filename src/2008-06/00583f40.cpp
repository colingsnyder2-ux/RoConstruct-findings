// roc 2008-06 00583f40  unit: RBX::ModelInstance  size: 115 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00583f40
//
// 00583f40  64a100000000         mov eax, dword ptr fs:[0]
// 00583f46  6aff                 push -1
// 00583f48  68ae117d00           push 0x7d11ae
// 00583f4d  50                   push eax
// 00583f4e  b801000000           mov eax, 1
// 00583f53  64892500000000       mov dword ptr fs:[0], esp
// 00583f5a  840598559700         test byte ptr [0x975598], al
// 00583f60  753e                 jne 0x583fa0
// 00583f62  090598559700         or dword ptr [0x975598], eax
// 00583f68  6850148200           push 0x821450
// 00583f6d  68404d9300           push 0x934d40
// 00583f72  6834168200           push 0x821634
// 00583f77  b988559700           mov ecx, 0x975588
// 00583f7c  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00583f84  e81758f0ff           call 0x4897a0
// 00583f89  6860d77f00           push 0x7fd760
// 00583f8e  c705885597004c148200 mov dword ptr [0x975588], 0x82144c
// 00583f98  e812d81100           call 0x6a17af
// 00583f9d  83c404               add esp, 4
// 00583fa0  8b0c24               mov ecx, dword ptr [esp]
// 00583fa3  b888559700           mov eax, 0x975588
// 00583fa8  64890d00000000       mov dword ptr fs:[0], ecx
// 00583faf  83c40c               add esp, 0xc
// 00583fb2  c3                   ret 
// library rbxgs/v8datamodel\ModelInstance.cpp (function ??$singleton@PAVModelInstance@RBX@@@RefType@Reflection@RBX@@SAABV012@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/ModelInstance.cpp
