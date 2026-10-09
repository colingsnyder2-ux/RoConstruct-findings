// roc 2009-12 00699310  unit: RBX::Workspace  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00699310
//
// 00699310  8b442404             mov eax, dword ptr [esp + 4]
// 00699314  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00699318  50                   push eax
// 00699319  e8e2111500           call 0x7ea500
// 0069931e  c3                   ret 
// library rbxgs/v8datamodel\Workspace.cpp (function ?append@RBX@@YAXABV?$shared_ptr@VInstance@RBX@@@boost@@PAV?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Workspace.cpp
