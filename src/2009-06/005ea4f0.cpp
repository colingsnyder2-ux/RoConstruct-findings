// roc 2009-06 005ea4f0  unit: G3D::VVector3::?$TypedPropertyDescriptor  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005ea4f0
//
// 005ea4f0  64a100000000         mov eax, dword ptr fs:[0]
// 005ea4f6  6aff                 push -1
// 005ea4f8  685e4c8600           push 0x864c5e
// 005ea4fd  50                   push eax
// 005ea4fe  b801000000           mov eax, 1
// 005ea503  64892500000000       mov dword ptr fs:[0], esp
// 005ea50a  8405204da400         test byte ptr [0xa44d20], al
// 005ea510  7530                 jne 0x5ea542
// 005ea512  0905204da400         or dword ptr [0xa44d20], eax
// 005ea518  68309a8d00           push 0x8d9a30
// 005ea51d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005ea525  e856ffffff           call 0x5ea480
// 005ea52a  50                   push eax
// 005ea52b  b9604ca400           mov ecx, 0xa44c60
// 005ea530  e8abf20000           call 0x5f97e0
// 005ea535  68b0898900           push 0x8989b0
// 005ea53a  e8bcf51200           call 0x719afb
// 005ea53f  83c404               add esp, 4
// 005ea542  8b0c24               mov ecx, dword ptr [esp]
// 005ea545  b8604ca400           mov eax, 0xa44c60
// 005ea54a  64890d00000000       mov dword ptr fs:[0], ecx
// 005ea551  83c40c               add esp, 0xc
// 005ea554  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
