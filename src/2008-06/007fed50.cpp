// roc 2008-06 007fed50  unit: seg_007f0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fed50
//
// 007fed50  b9ec969700           mov ecx, 0x9796ec
// 007fed55  e8069ddcff           call 0x5c8a60
// 007fed5a  68d4969700           push 0x9796d4
// 007fed5f  ff15dc228000         call dword ptr [0x8022dc]
// 007fed65  c3                   ret 
// library rbxgs/script\LuaMemory.cpp (function ??__Fobj@?1??instance@?$singleton_default@Upool_type@?$singleton_pool@VLuaAllocator@@$0BA@Udefault_user_allocator_new_delete@boost@@Vwin32_mutex@pool@details@3@$0CA@@boost@@@pool@details@boost@@SAAAUpool_type@?$singleton_pool@VLuaAllocator@@$0BA@Udefault_user_allocator_new_delete@boost@@Vwin32_mutex@pool@details@3@$0CA@@4@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaMemory.cpp
