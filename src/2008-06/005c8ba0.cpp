// roc 2008-06 005c8ba0  unit: RBX::LaserTool  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c8ba0
//
// 005c8ba0  56                   push esi
// 005c8ba1  e8fafeffff           call 0x5c8aa0
// 005c8ba6  8bf0                 mov esi, eax
// 005c8ba8  56                   push esi
// 005c8ba9  ff15d4228000         call dword ptr [0x8022d4]
// 005c8baf  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 005c8bb2  8b442408             mov eax, dword ptr [esp + 8]
// 005c8bb6  8908                 mov dword ptr [eax], ecx
// 005c8bb8  56                   push esi
// 005c8bb9  894618               mov dword ptr [esi + 0x18], eax
// 005c8bbc  ff15f4218000         call dword ptr [0x8021f4]
// 005c8bc2  5e                   pop esi
// 005c8bc3  c3                   ret 
// library rbxgs/script\LuaMemory.cpp (function ?free@?$singleton_pool@VLuaAllocator@@$0CA@Udefault_user_allocator_new_delete@boost@@Vwin32_mutex@pool@details@3@$0CA@@boost@@SAXQAX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaMemory.cpp
