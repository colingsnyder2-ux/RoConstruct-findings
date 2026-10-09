// roc 2007-03 00588440  unit: seg_00580000  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00588440
//
// 00588440  64a100000000         mov eax, dword ptr fs:[0]
// 00588446  6aff                 push -1
// 00588448  689e747500           push 0x75749e
// 0058844d  50                   push eax
// 0058844e  b801000000           mov eax, 1
// 00588453  64892500000000       mov dword ptr fs:[0], esp
// 0058845a  840588d98b00         test byte ptr [0x8bd988], al
// 00588460  7530                 jne 0x588492
// 00588462  090588d98b00         or dword ptr [0x8bd988], eax
// 00588468  68d0a88a00           push 0x8aa8d0
// 0058846d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00588475  e8e616e9ff           call 0x419b60
// 0058847a  50                   push eax
// 0058847b  b900d98b00           mov ecx, 0x8bd900
// 00588480  e85b89feff           call 0x570de0
// 00588485  6810a67700           push 0x77a610
// 0058848a  e8246d0900           call 0x61f1b3
// 0058848f  83c404               add esp, 4
// 00588492  8b0c24               mov ecx, dword ptr [esp]
// 00588495  b800d98b00           mov eax, 0x8bd900
// 0058849a  64890d00000000       mov dword ptr fs:[0], ecx
// 005884a1  83c40c               add esp, 0xc
// 005884a4  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
