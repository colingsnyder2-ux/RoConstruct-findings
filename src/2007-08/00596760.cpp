// roc 2007-08 00596760  unit: RBX::LaserTool  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00596760
//
// 00596760  56                   push esi
// 00596761  e8fafeffff           call 0x596660
// 00596766  8bf0                 mov esi, eax
// 00596768  56                   push esi
// 00596769  ff15fcd27700         call dword ptr [0x77d2fc]
// 0059676f  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 00596772  8b442408             mov eax, dword ptr [esp + 8]
// 00596776  8908                 mov dword ptr [eax], ecx
// 00596778  56                   push esi
// 00596779  894618               mov dword ptr [esi + 0x18], eax
// 0059677c  ff15f8d27700         call dword ptr [0x77d2f8]
// 00596782  5e                   pop esi
// 00596783  c3                   ret 
// library rbxgs/script\LuaMemory.cpp (function ?free@?$singleton_pool@VLuaAllocator@@$0CA@Udefault_user_allocator_new_delete@boost@@Vwin32_mutex@pool@details@3@$0CA@@boost@@SAXQAX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaMemory.cpp
