// roc 2008-06 005ddc90  unit: RBX::Message  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ddc90
//
// 005ddc90  83ec0c               sub esp, 0xc
// 005ddc93  56                   push esi
// 005ddc94  57                   push edi
// 005ddc95  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 005ddc99  6a00                 push 0
// 005ddc9b  8d44240c             lea eax, [esp + 0xc]
// 005ddc9f  50                   push eax
// 005ddca0  8bcf                 mov ecx, edi
// 005ddca2  e89955f3ff           call 0x513240
// 005ddca7  50                   push eax
// 005ddca8  e8e3e50000           call 0x5ec290
// 005ddcad  83c404               add esp, 4
// 005ddcb0  6a01                 push 1
// 005ddcb2  8d4c240c             lea ecx, [esp + 0xc]
// 005ddcb6  51                   push ecx
// 005ddcb7  8bcf                 mov ecx, edi
// 005ddcb9  8bf0                 mov esi, eax
// 005ddcbb  e88055f3ff           call 0x513240
// 005ddcc0  50                   push eax
// 005ddcc1  e8cae50000           call 0x5ec290
// 005ddcc6  83c404               add esp, 4
// 005ddcc9  8d1476               lea edx, [esi + esi*2]
// 005ddccc  5f                   pop edi
// 005ddccd  8d0450               lea eax, [eax + edx*2]
// 005ddcd0  5e                   pop esi
// 005ddcd1  83c40c               add esp, 0xc
// 005ddcd4  c3                   ret 
// library rbxgs/util\Math.cpp (function ?getOrientId@Math@RBX@@SAHABVMatrix3@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Math.cpp
