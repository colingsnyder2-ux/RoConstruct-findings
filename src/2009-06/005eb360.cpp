// roc 2009-06 005eb360  unit: G3D::VVector3::?$TypedPropertyDescriptor  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005eb360
//
// 005eb360  64a100000000         mov eax, dword ptr fs:[0]
// 005eb366  6aff                 push -1
// 005eb368  687e508600           push 0x86507e
// 005eb36d  50                   push eax
// 005eb36e  b801000000           mov eax, 1
// 005eb373  64892500000000       mov dword ptr fs:[0], esp
// 005eb37a  8405e866a400         test byte ptr [0xa466e8], al
// 005eb380  7530                 jne 0x5eb3b2
// 005eb382  0905e866a400         or dword ptr [0xa466e8], eax
// 005eb388  68b84b8e00           push 0x8e4bb8
// 005eb38d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005eb395  e8e6feffff           call 0x5eb280
// 005eb39a  50                   push eax
// 005eb39b  b92866a400           mov ecx, 0xa46628
// 005eb3a0  e83be40000           call 0x5f97e0
// 005eb3a5  68a0878900           push 0x8987a0
// 005eb3aa  e84ce71200           call 0x719afb
// 005eb3af  83c404               add esp, 4
// 005eb3b2  8b0c24               mov ecx, dword ptr [esp]
// 005eb3b5  b82866a400           mov eax, 0xa46628
// 005eb3ba  64890d00000000       mov dword ptr fs:[0], ecx
// 005eb3c1  83c40c               add esp, 0xc
// 005eb3c4  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
