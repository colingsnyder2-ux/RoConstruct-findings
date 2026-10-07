// roc 2011-06 0075ad80  unit: RBX::BlockBlockContact  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0075ad80
//
// 0075ad80  56                   push esi
// 0075ad81  e8ea47d0ff           call 0x45f570
// 0075ad86  8bf0                 mov esi, eax
// 0075ad88  56                   push esi
// 0075ad89  ff158403a400         call dword ptr [0xa40384]
// 0075ad8f  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0075ad92  8b442408             mov eax, dword ptr [esp + 8]
// 0075ad96  8908                 mov dword ptr [eax], ecx
// 0075ad98  56                   push esi
// 0075ad99  894618               mov dword ptr [esi + 0x18], eax
// 0075ad9c  ff158003a400         call dword ptr [0xa40380]
// 0075ada2  5e                   pop esi
// 0075ada3  c3                   ret 
// library rbxgs/script\LuaMemory.cpp (function ?free@?$singleton_pool@VLuaAllocator@@$0CA@Udefault_user_allocator_new_delete@boost@@Vwin32_mutex@pool@details@3@$0CA@@boost@@SAXQAX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaMemory.cpp
