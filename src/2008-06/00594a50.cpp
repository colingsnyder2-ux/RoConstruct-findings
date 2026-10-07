// roc 2008-06 00594a50  unit: RBX::Lua::ThreadRef::VNode::?$sp_counted_impl_p  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00594a50
//
// 00594a50  64a100000000         mov eax, dword ptr fs:[0]
// 00594a56  6aff                 push -1
// 00594a58  68ae1f7d00           push 0x7d1fae
// 00594a5d  50                   push eax
// 00594a5e  b801000000           mov eax, 1
// 00594a63  64892500000000       mov dword ptr fs:[0], esp
// 00594a6a  8405845c9700         test byte ptr [0x975c84], al
// 00594a70  752f                 jne 0x594aa1
// 00594a72  0905845c9700         or dword ptr [0x975c84], eax
// 00594a78  6814969200           push 0x929614
// 00594a7d  68c0228300           push 0x8322c0
// 00594a82  b9745c9700           mov ecx, 0x975c74
// 00594a87  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00594a8f  e8fc72fdff           call 0x56bd90
// 00594a94  68c0da7f00           push 0x7fdac0
// 00594a99  e811cd1000           call 0x6a17af
// 00594a9e  83c404               add esp, 4
// 00594aa1  8b0c24               mov ecx, dword ptr [esp]
// 00594aa4  b8745c9700           mov eax, 0x975c74
// 00594aa9  64890d00000000       mov dword ptr fs:[0], ecx
// 00594ab0  83c40c               add esp, 0xc
// 00594ab3  c3                   ret 
// library rbxgs/reflection\type.cpp (function ??$singleton@X@Type@Reflection@RBX@@SAABV012@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/type.cpp
