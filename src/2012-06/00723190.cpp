// roc 2012-06 00723190  unit: RBX::DecalTool  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00723190
//
// 00723190  8b442404             mov eax, dword ptr [esp + 4]
// 00723194  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00723198  50                   push eax
// 00723199  e8e26ccfff           call 0x419e80
// 0072319e  c3                   ret 
// library rbxgs/v8datamodel\Workspace.cpp (function ?append@RBX@@YAXABV?$shared_ptr@VInstance@RBX@@@boost@@PAV?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Workspace.cpp
