// roc 2009-06 004cfc80  unit: W4PacketReliability::?$EnumDesc  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004cfc80
//
// 004cfc80  64a100000000         mov eax, dword ptr fs:[0]
// 004cfc86  6aff                 push -1
// 004cfc88  68deab8500           push 0x85abde
// 004cfc8d  50                   push eax
// 004cfc8e  b801000000           mov eax, 1
// 004cfc93  64892500000000       mov dword ptr fs:[0], esp
// 004cfc9a  8405f0e4a300         test byte ptr [0xa3e4f0], al
// 004cfca0  7530                 jne 0x4cfcd2
// 004cfca2  0905f0e4a300         or dword ptr [0xa3e4f0], eax
// 004cfca8  6848808d00           push 0x8d8048
// 004cfcad  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 004cfcb5  e856f8ffff           call 0x4cf510
// 004cfcba  50                   push eax
// 004cfcbb  b930e4a300           mov ecx, 0xa3e430
// 004cfcc0  e81b9b1200           call 0x5f97e0
// 004cfcc5  6840598900           push 0x895940
// 004cfcca  e82c9e2400           call 0x719afb
// 004cfccf  83c404               add esp, 4
// 004cfcd2  8b0c24               mov ecx, dword ptr [esp]
// 004cfcd5  b830e4a300           mov eax, 0xa3e430
// 004cfcda  64890d00000000       mov dword ptr fs:[0], ecx
// 004cfce1  83c40c               add esp, 0xc
// 004cfce4  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
