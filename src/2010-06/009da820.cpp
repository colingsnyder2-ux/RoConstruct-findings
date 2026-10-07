// roc 2010-06 009da820  unit: seg_009d0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009da820
//
// 009da820  b9ecf9bf00           mov ecx, 0xbff9ec
// 009da825  e8966fa2ff           call 0x4017c0
// 009da82a  68d4f9bf00           push 0xbff9d4
// 009da82f  ff15bca39e00         call dword ptr [0x9ea3bc]
// 009da835  c3                   ret 
// library rbxgs/script\LuaMemory.cpp (function ??__Fobj@?1??instance@?$singleton_default@Upool_type@?$singleton_pool@VLuaAllocator@@$0BA@Udefault_user_allocator_new_delete@boost@@Vwin32_mutex@pool@details@3@$0CA@@boost@@@pool@details@boost@@SAAAUpool_type@?$singleton_pool@VLuaAllocator@@$0BA@Udefault_user_allocator_new_delete@boost@@Vwin32_mutex@pool@details@3@$0CA@@4@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaMemory.cpp
