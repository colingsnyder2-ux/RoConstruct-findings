// roc 2007-08 005a95f0  unit: RBX::VHumanoid::?$SignalDesc  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005a95f0
//
// 005a95f0  56                   push esi
// 005a95f1  8bf1                 mov esi, ecx
// 005a95f3  8d442408             lea eax, [esp + 8]
// 005a95f7  50                   push eax
// 005a95f8  8d4e38               lea ecx, [esi + 0x38]
// 005a95fb  e8d0b6fcff           call 0x574cd0
// 005a9600  8d4c240c             lea ecx, [esp + 0xc]
// 005a9604  51                   push ecx
// 005a9605  8d4e44               lea ecx, [esi + 0x44]
// 005a9608  e8c3b6fcff           call 0x574cd0
// 005a960d  5e                   pop esi
// 005a960e  c20800               ret 8
// library rbxgs/v8world\World.cpp (function ?onPrimitiveTouched@World@RBX@@QAEXPAVPrimitive@2@0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/World.cpp
