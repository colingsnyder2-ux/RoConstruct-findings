// roc 2007-08 0077aeb0  unit: seg_00770000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077aeb0
//
// 0077aeb0  b95c4e8c00           mov ecx, 0x8c4e5c
// 0077aeb5  e866b7e1ff           call 0x596620
// 0077aeba  68444e8c00           push 0x8c4e44
// 0077aebf  ff1504d37700         call dword ptr [0x77d304]
// 0077aec5  c3                   ret 
// library rbxgs/script\LuaMemory.cpp (function ??__Fobj@?1??instance@?$singleton_default@Upool_type@?$singleton_pool@VLuaAllocator@@$0BA@Udefault_user_allocator_new_delete@boost@@Vwin32_mutex@pool@details@3@$0CA@@boost@@@pool@details@boost@@SAAAUpool_type@?$singleton_pool@VLuaAllocator@@$0BA@Udefault_user_allocator_new_delete@boost@@Vwin32_mutex@pool@details@3@$0CA@@4@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaMemory.cpp
