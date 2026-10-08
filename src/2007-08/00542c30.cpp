// roc 2007-08 00542c30  unit: RBX::VInstance::?$SignalDesc  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00542c30
//
// 00542c30  81ec84000000         sub esp, 0x84
// 00542c36  8d4c2404             lea ecx, [esp + 4]
// 00542c3a  e8810ffbff           call 0x4f3bc0
// 00542c3f  d900                 fld dword ptr [eax]
// 00542c41  8d4c2404             lea ecx, [esp + 4]
// 00542c45  d91c24               fstp dword ptr [esp]
// 00542c48  e8c3fcffff           call 0x542910
// 00542c4d  d90424               fld dword ptr [esp]
// 00542c50  81c484000000         add esp, 0x84
// 00542c56  c3                   ret 
// library rbxgs/v8datamodel\DebugSettings.cpp (function ?shaderModel@DebugSettings@RBX@@QBEMXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
