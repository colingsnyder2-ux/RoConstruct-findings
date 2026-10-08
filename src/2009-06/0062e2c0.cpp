// roc 2009-06 0062e2c0  unit: RBX::DecalTool  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0062e2c0
//
// 0062e2c0  8b442404             mov eax, dword ptr [esp + 4]
// 0062e2c4  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0062e2c8  50                   push eax
// 0062e2c9  e8f20d0e00           call 0x70f0c0
// 0062e2ce  c3                   ret 
// library rbxgs/v8datamodel\Workspace.cpp (function ?append@RBX@@YAXABV?$shared_ptr@VInstance@RBX@@@boost@@PAV?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Workspace.cpp
