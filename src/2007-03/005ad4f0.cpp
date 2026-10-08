// roc 2007-03 005ad4f0  unit: seg_005a0000  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005ad4f0
//
// 005ad4f0  56                   push esi
// 005ad4f1  8bf1                 mov esi, ecx
// 005ad4f3  8d442408             lea eax, [esp + 8]
// 005ad4f7  50                   push eax
// 005ad4f8  8d4e38               lea ecx, [esi + 0x38]
// 005ad4fb  e8c061fcff           call 0x5736c0
// 005ad500  8d4c240c             lea ecx, [esp + 0xc]
// 005ad504  51                   push ecx
// 005ad505  8d4e44               lea ecx, [esi + 0x44]
// 005ad508  e8b361fcff           call 0x5736c0
// 005ad50d  5e                   pop esi
// 005ad50e  c20800               ret 8
// library rbxgs/v8world\World.cpp (function ?onPrimitiveTouched@World@RBX@@QAEXPAVPrimitive@2@0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/World.cpp
