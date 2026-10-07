// roc 2011-06 0074e600  unit: RBX::BallBallContact  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0074e600
//
// 0074e600  56                   push esi
// 0074e601  e80af9ffff           call 0x74df10
// 0074e606  8bf0                 mov esi, eax
// 0074e608  56                   push esi
// 0074e609  ff158403a400         call dword ptr [0xa40384]
// 0074e60f  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0074e612  8b442408             mov eax, dword ptr [esp + 8]
// 0074e616  8908                 mov dword ptr [eax], ecx
// 0074e618  56                   push esi
// 0074e619  894618               mov dword ptr [esi + 0x18], eax
// 0074e61c  ff158003a400         call dword ptr [0xa40380]
// 0074e622  5e                   pop esi
// 0074e623  c3                   ret 
// library rbxgs/script\LuaMemory.cpp (function ?free@?$singleton_pool@VLuaAllocator@@$0CA@Udefault_user_allocator_new_delete@boost@@Vwin32_mutex@pool@details@3@$0CA@@boost@@SAXQAX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaMemory.cpp
