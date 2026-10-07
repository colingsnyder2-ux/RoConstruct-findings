// roc 2011-06 007a27e0  unit: RBX::Body  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007a27e0
//
// 007a27e0  56                   push esi
// 007a27e1  e86afeffff           call 0x7a2650
// 007a27e6  8bf0                 mov esi, eax
// 007a27e8  56                   push esi
// 007a27e9  ff158403a400         call dword ptr [0xa40384]
// 007a27ef  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 007a27f2  8b442408             mov eax, dword ptr [esp + 8]
// 007a27f6  8908                 mov dword ptr [eax], ecx
// 007a27f8  56                   push esi
// 007a27f9  894618               mov dword ptr [esi + 0x18], eax
// 007a27fc  ff158003a400         call dword ptr [0xa40380]
// 007a2802  5e                   pop esi
// 007a2803  c3                   ret 
// library rbxgs/script\LuaMemory.cpp (function ?free@?$singleton_pool@VLuaAllocator@@$0CA@Udefault_user_allocator_new_delete@boost@@Vwin32_mutex@pool@details@3@$0CA@@boost@@SAXQAX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaMemory.cpp
