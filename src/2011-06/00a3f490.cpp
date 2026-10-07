// roc 2011-06 00a3f490  unit: seg_00a30000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3f490
//
// 00a3f490  b96451cd00           mov ecx, 0xcd5164
// 00a3f495  e8f6259cff           call 0x401a90
// 00a3f49a  684c51cd00           push 0xcd514c
// 00a3f49f  ff159c03a400         call dword ptr [0xa4039c]
// 00a3f4a5  c3                   ret 
// library rbxgs/script\LuaMemory.cpp (function ??__Fobj@?1??instance@?$singleton_default@Upool_type@?$singleton_pool@VLuaAllocator@@$0BA@Udefault_user_allocator_new_delete@boost@@Vwin32_mutex@pool@details@3@$0CA@@boost@@@pool@details@boost@@SAAAUpool_type@?$singleton_pool@VLuaAllocator@@$0BA@Udefault_user_allocator_new_delete@boost@@Vwin32_mutex@pool@details@3@$0CA@@4@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaMemory.cpp
