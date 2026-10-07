// roc 2011-06 0074e550  unit: RBX::BallBallContact  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0074e550
//
// 0074e550  56                   push esi
// 0074e551  e85af9ffff           call 0x74deb0
// 0074e556  8bf0                 mov esi, eax
// 0074e558  56                   push esi
// 0074e559  ff158403a400         call dword ptr [0xa40384]
// 0074e55f  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0074e562  8b442408             mov eax, dword ptr [esp + 8]
// 0074e566  8908                 mov dword ptr [eax], ecx
// 0074e568  56                   push esi
// 0074e569  894618               mov dword ptr [esi + 0x18], eax
// 0074e56c  ff158003a400         call dword ptr [0xa40380]
// 0074e572  5e                   pop esi
// 0074e573  c3                   ret 
// library rbxgs/script\LuaMemory.cpp (function ?free@?$singleton_pool@VLuaAllocator@@$0CA@Udefault_user_allocator_new_delete@boost@@Vwin32_mutex@pool@details@3@$0CA@@boost@@SAXQAX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaMemory.cpp
