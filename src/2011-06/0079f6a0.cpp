// roc 2011-06 0079f6a0  unit: RBX::Humanoid  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0079f6a0
//
// 0079f6a0  d90500a3a800         fld dword ptr [0xa8a300]
// 0079f6a6  c3                   ret 
// library rbxgs/v8kernel\Connector.cpp (function ?infinity@?$numeric_limits@M@std@@SAMXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8kernel/Connector.cpp
