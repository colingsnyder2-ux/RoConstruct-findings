// roc 2007-03 00414a50  unit: seg_00410000  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00414a50
//
// 00414a50  b8b0198800           mov eax, 0x8819b0
// 00414a55  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ?type@?$holder@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@any@boost@@UBEABVtype_info@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
