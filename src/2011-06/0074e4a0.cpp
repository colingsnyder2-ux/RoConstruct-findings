// roc 2011-06 0074e4a0  unit: RBX::BallBallContact  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0074e4a0
//
// 0074e4a0  56                   push esi
// 0074e4a1  e84a12d1ff           call 0x45f6f0
// 0074e4a6  8bf0                 mov esi, eax
// 0074e4a8  56                   push esi
// 0074e4a9  ff158403a400         call dword ptr [0xa40384]
// 0074e4af  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0074e4b2  8b442408             mov eax, dword ptr [esp + 8]
// 0074e4b6  8908                 mov dword ptr [eax], ecx
// 0074e4b8  56                   push esi
// 0074e4b9  894618               mov dword ptr [esi + 0x18], eax
// 0074e4bc  ff158003a400         call dword ptr [0xa40380]
// 0074e4c2  5e                   pop esi
// 0074e4c3  c3                   ret 
// library rbxgs/script\LuaMemory.cpp (function ?free@?$singleton_pool@VLuaAllocator@@$0CA@Udefault_user_allocator_new_delete@boost@@Vwin32_mutex@pool@details@3@$0CA@@boost@@SAXQAX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaMemory.cpp
