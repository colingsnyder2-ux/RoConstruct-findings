// roc 2011-06 0074e6b0  unit: RBX::BallBallContact  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0074e6b0
//
// 0074e6b0  56                   push esi
// 0074e6b1  e8baf8ffff           call 0x74df70
// 0074e6b6  8bf0                 mov esi, eax
// 0074e6b8  56                   push esi
// 0074e6b9  ff158403a400         call dword ptr [0xa40384]
// 0074e6bf  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0074e6c2  8b442408             mov eax, dword ptr [esp + 8]
// 0074e6c6  8908                 mov dword ptr [eax], ecx
// 0074e6c8  56                   push esi
// 0074e6c9  894618               mov dword ptr [esi + 0x18], eax
// 0074e6cc  ff158003a400         call dword ptr [0xa40380]
// 0074e6d2  5e                   pop esi
// 0074e6d3  c3                   ret 
// library rbxgs/script\LuaMemory.cpp (function ?free@?$singleton_pool@VLuaAllocator@@$0CA@Udefault_user_allocator_new_delete@boost@@Vwin32_mutex@pool@details@3@$0CA@@boost@@SAXQAX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaMemory.cpp
