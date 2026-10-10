// from server: 100% by tester
// roc 2007-03 0057fe60  unit: seg_00570000  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0057fe60
//
// 0057fe60  b801000000           mov eax, 1
// 0057fe65  84052cd48b00         test byte ptr [0x8bd42c], al
// 0057fe6b  7543                 jne 0x57feb0
// 0057fe6d  09052cd48b00         or dword ptr [0x8bd42c], eax
// 0057fe73  6800d48b00           push 0x8bd400
// 0057fe78  ff15c8d27700         call dword ptr [0x77d2c8]
// 0057fe7e  33c0                 xor eax, eax
// 0057fe80  6880a27700           push 0x77a280
// 0057fe85  a318d48b00           mov dword ptr [0x8bd418], eax
// 0057fe8a  a31cd48b00           mov dword ptr [0x8bd41c], eax
// 0057fe8f  a320d48b00           mov dword ptr [0x8bd420], eax
// 0057fe94  c70524d48b0010000000 mov dword ptr [0x8bd424], 0x10
// 0057fe9e  c70528d48b0020000000 mov dword ptr [0x8bd428], 0x20
// 0057fea8  e806f30900           call 0x61f1b3
// 0057fead  83c404               add esp, 4
// 0057feb0  b800d48b00           mov eax, 0x8bd400
// 0057feb5  c3                   ret 
// library rbxgs/script\LuaMemory.cpp (function ?instance@?$singleton_default@Upool_type@?$singleton_pool@VLuaAllocator@@$0BA@Udefault_user_allocator_new_delete@boost@@Vwin32_mutex@pool@details@3@$0CA@@boost@@@pool@details@boost@@SAAAUpool_type@?$singleton_pool@VLuaAllocator@@$0BA@Udefault_user_allocator_new_delete@boost@@Vwin32_mutex@pool@details@3@$0CA@@4@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaMemory.cpp
