// roc 2010-06 007524b0  unit: RBX::Motor6DJoint  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007524b0
//
// 007524b0  56                   push esi
// 007524b1  e81affffff           call 0x7523d0
// 007524b6  8bf0                 mov esi, eax
// 007524b8  56                   push esi
// 007524b9  ff1574a39e00         call dword ptr [0x9ea374]
// 007524bf  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 007524c2  8b442408             mov eax, dword ptr [esp + 8]
// 007524c6  8908                 mov dword ptr [eax], ecx
// 007524c8  56                   push esi
// 007524c9  894618               mov dword ptr [esi + 0x18], eax
// 007524cc  ff1570a39e00         call dword ptr [0x9ea370]
// 007524d2  5e                   pop esi
// 007524d3  c3                   ret 
// library rbxgs/script\LuaMemory.cpp (function ?free@?$singleton_pool@VLuaAllocator@@$0CA@Udefault_user_allocator_new_delete@boost@@Vwin32_mutex@pool@details@3@$0CA@@boost@@SAXQAX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaMemory.cpp
