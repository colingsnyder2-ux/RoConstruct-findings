// roc 2010-06 00713860  unit: RBX::BallBallContact  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00713860
//
// 00713860  56                   push esi
// 00713861  e89af9ffff           call 0x713200
// 00713866  8bf0                 mov esi, eax
// 00713868  56                   push esi
// 00713869  ff1574a39e00         call dword ptr [0x9ea374]
// 0071386f  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 00713872  8b442408             mov eax, dword ptr [esp + 8]
// 00713876  8908                 mov dword ptr [eax], ecx
// 00713878  56                   push esi
// 00713879  894618               mov dword ptr [esi + 0x18], eax
// 0071387c  ff1570a39e00         call dword ptr [0x9ea370]
// 00713882  5e                   pop esi
// 00713883  c3                   ret 
// library rbxgs/script\LuaMemory.cpp (function ?free@?$singleton_pool@VLuaAllocator@@$0CA@Udefault_user_allocator_new_delete@boost@@Vwin32_mutex@pool@details@3@$0CA@@boost@@SAXQAX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaMemory.cpp
