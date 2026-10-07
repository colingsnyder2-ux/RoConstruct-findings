// roc 2011-06 007a7930  unit: RBX::PrismPoly  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007a7930
//
// 007a7930  56                   push esi
// 007a7931  e81affffff           call 0x7a7850
// 007a7936  8bf0                 mov esi, eax
// 007a7938  56                   push esi
// 007a7939  ff158403a400         call dword ptr [0xa40384]
// 007a793f  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 007a7942  8b442408             mov eax, dword ptr [esp + 8]
// 007a7946  8908                 mov dword ptr [eax], ecx
// 007a7948  56                   push esi
// 007a7949  894618               mov dword ptr [esi + 0x18], eax
// 007a794c  ff158003a400         call dword ptr [0xa40380]
// 007a7952  5e                   pop esi
// 007a7953  c3                   ret 
// library rbxgs/script\LuaMemory.cpp (function ?free@?$singleton_pool@VLuaAllocator@@$0CA@Udefault_user_allocator_new_delete@boost@@Vwin32_mutex@pool@details@3@$0CA@@boost@@SAXQAX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaMemory.cpp
