// roc 2009-06 005eb6e0  unit: G3D::VVector3::?$TypedPropertyDescriptor  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005eb6e0
//
// 005eb6e0  64a100000000         mov eax, dword ptr fs:[0]
// 005eb6e6  6aff                 push -1
// 005eb6e8  687e518600           push 0x86517e
// 005eb6ed  50                   push eax
// 005eb6ee  b801000000           mov eax, 1
// 005eb6f3  64892500000000       mov dword ptr fs:[0], esp
// 005eb6fa  8405286da400         test byte ptr [0xa46d28], al
// 005eb700  7530                 jne 0x5eb732
// 005eb702  0905286da400         or dword ptr [0xa46d28], eax
// 005eb708  6818868e00           push 0x8e8618
// 005eb70d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005eb715  e856ffffff           call 0x5eb670
// 005eb71a  50                   push eax
// 005eb71b  b9686ca400           mov ecx, 0xa46c68
// 005eb720  e8bbe00000           call 0x5f97e0
// 005eb725  6820878900           push 0x898720
// 005eb72a  e8cce31200           call 0x719afb
// 005eb72f  83c404               add esp, 4
// 005eb732  8b0c24               mov ecx, dword ptr [esp]
// 005eb735  b8686ca400           mov eax, 0xa46c68
// 005eb73a  64890d00000000       mov dword ptr fs:[0], ecx
// 005eb741  83c40c               add esp, 0xc
// 005eb744  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
