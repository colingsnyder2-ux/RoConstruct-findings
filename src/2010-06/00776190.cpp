// roc 2010-06 00776190  unit: RBX::PolyContact  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00776190
//
// 00776190  56                   push esi
// 00776191  e8bafdffff           call 0x775f50
// 00776196  8bf0                 mov esi, eax
// 00776198  56                   push esi
// 00776199  ff1574a39e00         call dword ptr [0x9ea374]
// 0077619f  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 007761a2  8b442408             mov eax, dword ptr [esp + 8]
// 007761a6  8908                 mov dword ptr [eax], ecx
// 007761a8  56                   push esi
// 007761a9  894618               mov dword ptr [esi + 0x18], eax
// 007761ac  ff1570a39e00         call dword ptr [0x9ea370]
// 007761b2  5e                   pop esi
// 007761b3  c3                   ret 
// library rbxgs/script\LuaMemory.cpp (function ?free@?$singleton_pool@VLuaAllocator@@$0CA@Udefault_user_allocator_new_delete@boost@@Vwin32_mutex@pool@details@3@$0CA@@boost@@SAXQAX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaMemory.cpp
