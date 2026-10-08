// roc 2012-06 007ba370  unit: RBX::Block  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007ba370
//
// 007ba370  56                   push esi
// 007ba371  8b74240c             mov esi, dword ptr [esp + 0xc]
// 007ba375  57                   push edi
// 007ba376  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 007ba37a  56                   push esi
// 007ba37b  57                   push edi
// 007ba37c  e81ff6ffff           call 0x7b99a0
// 007ba381  57                   push edi
// 007ba382  56                   push esi
// 007ba383  e818f6ffff           call 0x7b99a0
// 007ba388  83c410               add esp, 0x10
// 007ba38b  5f                   pop edi
// 007ba38c  5e                   pop esi
// 007ba38d  c3                   ret 
// library rbxgs/v8world\Primitive.cpp (function ?onNewTouch@Primitive@RBX@@SAXPAV12@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Primitive.cpp
