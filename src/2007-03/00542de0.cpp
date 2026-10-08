// roc 2007-03 00542de0  unit: seg_00540000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00542de0
//
// 00542de0  81ec84000000         sub esp, 0x84
// 00542de6  8d4c2404             lea ecx, [esp + 4]
// 00542dea  e83147faff           call 0x4e7520
// 00542def  d900                 fld dword ptr [eax]
// 00542df1  8d4c2404             lea ecx, [esp + 4]
// 00542df5  d91c24               fstp dword ptr [esp]
// 00542df8  e893fcffff           call 0x542a90
// 00542dfd  d90424               fld dword ptr [esp]
// 00542e00  81c484000000         add esp, 0x84
// 00542e06  c3                   ret 
// library rbxgs/v8datamodel\DebugSettings.cpp (function ?shaderModel@DebugSettings@RBX@@QBEMXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
