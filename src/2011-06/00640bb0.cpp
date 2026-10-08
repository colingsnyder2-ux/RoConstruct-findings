// roc 2011-06 00640bb0  unit: RBX::Workspace  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00640bb0
//
// 00640bb0  8b442404             mov eax, dword ptr [esp + 4]
// 00640bb4  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00640bb8  50                   push eax
// 00640bb9  e8e2e8fdff           call 0x61f4a0
// 00640bbe  c3                   ret 
// library rbxgs/v8datamodel\Workspace.cpp (function ?append@RBX@@YAXABV?$shared_ptr@VInstance@RBX@@@boost@@PAV?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Workspace.cpp
