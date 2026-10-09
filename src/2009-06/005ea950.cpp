// roc 2009-06 005ea950  unit: G3D::VVector3::?$TypedPropertyDescriptor  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005ea950
//
// 005ea950  64a100000000         mov eax, dword ptr fs:[0]
// 005ea956  6aff                 push -1
// 005ea958  689e4d8600           push 0x864d9e
// 005ea95d  50                   push eax
// 005ea95e  b801000000           mov eax, 1
// 005ea963  64892500000000       mov dword ptr fs:[0], esp
// 005ea96a  8405f054a400         test byte ptr [0xa454f0], al
// 005ea970  7530                 jne 0x5ea9a2
// 005ea972  0905f054a400         or dword ptr [0xa454f0], eax
// 005ea978  685027a100           push 0xa12750
// 005ea97d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005ea985  e866fbe1ff           call 0x40a4f0
// 005ea98a  50                   push eax
// 005ea98b  b93054a400           mov ecx, 0xa45430
// 005ea990  e84bee0000           call 0x5f97e0
// 005ea995  6810898900           push 0x898910
// 005ea99a  e85cf11200           call 0x719afb
// 005ea99f  83c404               add esp, 4
// 005ea9a2  8b0c24               mov ecx, dword ptr [esp]
// 005ea9a5  b83054a400           mov eax, 0xa45430
// 005ea9aa  64890d00000000       mov dword ptr fs:[0], ecx
// 005ea9b1  83c40c               add esp, 0xc
// 005ea9b4  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
