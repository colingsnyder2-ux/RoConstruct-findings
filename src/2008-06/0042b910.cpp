// roc 2008-06 0042b910  unit: RBX::Reflection::$$A6AXPBVPropertyDescriptor::V?$function::?$holder  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0042b910
//
// 0042b910  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0042b914  83f803               cmp eax, 3
// 0042b917  741e                 je 0x42b937
// 0042b919  8b542408             mov edx, dword ptr [esp + 8]
// 0042b91d  c644240c00           mov byte ptr [esp + 0xc], 0
// 0042b922  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0042b926  51                   push ecx
// 0042b927  50                   push eax
// 0042b928  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0042b92c  52                   push edx
// 0042b92d  50                   push eax
// 0042b92e  e8fdfdffff           call 0x42b730
// 0042b933  83c410               add esp, 0x10
// 0042b936  c3                   ret 
// 0042b937  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0042b93b  c70158ea9200         mov dword ptr [ecx], 0x92ea58
// 0042b941  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ?manage@?$functor_manager@U?$tss_adapter@VContext@Security@RBX@@@detail@boost@@V?$allocator@Vfunction_base@boost@@@std@@@function@detail@boost@@SAXABTfunction_buffer@234@AAT5234@W4functor_manager_operation_type@234@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
