// roc 2007-08 005966c0  unit: RBX::LaserTool  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005966c0
//
// 005966c0  b801000000           mov eax, 1
// 005966c5  8405704e8c00         test byte ptr [0x8c4e70], al
// 005966cb  7543                 jne 0x596710
// 005966cd  0905704e8c00         or dword ptr [0x8c4e70], eax
// 005966d3  68444e8c00           push 0x8c4e44
// 005966d8  ff1508d37700         call dword ptr [0x77d308]
// 005966de  33c0                 xor eax, eax
// 005966e0  68b0ae7700           push 0x77aeb0
// 005966e5  a35c4e8c00           mov dword ptr [0x8c4e5c], eax
// 005966ea  a3604e8c00           mov dword ptr [0x8c4e60], eax
// 005966ef  a3644e8c00           mov dword ptr [0x8c4e64], eax
// 005966f4  c705684e8c0010000000 mov dword ptr [0x8c4e68], 0x10
// 005966fe  c7056c4e8c0020000000 mov dword ptr [0x8c4e6c], 0x20
// 00596708  e816a60900           call 0x630d23
// 0059670d  83c404               add esp, 4
// 00596710  b8444e8c00           mov eax, 0x8c4e44
// 00596715  c3                   ret 
// library rbxgs/script\LuaMemory.cpp (function ?instance@?$singleton_default@Upool_type@?$singleton_pool@VLuaAllocator@@$0BA@Udefault_user_allocator_new_delete@boost@@Vwin32_mutex@pool@details@3@$0CA@@boost@@@pool@details@boost@@SAAAUpool_type@?$singleton_pool@VLuaAllocator@@$0BA@Udefault_user_allocator_new_delete@boost@@Vwin32_mutex@pool@details@3@$0CA@@4@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaMemory.cpp
