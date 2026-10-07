// roc 2010-06 0075e500  unit: RBX::GlueJoint  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0075e500
//
// 0075e500  56                   push esi
// 0075e501  e89a24cfff           call 0x4509a0
// 0075e506  8bf0                 mov esi, eax
// 0075e508  56                   push esi
// 0075e509  ff1574a39e00         call dword ptr [0x9ea374]
// 0075e50f  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0075e512  8b442408             mov eax, dword ptr [esp + 8]
// 0075e516  8908                 mov dword ptr [eax], ecx
// 0075e518  56                   push esi
// 0075e519  894618               mov dword ptr [esi + 0x18], eax
// 0075e51c  ff1570a39e00         call dword ptr [0x9ea370]
// 0075e522  5e                   pop esi
// 0075e523  c3                   ret 
// library rbxgs/script\LuaMemory.cpp (function ?free@?$singleton_pool@VLuaAllocator@@$0CA@Udefault_user_allocator_new_delete@boost@@Vwin32_mutex@pool@details@3@$0CA@@boost@@SAXQAX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaMemory.cpp
