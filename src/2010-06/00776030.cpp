// roc 2010-06 00776030  unit: RBX::PolyContact  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00776030
//
// 00776030  56                   push esi
// 00776031  e85afeffff           call 0x775e90
// 00776036  8bf0                 mov esi, eax
// 00776038  56                   push esi
// 00776039  ff1574a39e00         call dword ptr [0x9ea374]
// 0077603f  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 00776042  8b442408             mov eax, dword ptr [esp + 8]
// 00776046  8908                 mov dword ptr [eax], ecx
// 00776048  56                   push esi
// 00776049  894618               mov dword ptr [esi + 0x18], eax
// 0077604c  ff1570a39e00         call dword ptr [0x9ea370]
// 00776052  5e                   pop esi
// 00776053  c3                   ret 
// library rbxgs/script\LuaMemory.cpp (function ?free@?$singleton_pool@VLuaAllocator@@$0CA@Udefault_user_allocator_new_delete@boost@@Vwin32_mutex@pool@details@3@$0CA@@boost@@SAXQAX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaMemory.cpp
