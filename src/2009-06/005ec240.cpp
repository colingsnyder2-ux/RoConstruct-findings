// roc 2009-06 005ec240  unit: G3D::VVector3::?$TypedPropertyDescriptor  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005ec240
//
// 005ec240  64a100000000         mov eax, dword ptr fs:[0]
// 005ec246  6aff                 push -1
// 005ec248  68be548600           push 0x8654be
// 005ec24d  50                   push eax
// 005ec24e  b801000000           mov eax, 1
// 005ec253  64892500000000       mov dword ptr fs:[0], esp
// 005ec25a  84057881a400         test byte ptr [0xa48178], al
// 005ec260  7530                 jne 0x5ec292
// 005ec262  09057881a400         or dword ptr [0xa48178], eax
// 005ec268  683c7ca100           push 0xa17c3c
// 005ec26d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005ec275  e876e2e1ff           call 0x40a4f0
// 005ec27a  50                   push eax
// 005ec27b  b9b880a400           mov ecx, 0xa480b8
// 005ec280  e85bd50000           call 0x5f97e0
// 005ec285  6880858900           push 0x898580
// 005ec28a  e86cd81200           call 0x719afb
// 005ec28f  83c404               add esp, 4
// 005ec292  8b0c24               mov ecx, dword ptr [esp]
// 005ec295  b8b880a400           mov eax, 0xa480b8
// 005ec29a  64890d00000000       mov dword ptr fs:[0], ecx
// 005ec2a1  83c40c               add esp, 0xc
// 005ec2a4  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
