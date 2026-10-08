// roc 2007-03 0053af00  unit: seg_00530000  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0053af00
//
// 0053af00  b8181a8800           mov eax, 0x881a18
// 0053af05  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ?type@?$holder@V?$vector@VValue@Reflection@RBX@@V?$allocator@VValue@Reflection@RBX@@@std@@@std@@@any@boost@@UBEABVtype_info@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
