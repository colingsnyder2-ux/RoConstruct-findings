// roc 2007-08 0057d9e0  unit: RBX::Workspace  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0057d9e0
//
// 0057d9e0  8b442404             mov eax, dword ptr [esp + 4]
// 0057d9e4  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0057d9e8  50                   push eax
// 0057d9e9  e8226aeaff           call 0x424410
// 0057d9ee  c3                   ret 
// library rbxgs/v8datamodel\Workspace.cpp (function ?append@RBX@@YAXABV?$shared_ptr@VInstance@RBX@@@boost@@PAV?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Workspace.cpp
