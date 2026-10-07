// roc 2010-06 009e8c80  unit: seg_009e0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e8c80
//
// 009e8c80  b9dc30c200           mov ecx, 0xc230dc
// 009e8c85  e8368ba1ff           call 0x4017c0
// 009e8c8a  68c430c200           push 0xc230c4
// 009e8c8f  ff15bca39e00         call dword ptr [0x9ea3bc]
// 009e8c95  c3                   ret 
// library rbxgs/script\LuaMemory.cpp (function ??__Fobj@?1??instance@?$singleton_default@Upool_type@?$singleton_pool@VLuaAllocator@@$0BA@Udefault_user_allocator_new_delete@boost@@Vwin32_mutex@pool@details@3@$0CA@@boost@@@pool@details@boost@@SAAAUpool_type@?$singleton_pool@VLuaAllocator@@$0BA@Udefault_user_allocator_new_delete@boost@@Vwin32_mutex@pool@details@3@$0CA@@4@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaMemory.cpp
