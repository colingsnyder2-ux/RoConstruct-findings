// roc 2011-06 007a9950  unit: RBX::ParallelRampPoly  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007a9950
//
// 007a9950  56                   push esi
// 007a9951  e81affffff           call 0x7a9870
// 007a9956  8bf0                 mov esi, eax
// 007a9958  56                   push esi
// 007a9959  ff158403a400         call dword ptr [0xa40384]
// 007a995f  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 007a9962  8b442408             mov eax, dword ptr [esp + 8]
// 007a9966  8908                 mov dword ptr [eax], ecx
// 007a9968  56                   push esi
// 007a9969  894618               mov dword ptr [esi + 0x18], eax
// 007a996c  ff158003a400         call dword ptr [0xa40380]
// 007a9972  5e                   pop esi
// 007a9973  c3                   ret 
// library rbxgs/script\LuaMemory.cpp (function ?free@?$singleton_pool@VLuaAllocator@@$0CA@Udefault_user_allocator_new_delete@boost@@Vwin32_mutex@pool@details@3@$0CA@@boost@@SAXQAX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaMemory.cpp
