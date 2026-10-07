// roc 2011-06 00a31820  unit: seg_00a30000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a31820
//
// 00a31820  b9343acb00           mov ecx, 0xcb3a34
// 00a31825  e866029dff           call 0x401a90
// 00a3182a  681c3acb00           push 0xcb3a1c
// 00a3182f  ff159c03a400         call dword ptr [0xa4039c]
// 00a31835  c3                   ret 
// library rbxgs/script\LuaMemory.cpp (function ??__Fobj@?1??instance@?$singleton_default@Upool_type@?$singleton_pool@VLuaAllocator@@$0BA@Udefault_user_allocator_new_delete@boost@@Vwin32_mutex@pool@details@3@$0CA@@boost@@@pool@details@boost@@SAAAUpool_type@?$singleton_pool@VLuaAllocator@@$0BA@Udefault_user_allocator_new_delete@boost@@Vwin32_mutex@pool@details@3@$0CA@@4@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaMemory.cpp
