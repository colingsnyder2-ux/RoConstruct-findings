// roc 2007-08 005abeb0  unit: RBX::World  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005abeb0
//
// 005abeb0  d9442404             fld dword ptr [esp + 4]
// 005abeb4  51                   push ecx
// 005abeb5  d91c24               fstp dword ptr [esp]
// 005abeb8  e873ffffff           call 0x5abe30
// 005abebd  83c404               add esp, 4
// 005abec0  c3                   ret 
// library rbxgs/util\Math.cpp (function ?rotationToByte@Math@RBX@@SAEM@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Math.cpp
