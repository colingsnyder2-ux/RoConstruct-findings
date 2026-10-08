// roc 2011-06 0079f6c0  unit: RBX::Humanoid  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0079f6c0
//
// 0079f6c0  d905a4b6a900         fld dword ptr [0xa9b6a4]
// 0079f6c6  c3                   ret 
// library rbxgs/v8kernel\Connector.cpp (function ?infinity@?$numeric_limits@M@std@@SAMXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8kernel/Connector.cpp
