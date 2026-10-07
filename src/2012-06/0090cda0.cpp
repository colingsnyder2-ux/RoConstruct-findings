// roc 2012-06 0090cda0  unit: RBX::PyramidPoly  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0090cda0
//
// 0090cda0  56                   push esi
// 0090cda1  e81affffff           call 0x90ccc0
// 0090cda6  8bf0                 mov esi, eax
// 0090cda8  56                   push esi
// 0090cda9  ff15b821b200         call dword ptr [0xb221b8]
// 0090cdaf  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0090cdb2  8b442408             mov eax, dword ptr [esp + 8]
// 0090cdb6  8908                 mov dword ptr [eax], ecx
// 0090cdb8  56                   push esi
// 0090cdb9  894618               mov dword ptr [esi + 0x18], eax
// 0090cdbc  ff15b421b200         call dword ptr [0xb221b4]
// 0090cdc2  5e                   pop esi
// 0090cdc3  c3                   ret 
// library rbxgs/script\LuaMemory.cpp (function ?free@?$singleton_pool@VLuaAllocator@@$0CA@Udefault_user_allocator_new_delete@boost@@Vwin32_mutex@pool@details@3@$0CA@@boost@@SAXQAX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaMemory.cpp
