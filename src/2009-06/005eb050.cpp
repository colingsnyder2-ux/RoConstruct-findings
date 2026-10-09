// roc 2009-06 005eb050  unit: G3D::VVector3::?$TypedPropertyDescriptor  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005eb050
//
// 005eb050  64a100000000         mov eax, dword ptr fs:[0]
// 005eb056  6aff                 push -1
// 005eb058  689e4f8600           push 0x864f9e
// 005eb05d  50                   push eax
// 005eb05e  b801000000           mov eax, 1
// 005eb063  64892500000000       mov dword ptr fs:[0], esp
// 005eb06a  84057061a400         test byte ptr [0xa46170], al
// 005eb070  7530                 jne 0x5eb0a2
// 005eb072  09057061a400         or dword ptr [0xa46170], eax
// 005eb078  68704b8e00           push 0x8e4b70
// 005eb07d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005eb085  e866f4e1ff           call 0x40a4f0
// 005eb08a  50                   push eax
// 005eb08b  b9b060a400           mov ecx, 0xa460b0
// 005eb090  e84be70000           call 0x5f97e0
// 005eb095  6810888900           push 0x898810
// 005eb09a  e85cea1200           call 0x719afb
// 005eb09f  83c404               add esp, 4
// 005eb0a2  8b0c24               mov ecx, dword ptr [esp]
// 005eb0a5  b8b060a400           mov eax, 0xa460b0
// 005eb0aa  64890d00000000       mov dword ptr fs:[0], ecx
// 005eb0b1  83c40c               add esp, 0xc
// 005eb0b4  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
