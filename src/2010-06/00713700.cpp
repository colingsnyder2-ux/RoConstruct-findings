// roc 2010-06 00713700  unit: RBX::BallBallContact  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00713700
//
// 00713700  56                   push esi
// 00713701  e87ad4d3ff           call 0x450b80
// 00713706  8bf0                 mov esi, eax
// 00713708  56                   push esi
// 00713709  ff1574a39e00         call dword ptr [0x9ea374]
// 0071370f  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 00713712  8b442408             mov eax, dword ptr [esp + 8]
// 00713716  8908                 mov dword ptr [eax], ecx
// 00713718  56                   push esi
// 00713719  894618               mov dword ptr [esi + 0x18], eax
// 0071371c  ff1570a39e00         call dword ptr [0x9ea370]
// 00713722  5e                   pop esi
// 00713723  c3                   ret 
// library rbxgs/script\LuaMemory.cpp (function ?free@?$singleton_pool@VLuaAllocator@@$0CA@Udefault_user_allocator_new_delete@boost@@Vwin32_mutex@pool@details@3@$0CA@@boost@@SAXQAX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaMemory.cpp
