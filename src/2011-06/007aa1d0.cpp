// roc 2011-06 007aa1d0  unit: RBX::RightAngleRampPoly  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007aa1d0
//
// 007aa1d0  56                   push esi
// 007aa1d1  e81affffff           call 0x7aa0f0
// 007aa1d6  8bf0                 mov esi, eax
// 007aa1d8  56                   push esi
// 007aa1d9  ff158403a400         call dword ptr [0xa40384]
// 007aa1df  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 007aa1e2  8b442408             mov eax, dword ptr [esp + 8]
// 007aa1e6  8908                 mov dword ptr [eax], ecx
// 007aa1e8  56                   push esi
// 007aa1e9  894618               mov dword ptr [esi + 0x18], eax
// 007aa1ec  ff158003a400         call dword ptr [0xa40380]
// 007aa1f2  5e                   pop esi
// 007aa1f3  c3                   ret 
// library rbxgs/script\LuaMemory.cpp (function ?free@?$singleton_pool@VLuaAllocator@@$0CA@Udefault_user_allocator_new_delete@boost@@Vwin32_mutex@pool@details@3@$0CA@@boost@@SAXQAX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaMemory.cpp
