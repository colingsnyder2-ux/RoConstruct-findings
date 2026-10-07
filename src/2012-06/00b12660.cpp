// roc 2012-06 00b12660  unit: seg_00b10000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00b12660
//
// 00b12660  b93ca3e100           mov ecx, 0xe1a33c
// 00b12665  e836f28eff           call 0x4018a0
// 00b1266a  6824a3e100           push 0xe1a324
// 00b1266f  ff15d821b200         call dword ptr [0xb221d8]
// 00b12675  c3                   ret 
// library rbxgs/script\LuaMemory.cpp (function ??__Fobj@?1??instance@?$singleton_default@Upool_type@?$singleton_pool@VLuaAllocator@@$0BA@Udefault_user_allocator_new_delete@boost@@Vwin32_mutex@pool@details@3@$0CA@@boost@@@pool@details@boost@@SAAAUpool_type@?$singleton_pool@VLuaAllocator@@$0BA@Udefault_user_allocator_new_delete@boost@@Vwin32_mutex@pool@details@3@$0CA@@4@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaMemory.cpp
