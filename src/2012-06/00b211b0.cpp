// roc 2012-06 00b211b0  unit: seg_00b20000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00b211b0
//
// 00b211b0  b9e069e500           mov ecx, 0xe569e0
// 00b211b5  e8e6068eff           call 0x4018a0
// 00b211ba  68c869e500           push 0xe569c8
// 00b211bf  ff15d821b200         call dword ptr [0xb221d8]
// 00b211c5  c3                   ret 
// library rbxgs/script\LuaMemory.cpp (function ??__Fobj@?1??instance@?$singleton_default@Upool_type@?$singleton_pool@VLuaAllocator@@$0BA@Udefault_user_allocator_new_delete@boost@@Vwin32_mutex@pool@details@3@$0CA@@boost@@@pool@details@boost@@SAAAUpool_type@?$singleton_pool@VLuaAllocator@@$0BA@Udefault_user_allocator_new_delete@boost@@Vwin32_mutex@pool@details@3@$0CA@@4@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaMemory.cpp
