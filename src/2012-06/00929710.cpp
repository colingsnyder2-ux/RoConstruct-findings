// roc 2012-06 00929710  unit: RBX::MovingAssemblyStage  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00929710
//
// 00929710  56                   push esi
// 00929711  e85afeffff           call 0x929570
// 00929716  8bf0                 mov esi, eax
// 00929718  56                   push esi
// 00929719  ff15b821b200         call dword ptr [0xb221b8]
// 0092971f  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 00929722  8b442408             mov eax, dword ptr [esp + 8]
// 00929726  8908                 mov dword ptr [eax], ecx
// 00929728  56                   push esi
// 00929729  894618               mov dword ptr [esi + 0x18], eax
// 0092972c  ff15b421b200         call dword ptr [0xb221b4]
// 00929732  5e                   pop esi
// 00929733  c3                   ret 
// library rbxgs/script\LuaMemory.cpp (function ?free@?$singleton_pool@VLuaAllocator@@$0CA@Udefault_user_allocator_new_delete@boost@@Vwin32_mutex@pool@details@3@$0CA@@boost@@SAXQAX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaMemory.cpp
