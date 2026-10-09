// roc 2009-06 005ebc20  unit: G3D::VVector3::?$TypedPropertyDescriptor  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005ebc20
//
// 005ebc20  64a100000000         mov eax, dword ptr fs:[0]
// 005ebc26  6aff                 push -1
// 005ebc28  68fe528600           push 0x8652fe
// 005ebc2d  50                   push eax
// 005ebc2e  b801000000           mov eax, 1
// 005ebc33  64892500000000       mov dword ptr fs:[0], esp
// 005ebc3a  84058876a400         test byte ptr [0xa47688], al
// 005ebc40  7530                 jne 0x5ebc72
// 005ebc42  09058876a400         or dword ptr [0xa47688], eax
// 005ebc48  6820cfa100           push 0xa1cf20
// 005ebc4d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005ebc55  e896e8e1ff           call 0x40a4f0
// 005ebc5a  50                   push eax
// 005ebc5b  b9c875a400           mov ecx, 0xa475c8
// 005ebc60  e87bdb0000           call 0x5f97e0
// 005ebc65  6860868900           push 0x898660
// 005ebc6a  e88cde1200           call 0x719afb
// 005ebc6f  83c404               add esp, 4
// 005ebc72  8b0c24               mov ecx, dword ptr [esp]
// 005ebc75  b8c875a400           mov eax, 0xa475c8
// 005ebc7a  64890d00000000       mov dword ptr fs:[0], ecx
// 005ebc81  83c40c               add esp, 0xc
// 005ebc84  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
