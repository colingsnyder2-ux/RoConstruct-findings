// roc 2012-06 00419e50  unit: CopyVerb  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00419e50
//
// 00419e50  56                   push esi
// 00419e51  e81a7bfeff           call 0x401970
// 00419e56  8bf0                 mov esi, eax
// 00419e58  56                   push esi
// 00419e59  ff15b821b200         call dword ptr [0xb221b8]
// 00419e5f  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 00419e62  8b442408             mov eax, dword ptr [esp + 8]
// 00419e66  8908                 mov dword ptr [eax], ecx
// 00419e68  56                   push esi
// 00419e69  894618               mov dword ptr [esi + 0x18], eax
// 00419e6c  ff15b421b200         call dword ptr [0xb221b4]
// 00419e72  5e                   pop esi
// 00419e73  c3                   ret 
// library rbxgs/script\LuaMemory.cpp (function ?free@?$singleton_pool@VLuaAllocator@@$0CA@Udefault_user_allocator_new_delete@boost@@Vwin32_mutex@pool@details@3@$0CA@@boost@@SAXQAX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaMemory.cpp
