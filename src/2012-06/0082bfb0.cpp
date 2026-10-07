// roc 2012-06 0082bfb0  unit: RBX::BallBallContact  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0082bfb0
//
// 0082bfb0  56                   push esi
// 0082bfb1  e8eaf5ffff           call 0x82b5a0
// 0082bfb6  8bf0                 mov esi, eax
// 0082bfb8  56                   push esi
// 0082bfb9  ff15b821b200         call dword ptr [0xb221b8]
// 0082bfbf  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0082bfc2  8b442408             mov eax, dword ptr [esp + 8]
// 0082bfc6  8908                 mov dword ptr [eax], ecx
// 0082bfc8  56                   push esi
// 0082bfc9  894618               mov dword ptr [esi + 0x18], eax
// 0082bfcc  ff15b421b200         call dword ptr [0xb221b4]
// 0082bfd2  5e                   pop esi
// 0082bfd3  c3                   ret 
// library rbxgs/script\LuaMemory.cpp (function ?free@?$singleton_pool@VLuaAllocator@@$0CA@Udefault_user_allocator_new_delete@boost@@Vwin32_mutex@pool@details@3@$0CA@@boost@@SAXQAX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaMemory.cpp
