// roc 2010-06 007760e0  unit: RBX::PolyContact  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007760e0
//
// 007760e0  56                   push esi
// 007760e1  e80afeffff           call 0x775ef0
// 007760e6  8bf0                 mov esi, eax
// 007760e8  56                   push esi
// 007760e9  ff1574a39e00         call dword ptr [0x9ea374]
// 007760ef  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 007760f2  8b442408             mov eax, dword ptr [esp + 8]
// 007760f6  8908                 mov dword ptr [eax], ecx
// 007760f8  56                   push esi
// 007760f9  894618               mov dword ptr [esi + 0x18], eax
// 007760fc  ff1570a39e00         call dword ptr [0x9ea370]
// 00776102  5e                   pop esi
// 00776103  c3                   ret 
// library rbxgs/script\LuaMemory.cpp (function ?free@?$singleton_pool@VLuaAllocator@@$0CA@Udefault_user_allocator_new_delete@boost@@Vwin32_mutex@pool@details@3@$0CA@@boost@@SAXQAX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaMemory.cpp
