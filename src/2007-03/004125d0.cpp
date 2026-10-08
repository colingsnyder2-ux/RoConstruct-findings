// roc 2007-03 004125d0  unit: seg_00410000  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004125d0
//
// 004125d0  b8b85e7800           mov eax, 0x785eb8
// 004125d5  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ?what@bad_any_cast@boost@@UBEPBDXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
