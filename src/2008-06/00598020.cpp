// roc 2008-06 00598020  unit: RBX::VTextureId::?$TypedPropertyDescriptor  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00598020
//
// 00598020  64a100000000         mov eax, dword ptr fs:[0]
// 00598026  6aff                 push -1
// 00598028  686e247d00           push 0x7d246e
// 0059802d  50                   push eax
// 0059802e  b801000000           mov eax, 1
// 00598033  64892500000000       mov dword ptr fs:[0], esp
// 0059803a  8405285e9700         test byte ptr [0x975e28], al
// 00598040  7530                 jne 0x598072
// 00598042  0905285e9700         or dword ptr [0x975e28], eax
// 00598048  68689c9400           push 0x949c68
// 0059804d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00598055  e856ffffff           call 0x597fb0
// 0059805a  50                   push eax
// 0059805b  b9685d9700           mov ecx, 0x975d68
// 00598060  e88b88fdff           call 0x5708f0
// 00598065  6890db7f00           push 0x7fdb90
// 0059806a  e840971000           call 0x6a17af
// 0059806f  83c404               add esp, 4
// 00598072  8b0c24               mov ecx, dword ptr [esp]
// 00598075  b8685d9700           mov eax, 0x975d68
// 0059807a  64890d00000000       mov dword ptr fs:[0], ecx
// 00598081  83c40c               add esp, 0xc
// 00598084  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
