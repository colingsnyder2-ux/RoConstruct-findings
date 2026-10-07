// roc 2010-06 00756190  unit: RBX::Block  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00756190
//
// 00756190  56                   push esi
// 00756191  e86afdffff           call 0x755f00
// 00756196  8bf0                 mov esi, eax
// 00756198  56                   push esi
// 00756199  ff1574a39e00         call dword ptr [0x9ea374]
// 0075619f  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 007561a2  8b442408             mov eax, dword ptr [esp + 8]
// 007561a6  8908                 mov dword ptr [eax], ecx
// 007561a8  56                   push esi
// 007561a9  894618               mov dword ptr [esi + 0x18], eax
// 007561ac  ff1570a39e00         call dword ptr [0x9ea370]
// 007561b2  5e                   pop esi
// 007561b3  c3                   ret 
// library rbxgs/script\LuaMemory.cpp (function ?free@?$singleton_pool@VLuaAllocator@@$0CA@Udefault_user_allocator_new_delete@boost@@Vwin32_mutex@pool@details@3@$0CA@@boost@@SAXQAX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaMemory.cpp
