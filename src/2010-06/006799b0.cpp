// roc 2010-06 006799b0  unit: RBX::PrismPoly  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006799b0
//
// 006799b0  56                   push esi
// 006799b1  e81affffff           call 0x6798d0
// 006799b6  8bf0                 mov esi, eax
// 006799b8  56                   push esi
// 006799b9  ff1574a39e00         call dword ptr [0x9ea374]
// 006799bf  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 006799c2  8b442408             mov eax, dword ptr [esp + 8]
// 006799c6  8908                 mov dword ptr [eax], ecx
// 006799c8  56                   push esi
// 006799c9  894618               mov dword ptr [esi + 0x18], eax
// 006799cc  ff1570a39e00         call dword ptr [0x9ea370]
// 006799d2  5e                   pop esi
// 006799d3  c3                   ret 
// library rbxgs/script\LuaMemory.cpp (function ?free@?$singleton_pool@VLuaAllocator@@$0CA@Udefault_user_allocator_new_delete@boost@@Vwin32_mutex@pool@details@3@$0CA@@boost@@SAXQAX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaMemory.cpp
