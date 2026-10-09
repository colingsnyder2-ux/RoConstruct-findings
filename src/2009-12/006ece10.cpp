// roc 2009-12 006ece10  unit: RBX::Primitive  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006ece10
//
// 006ece10  56                   push esi
// 006ece11  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006ece15  57                   push edi
// 006ece16  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006ece1a  56                   push esi
// 006ece1b  57                   push edi
// 006ece1c  e87fffffff           call 0x6ecda0
// 006ece21  57                   push edi
// 006ece22  56                   push esi
// 006ece23  e878ffffff           call 0x6ecda0
// 006ece28  83c410               add esp, 0x10
// 006ece2b  5f                   pop edi
// 006ece2c  5e                   pop esi
// 006ece2d  c3                   ret 
// library rbxgs/v8world\Primitive.cpp (function ?onNewTouch@Primitive@RBX@@SAXPAV12@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Primitive.cpp
