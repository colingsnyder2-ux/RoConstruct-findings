// roc 2010-06 006784b0  unit: RBX::Primitive  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006784b0
//
// 006784b0  56                   push esi
// 006784b1  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006784b5  57                   push edi
// 006784b6  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006784ba  56                   push esi
// 006784bb  57                   push edi
// 006784bc  e87fffffff           call 0x678440
// 006784c1  57                   push edi
// 006784c2  56                   push esi
// 006784c3  e878ffffff           call 0x678440
// 006784c8  83c410               add esp, 0x10
// 006784cb  5f                   pop edi
// 006784cc  5e                   pop esi
// 006784cd  c3                   ret 
// library rbxgs/v8world\Primitive.cpp (function ?onNewTouch@Primitive@RBX@@SAXPAV12@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Primitive.cpp
