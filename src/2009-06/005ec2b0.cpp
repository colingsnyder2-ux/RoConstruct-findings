// roc 2009-06 005ec2b0  unit: G3D::VVector3::?$TypedPropertyDescriptor  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005ec2b0
//
// 005ec2b0  64a100000000         mov eax, dword ptr fs:[0]
// 005ec2b6  6aff                 push -1
// 005ec2b8  68de548600           push 0x8654de
// 005ec2bd  50                   push eax
// 005ec2be  b801000000           mov eax, 1
// 005ec2c3  64892500000000       mov dword ptr fs:[0], esp
// 005ec2ca  84054082a400         test byte ptr [0xa48240], al
// 005ec2d0  7530                 jne 0x5ec302
// 005ec2d2  09054082a400         or dword ptr [0xa48240], eax
// 005ec2d8  68d0938e00           push 0x8e93d0
// 005ec2dd  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005ec2e5  e806e2e1ff           call 0x40a4f0
// 005ec2ea  50                   push eax
// 005ec2eb  b98081a400           mov ecx, 0xa48180
// 005ec2f0  e8ebd40000           call 0x5f97e0
// 005ec2f5  6870858900           push 0x898570
// 005ec2fa  e8fcd71200           call 0x719afb
// 005ec2ff  83c404               add esp, 4
// 005ec302  8b0c24               mov ecx, dword ptr [esp]
// 005ec305  b88081a400           mov eax, 0xa48180
// 005ec30a  64890d00000000       mov dword ptr fs:[0], ecx
// 005ec311  83c40c               add esp, 0xc
// 005ec314  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
