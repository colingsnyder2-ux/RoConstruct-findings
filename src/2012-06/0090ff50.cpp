// roc 2012-06 0090ff50  unit: RBX::CornerWedgePoly  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0090ff50
//
// 0090ff50  56                   push esi
// 0090ff51  e81affffff           call 0x90fe70
// 0090ff56  8bf0                 mov esi, eax
// 0090ff58  56                   push esi
// 0090ff59  ff15b821b200         call dword ptr [0xb221b8]
// 0090ff5f  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0090ff62  8b442408             mov eax, dword ptr [esp + 8]
// 0090ff66  8908                 mov dword ptr [eax], ecx
// 0090ff68  56                   push esi
// 0090ff69  894618               mov dword ptr [esi + 0x18], eax
// 0090ff6c  ff15b421b200         call dword ptr [0xb221b4]
// 0090ff72  5e                   pop esi
// 0090ff73  c3                   ret 
// library rbxgs/script\LuaMemory.cpp (function ?free@?$singleton_pool@VLuaAllocator@@$0CA@Udefault_user_allocator_new_delete@boost@@Vwin32_mutex@pool@details@3@$0CA@@boost@@SAXQAX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaMemory.cpp
