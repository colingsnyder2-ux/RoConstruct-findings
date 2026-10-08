// roc 2011-06 0079f6b0  unit: RBX::Humanoid  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0079f6b0
//
// 0079f6b0  d90550cbab00         fld dword ptr [0xabcb50]
// 0079f6b6  c3                   ret 
// library rbxgs/v8kernel\Connector.cpp (function ?infinity@?$numeric_limits@M@std@@SAMXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8kernel/Connector.cpp
