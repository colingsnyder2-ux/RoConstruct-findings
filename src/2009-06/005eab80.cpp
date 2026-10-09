// roc 2009-06 005eab80  unit: G3D::VVector3::?$TypedPropertyDescriptor  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005eab80
//
// 005eab80  64a100000000         mov eax, dword ptr fs:[0]
// 005eab86  6aff                 push -1
// 005eab88  683e4e8600           push 0x864e3e
// 005eab8d  50                   push eax
// 005eab8e  b801000000           mov eax, 1
// 005eab93  64892500000000       mov dword ptr fs:[0], esp
// 005eab9a  8405d858a400         test byte ptr [0xa458d8], al
// 005eaba0  7530                 jne 0x5eabd2
// 005eaba2  0905d858a400         or dword ptr [0xa458d8], eax
// 005eaba8  687c82a000           push 0xa0827c
// 005eabad  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005eabb5  e846fcffff           call 0x5ea800
// 005eabba  50                   push eax
// 005eabbb  b91858a400           mov ecx, 0xa45818
// 005eabc0  e81bec0000           call 0x5f97e0
// 005eabc5  68c0888900           push 0x8988c0
// 005eabca  e82cef1200           call 0x719afb
// 005eabcf  83c404               add esp, 4
// 005eabd2  8b0c24               mov ecx, dword ptr [esp]
// 005eabd5  b81858a400           mov eax, 0xa45818
// 005eabda  64890d00000000       mov dword ptr fs:[0], ecx
// 005eabe1  83c40c               add esp, 0xc
// 005eabe4  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
