// roc 2010-06 00751610  unit: RBX::Body  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00751610
//
// 00751610  56                   push esi
// 00751611  e86afeffff           call 0x751480
// 00751616  8bf0                 mov esi, eax
// 00751618  56                   push esi
// 00751619  ff1574a39e00         call dword ptr [0x9ea374]
// 0075161f  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 00751622  8b442408             mov eax, dword ptr [esp + 8]
// 00751626  8908                 mov dword ptr [eax], ecx
// 00751628  56                   push esi
// 00751629  894618               mov dword ptr [esi + 0x18], eax
// 0075162c  ff1570a39e00         call dword ptr [0x9ea370]
// 00751632  5e                   pop esi
// 00751633  c3                   ret 
// library rbxgs/script\LuaMemory.cpp (function ?free@?$singleton_pool@VLuaAllocator@@$0CA@Udefault_user_allocator_new_delete@boost@@Vwin32_mutex@pool@details@3@$0CA@@boost@@SAXQAX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaMemory.cpp
