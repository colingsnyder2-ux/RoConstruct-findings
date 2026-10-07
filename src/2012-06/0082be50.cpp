// roc 2012-06 0082be50  unit: RBX::BallBallContact  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0082be50
//
// 0082be50  56                   push esi
// 0082be51  e8da6cc4ff           call 0x472b30
// 0082be56  8bf0                 mov esi, eax
// 0082be58  56                   push esi
// 0082be59  ff15b821b200         call dword ptr [0xb221b8]
// 0082be5f  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0082be62  8b442408             mov eax, dword ptr [esp + 8]
// 0082be66  8908                 mov dword ptr [eax], ecx
// 0082be68  56                   push esi
// 0082be69  894618               mov dword ptr [esi + 0x18], eax
// 0082be6c  ff15b421b200         call dword ptr [0xb221b4]
// 0082be72  5e                   pop esi
// 0082be73  c3                   ret 
// library rbxgs/script\LuaMemory.cpp (function ?free@?$singleton_pool@VLuaAllocator@@$0CA@Udefault_user_allocator_new_delete@boost@@Vwin32_mutex@pool@details@3@$0CA@@boost@@SAXQAX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaMemory.cpp
