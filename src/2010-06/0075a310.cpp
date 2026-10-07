// roc 2010-06 0075a310  unit: RBX::Block  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0075a310
//
// 0075a310  56                   push esi
// 0075a311  e81affffff           call 0x75a230
// 0075a316  8bf0                 mov esi, eax
// 0075a318  56                   push esi
// 0075a319  ff1574a39e00         call dword ptr [0x9ea374]
// 0075a31f  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0075a322  8b442408             mov eax, dword ptr [esp + 8]
// 0075a326  8908                 mov dword ptr [eax], ecx
// 0075a328  56                   push esi
// 0075a329  894618               mov dword ptr [esi + 0x18], eax
// 0075a32c  ff1570a39e00         call dword ptr [0x9ea370]
// 0075a332  5e                   pop esi
// 0075a333  c3                   ret 
// library rbxgs/script\LuaMemory.cpp (function ?free@?$singleton_pool@VLuaAllocator@@$0CA@Udefault_user_allocator_new_delete@boost@@Vwin32_mutex@pool@details@3@$0CA@@boost@@SAXQAX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaMemory.cpp
