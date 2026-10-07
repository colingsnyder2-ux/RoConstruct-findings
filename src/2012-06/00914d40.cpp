// roc 2012-06 00914d40  unit: RBX::MegaClusterPoly  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00914d40
//
// 00914d40  56                   push esi
// 00914d41  e8dabfffff           call 0x910d20
// 00914d46  8bf0                 mov esi, eax
// 00914d48  56                   push esi
// 00914d49  ff15b821b200         call dword ptr [0xb221b8]
// 00914d4f  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 00914d52  8b442408             mov eax, dword ptr [esp + 8]
// 00914d56  8908                 mov dword ptr [eax], ecx
// 00914d58  56                   push esi
// 00914d59  894618               mov dword ptr [esi + 0x18], eax
// 00914d5c  ff15b421b200         call dword ptr [0xb221b4]
// 00914d62  5e                   pop esi
// 00914d63  c3                   ret 
// library rbxgs/script\LuaMemory.cpp (function ?free@?$singleton_pool@VLuaAllocator@@$0CA@Udefault_user_allocator_new_delete@boost@@Vwin32_mutex@pool@details@3@$0CA@@boost@@SAXQAX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaMemory.cpp
