// roc 2007-03 005e1b40  unit: seg_005e0000  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005e1b40
//
// 005e1b40  64a100000000         mov eax, dword ptr fs:[0]
// 005e1b46  6aff                 push -1
// 005e1b48  683ebd7500           push 0x75bd3e
// 005e1b4d  50                   push eax
// 005e1b4e  b801000000           mov eax, 1
// 005e1b53  64892500000000       mov dword ptr fs:[0], esp
// 005e1b5a  840558088c00         test byte ptr [0x8c0858], al
// 005e1b60  7530                 jne 0x5e1b92
// 005e1b62  090558088c00         or dword ptr [0x8c0858], eax
// 005e1b68  6850aa8a00           push 0x8aaa50
// 005e1b6d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005e1b75  e8e67fe3ff           call 0x419b60
// 005e1b7a  50                   push eax
// 005e1b7b  b9d0078c00           mov ecx, 0x8c07d0
// 005e1b80  e85bf2f8ff           call 0x570de0
// 005e1b85  68e0ba7700           push 0x77bae0
// 005e1b8a  e824d60300           call 0x61f1b3
// 005e1b8f  83c404               add esp, 4
// 005e1b92  8b0c24               mov ecx, dword ptr [esp]
// 005e1b95  b8d0078c00           mov eax, 0x8c07d0
// 005e1b9a  64890d00000000       mov dword ptr fs:[0], ecx
// 005e1ba1  83c40c               add esp, 0xc
// 005e1ba4  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
