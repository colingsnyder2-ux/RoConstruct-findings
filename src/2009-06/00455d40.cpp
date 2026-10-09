// roc 2009-06 00455d40  unit: RBX::VInstance::?$NonFactoryProduct  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00455d40
//
// 00455d40  64a100000000         mov eax, dword ptr fs:[0]
// 00455d46  6aff                 push -1
// 00455d48  68ce1d8500           push 0x851dce
// 00455d4d  50                   push eax
// 00455d4e  b801000000           mov eax, 1
// 00455d53  64892500000000       mov dword ptr fs:[0], esp
// 00455d5a  8405b0b4a300         test byte ptr [0xa3b4b0], al
// 00455d60  7530                 jne 0x455d92
// 00455d62  0905b0b4a300         or dword ptr [0xa3b4b0], eax
// 00455d68  683418a100           push 0xa11834
// 00455d6d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00455d75  e87647fbff           call 0x40a4f0
// 00455d7a  50                   push eax
// 00455d7b  b9f0b3a300           mov ecx, 0xa3b3f0
// 00455d80  e85b3a1a00           call 0x5f97e0
// 00455d85  68504b8900           push 0x894b50
// 00455d8a  e86c3d2c00           call 0x719afb
// 00455d8f  83c404               add esp, 4
// 00455d92  8b0c24               mov ecx, dword ptr [esp]
// 00455d95  b8f0b3a300           mov eax, 0xa3b3f0
// 00455d9a  64890d00000000       mov dword ptr fs:[0], ecx
// 00455da1  83c40c               add esp, 0xc
// 00455da4  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
