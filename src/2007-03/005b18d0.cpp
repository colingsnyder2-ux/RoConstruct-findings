// roc 2007-03 005b18d0  unit: seg_005b0000  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005b18d0
//
// 005b18d0  64a100000000         mov eax, dword ptr fs:[0]
// 005b18d6  6aff                 push -1
// 005b18d8  68ee9d7500           push 0x759dee
// 005b18dd  50                   push eax
// 005b18de  b801000000           mov eax, 1
// 005b18e3  64892500000000       mov dword ptr fs:[0], esp
// 005b18ea  8405a0f78b00         test byte ptr [0x8bf7a0], al
// 005b18f0  7530                 jne 0x5b1922
// 005b18f2  0905a0f78b00         or dword ptr [0x8bf7a0], eax
// 005b18f8  68946b8a00           push 0x8a6b94
// 005b18fd  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005b1905  e85682e6ff           call 0x419b60
// 005b190a  50                   push eax
// 005b190b  b918f78b00           mov ecx, 0x8bf718
// 005b1910  e8cbf4fbff           call 0x570de0
// 005b1915  6820b17700           push 0x77b120
// 005b191a  e894d80600           call 0x61f1b3
// 005b191f  83c404               add esp, 4
// 005b1922  8b0c24               mov ecx, dword ptr [esp]
// 005b1925  b818f78b00           mov eax, 0x8bf718
// 005b192a  64890d00000000       mov dword ptr fs:[0], ecx
// 005b1931  83c40c               add esp, 0xc
// 005b1934  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
