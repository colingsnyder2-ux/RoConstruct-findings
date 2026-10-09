// roc 2009-06 0051d8c0  unit: RBX::VBlockMesh::?$FactoryProduct  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0051d8c0
//
// 0051d8c0  64a100000000         mov eax, dword ptr fs:[0]
// 0051d8c6  6aff                 push -1
// 0051d8c8  682ee18500           push 0x85e12e
// 0051d8cd  50                   push eax
// 0051d8ce  b801000000           mov eax, 1
// 0051d8d3  64892500000000       mov dword ptr fs:[0], esp
// 0051d8da  84059015a400         test byte ptr [0xa41590], al
// 0051d8e0  7530                 jne 0x51d912
// 0051d8e2  09059015a400         or dword ptr [0xa41590], eax
// 0051d8e8  68909ea100           push 0xa19e90
// 0051d8ed  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0051d8f5  e836fdffff           call 0x51d630
// 0051d8fa  50                   push eax
// 0051d8fb  b9d014a400           mov ecx, 0xa414d0
// 0051d900  e8dbbe0d00           call 0x5f97e0
// 0051d905  6860658900           push 0x896560
// 0051d90a  e8ecc11f00           call 0x719afb
// 0051d90f  83c404               add esp, 4
// 0051d912  8b0c24               mov ecx, dword ptr [esp]
// 0051d915  b8d014a400           mov eax, 0xa414d0
// 0051d91a  64890d00000000       mov dword ptr fs:[0], ecx
// 0051d921  83c40c               add esp, 0xc
// 0051d924  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
