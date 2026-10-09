// roc 2008-06 005da1e0  unit: RBX::VHumanoid::?$BoundFuncDesc  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005da1e0
//
// 005da1e0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005da1e4  83f803               cmp eax, 3
// 005da1e7  741e                 je 0x5da207
// 005da1e9  8b542408             mov edx, dword ptr [esp + 8]
// 005da1ed  c644240c00           mov byte ptr [esp + 0xc], 0
// 005da1f2  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005da1f6  51                   push ecx
// 005da1f7  50                   push eax
// 005da1f8  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005da1fc  52                   push edx
// 005da1fd  50                   push eax
// 005da1fe  e82dfeffff           call 0x5da030
// 005da203  83c410               add esp, 0x10
// 005da206  c3                   ret 
// 005da207  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005da20b  c701083e9500         mov dword ptr [ecx], 0x953e08
// 005da211  c3                   ret 
// library openrbx-client/App\humanoid\Humanoid.cpp (function ?manage@?$functor_manager@VGenericSlotAdapter@?$SignalDescImpl@$00$$A6AX_N@Z@Reflection@RBX@@V?$allocator@X@std@@@function@detail@boost@@SAXABTfunction_buffer@234@AAT5234@W4functor_manager_operation_type@234@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/humanoid/Humanoid.cpp
