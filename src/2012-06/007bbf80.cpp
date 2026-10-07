// roc 2012-06 007bbf80  unit: RBX::Geometry  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007bbf80
//
// 007bbf80  56                   push esi
// 007bbf81  e81affffff           call 0x7bbea0
// 007bbf86  8bf0                 mov esi, eax
// 007bbf88  56                   push esi
// 007bbf89  ff15b821b200         call dword ptr [0xb221b8]
// 007bbf8f  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 007bbf92  8b442408             mov eax, dword ptr [esp + 8]
// 007bbf96  8908                 mov dword ptr [eax], ecx
// 007bbf98  56                   push esi
// 007bbf99  894618               mov dword ptr [esi + 0x18], eax
// 007bbf9c  ff15b421b200         call dword ptr [0xb221b4]
// 007bbfa2  5e                   pop esi
// 007bbfa3  c3                   ret 
// library rbxgs/script\LuaMemory.cpp (function ?free@?$singleton_pool@VLuaAllocator@@$0CA@Udefault_user_allocator_new_delete@boost@@Vwin32_mutex@pool@details@3@$0CA@@boost@@SAXQAX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaMemory.cpp
