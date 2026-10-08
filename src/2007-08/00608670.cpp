// roc 2007-08 00608670  unit: RBX::ClumpStage  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00608670
//
// 00608670  d905404c7a00         fld dword ptr [0x7a4c40]
// 00608676  c3                   ret 
// library rbxgs/v8kernel\Connector.cpp (function ?infinity@?$numeric_limits@M@std@@SAMXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8kernel/Connector.cpp
