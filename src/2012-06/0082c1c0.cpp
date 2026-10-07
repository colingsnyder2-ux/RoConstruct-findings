// roc 2012-06 0082c1c0  unit: RBX::BallBallContact  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0082c1c0
//
// 0082c1c0  56                   push esi
// 0082c1c1  e8faf4ffff           call 0x82b6c0
// 0082c1c6  8bf0                 mov esi, eax
// 0082c1c8  56                   push esi
// 0082c1c9  ff15b821b200         call dword ptr [0xb221b8]
// 0082c1cf  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0082c1d2  8b442408             mov eax, dword ptr [esp + 8]
// 0082c1d6  8908                 mov dword ptr [eax], ecx
// 0082c1d8  56                   push esi
// 0082c1d9  894618               mov dword ptr [esi + 0x18], eax
// 0082c1dc  ff15b421b200         call dword ptr [0xb221b4]
// 0082c1e2  5e                   pop esi
// 0082c1e3  c3                   ret 
// library rbxgs/script\LuaMemory.cpp (function ?free@?$singleton_pool@VLuaAllocator@@$0CA@Udefault_user_allocator_new_delete@boost@@Vwin32_mutex@pool@details@3@$0CA@@boost@@SAXQAX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaMemory.cpp
