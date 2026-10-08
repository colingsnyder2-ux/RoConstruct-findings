// roc 2008-06 005e7530  unit: RBX::Ball  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e7530
//
// 005e7530  56                   push esi
// 005e7531  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005e7535  57                   push edi
// 005e7536  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 005e753a  56                   push esi
// 005e753b  57                   push edi
// 005e753c  e87fffffff           call 0x5e74c0
// 005e7541  57                   push edi
// 005e7542  56                   push esi
// 005e7543  e878ffffff           call 0x5e74c0
// 005e7548  83c410               add esp, 0x10
// 005e754b  5f                   pop edi
// 005e754c  5e                   pop esi
// 005e754d  c3                   ret 
// library rbxgs/v8world\Primitive.cpp (function ?onNewTouch@Primitive@RBX@@SAXPAV12@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Primitive.cpp
