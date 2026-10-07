// roc 2012-06 00921680  unit: RBX::MultiJoint  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00921680
//
// 00921680  56                   push esi
// 00921681  e82a13b5ff           call 0x4729b0
// 00921686  8bf0                 mov esi, eax
// 00921688  56                   push esi
// 00921689  ff15b821b200         call dword ptr [0xb221b8]
// 0092168f  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 00921692  8b442408             mov eax, dword ptr [esp + 8]
// 00921696  8908                 mov dword ptr [eax], ecx
// 00921698  56                   push esi
// 00921699  894618               mov dword ptr [esi + 0x18], eax
// 0092169c  ff15b421b200         call dword ptr [0xb221b4]
// 009216a2  5e                   pop esi
// 009216a3  c3                   ret 
// library rbxgs/script\LuaMemory.cpp (function ?free@?$singleton_pool@VLuaAllocator@@$0CA@Udefault_user_allocator_new_delete@boost@@Vwin32_mutex@pool@details@3@$0CA@@boost@@SAXQAX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaMemory.cpp
