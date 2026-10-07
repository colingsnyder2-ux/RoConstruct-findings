// roc 2011-06 0074e3f0  unit: RBX::BallBallContact  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0074e3f0
//
// 0074e3f0  56                   push esi
// 0074e3f1  e89a12d1ff           call 0x45f690
// 0074e3f6  8bf0                 mov esi, eax
// 0074e3f8  56                   push esi
// 0074e3f9  ff158403a400         call dword ptr [0xa40384]
// 0074e3ff  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0074e402  8b442408             mov eax, dword ptr [esp + 8]
// 0074e406  8908                 mov dword ptr [eax], ecx
// 0074e408  56                   push esi
// 0074e409  894618               mov dword ptr [esi + 0x18], eax
// 0074e40c  ff158003a400         call dword ptr [0xa40380]
// 0074e412  5e                   pop esi
// 0074e413  c3                   ret 
// library rbxgs/script\LuaMemory.cpp (function ?free@?$singleton_pool@VLuaAllocator@@$0CA@Udefault_user_allocator_new_delete@boost@@Vwin32_mutex@pool@details@3@$0CA@@boost@@SAXQAX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaMemory.cpp
