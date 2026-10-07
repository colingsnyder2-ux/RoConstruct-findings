// roc 2010-06 007137b0  unit: RBX::BallBallContact  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007137b0
//
// 007137b0  56                   push esi
// 007137b1  e82ad4d3ff           call 0x450be0
// 007137b6  8bf0                 mov esi, eax
// 007137b8  56                   push esi
// 007137b9  ff1574a39e00         call dword ptr [0x9ea374]
// 007137bf  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 007137c2  8b442408             mov eax, dword ptr [esp + 8]
// 007137c6  8908                 mov dword ptr [eax], ecx
// 007137c8  56                   push esi
// 007137c9  894618               mov dword ptr [esi + 0x18], eax
// 007137cc  ff1570a39e00         call dword ptr [0x9ea370]
// 007137d2  5e                   pop esi
// 007137d3  c3                   ret 
// library rbxgs/script\LuaMemory.cpp (function ?free@?$singleton_pool@VLuaAllocator@@$0CA@Udefault_user_allocator_new_delete@boost@@Vwin32_mutex@pool@details@3@$0CA@@boost@@SAXQAX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaMemory.cpp
