// roc 2012-06 00b21090  unit: seg_00b20000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00b21090
//
// 00b21090  b9d868e500           mov ecx, 0xe568d8
// 00b21095  e806088eff           call 0x4018a0
// 00b2109a  68c068e500           push 0xe568c0
// 00b2109f  ff15d821b200         call dword ptr [0xb221d8]
// 00b210a5  c3                   ret 
// library rbxgs/script\LuaMemory.cpp (function ??__Fobj@?1??instance@?$singleton_default@Upool_type@?$singleton_pool@VLuaAllocator@@$0BA@Udefault_user_allocator_new_delete@boost@@Vwin32_mutex@pool@details@3@$0CA@@boost@@@pool@details@boost@@SAAAUpool_type@?$singleton_pool@VLuaAllocator@@$0BA@Udefault_user_allocator_new_delete@boost@@Vwin32_mutex@pool@details@3@$0CA@@4@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaMemory.cpp
