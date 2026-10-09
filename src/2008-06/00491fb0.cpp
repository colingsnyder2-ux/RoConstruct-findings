// roc 2008-06 00491fb0  unit: RBX::Network::VPlayer::?$RefPropDescriptor  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00491fb0
//
// 00491fb0  64a100000000         mov eax, dword ptr fs:[0]
// 00491fb6  6aff                 push -1
// 00491fb8  683e657c00           push 0x7c653e
// 00491fbd  50                   push eax
// 00491fbe  b801000000           mov eax, 1
// 00491fc3  64892500000000       mov dword ptr fs:[0], esp
// 00491fca  840558029700         test byte ptr [0x970258], al
// 00491fd0  7530                 jne 0x492002
// 00491fd2  090558029700         or dword ptr [0x970258], eax
// 00491fd8  6890c18300           push 0x83c190
// 00491fdd  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00491fe5  e806eaffff           call 0x4909f0
// 00491fea  50                   push eax
// 00491feb  b998019700           mov ecx, 0x970198
// 00491ff0  e8fbe80d00           call 0x5708f0
// 00491ff5  68d0b27f00           push 0x7fb2d0
// 00491ffa  e8b0f72000           call 0x6a17af
// 00491fff  83c404               add esp, 4
// 00492002  8b0c24               mov ecx, dword ptr [esp]
// 00492005  b898019700           mov eax, 0x970198
// 0049200a  64890d00000000       mov dword ptr fs:[0], ecx
// 00492011  83c40c               add esp, 0xc
// 00492014  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
