// roc 2012-06 00758be0  unit: RBX::PartInstance  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00758be0
//
// 00758be0  d905f479b900         fld dword ptr [0xb979f4]
// 00758be6  c3                   ret 
// library rbxgs/v8kernel\Connector.cpp (function ?infinity@?$numeric_limits@M@std@@SAMXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8kernel/Connector.cpp
