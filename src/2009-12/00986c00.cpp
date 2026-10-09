// roc 2009-12 00986c00  unit: seg_00980000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00986c00
//
// 00986c00  b9fc3fb900           mov ecx, 0xb93ffc
// 00986c05  e856aba7ff           call 0x401760
// 00986c0a  68e43fb900           push 0xb93fe4
// 00986c0f  ff15d0b29800         call dword ptr [0x98b2d0]
// 00986c15  c3                   ret 
// library rbxgs/script\LuaMemory.cpp (function ??__Fobj@?1??instance@?$singleton_default@Upool_type@?$singleton_pool@VLuaAllocator@@$0BA@Udefault_user_allocator_new_delete@boost@@Vwin32_mutex@pool@details@3@$0CA@@boost@@@pool@details@boost@@SAAAUpool_type@?$singleton_pool@VLuaAllocator@@$0BA@Udefault_user_allocator_new_delete@boost@@Vwin32_mutex@pool@details@3@$0CA@@4@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaMemory.cpp
