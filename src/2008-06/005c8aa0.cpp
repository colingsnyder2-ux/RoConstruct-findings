// roc 2008-06 005c8aa0  unit: RBX::LaserTool  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c8aa0
//
// 005c8aa0  b801000000           mov eax, 1
// 005c8aa5  8405d0969700         test byte ptr [0x9796d0], al
// 005c8aab  753e                 jne 0x5c8aeb
// 005c8aad  0905d0969700         or dword ptr [0x9796d0], eax
// 005c8ab3  68a4969700           push 0x9796a4
// 005c8ab8  ff15e0228000         call dword ptr [0x8022e0]
// 005c8abe  33c0                 xor eax, eax
// 005c8ac0  a3bc969700           mov dword ptr [0x9796bc], eax
// 005c8ac5  a3c0969700           mov dword ptr [0x9796c0], eax
// 005c8aca  a3c4969700           mov dword ptr [0x9796c4], eax
// 005c8acf  b820000000           mov eax, 0x20
// 005c8ad4  6870ed7f00           push 0x7fed70
// 005c8ad9  a3c8969700           mov dword ptr [0x9796c8], eax
// 005c8ade  a3cc969700           mov dword ptr [0x9796cc], eax
// 005c8ae3  e8c78c0d00           call 0x6a17af
// 005c8ae8  83c404               add esp, 4
// 005c8aeb  b8a4969700           mov eax, 0x9796a4
// 005c8af0  c3                   ret 
// library rbxgs-dll/script\LuaMemory.cpp (function ?instance@?$singleton_default@Upool_type@?$singleton_pool@VLuaAllocator@@$0CA@Udefault_user_allocator_new_delete@boost@@Vwin32_mutex@pool@details@3@$0CA@@boost@@@pool@details@boost@@SAAAUpool_type@?$singleton_pool@VLuaAllocator@@$0CA@Udefault_user_allocator_new_delete@boost@@Vwin32_mutex@pool@details@3@$0CA@@4@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-dll script/LuaMemory.cpp
