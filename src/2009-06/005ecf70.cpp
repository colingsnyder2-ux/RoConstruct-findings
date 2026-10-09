// roc 2009-06 005ecf70  unit: seg_005e0000  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005ecf70
//
// 005ecf70  64a100000000         mov eax, dword ptr fs:[0]
// 005ecf76  6aff                 push -1
// 005ecf78  681e578600           push 0x86571e
// 005ecf7d  50                   push eax
// 005ecf7e  b801000000           mov eax, 1
// 005ecf83  64892500000000       mov dword ptr fs:[0], esp
// 005ecf8a  84055090a400         test byte ptr [0xa49050], al
// 005ecf90  7530                 jne 0x5ecfc2
// 005ecf92  09055090a400         or dword ptr [0xa49050], eax
// 005ecf98  68bcafa100           push 0xa1afbc
// 005ecf9d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005ecfa5  e846d5e1ff           call 0x40a4f0
// 005ecfaa  50                   push eax
// 005ecfab  b9908fa400           mov ecx, 0xa48f90
// 005ecfb0  e82bc80000           call 0x5f97e0
// 005ecfb5  6850848900           push 0x898450
// 005ecfba  e83ccb1200           call 0x719afb
// 005ecfbf  83c404               add esp, 4
// 005ecfc2  8b0c24               mov ecx, dword ptr [esp]
// 005ecfc5  b8908fa400           mov eax, 0xa48f90
// 005ecfca  64890d00000000       mov dword ptr fs:[0], ecx
// 005ecfd1  83c40c               add esp, 0xc
// 005ecfd4  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
