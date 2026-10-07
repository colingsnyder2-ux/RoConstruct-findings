// roc 2012-06 008959b0  unit: RBX::BlockBlockContact  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008959b0
//
// 008959b0  56                   push esi
// 008959b1  e81ad1bdff           call 0x472ad0
// 008959b6  8bf0                 mov esi, eax
// 008959b8  56                   push esi
// 008959b9  ff15b821b200         call dword ptr [0xb221b8]
// 008959bf  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 008959c2  8b442408             mov eax, dword ptr [esp + 8]
// 008959c6  8908                 mov dword ptr [eax], ecx
// 008959c8  56                   push esi
// 008959c9  894618               mov dword ptr [esi + 0x18], eax
// 008959cc  ff15b421b200         call dword ptr [0xb221b4]
// 008959d2  5e                   pop esi
// 008959d3  c3                   ret 
// library rbxgs/script\LuaMemory.cpp (function ?free@?$singleton_pool@VLuaAllocator@@$0CA@Udefault_user_allocator_new_delete@boost@@Vwin32_mutex@pool@details@3@$0CA@@boost@@SAXQAX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaMemory.cpp
