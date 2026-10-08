// roc 2011-06 006a3a30  unit: RBX::Block  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006a3a30
//
// 006a3a30  56                   push esi
// 006a3a31  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006a3a35  57                   push edi
// 006a3a36  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006a3a3a  56                   push esi
// 006a3a3b  57                   push edi
// 006a3a3c  e87fffffff           call 0x6a39c0
// 006a3a41  57                   push edi
// 006a3a42  56                   push esi
// 006a3a43  e878ffffff           call 0x6a39c0
// 006a3a48  83c410               add esp, 0x10
// 006a3a4b  5f                   pop edi
// 006a3a4c  5e                   pop esi
// 006a3a4d  c3                   ret 
// library rbxgs/v8world\Primitive.cpp (function ?onNewTouch@Primitive@RBX@@SAXPAV12@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Primitive.cpp
