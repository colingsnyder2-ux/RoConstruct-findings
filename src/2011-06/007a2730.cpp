// roc 2011-06 007a2730  unit: RBX::Body  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007a2730
//
// 007a2730  56                   push esi
// 007a2731  e8bafeffff           call 0x7a25f0
// 007a2736  8bf0                 mov esi, eax
// 007a2738  56                   push esi
// 007a2739  ff158403a400         call dword ptr [0xa40384]
// 007a273f  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 007a2742  8b442408             mov eax, dword ptr [esp + 8]
// 007a2746  8908                 mov dword ptr [eax], ecx
// 007a2748  56                   push esi
// 007a2749  894618               mov dword ptr [esi + 0x18], eax
// 007a274c  ff158003a400         call dword ptr [0xa40380]
// 007a2752  5e                   pop esi
// 007a2753  c3                   ret 
// library rbxgs/script\LuaMemory.cpp (function ?free@?$singleton_pool@VLuaAllocator@@$0CA@Udefault_user_allocator_new_delete@boost@@Vwin32_mutex@pool@details@3@$0CA@@boost@@SAXQAX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaMemory.cpp
