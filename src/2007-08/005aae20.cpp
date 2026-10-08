// roc 2007-08 005aae20  unit: RBX::World  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005aae20
//
// 005aae20  83ec0c               sub esp, 0xc
// 005aae23  56                   push esi
// 005aae24  57                   push edi
// 005aae25  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 005aae29  6a00                 push 0
// 005aae2b  8d44240c             lea eax, [esp + 0xc]
// 005aae2f  50                   push eax
// 005aae30  8bcf                 mov ecx, edi
// 005aae32  e809e8f5ff           call 0x509640
// 005aae37  50                   push eax
// 005aae38  e843ec0000           call 0x5b9a80
// 005aae3d  83c404               add esp, 4
// 005aae40  6a01                 push 1
// 005aae42  8d4c240c             lea ecx, [esp + 0xc]
// 005aae46  51                   push ecx
// 005aae47  8bcf                 mov ecx, edi
// 005aae49  8bf0                 mov esi, eax
// 005aae4b  e8f0e7f5ff           call 0x509640
// 005aae50  50                   push eax
// 005aae51  e82aec0000           call 0x5b9a80
// 005aae56  83c404               add esp, 4
// 005aae59  8d1476               lea edx, [esi + esi*2]
// 005aae5c  5f                   pop edi
// 005aae5d  8d0450               lea eax, [eax + edx*2]
// 005aae60  5e                   pop esi
// 005aae61  83c40c               add esp, 0xc
// 005aae64  c3                   ret 
// library rbxgs/util\Math.cpp (function ?getOrientId@Math@RBX@@SAHABVMatrix3@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Math.cpp
