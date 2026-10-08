// roc 2009-06 006703f0  unit: RBX::Primitive  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006703f0
//
// 006703f0  56                   push esi
// 006703f1  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006703f5  57                   push edi
// 006703f6  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006703fa  56                   push esi
// 006703fb  57                   push edi
// 006703fc  e87fffffff           call 0x670380
// 00670401  57                   push edi
// 00670402  56                   push esi
// 00670403  e878ffffff           call 0x670380
// 00670408  83c410               add esp, 0x10
// 0067040b  5f                   pop edi
// 0067040c  5e                   pop esi
// 0067040d  c3                   ret 
// library rbxgs/v8world\Primitive.cpp (function ?onNewTouch@Primitive@RBX@@SAXPAV12@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Primitive.cpp
