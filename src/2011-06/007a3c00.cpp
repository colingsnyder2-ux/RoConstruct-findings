// roc 2011-06 007a3c00  unit: RBX::MotorJoint  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007a3c00
//
// 007a3c00  56                   push esi
// 007a3c01  e81affffff           call 0x7a3b20
// 007a3c06  8bf0                 mov esi, eax
// 007a3c08  56                   push esi
// 007a3c09  ff158403a400         call dword ptr [0xa40384]
// 007a3c0f  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 007a3c12  8b442408             mov eax, dword ptr [esp + 8]
// 007a3c16  8908                 mov dword ptr [eax], ecx
// 007a3c18  56                   push esi
// 007a3c19  894618               mov dword ptr [esi + 0x18], eax
// 007a3c1c  ff158003a400         call dword ptr [0xa40380]
// 007a3c22  5e                   pop esi
// 007a3c23  c3                   ret 
// library rbxgs/script\LuaMemory.cpp (function ?free@?$singleton_pool@VLuaAllocator@@$0CA@Udefault_user_allocator_new_delete@boost@@Vwin32_mutex@pool@details@3@$0CA@@boost@@SAXQAX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaMemory.cpp
