// roc 2010-06 009e8aa0  unit: seg_009e0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e8aa0
//
// 009e8aa0  b9e828c200           mov ecx, 0xc228e8
// 009e8aa5  e8168da1ff           call 0x4017c0
// 009e8aaa  68d028c200           push 0xc228d0
// 009e8aaf  ff15bca39e00         call dword ptr [0x9ea3bc]
// 009e8ab5  c3                   ret 
// library rbxgs/script\LuaMemory.cpp (function ??__Fobj@?1??instance@?$singleton_default@Upool_type@?$singleton_pool@VLuaAllocator@@$0BA@Udefault_user_allocator_new_delete@boost@@Vwin32_mutex@pool@details@3@$0CA@@boost@@@pool@details@boost@@SAAAUpool_type@?$singleton_pool@VLuaAllocator@@$0BA@Udefault_user_allocator_new_delete@boost@@Vwin32_mutex@pool@details@3@$0CA@@4@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaMemory.cpp
