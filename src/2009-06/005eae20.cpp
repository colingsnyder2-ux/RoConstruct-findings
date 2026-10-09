// roc 2009-06 005eae20  unit: G3D::VVector3::?$TypedPropertyDescriptor  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005eae20
//
// 005eae20  64a100000000         mov eax, dword ptr fs:[0]
// 005eae26  6aff                 push -1
// 005eae28  68fe4e8600           push 0x864efe
// 005eae2d  50                   push eax
// 005eae2e  b801000000           mov eax, 1
// 005eae33  64892500000000       mov dword ptr fs:[0], esp
// 005eae3a  8405885da400         test byte ptr [0xa45d88], al
// 005eae40  7530                 jne 0x5eae72
// 005eae42  0905885da400         or dword ptr [0xa45d88], eax
// 005eae48  68a8eaa000           push 0xa0eaa8
// 005eae4d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005eae55  e856ffffff           call 0x5eadb0
// 005eae5a  50                   push eax
// 005eae5b  b9c85ca400           mov ecx, 0xa45cc8
// 005eae60  e87be90000           call 0x5f97e0
// 005eae65  6860888900           push 0x898860
// 005eae6a  e88cec1200           call 0x719afb
// 005eae6f  83c404               add esp, 4
// 005eae72  8b0c24               mov ecx, dword ptr [esp]
// 005eae75  b8c85ca400           mov eax, 0xa45cc8
// 005eae7a  64890d00000000       mov dword ptr fs:[0], ecx
// 005eae81  83c40c               add esp, 0xc
// 005eae84  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
