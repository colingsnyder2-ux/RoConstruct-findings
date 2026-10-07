// roc 2012-06 00b1f820  unit: seg_00b10000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00b1f820
//
// 00b1f820  b9d82fe500           mov ecx, 0xe52fd8
// 00b1f825  e876208eff           call 0x4018a0
// 00b1f82a  68c02fe500           push 0xe52fc0
// 00b1f82f  ff15d821b200         call dword ptr [0xb221d8]
// 00b1f835  c3                   ret 
// library rbxgs/script\LuaMemory.cpp (function ??__Fobj@?1??instance@?$singleton_default@Upool_type@?$singleton_pool@VLuaAllocator@@$0BA@Udefault_user_allocator_new_delete@boost@@Vwin32_mutex@pool@details@3@$0CA@@boost@@@pool@details@boost@@SAAAUpool_type@?$singleton_pool@VLuaAllocator@@$0BA@Udefault_user_allocator_new_delete@boost@@Vwin32_mutex@pool@details@3@$0CA@@4@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaMemory.cpp
