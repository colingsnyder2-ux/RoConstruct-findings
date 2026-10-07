// roc 2012-06 0091ea90  unit: RBX::MotorJoint  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0091ea90
//
// 0091ea90  56                   push esi
// 0091ea91  e81affffff           call 0x91e9b0
// 0091ea96  8bf0                 mov esi, eax
// 0091ea98  56                   push esi
// 0091ea99  ff15b821b200         call dword ptr [0xb221b8]
// 0091ea9f  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0091eaa2  8b442408             mov eax, dword ptr [esp + 8]
// 0091eaa6  8908                 mov dword ptr [eax], ecx
// 0091eaa8  56                   push esi
// 0091eaa9  894618               mov dword ptr [esi + 0x18], eax
// 0091eaac  ff15b421b200         call dword ptr [0xb221b4]
// 0091eab2  5e                   pop esi
// 0091eab3  c3                   ret 
// library rbxgs/script\LuaMemory.cpp (function ?free@?$singleton_pool@VLuaAllocator@@$0CA@Udefault_user_allocator_new_delete@boost@@Vwin32_mutex@pool@details@3@$0CA@@boost@@SAXQAX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaMemory.cpp
