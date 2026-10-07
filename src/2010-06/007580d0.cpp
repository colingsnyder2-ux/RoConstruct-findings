// roc 2010-06 007580d0  unit: RBX::PrismPoly  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007580d0
//
// 007580d0  56                   push esi
// 007580d1  e81affffff           call 0x757ff0
// 007580d6  8bf0                 mov esi, eax
// 007580d8  56                   push esi
// 007580d9  ff1574a39e00         call dword ptr [0x9ea374]
// 007580df  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 007580e2  8b442408             mov eax, dword ptr [esp + 8]
// 007580e6  8908                 mov dword ptr [eax], ecx
// 007580e8  56                   push esi
// 007580e9  894618               mov dword ptr [esi + 0x18], eax
// 007580ec  ff1570a39e00         call dword ptr [0x9ea370]
// 007580f2  5e                   pop esi
// 007580f3  c3                   ret 
// library rbxgs/script\LuaMemory.cpp (function ?free@?$singleton_pool@VLuaAllocator@@$0CA@Udefault_user_allocator_new_delete@boost@@Vwin32_mutex@pool@details@3@$0CA@@boost@@SAXQAX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaMemory.cpp
