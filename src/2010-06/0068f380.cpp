// roc 2010-06 0068f380  unit: RBX::Mechanism  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0068f380
//
// 0068f380  83ec0c               sub esp, 0xc
// 0068f383  56                   push esi
// 0068f384  57                   push edi
// 0068f385  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0068f389  6a00                 push 0
// 0068f38b  8d44240c             lea eax, [esp + 0xc]
// 0068f38f  50                   push eax
// 0068f390  8bcf                 mov ecx, edi
// 0068f392  e8696decff           call 0x556100
// 0068f397  50                   push eax
// 0068f398  e8b39b0a00           call 0x738f50
// 0068f39d  83c404               add esp, 4
// 0068f3a0  6a01                 push 1
// 0068f3a2  8d4c240c             lea ecx, [esp + 0xc]
// 0068f3a6  51                   push ecx
// 0068f3a7  8bcf                 mov ecx, edi
// 0068f3a9  8bf0                 mov esi, eax
// 0068f3ab  e8506decff           call 0x556100
// 0068f3b0  50                   push eax
// 0068f3b1  e89a9b0a00           call 0x738f50
// 0068f3b6  83c404               add esp, 4
// 0068f3b9  8d1476               lea edx, [esi + esi*2]
// 0068f3bc  5f                   pop edi
// 0068f3bd  8d0450               lea eax, [eax + edx*2]
// 0068f3c0  5e                   pop esi
// 0068f3c1  83c40c               add esp, 0xc
// 0068f3c4  c3                   ret 
// library rbxgs/util\Math.cpp (function ?getOrientId@Math@RBX@@SAHABVMatrix3@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Math.cpp
