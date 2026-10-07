// roc 2012-06 009297c0  unit: RBX::MovingAssemblyStage  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009297c0
//
// 009297c0  56                   push esi
// 009297c1  e80afeffff           call 0x9295d0
// 009297c6  8bf0                 mov esi, eax
// 009297c8  56                   push esi
// 009297c9  ff15b821b200         call dword ptr [0xb221b8]
// 009297cf  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 009297d2  8b442408             mov eax, dword ptr [esp + 8]
// 009297d6  8908                 mov dword ptr [eax], ecx
// 009297d8  56                   push esi
// 009297d9  894618               mov dword ptr [esi + 0x18], eax
// 009297dc  ff15b421b200         call dword ptr [0xb221b4]
// 009297e2  5e                   pop esi
// 009297e3  c3                   ret 
// library rbxgs/script\LuaMemory.cpp (function ?free@?$singleton_pool@VLuaAllocator@@$0CA@Udefault_user_allocator_new_delete@boost@@Vwin32_mutex@pool@details@3@$0CA@@boost@@SAXQAX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaMemory.cpp
