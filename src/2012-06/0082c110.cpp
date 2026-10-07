// roc 2012-06 0082c110  unit: RBX::BallBallContact  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0082c110
//
// 0082c110  56                   push esi
// 0082c111  e84af5ffff           call 0x82b660
// 0082c116  8bf0                 mov esi, eax
// 0082c118  56                   push esi
// 0082c119  ff15b821b200         call dword ptr [0xb221b8]
// 0082c11f  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0082c122  8b442408             mov eax, dword ptr [esp + 8]
// 0082c126  8908                 mov dword ptr [eax], ecx
// 0082c128  56                   push esi
// 0082c129  894618               mov dword ptr [esi + 0x18], eax
// 0082c12c  ff15b421b200         call dword ptr [0xb221b4]
// 0082c132  5e                   pop esi
// 0082c133  c3                   ret 
// library rbxgs/script\LuaMemory.cpp (function ?free@?$singleton_pool@VLuaAllocator@@$0CA@Udefault_user_allocator_new_delete@boost@@Vwin32_mutex@pool@details@3@$0CA@@boost@@SAXQAX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaMemory.cpp
