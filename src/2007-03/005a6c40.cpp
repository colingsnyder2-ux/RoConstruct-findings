// roc 2007-03 005a6c40  unit: seg_005a0000  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005a6c40
//
// 005a6c40  83ec0c               sub esp, 0xc
// 005a6c43  56                   push esi
// 005a6c44  57                   push edi
// 005a6c45  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 005a6c49  6a00                 push 0
// 005a6c4b  8d44240c             lea eax, [esp + 0xc]
// 005a6c4f  50                   push eax
// 005a6c50  8bcf                 mov ecx, edi
// 005a6c52  e8997df5ff           call 0x4fe9f0
// 005a6c57  50                   push eax
// 005a6c58  e8e3dc0000           call 0x5b4940
// 005a6c5d  83c404               add esp, 4
// 005a6c60  6a01                 push 1
// 005a6c62  8d4c240c             lea ecx, [esp + 0xc]
// 005a6c66  51                   push ecx
// 005a6c67  8bcf                 mov ecx, edi
// 005a6c69  8bf0                 mov esi, eax
// 005a6c6b  e8807df5ff           call 0x4fe9f0
// 005a6c70  50                   push eax
// 005a6c71  e8cadc0000           call 0x5b4940
// 005a6c76  83c404               add esp, 4
// 005a6c79  8d1476               lea edx, [esi + esi*2]
// 005a6c7c  5f                   pop edi
// 005a6c7d  8d0450               lea eax, [eax + edx*2]
// 005a6c80  5e                   pop esi
// 005a6c81  83c40c               add esp, 0xc
// 005a6c84  c3                   ret 
// library rbxgs/util\Math.cpp (function ?getOrientId@Math@RBX@@SAHABVMatrix3@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Math.cpp
