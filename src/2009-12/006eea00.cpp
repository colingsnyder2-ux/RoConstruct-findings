// roc 2009-12 006eea00  unit: RBX::Primitive  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006eea00
//
// 006eea00  83ec0c               sub esp, 0xc
// 006eea03  56                   push esi
// 006eea04  57                   push edi
// 006eea05  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 006eea09  6a00                 push 0
// 006eea0b  8d44240c             lea eax, [esp + 0xc]
// 006eea0f  50                   push eax
// 006eea10  8bcf                 mov ecx, edi
// 006eea12  e8794ff0ff           call 0x5f3990
// 006eea17  50                   push eax
// 006eea18  e8d30d0300           call 0x71f7f0
// 006eea1d  83c404               add esp, 4
// 006eea20  6a01                 push 1
// 006eea22  8d4c240c             lea ecx, [esp + 0xc]
// 006eea26  51                   push ecx
// 006eea27  8bcf                 mov ecx, edi
// 006eea29  8bf0                 mov esi, eax
// 006eea2b  e8604ff0ff           call 0x5f3990
// 006eea30  50                   push eax
// 006eea31  e8ba0d0300           call 0x71f7f0
// 006eea36  83c404               add esp, 4
// 006eea39  8d1476               lea edx, [esi + esi*2]
// 006eea3c  5f                   pop edi
// 006eea3d  8d0450               lea eax, [eax + edx*2]
// 006eea40  5e                   pop esi
// 006eea41  83c40c               add esp, 0xc
// 006eea44  c3                   ret 
// library rbxgs/util\Math.cpp (function ?getOrientId@Math@RBX@@SAHABVMatrix3@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Math.cpp
