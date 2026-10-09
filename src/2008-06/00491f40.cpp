// roc 2008-06 00491f40  unit: RBX::Network::VPlayer::?$RefPropDescriptor  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00491f40
//
// 00491f40  64a100000000         mov eax, dword ptr fs:[0]
// 00491f46  6aff                 push -1
// 00491f48  681e657c00           push 0x7c651e
// 00491f4d  50                   push eax
// 00491f4e  b801000000           mov eax, 1
// 00491f53  64892500000000       mov dword ptr fs:[0], esp
// 00491f5a  840590019700         test byte ptr [0x970190], al
// 00491f60  7530                 jne 0x491f92
// 00491f62  090590019700         or dword ptr [0x970190], eax
// 00491f68  6898c18300           push 0x83c198
// 00491f6d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00491f75  e876eaffff           call 0x4909f0
// 00491f7a  50                   push eax
// 00491f7b  b9d0009700           mov ecx, 0x9700d0
// 00491f80  e86be90d00           call 0x5708f0
// 00491f85  68e0b27f00           push 0x7fb2e0
// 00491f8a  e820f82000           call 0x6a17af
// 00491f8f  83c404               add esp, 4
// 00491f92  8b0c24               mov ecx, dword ptr [esp]
// 00491f95  b8d0009700           mov eax, 0x9700d0
// 00491f9a  64890d00000000       mov dword ptr fs:[0], ecx
// 00491fa1  83c40c               add esp, 0xc
// 00491fa4  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
