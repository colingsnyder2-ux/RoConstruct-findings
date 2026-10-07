// roc 2012-06 0082c270  unit: RBX::BallBallContact  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0082c270
//
// 0082c270  56                   push esi
// 0082c271  e8aaf4ffff           call 0x82b720
// 0082c276  8bf0                 mov esi, eax
// 0082c278  56                   push esi
// 0082c279  ff15b821b200         call dword ptr [0xb221b8]
// 0082c27f  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0082c282  8b442408             mov eax, dword ptr [esp + 8]
// 0082c286  8908                 mov dword ptr [eax], ecx
// 0082c288  56                   push esi
// 0082c289  894618               mov dword ptr [esi + 0x18], eax
// 0082c28c  ff15b421b200         call dword ptr [0xb221b4]
// 0082c292  5e                   pop esi
// 0082c293  c3                   ret 
// library rbxgs/script\LuaMemory.cpp (function ?free@?$singleton_pool@VLuaAllocator@@$0CA@Udefault_user_allocator_new_delete@boost@@Vwin32_mutex@pool@details@3@$0CA@@boost@@SAXQAX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaMemory.cpp
