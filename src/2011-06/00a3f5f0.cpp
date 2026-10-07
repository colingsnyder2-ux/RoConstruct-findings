// roc 2011-06 00a3f5f0  unit: seg_00a30000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3f5f0
//
// 00a3f5f0  b91858cd00           mov ecx, 0xcd5818
// 00a3f5f5  e896249cff           call 0x401a90
// 00a3f5fa  680058cd00           push 0xcd5800
// 00a3f5ff  ff159c03a400         call dword ptr [0xa4039c]
// 00a3f605  c3                   ret 
// library rbxgs/script\LuaMemory.cpp (function ??__Fobj@?1??instance@?$singleton_default@Upool_type@?$singleton_pool@VLuaAllocator@@$0BA@Udefault_user_allocator_new_delete@boost@@Vwin32_mutex@pool@details@3@$0CA@@boost@@@pool@details@boost@@SAAAUpool_type@?$singleton_pool@VLuaAllocator@@$0BA@Udefault_user_allocator_new_delete@boost@@Vwin32_mutex@pool@details@3@$0CA@@4@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaMemory.cpp
