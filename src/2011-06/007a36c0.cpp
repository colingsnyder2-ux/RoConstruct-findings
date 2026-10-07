// roc 2011-06 007a36c0  unit: RBX::Motor6DJoint  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007a36c0
//
// 007a36c0  56                   push esi
// 007a36c1  e81affffff           call 0x7a35e0
// 007a36c6  8bf0                 mov esi, eax
// 007a36c8  56                   push esi
// 007a36c9  ff158403a400         call dword ptr [0xa40384]
// 007a36cf  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 007a36d2  8b442408             mov eax, dword ptr [esp + 8]
// 007a36d6  8908                 mov dword ptr [eax], ecx
// 007a36d8  56                   push esi
// 007a36d9  894618               mov dword ptr [esi + 0x18], eax
// 007a36dc  ff158003a400         call dword ptr [0xa40380]
// 007a36e2  5e                   pop esi
// 007a36e3  c3                   ret 
// library rbxgs/script\LuaMemory.cpp (function ?free@?$singleton_pool@VLuaAllocator@@$0CA@Udefault_user_allocator_new_delete@boost@@Vwin32_mutex@pool@details@3@$0CA@@boost@@SAXQAX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaMemory.cpp
