// roc 2007-03 005c76b0  unit: seg_005c0000  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005c76b0
//
// 005c76b0  56                   push esi
// 005c76b1  8bf1                 mov esi, ecx
// 005c76b3  8d4e0c               lea ecx, [esi + 0xc]
// 005c76b6  c706c8607800         mov dword ptr [esi], 0x7860c8
// 005c76bc  ff158ce77700         call dword ptr [0x77e78c]
// 005c76c2  8bce                 mov ecx, esi
// 005c76c4  5e                   pop esi
// 005c76c5  ff255ce97700         jmp dword ptr [0x77e95c]
// library rbxgs/v8datamodel\FlagStand.cpp (function ??1logic_error@std@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
