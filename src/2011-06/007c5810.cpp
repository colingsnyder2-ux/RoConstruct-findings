// roc 2011-06 007c5810  unit: RBX::StepJointsStage  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007c5810
//
// 007c5810  56                   push esi
// 007c5811  e8bafdffff           call 0x7c55d0
// 007c5816  8bf0                 mov esi, eax
// 007c5818  56                   push esi
// 007c5819  ff158403a400         call dword ptr [0xa40384]
// 007c581f  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 007c5822  8b442408             mov eax, dword ptr [esp + 8]
// 007c5826  8908                 mov dword ptr [eax], ecx
// 007c5828  56                   push esi
// 007c5829  894618               mov dword ptr [esi + 0x18], eax
// 007c582c  ff158003a400         call dword ptr [0xa40380]
// 007c5832  5e                   pop esi
// 007c5833  c3                   ret 
// library rbxgs/script\LuaMemory.cpp (function ?free@?$singleton_pool@VLuaAllocator@@$0CA@Udefault_user_allocator_new_delete@boost@@Vwin32_mutex@pool@details@3@$0CA@@boost@@SAXQAX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaMemory.cpp
