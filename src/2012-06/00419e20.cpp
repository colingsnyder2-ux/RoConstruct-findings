// roc 2012-06 00419e20  unit: CopyVerb  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00419e20
//
// 00419e20  56                   push esi
// 00419e21  e8ea7afeff           call 0x401910
// 00419e26  8bf0                 mov esi, eax
// 00419e28  56                   push esi
// 00419e29  ff15b821b200         call dword ptr [0xb221b8]
// 00419e2f  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 00419e32  8b442408             mov eax, dword ptr [esp + 8]
// 00419e36  8908                 mov dword ptr [eax], ecx
// 00419e38  56                   push esi
// 00419e39  894618               mov dword ptr [esi + 0x18], eax
// 00419e3c  ff15b421b200         call dword ptr [0xb221b4]
// 00419e42  5e                   pop esi
// 00419e43  c3                   ret 
// library rbxgs/script\LuaMemory.cpp (function ?free@?$singleton_pool@VLuaAllocator@@$0CA@Udefault_user_allocator_new_delete@boost@@Vwin32_mutex@pool@details@3@$0CA@@boost@@SAXQAX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaMemory.cpp
