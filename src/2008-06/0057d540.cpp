// roc 2008-06 0057d540  unit: RBX::RotateSelectionVerb  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0057d540
//
// 0057d540  8b442404             mov eax, dword ptr [esp + 4]
// 0057d544  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0057d548  50                   push eax
// 0057d549  e872c40800           call 0x6099c0
// 0057d54e  c3                   ret 
// library rbxgs/v8datamodel\Workspace.cpp (function ?append@RBX@@YAXABV?$shared_ptr@VInstance@RBX@@@boost@@PAV?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Workspace.cpp
