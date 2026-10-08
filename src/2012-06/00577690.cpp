// roc 2012-06 00577690  unit: RBX::Network::Replicator::RockyItem  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00577690
//
// 00577690  8b442404             mov eax, dword ptr [esp + 4]
// 00577694  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00577698  50                   push eax
// 00577699  e802ffffff           call 0x5775a0
// 0057769e  c3                   ret 
// library rbxgs/v8datamodel\Workspace.cpp (function ?append@RBX@@YAXABV?$shared_ptr@VInstance@RBX@@@boost@@PAV?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Workspace.cpp
