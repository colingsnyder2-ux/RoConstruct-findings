// roc 2012-06 00b1eb90  unit: seg_00b10000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00b1eb90
//
// 00b1eb90  b9e811e500           mov ecx, 0xe511e8
// 00b1eb95  e8062d8eff           call 0x4018a0
// 00b1eb9a  68d011e500           push 0xe511d0
// 00b1eb9f  ff15d821b200         call dword ptr [0xb221d8]
// 00b1eba5  c3                   ret 
// library rbxgs/script\LuaMemory.cpp (function ??__Fobj@?1??instance@?$singleton_default@Upool_type@?$singleton_pool@VLuaAllocator@@$0BA@Udefault_user_allocator_new_delete@boost@@Vwin32_mutex@pool@details@3@$0CA@@boost@@@pool@details@boost@@SAAAUpool_type@?$singleton_pool@VLuaAllocator@@$0BA@Udefault_user_allocator_new_delete@boost@@Vwin32_mutex@pool@details@3@$0CA@@4@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaMemory.cpp
