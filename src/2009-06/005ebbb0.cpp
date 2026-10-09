// roc 2009-06 005ebbb0  unit: G3D::VVector3::?$TypedPropertyDescriptor  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005ebbb0
//
// 005ebbb0  64a100000000         mov eax, dword ptr fs:[0]
// 005ebbb6  6aff                 push -1
// 005ebbb8  68de528600           push 0x8652de
// 005ebbbd  50                   push eax
// 005ebbbe  b801000000           mov eax, 1
// 005ebbc3  64892500000000       mov dword ptr fs:[0], esp
// 005ebbca  8405c075a400         test byte ptr [0xa475c0], al
// 005ebbd0  7530                 jne 0x5ebc02
// 005ebbd2  0905c075a400         or dword ptr [0xa475c0], eax
// 005ebbd8  68f4cea100           push 0xa1cef4
// 005ebbdd  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005ebbe5  e806e9e1ff           call 0x40a4f0
// 005ebbea  50                   push eax
// 005ebbeb  b90075a400           mov ecx, 0xa47500
// 005ebbf0  e8ebdb0000           call 0x5f97e0
// 005ebbf5  6870868900           push 0x898670
// 005ebbfa  e8fcde1200           call 0x719afb
// 005ebbff  83c404               add esp, 4
// 005ebc02  8b0c24               mov ecx, dword ptr [esp]
// 005ebc05  b80075a400           mov eax, 0xa47500
// 005ebc0a  64890d00000000       mov dword ptr fs:[0], ecx
// 005ebc11  83c40c               add esp, 0xc
// 005ebc14  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
