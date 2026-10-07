// roc 2010-06 0075bc10  unit: RBX::ParallelRampPoly  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0075bc10
//
// 0075bc10  56                   push esi
// 0075bc11  e81affffff           call 0x75bb30
// 0075bc16  8bf0                 mov esi, eax
// 0075bc18  56                   push esi
// 0075bc19  ff1574a39e00         call dword ptr [0x9ea374]
// 0075bc1f  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0075bc22  8b442408             mov eax, dword ptr [esp + 8]
// 0075bc26  8908                 mov dword ptr [eax], ecx
// 0075bc28  56                   push esi
// 0075bc29  894618               mov dword ptr [esi + 0x18], eax
// 0075bc2c  ff1570a39e00         call dword ptr [0x9ea370]
// 0075bc32  5e                   pop esi
// 0075bc33  c3                   ret 
// library rbxgs/script\LuaMemory.cpp (function ?free@?$singleton_pool@VLuaAllocator@@$0CA@Udefault_user_allocator_new_delete@boost@@Vwin32_mutex@pool@details@3@$0CA@@boost@@SAXQAX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaMemory.cpp
