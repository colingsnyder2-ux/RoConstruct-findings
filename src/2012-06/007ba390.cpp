// roc 2012-06 007ba390  unit: RBX::Block  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007ba390
//
// 007ba390  56                   push esi
// 007ba391  8b74240c             mov esi, dword ptr [esp + 0xc]
// 007ba395  57                   push edi
// 007ba396  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 007ba39a  56                   push esi
// 007ba39b  57                   push edi
// 007ba39c  e80ff7ffff           call 0x7b9ab0
// 007ba3a1  57                   push edi
// 007ba3a2  56                   push esi
// 007ba3a3  e808f7ffff           call 0x7b9ab0
// 007ba3a8  83c410               add esp, 0x10
// 007ba3ab  5f                   pop edi
// 007ba3ac  5e                   pop esi
// 007ba3ad  c3                   ret 
// library rbxgs/v8world\Primitive.cpp (function ?onNewTouch@Primitive@RBX@@SAXPAV12@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Primitive.cpp
