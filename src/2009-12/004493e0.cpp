// roc 2009-12 004493e0  unit: RBX::Reflection::M::?$TypedPropertyDescriptor  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004493e0
//
// 004493e0  64a100000000         mov eax, dword ptr fs:[0]
// 004493e6  6aff                 push -1
// 004493e8  68ceab9200           push 0x92abce
// 004493ed  50                   push eax
// 004493ee  b801000000           mov eax, 1
// 004493f3  64892500000000       mov dword ptr fs:[0], esp
// 004493fa  84054caab700         test byte ptr [0xb7aa4c], al
// 00449400  7525                 jne 0x449427
// 00449402  09054caab700         or dword ptr [0xb7aa4c], eax
// 00449408  b960a9b700           mov ecx, 0xb7a960
// 0044940d  c744240800000000     mov dword ptr [esp + 8], 0
// 00449415  e8f6f2ffff           call 0x448710
// 0044941a  68e0e59700           push 0x97e5e0
// 0044941f  e805b53a00           call 0x7f4929
// 00449424  83c404               add esp, 4
// 00449427  8b0c24               mov ecx, dword ptr [esp]
// 0044942a  b860a9b700           mov eax, 0xb7a960
// 0044942f  64890d00000000       mov dword ptr fs:[0], ecx
// 00449436  83c40c               add esp, 0xc
// 00449439  c3                   ret 
// library rbxgs-appdraw/Fonts.cpp (function ?singleton@ContentProvider@RBX@@SAAAV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw Fonts.cpp
