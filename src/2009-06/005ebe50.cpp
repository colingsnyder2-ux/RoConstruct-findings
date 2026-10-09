// roc 2009-06 005ebe50  unit: G3D::VVector3::?$TypedPropertyDescriptor  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005ebe50
//
// 005ebe50  64a100000000         mov eax, dword ptr fs:[0]
// 005ebe56  6aff                 push -1
// 005ebe58  689e538600           push 0x86539e
// 005ebe5d  50                   push eax
// 005ebe5e  b801000000           mov eax, 1
// 005ebe63  64892500000000       mov dword ptr fs:[0], esp
// 005ebe6a  8405707aa400         test byte ptr [0xa47a70], al
// 005ebe70  7530                 jne 0x5ebea2
// 005ebe72  0905707aa400         or dword ptr [0xa47a70], eax
// 005ebe78  68489c8e00           push 0x8e9c48
// 005ebe7d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005ebe85  e866e6e1ff           call 0x40a4f0
// 005ebe8a  50                   push eax
// 005ebe8b  b9b079a400           mov ecx, 0xa479b0
// 005ebe90  e84bd90000           call 0x5f97e0
// 005ebe95  6810868900           push 0x898610
// 005ebe9a  e85cdc1200           call 0x719afb
// 005ebe9f  83c404               add esp, 4
// 005ebea2  8b0c24               mov ecx, dword ptr [esp]
// 005ebea5  b8b079a400           mov eax, 0xa479b0
// 005ebeaa  64890d00000000       mov dword ptr fs:[0], ecx
// 005ebeb1  83c40c               add esp, 0xc
// 005ebeb4  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
