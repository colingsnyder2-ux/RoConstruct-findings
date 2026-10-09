// roc 2009-06 005ebde0  unit: G3D::VVector3::?$TypedPropertyDescriptor  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005ebde0
//
// 005ebde0  64a100000000         mov eax, dword ptr fs:[0]
// 005ebde6  6aff                 push -1
// 005ebde8  687e538600           push 0x86537e
// 005ebded  50                   push eax
// 005ebdee  b801000000           mov eax, 1
// 005ebdf3  64892500000000       mov dword ptr fs:[0], esp
// 005ebdfa  8405a879a400         test byte ptr [0xa479a8], al
// 005ebe00  7530                 jne 0x5ebe32
// 005ebe02  0905a879a400         or dword ptr [0xa479a8], eax
// 005ebe08  681c908e00           push 0x8e901c
// 005ebe0d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005ebe15  e8d6e6e1ff           call 0x40a4f0
// 005ebe1a  50                   push eax
// 005ebe1b  b9e878a400           mov ecx, 0xa478e8
// 005ebe20  e8bbd90000           call 0x5f97e0
// 005ebe25  6820868900           push 0x898620
// 005ebe2a  e8ccdc1200           call 0x719afb
// 005ebe2f  83c404               add esp, 4
// 005ebe32  8b0c24               mov ecx, dword ptr [esp]
// 005ebe35  b8e878a400           mov eax, 0xa478e8
// 005ebe3a  64890d00000000       mov dword ptr fs:[0], ecx
// 005ebe41  83c40c               add esp, 0xc
// 005ebe44  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
