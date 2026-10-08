// roc 2008-06 00649310  unit: RBX::Ball  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00649310
//
// 00649310  d905685c8400         fld dword ptr [0x845c68]
// 00649316  c3                   ret 
// library rbxgs/v8kernel\Connector.cpp (function ?infinity@?$numeric_limits@M@std@@SAMXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8kernel/Connector.cpp
