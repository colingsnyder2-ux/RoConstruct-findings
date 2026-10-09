// roc 2009-12 0098a310  unit: seg_00980000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0098a310
//
// 0098a310  b9708bb900           mov ecx, 0xb98b70
// 0098a315  e84674a7ff           call 0x401760
// 0098a31a  68588bb900           push 0xb98b58
// 0098a31f  ff15d0b29800         call dword ptr [0x98b2d0]
// 0098a325  c3                   ret 
// library rbxgs/script\LuaMemory.cpp (function ??__Fobj@?1??instance@?$singleton_default@Upool_type@?$singleton_pool@VLuaAllocator@@$0BA@Udefault_user_allocator_new_delete@boost@@Vwin32_mutex@pool@details@3@$0CA@@boost@@@pool@details@boost@@SAAAUpool_type@?$singleton_pool@VLuaAllocator@@$0BA@Udefault_user_allocator_new_delete@boost@@Vwin32_mutex@pool@details@3@$0CA@@4@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaMemory.cpp
