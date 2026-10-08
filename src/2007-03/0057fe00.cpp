// roc 2007-03 0057fe00  unit: seg_00570000  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0057fe00
//
// 0057fe00  b801000000           mov eax, 1
// 0057fe05  8405fcd38b00         test byte ptr [0x8bd3fc], al
// 0057fe0b  753e                 jne 0x57fe4b
// 0057fe0d  0905fcd38b00         or dword ptr [0x8bd3fc], eax
// 0057fe13  68d0d38b00           push 0x8bd3d0
// 0057fe18  ff15c8d27700         call dword ptr [0x77d2c8]
// 0057fe1e  33c0                 xor eax, eax
// 0057fe20  a3e8d38b00           mov dword ptr [0x8bd3e8], eax
// 0057fe25  a3ecd38b00           mov dword ptr [0x8bd3ec], eax
// 0057fe2a  a3f0d38b00           mov dword ptr [0x8bd3f0], eax
// 0057fe2f  b820000000           mov eax, 0x20
// 0057fe34  68a0a27700           push 0x77a2a0
// 0057fe39  a3f4d38b00           mov dword ptr [0x8bd3f4], eax
// 0057fe3e  a3f8d38b00           mov dword ptr [0x8bd3f8], eax
// 0057fe43  e86bf30900           call 0x61f1b3
// 0057fe48  83c404               add esp, 4
// 0057fe4b  b8d0d38b00           mov eax, 0x8bd3d0
// 0057fe50  c3                   ret 
// library rbxgs/script\LuaMemory.cpp (function ?instance@?$singleton_default@Upool_type@?$singleton_pool@VLuaAllocator@@$0CA@Udefault_user_allocator_new_delete@boost@@Vwin32_mutex@pool@details@3@$0CA@@boost@@@pool@details@boost@@SAAAUpool_type@?$singleton_pool@VLuaAllocator@@$0CA@Udefault_user_allocator_new_delete@boost@@Vwin32_mutex@pool@details@3@$0CA@@4@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaMemory.cpp
