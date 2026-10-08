// roc 2009-12 00449450  unit: RBX::Reflection::M::?$TypedPropertyDescriptor  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00449450
//
// 00449450  64a100000000         mov eax, dword ptr fs:[0]
// 00449456  6aff                 push -1
// 00449458  68eeab9200           push 0x92abee
// 0044945d  50                   push eax
// 0044945e  b801000000           mov eax, 1
// 00449463  64892500000000       mov dword ptr fs:[0], esp
// 0044946a  84053cabb700         test byte ptr [0xb7ab3c], al
// 00449470  7525                 jne 0x449497
// 00449472  09053cabb700         or dword ptr [0xb7ab3c], eax
// 00449478  b950aab700           mov ecx, 0xb7aa50
// 0044947d  c744240800000000     mov dword ptr [esp + 8], 0
// 00449485  e806f4ffff           call 0x448890
// 0044948a  68d0e59700           push 0x97e5d0
// 0044948f  e895b43a00           call 0x7f4929
// 00449494  83c404               add esp, 4
// 00449497  8b0c24               mov ecx, dword ptr [esp]
// 0044949a  b850aab700           mov eax, 0xb7aa50
// 0044949f  64890d00000000       mov dword ptr fs:[0], ecx
// 004494a6  83c40c               add esp, 0xc
// 004494a9  c3                   ret 
// library rbxgs-appdraw/Fonts.cpp (function ?singleton@ContentProvider@RBX@@SAAAV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw Fonts.cpp
