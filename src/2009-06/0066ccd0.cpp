// roc 2009-06 0066ccd0  unit: RBX::VHumanoid::?$EventDesc  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0066ccd0
//
// 0066ccd0  83ec0c               sub esp, 0xc
// 0066ccd3  56                   push esi
// 0066ccd4  57                   push edi
// 0066ccd5  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0066ccd9  6a00                 push 0
// 0066ccdb  8d44240c             lea eax, [esp + 0xc]
// 0066ccdf  50                   push eax
// 0066cce0  8bcf                 mov ecx, edi
// 0066cce2  e8c9aef0ff           call 0x577bb0
// 0066cce7  50                   push eax
// 0066cce8  e843610100           call 0x682e30
// 0066cced  83c404               add esp, 4
// 0066ccf0  6a01                 push 1
// 0066ccf2  8d4c240c             lea ecx, [esp + 0xc]
// 0066ccf6  51                   push ecx
// 0066ccf7  8bcf                 mov ecx, edi
// 0066ccf9  8bf0                 mov esi, eax
// 0066ccfb  e8b0aef0ff           call 0x577bb0
// 0066cd00  50                   push eax
// 0066cd01  e82a610100           call 0x682e30
// 0066cd06  83c404               add esp, 4
// 0066cd09  8d1476               lea edx, [esi + esi*2]
// 0066cd0c  5f                   pop edi
// 0066cd0d  8d0450               lea eax, [eax + edx*2]
// 0066cd10  5e                   pop esi
// 0066cd11  83c40c               add esp, 0xc
// 0066cd14  c3                   ret 
// library rbxgs/util\Math.cpp (function ?getOrientId@Math@RBX@@SAHABVMatrix3@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Math.cpp
