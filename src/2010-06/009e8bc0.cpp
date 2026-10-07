// roc 2010-06 009e8bc0  unit: seg_009e0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e8bc0
//
// 009e8bc0  b92c2fc200           mov ecx, 0xc22f2c
// 009e8bc5  e8f68ba1ff           call 0x4017c0
// 009e8bca  68142fc200           push 0xc22f14
// 009e8bcf  ff15bca39e00         call dword ptr [0x9ea3bc]
// 009e8bd5  c3                   ret 
// library rbxgs/script\LuaMemory.cpp (function ??__Fobj@?1??instance@?$singleton_default@Upool_type@?$singleton_pool@VLuaAllocator@@$0BA@Udefault_user_allocator_new_delete@boost@@Vwin32_mutex@pool@details@3@$0CA@@boost@@@pool@details@boost@@SAAAUpool_type@?$singleton_pool@VLuaAllocator@@$0BA@Udefault_user_allocator_new_delete@boost@@Vwin32_mutex@pool@details@3@$0CA@@4@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaMemory.cpp
