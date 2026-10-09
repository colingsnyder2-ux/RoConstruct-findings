// roc 2009-06 004cfcf0  unit: W4PacketReliability::?$EnumDesc  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004cfcf0
//
// 004cfcf0  64a100000000         mov eax, dword ptr fs:[0]
// 004cfcf6  6aff                 push -1
// 004cfcf8  68feab8500           push 0x85abfe
// 004cfcfd  50                   push eax
// 004cfcfe  b801000000           mov eax, 1
// 004cfd03  64892500000000       mov dword ptr fs:[0], esp
// 004cfd0a  8405b8e5a300         test byte ptr [0xa3e5b8], al
// 004cfd10  7530                 jne 0x4cfd42
// 004cfd12  0905b8e5a300         or dword ptr [0xa3e5b8], eax
// 004cfd18  68e8598c00           push 0x8c59e8
// 004cfd1d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 004cfd25  e8c6a7f3ff           call 0x40a4f0
// 004cfd2a  50                   push eax
// 004cfd2b  b9f8e4a300           mov ecx, 0xa3e4f8
// 004cfd30  e8ab9a1200           call 0x5f97e0
// 004cfd35  6830598900           push 0x895930
// 004cfd3a  e8bc9d2400           call 0x719afb
// 004cfd3f  83c404               add esp, 4
// 004cfd42  8b0c24               mov ecx, dword ptr [esp]
// 004cfd45  b8f8e4a300           mov eax, 0xa3e4f8
// 004cfd4a  64890d00000000       mov dword ptr fs:[0], ecx
// 004cfd51  83c40c               add esp, 0xc
// 004cfd54  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
