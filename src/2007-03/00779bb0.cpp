// roc 2007-03 00779bb0  unit: seg_00770000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00779bb0
//
// 00779bb0  b9c8c58b00           mov ecx, 0x8bc5c8
// 00779bb5  e8e64ddeff           call 0x55e9a0
// 00779bba  68b0c58b00           push 0x8bc5b0
// 00779bbf  ff15c4d27700         call dword ptr [0x77d2c4]
// 00779bc5  c3                   ret 
// library rbxgs/script\LuaMemory.cpp (function ??__Fobj@?1??instance@?$singleton_default@Upool_type@?$singleton_pool@VLuaAllocator@@$0BA@Udefault_user_allocator_new_delete@boost@@Vwin32_mutex@pool@details@3@$0CA@@boost@@@pool@details@boost@@SAAAUpool_type@?$singleton_pool@VLuaAllocator@@$0BA@Udefault_user_allocator_new_delete@boost@@Vwin32_mutex@pool@details@3@$0CA@@4@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaMemory.cpp
