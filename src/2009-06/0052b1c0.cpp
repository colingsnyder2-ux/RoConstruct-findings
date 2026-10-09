// roc 2009-06 0052b1c0  unit: RBX::VCylinderMesh::?$FactoryProduct  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0052b1c0
//
// 0052b1c0  64a100000000         mov eax, dword ptr fs:[0]
// 0052b1c6  6aff                 push -1
// 0052b1c8  68ceec8500           push 0x85ecce
// 0052b1cd  50                   push eax
// 0052b1ce  b801000000           mov eax, 1
// 0052b1d3  64892500000000       mov dword ptr fs:[0], esp
// 0052b1da  8405201aa400         test byte ptr [0xa41a20], al
// 0052b1e0  7530                 jne 0x52b212
// 0052b1e2  0905201aa400         or dword ptr [0xa41a20], eax
// 0052b1e8  689ca3a100           push 0xa1a39c
// 0052b1ed  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0052b1f5  e83624ffff           call 0x51d630
// 0052b1fa  50                   push eax
// 0052b1fb  b96019a400           mov ecx, 0xa41960
// 0052b200  e8dbe50c00           call 0x5f97e0
// 0052b205  6890668900           push 0x896690
// 0052b20a  e8ece81e00           call 0x719afb
// 0052b20f  83c404               add esp, 4
// 0052b212  8b0c24               mov ecx, dword ptr [esp]
// 0052b215  b86019a400           mov eax, 0xa41960
// 0052b21a  64890d00000000       mov dword ptr fs:[0], ecx
// 0052b221  83c40c               add esp, 0xc
// 0052b224  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
