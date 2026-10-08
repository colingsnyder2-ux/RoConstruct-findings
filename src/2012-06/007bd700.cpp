// roc 2012-06 007bd700  unit: RBX::Geometry  size: 129 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007bd700
//
// 007bd700  64a100000000         mov eax, dword ptr fs:[0]
// 007bd706  6aff                 push -1
// 007bd708  68ee7aac00           push 0xac7aee
// 007bd70d  50                   push eax
// 007bd70e  b801000000           mov eax, 1
// 007bd713  64892500000000       mov dword ptr fs:[0], esp
// 007bd71a  840574b5e400         test byte ptr [0xe4b574], al
// 007bd720  754c                 jne 0x7bd76e
// 007bd722  090574b5e400         or dword ptr [0xe4b574], eax
// 007bd728  d9ee                 fldz 
// 007bd72a  83ec24               sub esp, 0x24
// 007bd72d  d9542420             fst dword ptr [esp + 0x20]
// 007bd731  d954241c             fst dword ptr [esp + 0x1c]
// 007bd735  b950b5e400           mov ecx, 0xe4b550
// 007bd73a  d905b8abb500         fld dword ptr [0xb5abb8]
// 007bd740  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 007bd748  d95c2418             fstp dword ptr [esp + 0x18]
// 007bd74c  d9542414             fst dword ptr [esp + 0x14]
// 007bd750  d9e8                 fld1 
// 007bd752  d9542410             fst dword ptr [esp + 0x10]
// 007bd756  d9c9                 fxch st(1)
// 007bd758  d954240c             fst dword ptr [esp + 0xc]
// 007bd75c  d9c9                 fxch st(1)
// 007bd75e  d95c2408             fstp dword ptr [esp + 8]
// 007bd762  d9542404             fst dword ptr [esp + 4]
// 007bd766  d91c24               fstp dword ptr [esp]
// 007bd769  e842fce6ff           call 0x62d3b0
// 007bd76e  8b0c24               mov ecx, dword ptr [esp]
// 007bd771  b850b5e400           mov eax, 0xe4b550
// 007bd776  64890d00000000       mov dword ptr fs:[0], ecx
// 007bd77d  83c40c               add esp, 0xc
// 007bd780  c3                   ret 
// library rbxgs/util\Math.cpp (function ?matrixRotateY@Math@RBX@@SAABVMatrix3@G3D@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Math.cpp
