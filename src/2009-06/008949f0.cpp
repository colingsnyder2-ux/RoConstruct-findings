// roc 2009-06 008949f0  unit: seg_00890000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008949f0
//
// 008949f0  b940b2a300           mov ecx, 0xa3b240
// 008949f5  e866ceb6ff           call 0x401860
// 008949fa  6828b2a300           push 0xa3b228
// 008949ff  ff1544e38900         call dword ptr [0x89e344]
// 00894a05  c3                   ret 
// library rbxgs/script\LuaMemory.cpp (function ??__Fobj@?1??instance@?$singleton_default@Upool_type@?$singleton_pool@VLuaAllocator@@$0BA@Udefault_user_allocator_new_delete@boost@@Vwin32_mutex@pool@details@3@$0CA@@boost@@@pool@details@boost@@SAAAUpool_type@?$singleton_pool@VLuaAllocator@@$0BA@Udefault_user_allocator_new_delete@boost@@Vwin32_mutex@pool@details@3@$0CA@@4@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaMemory.cpp
