// roc 2010-06 00713650  unit: RBX::BallBallContact  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00713650
//
// 00713650  56                   push esi
// 00713651  e8cad4d3ff           call 0x450b20
// 00713656  8bf0                 mov esi, eax
// 00713658  56                   push esi
// 00713659  ff1574a39e00         call dword ptr [0x9ea374]
// 0071365f  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 00713662  8b442408             mov eax, dword ptr [esp + 8]
// 00713666  8908                 mov dword ptr [eax], ecx
// 00713668  56                   push esi
// 00713669  894618               mov dword ptr [esi + 0x18], eax
// 0071366c  ff1570a39e00         call dword ptr [0x9ea370]
// 00713672  5e                   pop esi
// 00713673  c3                   ret 
// library rbxgs/script\LuaMemory.cpp (function ?free@?$singleton_pool@VLuaAllocator@@$0CA@Udefault_user_allocator_new_delete@boost@@Vwin32_mutex@pool@details@3@$0CA@@boost@@SAXQAX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaMemory.cpp
