// roc 2009-06 005eaf70  unit: G3D::VVector3::?$TypedPropertyDescriptor  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005eaf70
//
// 005eaf70  64a100000000         mov eax, dword ptr fs:[0]
// 005eaf76  6aff                 push -1
// 005eaf78  685e4f8600           push 0x864f5e
// 005eaf7d  50                   push eax
// 005eaf7e  b801000000           mov eax, 1
// 005eaf83  64892500000000       mov dword ptr fs:[0], esp
// 005eaf8a  8405e05fa400         test byte ptr [0xa45fe0], al
// 005eaf90  7530                 jne 0x5eafc2
// 005eaf92  0905e05fa400         or dword ptr [0xa45fe0], eax
// 005eaf98  68484aa100           push 0xa14a48
// 005eaf9d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005eafa5  e8c6f8ffff           call 0x5ea870
// 005eafaa  50                   push eax
// 005eafab  b9205fa400           mov ecx, 0xa45f20
// 005eafb0  e82be80000           call 0x5f97e0
// 005eafb5  6830888900           push 0x898830
// 005eafba  e83ceb1200           call 0x719afb
// 005eafbf  83c404               add esp, 4
// 005eafc2  8b0c24               mov ecx, dword ptr [esp]
// 005eafc5  b8205fa400           mov eax, 0xa45f20
// 005eafca  64890d00000000       mov dword ptr fs:[0], ecx
// 005eafd1  83c40c               add esp, 0xc
// 005eafd4  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
