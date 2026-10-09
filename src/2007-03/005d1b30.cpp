// roc 2007-03 005d1b30  unit: seg_005d0000  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005d1b30
//
// 005d1b30  64a100000000         mov eax, dword ptr fs:[0]
// 005d1b36  6aff                 push -1
// 005d1b38  680eaf7500           push 0x75af0e
// 005d1b3d  50                   push eax
// 005d1b3e  b801000000           mov eax, 1
// 005d1b43  64892500000000       mov dword ptr fs:[0], esp
// 005d1b4a  8405d8018c00         test byte ptr [0x8c01d8], al
// 005d1b50  7530                 jne 0x5d1b82
// 005d1b52  0905d8018c00         or dword ptr [0x8c01d8], eax
// 005d1b58  68580f7c00           push 0x7c0f58
// 005d1b5d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005d1b65  e8f67fe4ff           call 0x419b60
// 005d1b6a  50                   push eax
// 005d1b6b  b950018c00           mov ecx, 0x8c0150
// 005d1b70  e86bf2f9ff           call 0x570de0
// 005d1b75  6890b67700           push 0x77b690
// 005d1b7a  e834d60400           call 0x61f1b3
// 005d1b7f  83c404               add esp, 4
// 005d1b82  8b0c24               mov ecx, dword ptr [esp]
// 005d1b85  b850018c00           mov eax, 0x8c0150
// 005d1b8a  64890d00000000       mov dword ptr fs:[0], ecx
// 005d1b91  83c40c               add esp, 0xc
// 005d1b94  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
