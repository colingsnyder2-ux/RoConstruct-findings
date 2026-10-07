// roc 2010-06 00414950  unit: CopyVerb  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00414950
//
// 00414950  56                   push esi
// 00414951  e8bacffeff           call 0x401910
// 00414956  8bf0                 mov esi, eax
// 00414958  56                   push esi
// 00414959  ff1574a39e00         call dword ptr [0x9ea374]
// 0041495f  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 00414962  8b442408             mov eax, dword ptr [esp + 8]
// 00414966  8908                 mov dword ptr [eax], ecx
// 00414968  56                   push esi
// 00414969  894618               mov dword ptr [esi + 0x18], eax
// 0041496c  ff1570a39e00         call dword ptr [0x9ea370]
// 00414972  5e                   pop esi
// 00414973  c3                   ret 
// library rbxgs/script\LuaMemory.cpp (function ?free@?$singleton_pool@VLuaAllocator@@$0CA@Udefault_user_allocator_new_delete@boost@@Vwin32_mutex@pool@details@3@$0CA@@boost@@SAXQAX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaMemory.cpp
