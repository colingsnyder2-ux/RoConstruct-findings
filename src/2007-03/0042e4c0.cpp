// roc 2007-03 0042e4c0  unit: seg_00420000  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0042e4c0
//
// 0042e4c0  b8a0198800           mov eax, 0x8819a0
// 0042e4c5  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ?type@?$holder@M@any@boost@@UBEABVtype_info@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
