// roc 2009-06 0051d5c0  unit: RBX::VBlockMesh::?$FactoryProduct  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0051d5c0
//
// 0051d5c0  64a100000000         mov eax, dword ptr fs:[0]
// 0051d5c6  6aff                 push -1
// 0051d5c8  68bee08500           push 0x85e0be
// 0051d5cd  50                   push eax
// 0051d5ce  b801000000           mov eax, 1
// 0051d5d3  64892500000000       mov dword ptr fs:[0], esp
// 0051d5da  84050014a400         test byte ptr [0xa41400], al
// 0051d5e0  7530                 jne 0x51d612
// 0051d5e2  09050014a400         or dword ptr [0xa41400], eax
// 0051d5e8  68105a8e00           push 0x8e5a10
// 0051d5ed  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0051d5f5  e8f6ceeeff           call 0x40a4f0
// 0051d5fa  50                   push eax
// 0051d5fb  b94013a400           mov ecx, 0xa41340
// 0051d600  e8dbc10d00           call 0x5f97e0
// 0051d605  6880658900           push 0x896580
// 0051d60a  e8ecc41f00           call 0x719afb
// 0051d60f  83c404               add esp, 4
// 0051d612  8b0c24               mov ecx, dword ptr [esp]
// 0051d615  b84013a400           mov eax, 0xa41340
// 0051d61a  64890d00000000       mov dword ptr fs:[0], ecx
// 0051d621  83c40c               add esp, 0xc
// 0051d624  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
