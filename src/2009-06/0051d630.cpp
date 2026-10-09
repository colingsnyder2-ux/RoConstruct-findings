// roc 2009-06 0051d630  unit: RBX::VBlockMesh::?$FactoryProduct  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0051d630
//
// 0051d630  64a100000000         mov eax, dword ptr fs:[0]
// 0051d636  6aff                 push -1
// 0051d638  68dee08500           push 0x85e0de
// 0051d63d  50                   push eax
// 0051d63e  b801000000           mov eax, 1
// 0051d643  64892500000000       mov dword ptr fs:[0], esp
// 0051d64a  8405c814a400         test byte ptr [0xa414c8], al
// 0051d650  7530                 jne 0x51d682
// 0051d652  0905c814a400         or dword ptr [0xa414c8], eax
// 0051d658  68a09ea100           push 0xa19ea0
// 0051d65d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0051d665  e856ffffff           call 0x51d5c0
// 0051d66a  50                   push eax
// 0051d66b  b90814a400           mov ecx, 0xa41408
// 0051d670  e86bc10d00           call 0x5f97e0
// 0051d675  6870658900           push 0x896570
// 0051d67a  e87cc41f00           call 0x719afb
// 0051d67f  83c404               add esp, 4
// 0051d682  8b0c24               mov ecx, dword ptr [esp]
// 0051d685  b80814a400           mov eax, 0xa41408
// 0051d68a  64890d00000000       mov dword ptr fs:[0], ecx
// 0051d691  83c40c               add esp, 0xc
// 0051d694  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
