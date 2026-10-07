// roc 2012-06 0091e410  unit: RBX::Motor6DJoint  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0091e410
//
// 0091e410  56                   push esi
// 0091e411  e81affffff           call 0x91e330
// 0091e416  8bf0                 mov esi, eax
// 0091e418  56                   push esi
// 0091e419  ff15b821b200         call dword ptr [0xb221b8]
// 0091e41f  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0091e422  8b442408             mov eax, dword ptr [esp + 8]
// 0091e426  8908                 mov dword ptr [eax], ecx
// 0091e428  56                   push esi
// 0091e429  894618               mov dword ptr [esi + 0x18], eax
// 0091e42c  ff15b421b200         call dword ptr [0xb221b4]
// 0091e432  5e                   pop esi
// 0091e433  c3                   ret 
// library rbxgs/script\LuaMemory.cpp (function ?free@?$singleton_pool@VLuaAllocator@@$0CA@Udefault_user_allocator_new_delete@boost@@Vwin32_mutex@pool@details@3@$0CA@@boost@@SAXQAX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaMemory.cpp
