// roc 2007-03 0056d6c0  unit: seg_00560000  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0056d6c0
//
// 0056d6c0  64a100000000         mov eax, dword ptr fs:[0]
// 0056d6c6  6aff                 push -1
// 0056d6c8  685e5f7500           push 0x755f5e
// 0056d6cd  50                   push eax
// 0056d6ce  b801000000           mov eax, 1
// 0056d6d3  64892500000000       mov dword ptr fs:[0], esp
// 0056d6da  840504c88b00         test byte ptr [0x8bc804], al
// 0056d6e0  7534                 jne 0x56d716
// 0056d6e2  090504c88b00         or dword ptr [0x8bc804], eax
// 0056d6e8  6824987900           push 0x799824
// 0056d6ed  68d07d8900           push 0x897dd0
// 0056d6f2  6818b77a00           push 0x7ab718
// 0056d6f7  b9f4c78b00           mov ecx, 0x8bc7f4
// 0056d6fc  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0056d704  e87774f1ff           call 0x484b80
// 0056d709  68109d7700           push 0x779d10
// 0056d70e  e8a01a0b00           call 0x61f1b3
// 0056d713  83c404               add esp, 4
// 0056d716  8b0c24               mov ecx, dword ptr [esp]
// 0056d719  b8f4c78b00           mov eax, 0x8bc7f4
// 0056d71e  64890d00000000       mov dword ptr fs:[0], ecx
// 0056d725  83c40c               add esp, 0xc
// 0056d728  c3                   ret 
// library openrbx-client/App\v8tree\enumproperty.cpp (function ??$singleton@VBrickColor@RBX@@@Type@Reflection@RBX@@SAABV012@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8tree/enumproperty.cpp
