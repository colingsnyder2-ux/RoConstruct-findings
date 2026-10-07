// roc 2010-06 00716c90  unit: RBX::BlockBlockContact  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00716c90
//
// 00716c90  56                   push esi
// 00716c91  e82a9ed3ff           call 0x450ac0
// 00716c96  8bf0                 mov esi, eax
// 00716c98  56                   push esi
// 00716c99  ff1574a39e00         call dword ptr [0x9ea374]
// 00716c9f  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 00716ca2  8b442408             mov eax, dword ptr [esp + 8]
// 00716ca6  8908                 mov dword ptr [eax], ecx
// 00716ca8  56                   push esi
// 00716ca9  894618               mov dword ptr [esi + 0x18], eax
// 00716cac  ff1570a39e00         call dword ptr [0x9ea370]
// 00716cb2  5e                   pop esi
// 00716cb3  c3                   ret 
// library rbxgs/script\LuaMemory.cpp (function ?free@?$singleton_pool@VLuaAllocator@@$0CA@Udefault_user_allocator_new_delete@boost@@Vwin32_mutex@pool@details@3@$0CA@@boost@@SAXQAX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaMemory.cpp
