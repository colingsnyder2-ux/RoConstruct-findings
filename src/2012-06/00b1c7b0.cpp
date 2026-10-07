// roc 2012-06 00b1c7b0  unit: seg_00b10000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00b1c7b0
//
// 00b1c7b0  b9d8b4e400           mov ecx, 0xe4b4d8
// 00b1c7b5  e8e6508eff           call 0x4018a0
// 00b1c7ba  68c0b4e400           push 0xe4b4c0
// 00b1c7bf  ff15d821b200         call dword ptr [0xb221d8]
// 00b1c7c5  c3                   ret 
// library rbxgs/script\LuaMemory.cpp (function ??__Fobj@?1??instance@?$singleton_default@Upool_type@?$singleton_pool@VLuaAllocator@@$0BA@Udefault_user_allocator_new_delete@boost@@Vwin32_mutex@pool@details@3@$0CA@@boost@@@pool@details@boost@@SAAAUpool_type@?$singleton_pool@VLuaAllocator@@$0BA@Udefault_user_allocator_new_delete@boost@@Vwin32_mutex@pool@details@3@$0CA@@4@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaMemory.cpp
