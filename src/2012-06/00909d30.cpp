// roc 2012-06 00909d30  unit: RBX::Body  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00909d30
//
// 00909d30  56                   push esi
// 00909d31  e8bafeffff           call 0x909bf0
// 00909d36  8bf0                 mov esi, eax
// 00909d38  56                   push esi
// 00909d39  ff15b821b200         call dword ptr [0xb221b8]
// 00909d3f  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 00909d42  8b442408             mov eax, dword ptr [esp + 8]
// 00909d46  8908                 mov dword ptr [eax], ecx
// 00909d48  56                   push esi
// 00909d49  894618               mov dword ptr [esi + 0x18], eax
// 00909d4c  ff15b421b200         call dword ptr [0xb221b4]
// 00909d52  5e                   pop esi
// 00909d53  c3                   ret 
// library rbxgs/script\LuaMemory.cpp (function ?free@?$singleton_pool@VLuaAllocator@@$0CA@Udefault_user_allocator_new_delete@boost@@Vwin32_mutex@pool@details@3@$0CA@@boost@@SAXQAX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaMemory.cpp
