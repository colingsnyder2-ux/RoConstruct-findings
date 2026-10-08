// roc 2007-03 0056d240  unit: seg_00560000  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0056d240
//
// 0056d240  64a100000000         mov eax, dword ptr fs:[0]
// 0056d246  6aff                 push -1
// 0056d248  683e5e7500           push 0x755e3e
// 0056d24d  50                   push eax
// 0056d24e  b801000000           mov eax, 1
// 0056d253  64892500000000       mov dword ptr fs:[0], esp
// 0056d25a  840550c78b00         test byte ptr [0x8bc750], al
// 0056d260  752f                 jne 0x56d291
// 0056d262  090550c78b00         or dword ptr [0x8bc750], eax
// 0056d268  6894198800           push 0x881994
// 0056d26d  681c987900           push 0x79981c
// 0056d272  b940c78b00           mov ecx, 0x8bc740
// 0056d277  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0056d27f  e8ccefffff           call 0x56c250
// 0056d284  68c09c7700           push 0x779cc0
// 0056d289  e8251f0b00           call 0x61f1b3
// 0056d28e  83c404               add esp, 4
// 0056d291  8b0c24               mov ecx, dword ptr [esp]
// 0056d294  b840c78b00           mov eax, 0x8bc740
// 0056d299  64890d00000000       mov dword ptr fs:[0], ecx
// 0056d2a0  83c40c               add esp, 0xc
// 0056d2a3  c3                   ret 
// library rbxgs/v8tree\EnumProperty.cpp (function ??$singleton@_N@Type@Reflection@RBX@@SAABV012@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/EnumProperty.cpp
