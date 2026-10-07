// roc 2011-06 007a9140  unit: RBX::WedgePoly  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007a9140
//
// 007a9140  56                   push esi
// 007a9141  e81affffff           call 0x7a9060
// 007a9146  8bf0                 mov esi, eax
// 007a9148  56                   push esi
// 007a9149  ff158403a400         call dword ptr [0xa40384]
// 007a914f  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 007a9152  8b442408             mov eax, dword ptr [esp + 8]
// 007a9156  8908                 mov dword ptr [eax], ecx
// 007a9158  56                   push esi
// 007a9159  894618               mov dword ptr [esi + 0x18], eax
// 007a915c  ff158003a400         call dword ptr [0xa40380]
// 007a9162  5e                   pop esi
// 007a9163  c3                   ret 
// library rbxgs/script\LuaMemory.cpp (function ?free@?$singleton_pool@VLuaAllocator@@$0CA@Udefault_user_allocator_new_delete@boost@@Vwin32_mutex@pool@details@3@$0CA@@boost@@SAXQAX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaMemory.cpp
