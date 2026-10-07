// roc 2009-06 0089d0f0  unit: seg_00890000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089d0f0
//
// 0089d0f0  b9a4ffa400           mov ecx, 0xa4ffa4
// 0089d0f5  e86647b6ff           call 0x401860
// 0089d0fa  688cffa400           push 0xa4ff8c
// 0089d0ff  ff1544e38900         call dword ptr [0x89e344]
// 0089d105  c3                   ret 
// library rbxgs/script\LuaMemory.cpp (function ??__Fobj@?1??instance@?$singleton_default@Upool_type@?$singleton_pool@VLuaAllocator@@$0BA@Udefault_user_allocator_new_delete@boost@@Vwin32_mutex@pool@details@3@$0CA@@boost@@@pool@details@boost@@SAAAUpool_type@?$singleton_pool@VLuaAllocator@@$0BA@Udefault_user_allocator_new_delete@boost@@Vwin32_mutex@pool@details@3@$0CA@@4@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaMemory.cpp
