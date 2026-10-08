// roc 2007-03 00536d60  unit: seg_00530000  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00536d60
//
// 00536d60  b8981d8800           mov eax, 0x881d98
// 00536d65  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ?type@?$holder@VFunctionRef@Lua@RBX@@@any@boost@@UBEABVtype_info@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
