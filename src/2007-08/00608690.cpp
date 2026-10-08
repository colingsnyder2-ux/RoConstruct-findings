// roc 2007-08 00608690  unit: RBX::ClumpStage  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00608690
//
// 00608690  d90540d97b00         fld dword ptr [0x7bd940]
// 00608696  c3                   ret 
// library rbxgs/v8kernel\Connector.cpp (function ?infinity@?$numeric_limits@M@std@@SAMXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8kernel/Connector.cpp
