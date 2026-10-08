// roc 2012-06 008a28a0  unit: RBX::ToolMouseCommand  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008a28a0
//
// 008a28a0  d90574fcdf00         fld dword ptr [0xdffc74]
// 008a28a6  c3                   ret 
// library rbxgs/v8kernel\Connector.cpp (function ?infinity@?$numeric_limits@M@std@@SAMXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8kernel/Connector.cpp
