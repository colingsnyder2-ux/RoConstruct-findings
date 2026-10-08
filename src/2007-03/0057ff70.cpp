// roc 2007-03 0057ff70  unit: seg_00570000  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0057ff70
//
// 0057ff70  56                   push esi
// 0057ff71  e8eafeffff           call 0x57fe60
// 0057ff76  8bf0                 mov esi, eax
// 0057ff78  56                   push esi
// 0057ff79  ff15bcd27700         call dword ptr [0x77d2bc]
// 0057ff7f  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0057ff82  8b442408             mov eax, dword ptr [esp + 8]
// 0057ff86  8908                 mov dword ptr [eax], ecx
// 0057ff88  56                   push esi
// 0057ff89  894618               mov dword ptr [esi + 0x18], eax
// 0057ff8c  ff15b8d27700         call dword ptr [0x77d2b8]
// 0057ff92  5e                   pop esi
// 0057ff93  c3                   ret 
// library rbxgs/script\LuaMemory.cpp (function ?free@?$singleton_pool@VLuaAllocator@@$0CA@Udefault_user_allocator_new_delete@boost@@Vwin32_mutex@pool@details@3@$0CA@@boost@@SAXQAX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaMemory.cpp
