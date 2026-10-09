// roc 2009-06 0045ca30  unit: RBX::AdornG3D  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0045ca30
//
// 0045ca30  64a100000000         mov eax, dword ptr fs:[0]
// 0045ca36  6aff                 push -1
// 0045ca38  68de258500           push 0x8525de
// 0045ca3d  50                   push eax
// 0045ca3e  b801000000           mov eax, 1
// 0045ca43  64892500000000       mov dword ptr fs:[0], esp
// 0045ca4a  8405d0b5a300         test byte ptr [0xa3b5d0], al
// 0045ca50  7530                 jne 0x45ca82
// 0045ca52  0905d0b5a300         or dword ptr [0xa3b5d0], eax
// 0045ca58  683c18a100           push 0xa1183c
// 0045ca5d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0045ca65  e886dafaff           call 0x40a4f0
// 0045ca6a  50                   push eax
// 0045ca6b  b910b5a300           mov ecx, 0xa3b510
// 0045ca70  e86bcd1900           call 0x5f97e0
// 0045ca75  68704b8900           push 0x894b70
// 0045ca7a  e87cd02b00           call 0x719afb
// 0045ca7f  83c404               add esp, 4
// 0045ca82  8b0c24               mov ecx, dword ptr [esp]
// 0045ca85  b810b5a300           mov eax, 0xa3b510
// 0045ca8a  64890d00000000       mov dword ptr fs:[0], ecx
// 0045ca91  83c40c               add esp, 0xc
// 0045ca94  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
