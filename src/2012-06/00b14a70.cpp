// roc 2012-06 00b14a70  unit: seg_00b10000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00b14a70
//
// 00b14a70  b9e45ce200           mov ecx, 0xe25ce4
// 00b14a75  e896878fff           call 0x40d210
// 00b14a7a  68cc5ce200           push 0xe25ccc
// 00b14a7f  ff15d821b200         call dword ptr [0xb221d8]
// 00b14a85  c3                   ret 
// library rbxgs/script\LuaMemory.cpp (function ??__Fobj@?1??instance@?$singleton_default@Upool_type@?$singleton_pool@VLuaAllocator@@$0BA@Udefault_user_allocator_new_delete@boost@@Vwin32_mutex@pool@details@3@$0CA@@boost@@@pool@details@boost@@SAAAUpool_type@?$singleton_pool@VLuaAllocator@@$0BA@Udefault_user_allocator_new_delete@boost@@Vwin32_mutex@pool@details@3@$0CA@@4@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaMemory.cpp
