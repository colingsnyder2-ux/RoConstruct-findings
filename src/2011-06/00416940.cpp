// roc 2011-06 00416940  unit: CopyVerb  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00416940
//
// 00416940  56                   push esi
// 00416941  e8eab2feff           call 0x401c30
// 00416946  8bf0                 mov esi, eax
// 00416948  56                   push esi
// 00416949  ff158403a400         call dword ptr [0xa40384]
// 0041694f  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 00416952  8b442408             mov eax, dword ptr [esp + 8]
// 00416956  8908                 mov dword ptr [eax], ecx
// 00416958  56                   push esi
// 00416959  894618               mov dword ptr [esi + 0x18], eax
// 0041695c  ff158003a400         call dword ptr [0xa40380]
// 00416962  5e                   pop esi
// 00416963  c3                   ret 
// library rbxgs/script\LuaMemory.cpp (function ?free@?$singleton_pool@VLuaAllocator@@$0CA@Udefault_user_allocator_new_delete@boost@@Vwin32_mutex@pool@details@3@$0CA@@boost@@SAXQAX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaMemory.cpp
