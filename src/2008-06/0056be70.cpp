// roc 2008-06 0056be70  unit: RBX::Reflection::_N::?$TypedPropertyDescriptor  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0056be70
//
// 0056be70  64a100000000         mov eax, dword ptr fs:[0]
// 0056be76  6aff                 push -1
// 0056be78  68aefb7c00           push 0x7cfbae
// 0056be7d  50                   push eax
// 0056be7e  b801000000           mov eax, 1
// 0056be83  64892500000000       mov dword ptr fs:[0], esp
// 0056be8a  8405144b9700         test byte ptr [0x974b14], al
// 0056be90  752f                 jne 0x56bec1
// 0056be92  0905144b9700         or dword ptr [0x974b14], eax
// 0056be98  68a03a9400           push 0x943aa0
// 0056be9d  6838f68200           push 0x82f638
// 0056bea2  b9044b9700           mov ecx, 0x974b04
// 0056bea7  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0056beaf  e8dcfeffff           call 0x56bd90
// 0056beb4  68b0d17f00           push 0x7fd1b0
// 0056beb9  e8f1581300           call 0x6a17af
// 0056bebe  83c404               add esp, 4
// 0056bec1  8b0c24               mov ecx, dword ptr [esp]
// 0056bec4  b8044b9700           mov eax, 0x974b04
// 0056bec9  64890d00000000       mov dword ptr fs:[0], ecx
// 0056bed0  83c40c               add esp, 0xc
// 0056bed3  c3                   ret 
// library rbxgs/reflection\reflection_property.cpp (function ??$singleton@PBVPropertyDescriptor@Reflection@RBX@@@Type@Reflection@RBX@@SAABV012@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/reflection_property.cpp
