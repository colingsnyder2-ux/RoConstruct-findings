// roc 2010-06 00716be0  unit: RBX::BlockBlockContact  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00716be0
//
// 00716be0  56                   push esi
// 00716be1  e87a9ed3ff           call 0x450a60
// 00716be6  8bf0                 mov esi, eax
// 00716be8  56                   push esi
// 00716be9  ff1574a39e00         call dword ptr [0x9ea374]
// 00716bef  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 00716bf2  8b442408             mov eax, dword ptr [esp + 8]
// 00716bf6  8908                 mov dword ptr [eax], ecx
// 00716bf8  56                   push esi
// 00716bf9  894618               mov dword ptr [esi + 0x18], eax
// 00716bfc  ff1570a39e00         call dword ptr [0x9ea370]
// 00716c02  5e                   pop esi
// 00716c03  c3                   ret 
// library rbxgs/script\LuaMemory.cpp (function ?free@?$singleton_pool@VLuaAllocator@@$0CA@Udefault_user_allocator_new_delete@boost@@Vwin32_mutex@pool@details@3@$0CA@@boost@@SAXQAX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaMemory.cpp
