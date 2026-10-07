// roc 2011-06 007aac80  unit: RBX::CornerWedgePoly  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007aac80
//
// 007aac80  56                   push esi
// 007aac81  e81affffff           call 0x7aaba0
// 007aac86  8bf0                 mov esi, eax
// 007aac88  56                   push esi
// 007aac89  ff158403a400         call dword ptr [0xa40384]
// 007aac8f  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 007aac92  8b442408             mov eax, dword ptr [esp + 8]
// 007aac96  8908                 mov dword ptr [eax], ecx
// 007aac98  56                   push esi
// 007aac99  894618               mov dword ptr [esi + 0x18], eax
// 007aac9c  ff158003a400         call dword ptr [0xa40380]
// 007aaca2  5e                   pop esi
// 007aaca3  c3                   ret 
// library rbxgs/script\LuaMemory.cpp (function ?free@?$singleton_pool@VLuaAllocator@@$0CA@Udefault_user_allocator_new_delete@boost@@Vwin32_mutex@pool@details@3@$0CA@@boost@@SAXQAX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaMemory.cpp
