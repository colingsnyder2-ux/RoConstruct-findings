// roc 2007-08 0077aed0  unit: seg_00770000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077aed0
//
// 0077aed0  b92c4e8c00           mov ecx, 0x8c4e2c
// 0077aed5  e846b7e1ff           call 0x596620
// 0077aeda  68144e8c00           push 0x8c4e14
// 0077aedf  ff1504d37700         call dword ptr [0x77d304]
// 0077aee5  c3                   ret 
// library rbxgs/script\LuaMemory.cpp (function ??__Fobj@?1??instance@?$singleton_default@Upool_type@?$singleton_pool@VLuaAllocator@@$0BA@Udefault_user_allocator_new_delete@boost@@Vwin32_mutex@pool@details@3@$0CA@@boost@@@pool@details@boost@@SAAAUpool_type@?$singleton_pool@VLuaAllocator@@$0BA@Udefault_user_allocator_new_delete@boost@@Vwin32_mutex@pool@details@3@$0CA@@4@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaMemory.cpp
