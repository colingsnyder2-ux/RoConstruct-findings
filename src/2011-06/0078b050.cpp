// roc 2011-06 0078b050  unit: RBX::Block  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0078b050
//
// 0078b050  56                   push esi
// 0078b051  e89afdffff           call 0x78adf0
// 0078b056  8bf0                 mov esi, eax
// 0078b058  56                   push esi
// 0078b059  ff158403a400         call dword ptr [0xa40384]
// 0078b05f  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0078b062  8b442408             mov eax, dword ptr [esp + 8]
// 0078b066  8908                 mov dword ptr [eax], ecx
// 0078b068  56                   push esi
// 0078b069  894618               mov dword ptr [esi + 0x18], eax
// 0078b06c  ff158003a400         call dword ptr [0xa40380]
// 0078b072  5e                   pop esi
// 0078b073  c3                   ret 
// library rbxgs/script\LuaMemory.cpp (function ?free@?$singleton_pool@VLuaAllocator@@$0CA@Udefault_user_allocator_new_delete@boost@@Vwin32_mutex@pool@details@3@$0CA@@boost@@SAXQAX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaMemory.cpp
