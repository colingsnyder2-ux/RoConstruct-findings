// roc 2009-06 004cfdd0  unit: W4PacketReliability::?$EnumDesc  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004cfdd0
//
// 004cfdd0  64a100000000         mov eax, dword ptr fs:[0]
// 004cfdd6  6aff                 push -1
// 004cfdd8  683eac8500           push 0x85ac3e
// 004cfddd  50                   push eax
// 004cfdde  b801000000           mov eax, 1
// 004cfde3  64892500000000       mov dword ptr fs:[0], esp
// 004cfdea  840548e7a300         test byte ptr [0xa3e748], al
// 004cfdf0  7530                 jne 0x4cfe22
// 004cfdf2  090548e7a300         or dword ptr [0xa3e748], eax
// 004cfdf8  68d0229f00           push 0x9f22d0
// 004cfdfd  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 004cfe05  e876f7ffff           call 0x4cf580
// 004cfe0a  50                   push eax
// 004cfe0b  b988e6a300           mov ecx, 0xa3e688
// 004cfe10  e8cb991200           call 0x5f97e0
// 004cfe15  6810598900           push 0x895910
// 004cfe1a  e8dc9c2400           call 0x719afb
// 004cfe1f  83c404               add esp, 4
// 004cfe22  8b0c24               mov ecx, dword ptr [esp]
// 004cfe25  b888e6a300           mov eax, 0xa3e688
// 004cfe2a  64890d00000000       mov dword ptr fs:[0], ecx
// 004cfe31  83c40c               add esp, 0xc
// 004cfe34  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
