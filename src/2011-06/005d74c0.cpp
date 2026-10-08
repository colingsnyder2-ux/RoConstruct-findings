// roc 2011-06 005d74c0  unit: RBX::PartInstance  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005d74c0
//
// 005d74c0  d90588f8a800         fld dword ptr [0xa8f888]
// 005d74c6  c3                   ret 
// library rbxgs/v8kernel\Connector.cpp (function ?infinity@?$numeric_limits@M@std@@SAMXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8kernel/Connector.cpp
