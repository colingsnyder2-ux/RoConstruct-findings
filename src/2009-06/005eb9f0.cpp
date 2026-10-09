// roc 2009-06 005eb9f0  unit: G3D::VVector3::?$TypedPropertyDescriptor  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005eb9f0
//
// 005eb9f0  64a100000000         mov eax, dword ptr fs:[0]
// 005eb9f6  6aff                 push -1
// 005eb9f8  685e528600           push 0x86525e
// 005eb9fd  50                   push eax
// 005eb9fe  b801000000           mov eax, 1
// 005eba03  64892500000000       mov dword ptr fs:[0], esp
// 005eba0a  8405a072a400         test byte ptr [0xa472a0], al
// 005eba10  7530                 jne 0x5eba42
// 005eba12  0905a072a400         or dword ptr [0xa472a0], eax
// 005eba18  6808cfa100           push 0xa1cf08
// 005eba1d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005eba25  e8c6eae1ff           call 0x40a4f0
// 005eba2a  50                   push eax
// 005eba2b  b9e071a400           mov ecx, 0xa471e0
// 005eba30  e8abdd0000           call 0x5f97e0
// 005eba35  68b0868900           push 0x8986b0
// 005eba3a  e8bce01200           call 0x719afb
// 005eba3f  83c404               add esp, 4
// 005eba42  8b0c24               mov ecx, dword ptr [esp]
// 005eba45  b8e071a400           mov eax, 0xa471e0
// 005eba4a  64890d00000000       mov dword ptr fs:[0], ecx
// 005eba51  83c40c               add esp, 0xc
// 005eba54  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
