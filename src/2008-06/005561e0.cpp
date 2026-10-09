// roc 2008-06 005561e0  unit: RBX::VRunService::?$BoundFuncDesc  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005561e0
//
// 005561e0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005561e4  83f803               cmp eax, 3
// 005561e7  741e                 je 0x556207
// 005561e9  8b542408             mov edx, dword ptr [esp + 8]
// 005561ed  c644240c00           mov byte ptr [esp + 0xc], 0
// 005561f2  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005561f6  51                   push ecx
// 005561f7  50                   push eax
// 005561f8  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005561fc  52                   push edx
// 005561fd  50                   push eax
// 005561fe  e8cdfdffff           call 0x555fd0
// 00556203  83c410               add esp, 0x10
// 00556206  c3                   ret 
// 00556207  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0055620b  c701e8339400         mov dword ptr [ecx], 0x9433e8
// 00556211  c3                   ret 
// library openrbx-client/App\util\RunStateOwner.cpp (function ?manage@?$functor_manager@VGenericSlotAdapter@?$SignalDescImpl@$01$$A6AXMM@Z@Reflection@RBX@@V?$allocator@X@std@@@function@detail@boost@@SAXABTfunction_buffer@234@AAT5234@W4functor_manager_operation_type@234@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/RunStateOwner.cpp
