// roc 2007-03 004a5830  unit: seg_004a0000  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004a5830
//
// 004a5830  b8300a8900           mov eax, 0x890a30
// 004a5835  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ?type@?$holder@V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@@any@boost@@UBEABVtype_info@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
