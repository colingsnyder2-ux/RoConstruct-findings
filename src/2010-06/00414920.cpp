// roc 2010-06 00414920  unit: CopyVerb  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00414920
//
// 00414920  56                   push esi
// 00414921  e88acffeff           call 0x4018b0
// 00414926  8bf0                 mov esi, eax
// 00414928  56                   push esi
// 00414929  ff1574a39e00         call dword ptr [0x9ea374]
// 0041492f  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 00414932  8b442408             mov eax, dword ptr [esp + 8]
// 00414936  8908                 mov dword ptr [eax], ecx
// 00414938  56                   push esi
// 00414939  894618               mov dword ptr [esi + 0x18], eax
// 0041493c  ff1570a39e00         call dword ptr [0x9ea370]
// 00414942  5e                   pop esi
// 00414943  c3                   ret 
// library rbxgs/script\LuaMemory.cpp (function ?free@?$singleton_pool@VLuaAllocator@@$0CA@Udefault_user_allocator_new_delete@boost@@Vwin32_mutex@pool@details@3@$0CA@@boost@@SAXQAX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaMemory.cpp
