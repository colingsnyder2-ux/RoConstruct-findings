// roc 2007-08 00596660  unit: RBX::LaserTool  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00596660
//
// 00596660  b801000000           mov eax, 1
// 00596665  8405404e8c00         test byte ptr [0x8c4e40], al
// 0059666b  753e                 jne 0x5966ab
// 0059666d  0905404e8c00         or dword ptr [0x8c4e40], eax
// 00596673  68144e8c00           push 0x8c4e14
// 00596678  ff1508d37700         call dword ptr [0x77d308]
// 0059667e  33c0                 xor eax, eax
// 00596680  a32c4e8c00           mov dword ptr [0x8c4e2c], eax
// 00596685  a3304e8c00           mov dword ptr [0x8c4e30], eax
// 0059668a  a3344e8c00           mov dword ptr [0x8c4e34], eax
// 0059668f  b820000000           mov eax, 0x20
// 00596694  68d0ae7700           push 0x77aed0
// 00596699  a3384e8c00           mov dword ptr [0x8c4e38], eax
// 0059669e  a33c4e8c00           mov dword ptr [0x8c4e3c], eax
// 005966a3  e87ba60900           call 0x630d23
// 005966a8  83c404               add esp, 4
// 005966ab  b8144e8c00           mov eax, 0x8c4e14
// 005966b0  c3                   ret 
// library rbxgs/script\LuaMemory.cpp (function ?instance@?$singleton_default@Upool_type@?$singleton_pool@VLuaAllocator@@$0CA@Udefault_user_allocator_new_delete@boost@@Vwin32_mutex@pool@details@3@$0CA@@boost@@@pool@details@boost@@SAAAUpool_type@?$singleton_pool@VLuaAllocator@@$0CA@Udefault_user_allocator_new_delete@boost@@Vwin32_mutex@pool@details@3@$0CA@@4@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaMemory.cpp
