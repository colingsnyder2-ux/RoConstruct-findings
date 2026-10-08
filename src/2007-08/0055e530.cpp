// roc 2007-08 0055e530  unit: RBX::RotateSelectionVerb  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0055e530
//
// 0055e530  8b442404             mov eax, dword ptr [esp + 4]
// 0055e534  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0055e538  50                   push eax
// 0055e539  e8a2d60500           call 0x5bbbe0
// 0055e53e  c3                   ret 
// library rbxgs/v8datamodel\Workspace.cpp (function ?append@RBX@@YAXABV?$shared_ptr@VInstance@RBX@@@boost@@PAV?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Workspace.cpp
