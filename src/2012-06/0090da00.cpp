// roc 2012-06 0090da00  unit: RBX::WedgePoly  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0090da00
//
// 0090da00  56                   push esi
// 0090da01  e81affffff           call 0x90d920
// 0090da06  8bf0                 mov esi, eax
// 0090da08  56                   push esi
// 0090da09  ff15b821b200         call dword ptr [0xb221b8]
// 0090da0f  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0090da12  8b442408             mov eax, dword ptr [esp + 8]
// 0090da16  8908                 mov dword ptr [eax], ecx
// 0090da18  56                   push esi
// 0090da19  894618               mov dword ptr [esi + 0x18], eax
// 0090da1c  ff15b421b200         call dword ptr [0xb221b4]
// 0090da22  5e                   pop esi
// 0090da23  c3                   ret 
// library rbxgs/script\LuaMemory.cpp (function ?free@?$singleton_pool@VLuaAllocator@@$0CA@Udefault_user_allocator_new_delete@boost@@Vwin32_mutex@pool@details@3@$0CA@@boost@@SAXQAX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaMemory.cpp
