// roc 2008-06 005a36d0  unit: RBX::Workspace  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a36d0
//
// 005a36d0  8b442404             mov eax, dword ptr [esp + 4]
// 005a36d4  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005a36d8  50                   push eax
// 005a36d9  e832cae7ff           call 0x420110
// 005a36de  c3                   ret 
// library rbxgs/v8datamodel\Workspace.cpp (function ?append@RBX@@YAXABV?$shared_ptr@VInstance@RBX@@@boost@@PAV?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Workspace.cpp
