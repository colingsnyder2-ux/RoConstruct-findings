// roc 2007-03 0057ff00  unit: seg_00570000  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0057ff00
//
// 0057ff00  56                   push esi
// 0057ff01  e8fafeffff           call 0x57fe00
// 0057ff06  8bf0                 mov esi, eax
// 0057ff08  56                   push esi
// 0057ff09  ff15bcd27700         call dword ptr [0x77d2bc]
// 0057ff0f  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0057ff12  8b442408             mov eax, dword ptr [esp + 8]
// 0057ff16  8908                 mov dword ptr [eax], ecx
// 0057ff18  56                   push esi
// 0057ff19  894618               mov dword ptr [esi + 0x18], eax
// 0057ff1c  ff15b8d27700         call dword ptr [0x77d2b8]
// 0057ff22  5e                   pop esi
// 0057ff23  c3                   ret 
// library rbxgs/script\LuaMemory.cpp (function ?free@?$singleton_pool@VLuaAllocator@@$0CA@Udefault_user_allocator_new_delete@boost@@Vwin32_mutex@pool@details@3@$0CA@@boost@@SAXQAX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaMemory.cpp
