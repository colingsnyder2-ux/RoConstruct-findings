// roc 2007-03 005a79e0  unit: seg_005a0000  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005a79e0
//
// 005a79e0  d9442404             fld dword ptr [esp + 4]
// 005a79e4  51                   push ecx
// 005a79e5  d91c24               fstp dword ptr [esp]
// 005a79e8  e873ffffff           call 0x5a7960
// 005a79ed  83c404               add esp, 4
// 005a79f0  c3                   ret 
// library rbxgs/util\Math.cpp (function ?rotationToByte@Math@RBX@@SAEM@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Math.cpp
