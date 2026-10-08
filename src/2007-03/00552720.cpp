// roc 2007-03 00552720  unit: seg_00550000  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00552720
//
// 00552720  8a8118010000         mov al, byte ptr [ecx + 0x118]
// 00552726  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?isDisabled@Script@RBX@@QBE_NXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
