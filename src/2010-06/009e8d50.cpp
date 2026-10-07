// roc 2010-06 009e8d50  unit: seg_009e0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e8d50
//
// 009e8d50  b99033c200           mov ecx, 0xc23390
// 009e8d55  e8668aa1ff           call 0x4017c0
// 009e8d5a  687833c200           push 0xc23378
// 009e8d5f  ff15bca39e00         call dword ptr [0x9ea3bc]
// 009e8d65  c3                   ret 
// library rbxgs/script\LuaMemory.cpp (function ??__Fobj@?1??instance@?$singleton_default@Upool_type@?$singleton_pool@VLuaAllocator@@$0BA@Udefault_user_allocator_new_delete@boost@@Vwin32_mutex@pool@details@3@$0CA@@boost@@@pool@details@boost@@SAAAUpool_type@?$singleton_pool@VLuaAllocator@@$0BA@Udefault_user_allocator_new_delete@boost@@Vwin32_mutex@pool@details@3@$0CA@@4@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaMemory.cpp
