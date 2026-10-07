// roc 2007-08 0056d350  unit: RBX::Lua::ThreadRef::VNode::?$sp_counted_impl_p  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0056d350
//
// 0056d350  64a100000000         mov eax, dword ptr fs:[0]
// 0056d356  6aff                 push -1
// 0056d358  684e497500           push 0x75494e
// 0056d35d  50                   push eax
// 0056d35e  b801000000           mov eax, 1
// 0056d363  64892500000000       mov dword ptr fs:[0], esp
// 0056d36a  840510248c00         test byte ptr [0x8c2410], al
// 0056d370  752f                 jne 0x56d3a1
// 0056d372  090510248c00         or dword ptr [0x8c2410], eax
// 0056d378  68c8278800           push 0x8827c8
// 0056d37d  68a09f7a00           push 0x7a9fa0
// 0056d382  b900248c00           mov ecx, 0x8c2400
// 0056d387  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0056d38f  e86cf2ffff           call 0x56c600
// 0056d394  68609e7700           push 0x779e60
// 0056d399  e885390c00           call 0x630d23
// 0056d39e  83c404               add esp, 4
// 0056d3a1  8b0c24               mov ecx, dword ptr [esp]
// 0056d3a4  b800248c00           mov eax, 0x8c2400
// 0056d3a9  64890d00000000       mov dword ptr fs:[0], ecx
// 0056d3b0  83c40c               add esp, 0xc
// 0056d3b3  c3                   ret 
// library rbxgs/reflection\type.cpp (function ??$singleton@X@Type@Reflection@RBX@@SAABV012@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/type.cpp
