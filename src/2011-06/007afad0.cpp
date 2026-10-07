// roc 2011-06 007afad0  unit: RBX::GlueJoint  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007afad0
//
// 007afad0  56                   push esi
// 007afad1  e83afacaff           call 0x45f510
// 007afad6  8bf0                 mov esi, eax
// 007afad8  56                   push esi
// 007afad9  ff158403a400         call dword ptr [0xa40384]
// 007afadf  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 007afae2  8b442408             mov eax, dword ptr [esp + 8]
// 007afae6  8908                 mov dword ptr [eax], ecx
// 007afae8  56                   push esi
// 007afae9  894618               mov dword ptr [esi + 0x18], eax
// 007afaec  ff158003a400         call dword ptr [0xa40380]
// 007afaf2  5e                   pop esi
// 007afaf3  c3                   ret 
// library rbxgs/script\LuaMemory.cpp (function ?free@?$singleton_pool@VLuaAllocator@@$0CA@Udefault_user_allocator_new_delete@boost@@Vwin32_mutex@pool@details@3@$0CA@@boost@@SAXQAX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaMemory.cpp
