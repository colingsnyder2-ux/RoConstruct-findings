// roc 2007-03 005e1e50  unit: seg_005e0000  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005e1e50
//
// 005e1e50  64a100000000         mov eax, dword ptr fs:[0]
// 005e1e56  6aff                 push -1
// 005e1e58  681ebe7500           push 0x75be1e
// 005e1e5d  50                   push eax
// 005e1e5e  b801000000           mov eax, 1
// 005e1e63  64892500000000       mov dword ptr fs:[0], esp
// 005e1e6a  8405480c8c00         test byte ptr [0x8c0c48], al
// 005e1e70  7530                 jne 0x5e1ea2
// 005e1e72  0905480c8c00         or dword ptr [0x8c0c48], eax
// 005e1e78  68a8aa8a00           push 0x8aaaa8
// 005e1e7d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005e1e85  e8d67ce3ff           call 0x419b60
// 005e1e8a  50                   push eax
// 005e1e8b  b9c00b8c00           mov ecx, 0x8c0bc0
// 005e1e90  e84beff8ff           call 0x570de0
// 005e1e95  6870ba7700           push 0x77ba70
// 005e1e9a  e814d30300           call 0x61f1b3
// 005e1e9f  83c404               add esp, 4
// 005e1ea2  8b0c24               mov ecx, dword ptr [esp]
// 005e1ea5  b8c00b8c00           mov eax, 0x8c0bc0
// 005e1eaa  64890d00000000       mov dword ptr fs:[0], ecx
// 005e1eb1  83c40c               add esp, 0xc
// 005e1eb4  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
