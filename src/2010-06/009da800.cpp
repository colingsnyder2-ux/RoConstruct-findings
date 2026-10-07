// roc 2010-06 009da800  unit: seg_009d0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009da800
//
// 009da800  b920fabf00           mov ecx, 0xbffa20
// 009da805  e8b66fa2ff           call 0x4017c0
// 009da80a  6808fabf00           push 0xbffa08
// 009da80f  ff15bca39e00         call dword ptr [0x9ea3bc]
// 009da815  c3                   ret 
// library rbxgs/script\LuaMemory.cpp (function ??__Fobj@?1??instance@?$singleton_default@Upool_type@?$singleton_pool@VLuaAllocator@@$0BA@Udefault_user_allocator_new_delete@boost@@Vwin32_mutex@pool@details@3@$0CA@@boost@@@pool@details@boost@@SAAAUpool_type@?$singleton_pool@VLuaAllocator@@$0BA@Udefault_user_allocator_new_delete@boost@@Vwin32_mutex@pool@details@3@$0CA@@4@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaMemory.cpp
