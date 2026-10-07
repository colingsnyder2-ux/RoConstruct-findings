// roc 2011-06 006a52c0  unit: RBX::Geometry  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006a52c0
//
// 006a52c0  56                   push esi
// 006a52c1  e81affffff           call 0x6a51e0
// 006a52c6  8bf0                 mov esi, eax
// 006a52c8  56                   push esi
// 006a52c9  ff158403a400         call dword ptr [0xa40384]
// 006a52cf  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 006a52d2  8b442408             mov eax, dword ptr [esp + 8]
// 006a52d6  8908                 mov dword ptr [eax], ecx
// 006a52d8  56                   push esi
// 006a52d9  894618               mov dword ptr [esi + 0x18], eax
// 006a52dc  ff158003a400         call dword ptr [0xa40380]
// 006a52e2  5e                   pop esi
// 006a52e3  c3                   ret 
// library rbxgs/script\LuaMemory.cpp (function ?free@?$singleton_pool@VLuaAllocator@@$0CA@Udefault_user_allocator_new_delete@boost@@Vwin32_mutex@pool@details@3@$0CA@@boost@@SAXQAX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaMemory.cpp
