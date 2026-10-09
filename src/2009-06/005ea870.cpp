// roc 2009-06 005ea870  unit: G3D::VVector3::?$TypedPropertyDescriptor  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005ea870
//
// 005ea870  64a100000000         mov eax, dword ptr fs:[0]
// 005ea876  6aff                 push -1
// 005ea878  685e4d8600           push 0x864d5e
// 005ea87d  50                   push eax
// 005ea87e  b801000000           mov eax, 1
// 005ea883  64892500000000       mov dword ptr fs:[0], esp
// 005ea88a  84056053a400         test byte ptr [0xa45360], al
// 005ea890  7530                 jne 0x5ea8c2
// 005ea892  09056053a400         or dword ptr [0xa45360], eax
// 005ea898  688c2ca100           push 0xa12c8c
// 005ea89d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005ea8a5  e856ffffff           call 0x5ea800
// 005ea8aa  50                   push eax
// 005ea8ab  b9a052a400           mov ecx, 0xa452a0
// 005ea8b0  e82bef0000           call 0x5f97e0
// 005ea8b5  6830898900           push 0x898930
// 005ea8ba  e83cf21200           call 0x719afb
// 005ea8bf  83c404               add esp, 4
// 005ea8c2  8b0c24               mov ecx, dword ptr [esp]
// 005ea8c5  b8a052a400           mov eax, 0xa452a0
// 005ea8ca  64890d00000000       mov dword ptr fs:[0], ecx
// 005ea8d1  83c40c               add esp, 0xc
// 005ea8d4  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
