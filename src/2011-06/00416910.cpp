// roc 2011-06 00416910  unit: CopyVerb  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00416910
//
// 00416910  56                   push esi
// 00416911  e8bab2feff           call 0x401bd0
// 00416916  8bf0                 mov esi, eax
// 00416918  56                   push esi
// 00416919  ff158403a400         call dword ptr [0xa40384]
// 0041691f  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 00416922  8b442408             mov eax, dword ptr [esp + 8]
// 00416926  8908                 mov dword ptr [eax], ecx
// 00416928  56                   push esi
// 00416929  894618               mov dword ptr [esi + 0x18], eax
// 0041692c  ff158003a400         call dword ptr [0xa40380]
// 00416932  5e                   pop esi
// 00416933  c3                   ret 
// library rbxgs/script\LuaMemory.cpp (function ?free@?$singleton_pool@VLuaAllocator@@$0CA@Udefault_user_allocator_new_delete@boost@@Vwin32_mutex@pool@details@3@$0CA@@boost@@SAXQAX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaMemory.cpp
