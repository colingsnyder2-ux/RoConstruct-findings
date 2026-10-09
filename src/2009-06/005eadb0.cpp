// roc 2009-06 005eadb0  unit: G3D::VVector3::?$TypedPropertyDescriptor  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005eadb0
//
// 005eadb0  64a100000000         mov eax, dword ptr fs:[0]
// 005eadb6  6aff                 push -1
// 005eadb8  68de4e8600           push 0x864ede
// 005eadbd  50                   push eax
// 005eadbe  b801000000           mov eax, 1
// 005eadc3  64892500000000       mov dword ptr fs:[0], esp
// 005eadca  8405c05ca400         test byte ptr [0xa45cc0], al
// 005eadd0  7530                 jne 0x5eae02
// 005eadd2  0905c05ca400         or dword ptr [0xa45cc0], eax
// 005eadd8  68682b8e00           push 0x8e2b68
// 005eaddd  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005eade5  e806f7e1ff           call 0x40a4f0
// 005eadea  50                   push eax
// 005eadeb  b9005ca400           mov ecx, 0xa45c00
// 005eadf0  e8ebe90000           call 0x5f97e0
// 005eadf5  6870888900           push 0x898870
// 005eadfa  e8fcec1200           call 0x719afb
// 005eadff  83c404               add esp, 4
// 005eae02  8b0c24               mov ecx, dword ptr [esp]
// 005eae05  b8005ca400           mov eax, 0xa45c00
// 005eae0a  64890d00000000       mov dword ptr fs:[0], ecx
// 005eae11  83c40c               add esp, 0xc
// 005eae14  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
