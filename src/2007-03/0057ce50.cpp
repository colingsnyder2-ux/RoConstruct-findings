// roc 2007-03 0057ce50  unit: seg_00570000  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0057ce50
//
// 0057ce50  8b442404             mov eax, dword ptr [esp + 4]
// 0057ce54  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0057ce58  50                   push eax
// 0057ce59  e832a0eaff           call 0x426e90
// 0057ce5e  c3                   ret 
// library rbxgs/v8datamodel\Workspace.cpp (function ?append@RBX@@YAXABV?$shared_ptr@VInstance@RBX@@@boost@@PAV?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Workspace.cpp
