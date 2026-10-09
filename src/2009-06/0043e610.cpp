// roc 2009-06 0043e610  unit: RBX::Reflection::H::?$TypedPropertyDescriptor  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0043e610
//
// 0043e610  64a100000000         mov eax, dword ptr fs:[0]
// 0043e616  6aff                 push -1
// 0043e618  683e028500           push 0x85023e
// 0043e61d  50                   push eax
// 0043e61e  b801000000           mov eax, 1
// 0043e623  64892500000000       mov dword ptr fs:[0], esp
// 0043e62a  8405f0a3a300         test byte ptr [0xa3a3f0], al
// 0043e630  7530                 jne 0x43e662
// 0043e632  0905f0a3a300         or dword ptr [0xa3a3f0], eax
// 0043e638  68b0269e00           push 0x9e26b0
// 0043e63d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0043e645  e8a6befcff           call 0x40a4f0
// 0043e64a  50                   push eax
// 0043e64b  b930a3a300           mov ecx, 0xa3a330
// 0043e650  e88bb11b00           call 0x5f97e0
// 0043e655  6870448900           push 0x894470
// 0043e65a  e89cb42d00           call 0x719afb
// 0043e65f  83c404               add esp, 4
// 0043e662  8b0c24               mov ecx, dword ptr [esp]
// 0043e665  b830a3a300           mov eax, 0xa3a330
// 0043e66a  64890d00000000       mov dword ptr fs:[0], ecx
// 0043e671  83c40c               add esp, 0xc
// 0043e674  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
