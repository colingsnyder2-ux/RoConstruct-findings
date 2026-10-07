// roc 2012-06 00909de0  unit: RBX::Body  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00909de0
//
// 00909de0  56                   push esi
// 00909de1  e86afeffff           call 0x909c50
// 00909de6  8bf0                 mov esi, eax
// 00909de8  56                   push esi
// 00909de9  ff15b821b200         call dword ptr [0xb221b8]
// 00909def  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 00909df2  8b442408             mov eax, dword ptr [esp + 8]
// 00909df6  8908                 mov dword ptr [eax], ecx
// 00909df8  56                   push esi
// 00909df9  894618               mov dword ptr [esi + 0x18], eax
// 00909dfc  ff15b421b200         call dword ptr [0xb221b4]
// 00909e02  5e                   pop esi
// 00909e03  c3                   ret 
// library rbxgs/script\LuaMemory.cpp (function ?free@?$singleton_pool@VLuaAllocator@@$0CA@Udefault_user_allocator_new_delete@boost@@Vwin32_mutex@pool@details@3@$0CA@@boost@@SAXQAX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaMemory.cpp
