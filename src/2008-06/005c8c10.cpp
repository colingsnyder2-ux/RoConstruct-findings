// roc 2008-06 005c8c10  unit: RBX::LaserTool  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c8c10
//
// 005c8c10  56                   push esi
// 005c8c11  e8eafeffff           call 0x5c8b00
// 005c8c16  8bf0                 mov esi, eax
// 005c8c18  56                   push esi
// 005c8c19  ff15d4228000         call dword ptr [0x8022d4]
// 005c8c1f  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 005c8c22  8b442408             mov eax, dword ptr [esp + 8]
// 005c8c26  8908                 mov dword ptr [eax], ecx
// 005c8c28  56                   push esi
// 005c8c29  894618               mov dword ptr [esi + 0x18], eax
// 005c8c2c  ff15f4218000         call dword ptr [0x8021f4]
// 005c8c32  5e                   pop esi
// 005c8c33  c3                   ret 
// library rbxgs/script\LuaMemory.cpp (function ?free@?$singleton_pool@VLuaAllocator@@$0CA@Udefault_user_allocator_new_delete@boost@@Vwin32_mutex@pool@details@3@$0CA@@boost@@SAXQAX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaMemory.cpp
