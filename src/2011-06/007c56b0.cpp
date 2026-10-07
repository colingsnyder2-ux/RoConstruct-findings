// roc 2011-06 007c56b0  unit: RBX::StepJointsStage  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007c56b0
//
// 007c56b0  56                   push esi
// 007c56b1  e85afeffff           call 0x7c5510
// 007c56b6  8bf0                 mov esi, eax
// 007c56b8  56                   push esi
// 007c56b9  ff158403a400         call dword ptr [0xa40384]
// 007c56bf  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 007c56c2  8b442408             mov eax, dword ptr [esp + 8]
// 007c56c6  8908                 mov dword ptr [eax], ecx
// 007c56c8  56                   push esi
// 007c56c9  894618               mov dword ptr [esi + 0x18], eax
// 007c56cc  ff158003a400         call dword ptr [0xa40380]
// 007c56d2  5e                   pop esi
// 007c56d3  c3                   ret 
// library rbxgs/script\LuaMemory.cpp (function ?free@?$singleton_pool@VLuaAllocator@@$0CA@Udefault_user_allocator_new_delete@boost@@Vwin32_mutex@pool@details@3@$0CA@@boost@@SAXQAX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaMemory.cpp
