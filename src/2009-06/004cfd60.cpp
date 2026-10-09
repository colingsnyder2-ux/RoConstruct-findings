// roc 2009-06 004cfd60  unit: W4PacketReliability::?$EnumDesc  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004cfd60
//
// 004cfd60  64a100000000         mov eax, dword ptr fs:[0]
// 004cfd66  6aff                 push -1
// 004cfd68  681eac8500           push 0x85ac1e
// 004cfd6d  50                   push eax
// 004cfd6e  b801000000           mov eax, 1
// 004cfd73  64892500000000       mov dword ptr fs:[0], esp
// 004cfd7a  840580e6a300         test byte ptr [0xa3e680], al
// 004cfd80  7530                 jne 0x4cfdb2
// 004cfd82  090580e6a300         or dword ptr [0xa3e680], eax
// 004cfd88  6880079f00           push 0x9f0780
// 004cfd8d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 004cfd95  e8e6f7ffff           call 0x4cf580
// 004cfd9a  50                   push eax
// 004cfd9b  b9c0e5a300           mov ecx, 0xa3e5c0
// 004cfda0  e83b9a1200           call 0x5f97e0
// 004cfda5  6820598900           push 0x895920
// 004cfdaa  e84c9d2400           call 0x719afb
// 004cfdaf  83c404               add esp, 4
// 004cfdb2  8b0c24               mov ecx, dword ptr [esp]
// 004cfdb5  b8c0e5a300           mov eax, 0xa3e5c0
// 004cfdba  64890d00000000       mov dword ptr fs:[0], ecx
// 004cfdc1  83c40c               add esp, 0xc
// 004cfdc4  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
