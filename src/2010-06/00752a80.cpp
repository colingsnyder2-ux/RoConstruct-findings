// roc 2010-06 00752a80  unit: RBX::MotorJoint  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00752a80
//
// 00752a80  56                   push esi
// 00752a81  e81affffff           call 0x7529a0
// 00752a86  8bf0                 mov esi, eax
// 00752a88  56                   push esi
// 00752a89  ff1574a39e00         call dword ptr [0x9ea374]
// 00752a8f  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 00752a92  8b442408             mov eax, dword ptr [esp + 8]
// 00752a96  8908                 mov dword ptr [eax], ecx
// 00752a98  56                   push esi
// 00752a99  894618               mov dword ptr [esi + 0x18], eax
// 00752a9c  ff1570a39e00         call dword ptr [0x9ea370]
// 00752aa2  5e                   pop esi
// 00752aa3  c3                   ret 
// library rbxgs/script\LuaMemory.cpp (function ?free@?$singleton_pool@VLuaAllocator@@$0CA@Udefault_user_allocator_new_delete@boost@@Vwin32_mutex@pool@details@3@$0CA@@boost@@SAXQAX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaMemory.cpp
