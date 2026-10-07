// roc 2011-06 0075ae30  unit: RBX::BlockBlockContact  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0075ae30
//
// 0075ae30  56                   push esi
// 0075ae31  e89a47d0ff           call 0x45f5d0
// 0075ae36  8bf0                 mov esi, eax
// 0075ae38  56                   push esi
// 0075ae39  ff158403a400         call dword ptr [0xa40384]
// 0075ae3f  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0075ae42  8b442408             mov eax, dword ptr [esp + 8]
// 0075ae46  8908                 mov dword ptr [eax], ecx
// 0075ae48  56                   push esi
// 0075ae49  894618               mov dword ptr [esi + 0x18], eax
// 0075ae4c  ff158003a400         call dword ptr [0xa40380]
// 0075ae52  5e                   pop esi
// 0075ae53  c3                   ret 
// library rbxgs/script\LuaMemory.cpp (function ?free@?$singleton_pool@VLuaAllocator@@$0CA@Udefault_user_allocator_new_delete@boost@@Vwin32_mutex@pool@details@3@$0CA@@boost@@SAXQAX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaMemory.cpp
