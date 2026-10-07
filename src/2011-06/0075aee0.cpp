// roc 2011-06 0075aee0  unit: RBX::BlockBlockContact  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0075aee0
//
// 0075aee0  56                   push esi
// 0075aee1  e84a47d0ff           call 0x45f630
// 0075aee6  8bf0                 mov esi, eax
// 0075aee8  56                   push esi
// 0075aee9  ff158403a400         call dword ptr [0xa40384]
// 0075aeef  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0075aef2  8b442408             mov eax, dword ptr [esp + 8]
// 0075aef6  8908                 mov dword ptr [eax], ecx
// 0075aef8  56                   push esi
// 0075aef9  894618               mov dword ptr [esi + 0x18], eax
// 0075aefc  ff158003a400         call dword ptr [0xa40380]
// 0075af02  5e                   pop esi
// 0075af03  c3                   ret 
// library rbxgs/script\LuaMemory.cpp (function ?free@?$singleton_pool@VLuaAllocator@@$0CA@Udefault_user_allocator_new_delete@boost@@Vwin32_mutex@pool@details@3@$0CA@@boost@@SAXQAX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaMemory.cpp
