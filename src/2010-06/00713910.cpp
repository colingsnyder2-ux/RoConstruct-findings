// roc 2010-06 00713910  unit: RBX::BallBallContact  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00713910
//
// 00713910  56                   push esi
// 00713911  e84af9ffff           call 0x713260
// 00713916  8bf0                 mov esi, eax
// 00713918  56                   push esi
// 00713919  ff1574a39e00         call dword ptr [0x9ea374]
// 0071391f  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 00713922  8b442408             mov eax, dword ptr [esp + 8]
// 00713926  8908                 mov dword ptr [eax], ecx
// 00713928  56                   push esi
// 00713929  894618               mov dword ptr [esi + 0x18], eax
// 0071392c  ff1570a39e00         call dword ptr [0x9ea370]
// 00713932  5e                   pop esi
// 00713933  c3                   ret 
// library rbxgs/script\LuaMemory.cpp (function ?free@?$singleton_pool@VLuaAllocator@@$0CA@Udefault_user_allocator_new_delete@boost@@Vwin32_mutex@pool@details@3@$0CA@@boost@@SAXQAX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaMemory.cpp
