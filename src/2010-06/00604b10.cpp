// roc 2010-06 00604b10  unit: RBX::Workspace  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00604b10
//
// 00604b10  8b442404             mov eax, dword ptr [esp + 4]
// 00604b14  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00604b18  50                   push eax
// 00604b19  e8627f1900           call 0x79ca80
// 00604b1e  c3                   ret 
// library rbxgs/v8datamodel\Workspace.cpp (function ?append@RBX@@YAXABV?$shared_ptr@VInstance@RBX@@@boost@@PAV?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Workspace.cpp
