// roc 2008-06 005ab470  unit: RBX::Lua::ThreadRef::VNode::V?$shared_ptr::?$TItem  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ab470
//
// 005ab470  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005ab474  83f803               cmp eax, 3
// 005ab477  741e                 je 0x5ab497
// 005ab479  8b542408             mov edx, dword ptr [esp + 8]
// 005ab47d  c644240c00           mov byte ptr [esp + 0xc], 0
// 005ab482  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005ab486  51                   push ecx
// 005ab487  50                   push eax
// 005ab488  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005ab48c  52                   push edx
// 005ab48d  50                   push eax
// 005ab48e  e8fdedffff           call 0x5aa290
// 005ab493  83c410               add esp, 0x10
// 005ab496  c3                   ret 
// 005ab497  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005ab49b  c701f0c79400         mov dword ptr [ecx], 0x94c7f0
// 005ab4a1  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?manage@?$functor_manager@V?$bind_t@IV?$cmf0@IVScriptContext@RBX@@@_mfi@boost@@V?$list1@V?$value@PAVScriptContext@RBX@@@_bi@boost@@@_bi@3@@_bi@boost@@V?$allocator@Vfunction_base@boost@@@std@@@function@detail@boost@@SAXABTfunction_buffer@234@AAT5234@W4functor_manager_operation_type@234@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
