// roc 2010-06 009dbaa0  unit: seg_009d0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009dbaa0
//
// 009dbaa0  b9bc1bc000           mov ecx, 0xc01bbc
// 009dbaa5  e8165da2ff           call 0x4017c0
// 009dbaaa  68a41bc000           push 0xc01ba4
// 009dbaaf  ff15bca39e00         call dword ptr [0x9ea3bc]
// 009dbab5  c3                   ret 
// library rbxgs/script\LuaMemory.cpp (function ??__Fobj@?1??instance@?$singleton_default@Upool_type@?$singleton_pool@VLuaAllocator@@$0BA@Udefault_user_allocator_new_delete@boost@@Vwin32_mutex@pool@details@3@$0CA@@boost@@@pool@details@boost@@SAAAUpool_type@?$singleton_pool@VLuaAllocator@@$0BA@Udefault_user_allocator_new_delete@boost@@Vwin32_mutex@pool@details@3@$0CA@@4@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaMemory.cpp
