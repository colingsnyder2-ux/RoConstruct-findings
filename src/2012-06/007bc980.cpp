// roc 2012-06 007bc980  unit: RBX::Geometry  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007bc980
//
// 007bc980  83ec0c               sub esp, 0xc
// 007bc983  56                   push esi
// 007bc984  57                   push edi
// 007bc985  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 007bc989  6a00                 push 0
// 007bc98b  8d44240c             lea eax, [esp + 0xc]
// 007bc98f  50                   push eax
// 007bc990  8bcf                 mov ecx, edi
// 007bc992  e849f9e6ff           call 0x62c2e0
// 007bc997  50                   push eax
// 007bc998  e8f3af0600           call 0x827990
// 007bc99d  83c404               add esp, 4
// 007bc9a0  6a01                 push 1
// 007bc9a2  8d4c240c             lea ecx, [esp + 0xc]
// 007bc9a6  51                   push ecx
// 007bc9a7  8bcf                 mov ecx, edi
// 007bc9a9  8bf0                 mov esi, eax
// 007bc9ab  e830f9e6ff           call 0x62c2e0
// 007bc9b0  50                   push eax
// 007bc9b1  e8daaf0600           call 0x827990
// 007bc9b6  83c404               add esp, 4
// 007bc9b9  8d1476               lea edx, [esi + esi*2]
// 007bc9bc  5f                   pop edi
// 007bc9bd  8d0450               lea eax, [eax + edx*2]
// 007bc9c0  5e                   pop esi
// 007bc9c1  83c40c               add esp, 0xc
// 007bc9c4  c3                   ret 
// library rbxgs/util\Math.cpp (function ?getOrientId@Math@RBX@@SAHABVMatrix3@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Math.cpp
