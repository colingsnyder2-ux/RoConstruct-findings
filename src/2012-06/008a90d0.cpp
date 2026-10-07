// roc 2012-06 008a90d0  unit: RBX::Block  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008a90d0
//
// 008a90d0  56                   push esi
// 008a90d1  e89afdffff           call 0x8a8e70
// 008a90d6  8bf0                 mov esi, eax
// 008a90d8  56                   push esi
// 008a90d9  ff15b821b200         call dword ptr [0xb221b8]
// 008a90df  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 008a90e2  8b442408             mov eax, dword ptr [esp + 8]
// 008a90e6  8908                 mov dword ptr [eax], ecx
// 008a90e8  56                   push esi
// 008a90e9  894618               mov dword ptr [esi + 0x18], eax
// 008a90ec  ff15b421b200         call dword ptr [0xb221b4]
// 008a90f2  5e                   pop esi
// 008a90f3  c3                   ret 
// library rbxgs/script\LuaMemory.cpp (function ?free@?$singleton_pool@VLuaAllocator@@$0CA@Udefault_user_allocator_new_delete@boost@@Vwin32_mutex@pool@details@3@$0CA@@boost@@SAXQAX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaMemory.cpp
