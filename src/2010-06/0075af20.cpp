// roc 2010-06 0075af20  unit: RBX::PrismPoly  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0075af20
//
// 0075af20  56                   push esi
// 0075af21  e81affffff           call 0x75ae40
// 0075af26  8bf0                 mov esi, eax
// 0075af28  56                   push esi
// 0075af29  ff1574a39e00         call dword ptr [0x9ea374]
// 0075af2f  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0075af32  8b442408             mov eax, dword ptr [esp + 8]
// 0075af36  8908                 mov dword ptr [eax], ecx
// 0075af38  56                   push esi
// 0075af39  894618               mov dword ptr [esi + 0x18], eax
// 0075af3c  ff1570a39e00         call dword ptr [0x9ea370]
// 0075af42  5e                   pop esi
// 0075af43  c3                   ret 
// library rbxgs/script\LuaMemory.cpp (function ?free@?$singleton_pool@VLuaAllocator@@$0CA@Udefault_user_allocator_new_delete@boost@@Vwin32_mutex@pool@details@3@$0CA@@boost@@SAXQAX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaMemory.cpp
