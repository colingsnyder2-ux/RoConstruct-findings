// roc 2009-06 004bce90  unit: RBX::VTimerService::?$FactoryProduct::Creator  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004bce90
//
// 004bce90  64a100000000         mov eax, dword ptr fs:[0]
// 004bce96  6aff                 push -1
// 004bce98  68fe928500           push 0x8592fe
// 004bce9d  50                   push eax
// 004bce9e  b801000000           mov eax, 1
// 004bcea3  64892500000000       mov dword ptr fs:[0], esp
// 004bceaa  8405b0d7a300         test byte ptr [0xa3d7b0], al
// 004bceb0  7530                 jne 0x4bcee2
// 004bceb2  0905b0d7a300         or dword ptr [0xa3d7b0], eax
// 004bceb8  68a03d8e00           push 0x8e3da0
// 004bcebd  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 004bcec5  e8c6f5ffff           call 0x4bc490
// 004bceca  50                   push eax
// 004bcecb  b9f0d6a300           mov ecx, 0xa3d6f0
// 004bced0  e80bc91300           call 0x5f97e0
// 004bced5  68f0508900           push 0x8950f0
// 004bceda  e81ccc2500           call 0x719afb
// 004bcedf  83c404               add esp, 4
// 004bcee2  8b0c24               mov ecx, dword ptr [esp]
// 004bcee5  b8f0d6a300           mov eax, 0xa3d6f0
// 004bceea  64890d00000000       mov dword ptr fs:[0], ecx
// 004bcef1  83c40c               add esp, 0xc
// 004bcef4  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
