// roc 2009-06 004babe0  unit: RBX::Network::Player  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004babe0
//
// 004babe0  64a100000000         mov eax, dword ptr fs:[0]
// 004babe6  6aff                 push -1
// 004babe8  68de918500           push 0x8591de
// 004babed  50                   push eax
// 004babee  b801000000           mov eax, 1
// 004babf3  64892500000000       mov dword ptr fs:[0], esp
// 004babfa  8405f8d5a300         test byte ptr [0xa3d5f8], al
// 004bac00  7530                 jne 0x4bac32
// 004bac02  0905f8d5a300         or dword ptr [0xa3d5f8], eax
// 004bac08  6884c39e00           push 0x9ec384
// 004bac0d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 004bac15  e8d6f8f4ff           call 0x40a4f0
// 004bac1a  50                   push eax
// 004bac1b  b938d5a300           mov ecx, 0xa3d538
// 004bac20  e8bbeb1300           call 0x5f97e0
// 004bac25  68d0508900           push 0x8950d0
// 004bac2a  e8ccee2500           call 0x719afb
// 004bac2f  83c404               add esp, 4
// 004bac32  8b0c24               mov ecx, dword ptr [esp]
// 004bac35  b838d5a300           mov eax, 0xa3d538
// 004bac3a  64890d00000000       mov dword ptr fs:[0], ecx
// 004bac41  83c40c               add esp, 0xc
// 004bac44  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
