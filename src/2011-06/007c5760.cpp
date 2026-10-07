// roc 2011-06 007c5760  unit: RBX::StepJointsStage  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007c5760
//
// 007c5760  56                   push esi
// 007c5761  e80afeffff           call 0x7c5570
// 007c5766  8bf0                 mov esi, eax
// 007c5768  56                   push esi
// 007c5769  ff158403a400         call dword ptr [0xa40384]
// 007c576f  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 007c5772  8b442408             mov eax, dword ptr [esp + 8]
// 007c5776  8908                 mov dword ptr [eax], ecx
// 007c5778  56                   push esi
// 007c5779  894618               mov dword ptr [esi + 0x18], eax
// 007c577c  ff158003a400         call dword ptr [0xa40380]
// 007c5782  5e                   pop esi
// 007c5783  c3                   ret 
// library rbxgs/script\LuaMemory.cpp (function ?free@?$singleton_pool@VLuaAllocator@@$0CA@Udefault_user_allocator_new_delete@boost@@Vwin32_mutex@pool@details@3@$0CA@@boost@@SAXQAX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaMemory.cpp
