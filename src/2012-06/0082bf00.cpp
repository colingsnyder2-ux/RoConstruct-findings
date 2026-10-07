// roc 2012-06 0082bf00  unit: RBX::BallBallContact  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0082bf00
//
// 0082bf00  56                   push esi
// 0082bf01  e88a6cc4ff           call 0x472b90
// 0082bf06  8bf0                 mov esi, eax
// 0082bf08  56                   push esi
// 0082bf09  ff15b821b200         call dword ptr [0xb221b8]
// 0082bf0f  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0082bf12  8b442408             mov eax, dword ptr [esp + 8]
// 0082bf16  8908                 mov dword ptr [eax], ecx
// 0082bf18  56                   push esi
// 0082bf19  894618               mov dword ptr [esi + 0x18], eax
// 0082bf1c  ff15b421b200         call dword ptr [0xb221b4]
// 0082bf22  5e                   pop esi
// 0082bf23  c3                   ret 
// library rbxgs/script\LuaMemory.cpp (function ?free@?$singleton_pool@VLuaAllocator@@$0CA@Udefault_user_allocator_new_delete@boost@@Vwin32_mutex@pool@details@3@$0CA@@boost@@SAXQAX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaMemory.cpp
