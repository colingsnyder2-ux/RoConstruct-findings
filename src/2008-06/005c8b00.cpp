// roc 2008-06 005c8b00  unit: RBX::LaserTool  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c8b00
//
// 005c8b00  b801000000           mov eax, 1
// 005c8b05  840500979700         test byte ptr [0x979700], al
// 005c8b0b  7543                 jne 0x5c8b50
// 005c8b0d  090500979700         or dword ptr [0x979700], eax
// 005c8b13  68d4969700           push 0x9796d4
// 005c8b18  ff15e0228000         call dword ptr [0x8022e0]
// 005c8b1e  33c0                 xor eax, eax
// 005c8b20  6850ed7f00           push 0x7fed50
// 005c8b25  a3ec969700           mov dword ptr [0x9796ec], eax
// 005c8b2a  a3f0969700           mov dword ptr [0x9796f0], eax
// 005c8b2f  a3f4969700           mov dword ptr [0x9796f4], eax
// 005c8b34  c705f896970010000000 mov dword ptr [0x9796f8], 0x10
// 005c8b3e  c705fc96970020000000 mov dword ptr [0x9796fc], 0x20
// 005c8b48  e8628c0d00           call 0x6a17af
// 005c8b4d  83c404               add esp, 4
// 005c8b50  b8d4969700           mov eax, 0x9796d4
// 005c8b55  c3                   ret 
// library rbxgs/script\LuaMemory.cpp (function ?instance@?$singleton_default@Upool_type@?$singleton_pool@VLuaAllocator@@$0BA@Udefault_user_allocator_new_delete@boost@@Vwin32_mutex@pool@details@3@$0CA@@boost@@@pool@details@boost@@SAAAUpool_type@?$singleton_pool@VLuaAllocator@@$0BA@Udefault_user_allocator_new_delete@boost@@Vwin32_mutex@pool@details@3@$0CA@@4@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaMemory.cpp
