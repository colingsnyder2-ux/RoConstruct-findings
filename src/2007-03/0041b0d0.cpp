// roc 2007-03 0041b0d0  unit: seg_00410000  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0041b0d0
//
// 0041b0d0  b8f0358800           mov eax, 0x8835f0
// 0041b0d5  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ?type@?$holder@V?$shared_ptr@VInstance@RBX@@@boost@@@any@boost@@UBEABVtype_info@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
