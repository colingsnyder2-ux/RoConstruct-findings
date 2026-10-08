// roc 2008-06 006492f0  unit: RBX::Ball  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006492f0
//
// 006492f0  d90534d68200         fld dword ptr [0x82d634]
// 006492f6  c3                   ret 
// library rbxgs/v8kernel\Connector.cpp (function ?infinity@?$numeric_limits@M@std@@SAMXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8kernel/Connector.cpp
