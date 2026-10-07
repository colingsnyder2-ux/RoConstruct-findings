// roc 2012-06 0090f4c0  unit: RBX::RightAngleRampPoly  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0090f4c0
//
// 0090f4c0  56                   push esi
// 0090f4c1  e81affffff           call 0x90f3e0
// 0090f4c6  8bf0                 mov esi, eax
// 0090f4c8  56                   push esi
// 0090f4c9  ff15b821b200         call dword ptr [0xb221b8]
// 0090f4cf  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0090f4d2  8b442408             mov eax, dword ptr [esp + 8]
// 0090f4d6  8908                 mov dword ptr [eax], ecx
// 0090f4d8  56                   push esi
// 0090f4d9  894618               mov dword ptr [esi + 0x18], eax
// 0090f4dc  ff15b421b200         call dword ptr [0xb221b4]
// 0090f4e2  5e                   pop esi
// 0090f4e3  c3                   ret 
// library rbxgs/script\LuaMemory.cpp (function ?free@?$singleton_pool@VLuaAllocator@@$0CA@Udefault_user_allocator_new_delete@boost@@Vwin32_mutex@pool@details@3@$0CA@@boost@@SAXQAX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaMemory.cpp
