// roc 2007-03 0055fe50  unit: seg_00550000  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0055fe50
//
// 0055fe50  8b442404             mov eax, dword ptr [esp + 4]
// 0055fe54  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0055fe58  50                   push eax
// 0055fe59  e8126c0500           call 0x5b6a70
// 0055fe5e  c3                   ret 
// library rbxgs/v8datamodel\Workspace.cpp (function ?append@RBX@@YAXABV?$shared_ptr@VInstance@RBX@@@boost@@PAV?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Workspace.cpp
