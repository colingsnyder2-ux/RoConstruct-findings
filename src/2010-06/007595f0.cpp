// roc 2010-06 007595f0  unit: RBX::PyramidPoly  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007595f0
//
// 007595f0  56                   push esi
// 007595f1  e81affffff           call 0x759510
// 007595f6  8bf0                 mov esi, eax
// 007595f8  56                   push esi
// 007595f9  ff1574a39e00         call dword ptr [0x9ea374]
// 007595ff  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 00759602  8b442408             mov eax, dword ptr [esp + 8]
// 00759606  8908                 mov dword ptr [eax], ecx
// 00759608  56                   push esi
// 00759609  894618               mov dword ptr [esi + 0x18], eax
// 0075960c  ff1570a39e00         call dword ptr [0x9ea370]
// 00759612  5e                   pop esi
// 00759613  c3                   ret 
// library rbxgs/script\LuaMemory.cpp (function ?free@?$singleton_pool@VLuaAllocator@@$0CA@Udefault_user_allocator_new_delete@boost@@Vwin32_mutex@pool@details@3@$0CA@@boost@@SAXQAX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaMemory.cpp
