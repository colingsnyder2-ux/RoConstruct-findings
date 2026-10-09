// roc 2009-06 005eae90  unit: G3D::VVector3::?$TypedPropertyDescriptor  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005eae90
//
// 005eae90  64a100000000         mov eax, dword ptr fs:[0]
// 005eae96  6aff                 push -1
// 005eae98  681e4f8600           push 0x864f1e
// 005eae9d  50                   push eax
// 005eae9e  b801000000           mov eax, 1
// 005eaea3  64892500000000       mov dword ptr fs:[0], esp
// 005eaeaa  8405505ea400         test byte ptr [0xa45e50], al
// 005eaeb0  7530                 jne 0x5eaee2
// 005eaeb2  0905505ea400         or dword ptr [0xa45e50], eax
// 005eaeb8  68b0eaa000           push 0xa0eab0
// 005eaebd  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005eaec5  e856ffffff           call 0x5eae20
// 005eaeca  50                   push eax
// 005eaecb  b9905da400           mov ecx, 0xa45d90
// 005eaed0  e80be90000           call 0x5f97e0
// 005eaed5  6850888900           push 0x898850
// 005eaeda  e81cec1200           call 0x719afb
// 005eaedf  83c404               add esp, 4
// 005eaee2  8b0c24               mov ecx, dword ptr [esp]
// 005eaee5  b8905da400           mov eax, 0xa45d90
// 005eaeea  64890d00000000       mov dword ptr fs:[0], ecx
// 005eaef1  83c40c               add esp, 0xc
// 005eaef4  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
