// roc 2012-06 00929870  unit: RBX::MovingAssemblyStage  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00929870
//
// 00929870  56                   push esi
// 00929871  e8bafdffff           call 0x929630
// 00929876  8bf0                 mov esi, eax
// 00929878  56                   push esi
// 00929879  ff15b821b200         call dword ptr [0xb221b8]
// 0092987f  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 00929882  8b442408             mov eax, dword ptr [esp + 8]
// 00929886  8908                 mov dword ptr [eax], ecx
// 00929888  56                   push esi
// 00929889  894618               mov dword ptr [esi + 0x18], eax
// 0092988c  ff15b421b200         call dword ptr [0xb221b4]
// 00929892  5e                   pop esi
// 00929893  c3                   ret 
// library rbxgs/script\LuaMemory.cpp (function ?free@?$singleton_pool@VLuaAllocator@@$0CA@Udefault_user_allocator_new_delete@boost@@Vwin32_mutex@pool@details@3@$0CA@@boost@@SAXQAX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaMemory.cpp
