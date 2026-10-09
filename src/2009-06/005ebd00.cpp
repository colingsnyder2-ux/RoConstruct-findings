// roc 2009-06 005ebd00  unit: G3D::VVector3::?$TypedPropertyDescriptor  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005ebd00
//
// 005ebd00  64a100000000         mov eax, dword ptr fs:[0]
// 005ebd06  6aff                 push -1
// 005ebd08  683e538600           push 0x86533e
// 005ebd0d  50                   push eax
// 005ebd0e  b801000000           mov eax, 1
// 005ebd13  64892500000000       mov dword ptr fs:[0], esp
// 005ebd1a  84051878a400         test byte ptr [0xa47818], al
// 005ebd20  7530                 jne 0x5ebd52
// 005ebd22  09051878a400         or dword ptr [0xa47818], eax
// 005ebd28  68f08f8e00           push 0x8e8ff0
// 005ebd2d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005ebd35  e8b6e7e1ff           call 0x40a4f0
// 005ebd3a  50                   push eax
// 005ebd3b  b95877a400           mov ecx, 0xa47758
// 005ebd40  e89bda0000           call 0x5f97e0
// 005ebd45  6840868900           push 0x898640
// 005ebd4a  e8acdd1200           call 0x719afb
// 005ebd4f  83c404               add esp, 4
// 005ebd52  8b0c24               mov ecx, dword ptr [esp]
// 005ebd55  b85877a400           mov eax, 0xa47758
// 005ebd5a  64890d00000000       mov dword ptr fs:[0], ecx
// 005ebd61  83c40c               add esp, 0xc
// 005ebd64  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
