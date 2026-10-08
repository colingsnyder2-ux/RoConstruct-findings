// roc 2011-06 006cd000  unit: RBX::Mechanism  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006cd000
//
// 006cd000  83ec0c               sub esp, 0xc
// 006cd003  56                   push esi
// 006cd004  57                   push edi
// 006cd005  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 006cd009  6a00                 push 0
// 006cd00b  8d44240c             lea eax, [esp + 0xc]
// 006cd00f  50                   push eax
// 006cd010  8bcf                 mov ecx, edi
// 006cd012  e8c930e7ff           call 0x5400e0
// 006cd017  50                   push eax
// 006cd018  e873780c00           call 0x794890
// 006cd01d  83c404               add esp, 4
// 006cd020  6a01                 push 1
// 006cd022  8d4c240c             lea ecx, [esp + 0xc]
// 006cd026  51                   push ecx
// 006cd027  8bcf                 mov ecx, edi
// 006cd029  8bf0                 mov esi, eax
// 006cd02b  e8b030e7ff           call 0x5400e0
// 006cd030  50                   push eax
// 006cd031  e85a780c00           call 0x794890
// 006cd036  83c404               add esp, 4
// 006cd039  8d1476               lea edx, [esi + esi*2]
// 006cd03c  5f                   pop edi
// 006cd03d  8d0450               lea eax, [eax + edx*2]
// 006cd040  5e                   pop esi
// 006cd041  83c40c               add esp, 0xc
// 006cd044  c3                   ret 
// library rbxgs/util\Math.cpp (function ?getOrientId@Math@RBX@@SAHABVMatrix3@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Math.cpp
