// roc 2010-06 00716b30  unit: RBX::BlockBlockContact  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00716b30
//
// 00716b30  56                   push esi
// 00716b31  e8ca9ed3ff           call 0x450a00
// 00716b36  8bf0                 mov esi, eax
// 00716b38  56                   push esi
// 00716b39  ff1574a39e00         call dword ptr [0x9ea374]
// 00716b3f  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 00716b42  8b442408             mov eax, dword ptr [esp + 8]
// 00716b46  8908                 mov dword ptr [eax], ecx
// 00716b48  56                   push esi
// 00716b49  894618               mov dword ptr [esi + 0x18], eax
// 00716b4c  ff1570a39e00         call dword ptr [0x9ea370]
// 00716b52  5e                   pop esi
// 00716b53  c3                   ret 
// library rbxgs/script\LuaMemory.cpp (function ?free@?$singleton_pool@VLuaAllocator@@$0CA@Udefault_user_allocator_new_delete@boost@@Vwin32_mutex@pool@details@3@$0CA@@boost@@SAXQAX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaMemory.cpp
