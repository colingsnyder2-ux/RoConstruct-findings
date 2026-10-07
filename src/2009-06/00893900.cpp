// roc 2009-06 00893900  unit: seg_00890000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00893900
//
// 00893900  b95496a300           mov ecx, 0xa39654
// 00893905  e856dfb6ff           call 0x401860
// 0089390a  683c96a300           push 0xa3963c
// 0089390f  ff1544e38900         call dword ptr [0x89e344]
// 00893915  c3                   ret 
// library rbxgs/script\LuaMemory.cpp (function ??__Fobj@?1??instance@?$singleton_default@Upool_type@?$singleton_pool@VLuaAllocator@@$0BA@Udefault_user_allocator_new_delete@boost@@Vwin32_mutex@pool@details@3@$0CA@@boost@@@pool@details@boost@@SAAAUpool_type@?$singleton_pool@VLuaAllocator@@$0BA@Udefault_user_allocator_new_delete@boost@@Vwin32_mutex@pool@details@3@$0CA@@4@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaMemory.cpp
