// roc 2012-06 00895850  unit: RBX::BlockBlockContact  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00895850
//
// 00895850  56                   push esi
// 00895851  e8bad1bdff           call 0x472a10
// 00895856  8bf0                 mov esi, eax
// 00895858  56                   push esi
// 00895859  ff15b821b200         call dword ptr [0xb221b8]
// 0089585f  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 00895862  8b442408             mov eax, dword ptr [esp + 8]
// 00895866  8908                 mov dword ptr [eax], ecx
// 00895868  56                   push esi
// 00895869  894618               mov dword ptr [esi + 0x18], eax
// 0089586c  ff15b421b200         call dword ptr [0xb221b4]
// 00895872  5e                   pop esi
// 00895873  c3                   ret 
// library rbxgs/script\LuaMemory.cpp (function ?free@?$singleton_pool@VLuaAllocator@@$0CA@Udefault_user_allocator_new_delete@boost@@Vwin32_mutex@pool@details@3@$0CA@@boost@@SAXQAX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaMemory.cpp
