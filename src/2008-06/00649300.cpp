// roc 2008-06 00649300  unit: RBX::Ball  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00649300
//
// 00649300  d905d8af8400         fld dword ptr [0x84afd8]
// 00649306  c3                   ret 
// library rbxgs/v8kernel\Connector.cpp (function ?infinity@?$numeric_limits@M@std@@SAMXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8kernel/Connector.cpp
